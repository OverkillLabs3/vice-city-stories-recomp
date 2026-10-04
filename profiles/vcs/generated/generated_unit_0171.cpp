#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0171[4095] = {
    1, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 5, 0, 6, 0, 0, 0, 0, 7, 0,
    0, 0, 8, 0, 0, 9, 0, 0, 0, 0, 10, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    13, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 0,
    0, 0, 0, 19, 0, 0, 20, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    24, 0, 0, 25, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0,
    30, 0, 31, 0, 32, 33, 0, 0, 34, 0, 0, 35, 0, 0, 36, 0, 0, 0, 37, 0, 38, 0, 0, 0, 39, 0, 0, 40, 0, 0, 0, 41,
    0, 0, 0, 42, 0, 43, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0,
    0, 0, 0, 0, 47, 0, 48, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 51, 0, 52, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 54, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57,
    0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 61, 0, 0, 0, 62, 0, 63,
    0, 0, 64, 0, 65, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 68, 0, 0, 0, 0, 0, 0, 69, 0,
    0, 70, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 73, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0,
    0, 0, 75, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0,
    0, 0, 0, 82, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 0, 0, 85, 0, 0, 0, 0, 86, 0, 0, 0, 0, 87, 0, 0,
    88, 0, 89, 0, 0, 90, 0, 0, 0, 91, 0, 92, 0, 0, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 95, 0, 0, 0, 96, 0, 0, 97,
    98, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 101, 0, 102, 0, 103, 104, 0, 0, 0, 0, 0, 0,
    105, 0, 106, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 108, 0, 0, 0, 0, 0, 109, 110, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0,
    0, 112, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 116, 0,
    0, 117, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 0, 0, 123, 0, 124, 0, 125, 0, 126, 0, 127, 0, 128, 0, 129, 0, 130, 0, 131, 0, 132, 0,
    133, 0, 134, 0, 135, 0, 136, 0, 0, 137, 0, 138, 0, 139, 0, 140, 0, 141, 0, 142, 0, 143, 0, 144, 0, 145, 0, 146, 0, 147, 0, 148,
    0, 149, 0, 150, 0, 151, 0, 152, 0, 153, 0, 154, 0, 155, 0, 156, 0, 157, 0, 158, 0, 159, 0, 160, 0, 161, 0, 162, 0, 163, 0, 164,
    0, 165, 0, 166, 0, 167, 0, 168, 0, 169, 0, 170, 0, 171, 0, 172, 0, 173, 0, 174, 0, 175, 0, 176, 0, 177, 0, 178, 0, 179, 0, 180,
    0, 181, 0, 182, 0, 183, 0, 184, 0, 185, 0, 186, 0, 187, 0, 188, 0, 189, 0, 190, 0, 191, 0, 192, 0, 193, 0, 194, 0, 195, 0, 196,
    0, 197, 0, 198, 0, 199, 0, 200, 0, 201, 0, 202, 0, 203, 0, 204, 0, 205, 0, 206, 0, 207, 0, 208, 0, 209, 0, 210, 0, 211, 0, 212,
    0, 213, 0, 214, 0, 215, 0, 216, 0, 217, 0, 218, 0, 219, 0, 220, 0, 221, 0, 222, 0, 223, 0, 224, 0, 225, 0, 226, 0, 227, 0, 228,
    0, 229, 0, 230, 0, 231, 0, 232, 0, 233, 0, 234, 0, 235, 0, 236, 0, 237, 0, 238, 0, 239, 0, 240, 0, 241, 0, 242, 0, 243, 0, 244,
    0, 245, 0, 246, 0, 247, 0, 248, 0, 249, 0, 250, 0, 251, 0, 252, 0, 253, 0, 254, 0, 255, 0, 256, 0, 257, 0, 258, 0, 0, 0, 259,
    0, 260, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 262, 0, 0, 263, 0, 0, 0, 0, 0, 264, 0, 265, 0, 266, 0, 267, 0, 268, 0, 269,
    0, 270, 0, 271, 0, 0, 272, 0, 273, 0, 274, 0, 275, 0, 276, 0, 0, 277, 0, 278, 0, 279, 0, 280, 0, 281, 0, 282, 0, 283, 0, 284,
    0, 285, 0, 286, 0, 287, 288, 0, 289, 0, 0, 0, 290, 0, 0, 0, 0, 0, 291, 0, 292, 0, 293, 0, 294, 0, 295, 0, 296, 0, 297, 0,
    298, 0, 299, 0, 300, 0, 301, 0, 302, 0, 303, 0, 304, 0, 305, 0, 306, 0, 307, 0, 308, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 310,
    0, 0, 0, 311, 0, 0, 312, 0, 313, 0, 0, 0, 0, 0, 314, 0, 315, 0, 316, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318,
    0, 0, 0, 319, 0, 0, 0, 320, 0, 0, 0, 0, 0, 321, 0, 0, 0, 322, 0, 0, 0, 323, 324, 0, 0, 325, 326, 0, 0, 327, 0, 0,
    0, 0, 0, 328, 0, 329, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0,
    0, 0, 0, 333, 0, 0, 0, 0, 334, 0, 0, 335, 0, 0, 0, 336, 0, 337, 338, 0, 0, 0, 0, 0, 0, 339, 0, 340, 0, 0, 0, 0,
    0, 0, 0, 0, 341, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0,
    0, 0, 345, 0, 0, 0, 0, 346, 0, 0, 347, 0, 0, 0, 348, 0, 349, 350, 0, 0, 0, 0, 0, 0, 351, 0, 352, 0, 0, 0, 0, 0,
    0, 0, 0, 353, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0,
    357, 0, 0, 0, 0, 0, 358, 0, 0, 359, 0, 0, 0, 360, 0, 0, 0, 361, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 365, 0, 0, 0, 366, 0, 0, 367, 0, 0, 0, 368, 0, 369, 0, 0, 0, 0, 0,
    0, 370, 371, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 374, 0, 0, 375, 0, 376, 0, 0, 377, 0,
    0, 0, 0, 378, 0, 0, 379, 0, 0, 0, 380, 0, 381, 0, 0, 0, 0, 0, 0, 0, 382, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    384, 0, 0, 0, 385, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 388, 0, 0, 0, 0, 389, 0, 390, 0, 0, 0, 391,
    0, 392, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 394, 0, 0, 0, 395, 0, 0, 0, 0, 396, 0, 0, 0, 397, 0, 398, 0, 0, 399, 0,
    0, 0, 0, 0, 0, 400, 0, 401, 0, 0, 402, 0, 0, 0, 403, 0, 0, 0, 404, 0, 405, 0, 0, 406, 0, 0, 0, 0, 0, 407, 0, 0,
    408, 0, 0, 409, 0, 410, 0, 0, 411, 0, 0, 0, 412, 0, 413, 0, 414, 0, 0, 0, 0, 415, 416, 0, 417, 0, 0, 418, 0, 0, 0, 419,
    0, 420, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 423, 0, 424, 0, 0, 425, 0, 426, 0, 0, 427, 0, 0,
    0, 0, 0, 0, 0, 428, 0, 429, 0, 0, 0, 430, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 432, 0, 0, 0, 0, 433, 0, 0, 0, 0,
    434, 0, 0, 0, 0, 435, 0, 0, 0, 0, 436, 0, 0, 0, 0, 437, 0, 0, 0, 0, 438, 0, 0, 0, 0, 439, 0, 0, 0, 0, 440, 0,
    0, 441, 0, 0, 442, 0, 0, 443, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 446, 0, 0, 0, 447, 448,
    0, 0, 449, 0, 0, 0, 450, 0, 451, 0, 0, 0, 452, 0, 453, 0, 454, 0, 0, 455, 0, 0, 456, 0, 0, 0, 0, 0, 457, 0, 0, 0,
    0, 458, 0, 459, 0, 0, 460, 461, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 464, 0, 465, 0, 0,
    466, 0, 467, 0, 468, 0, 0, 0, 469, 0, 470, 0, 0, 471, 0, 0, 472, 0, 0, 0, 0, 473, 0, 0, 474, 0, 0, 0, 0, 0, 0, 475,
    0, 0, 0, 476, 0, 0, 477, 0, 478, 0, 0, 0, 0, 0, 479, 0, 0, 0, 480, 0, 0, 481, 0, 0, 482, 0, 483, 0, 484, 0, 485, 0,
    486, 487, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 489, 0, 490, 0, 0, 0, 0, 491, 0, 492, 0, 0, 0,
    0, 493, 0, 494, 0, 0, 0, 495, 0, 496, 0, 497, 0, 0, 498, 499, 0, 0, 0, 0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 501, 0, 0, 0, 502, 0, 503, 0, 0, 0, 504, 0, 0, 0, 0, 505, 0, 506, 0, 507, 0, 508, 0, 509, 0, 510, 0, 0, 0,
    0, 0, 0, 0, 511, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 512, 0, 0, 0, 0, 0, 0, 0, 513, 0, 0, 0, 514, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 515, 0, 516, 0, 0, 517, 0, 0, 0, 518, 0, 0, 0, 0, 0, 0, 0, 0, 0, 519, 0, 0, 0, 0, 0,
    0, 0, 0, 520, 0, 521, 0, 522, 0, 0, 0, 0, 0, 0, 523, 0, 0, 0, 0, 0, 0, 0, 524, 0, 0, 0, 0, 0, 0, 0, 525, 0,
    0, 0, 526, 0, 527, 0, 528, 529, 0, 0, 0, 0, 530, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 531, 0, 0, 532, 0, 533, 0, 534,
    0, 535, 0, 536, 0, 0, 0, 537, 0, 0, 538, 0, 0, 0, 0, 539, 0, 540, 0, 0, 0, 541, 0, 542, 0, 543, 0, 0, 0, 0, 0, 0,
    0, 544, 0, 0, 0, 0, 0, 0, 0, 545, 0, 0, 0, 0, 0, 0, 0, 546, 0, 0, 0, 547, 0, 0, 548, 0, 0, 0, 0, 0, 0, 549,
    0, 550, 0, 0, 551, 0, 0, 552, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 553, 0, 0, 554, 0, 555, 0, 0, 0, 556, 0, 557,
    0, 0, 0, 558, 0, 559, 0, 0, 560, 0, 0, 0, 0, 561, 0, 0, 0, 0, 0, 562, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 563, 0, 0, 0, 0, 0, 564, 0, 0, 0, 0, 0, 565, 0, 0, 0, 566, 0, 0, 567, 0, 568, 0, 0, 0, 569, 570, 0, 0, 571,
    0, 572, 0, 0, 573, 0, 574, 0, 0, 0, 0, 0, 575, 0, 0, 576, 0, 0, 0, 0, 0, 577, 0, 0, 0, 0, 578, 0, 0, 579, 0, 580,
    0, 581, 0, 582, 0, 0, 0, 0, 0, 583, 0, 584, 0, 0, 0, 585, 0, 0, 0, 0, 586, 0, 0, 587, 0, 0, 0, 0, 0, 588, 0, 0,
    0, 0, 589, 0, 0, 0, 590, 0, 591, 0, 0, 0, 0, 592, 0, 593, 0, 594, 595, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 596, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 597, 0, 0, 0, 598, 0, 0, 0, 599, 0, 0, 0, 0, 0, 0, 0, 600, 0, 0, 0, 0, 0, 0, 601, 0,
    0, 602, 0, 0, 0, 0, 0, 603, 0, 0, 0, 0, 604, 0, 0, 0, 0, 605, 0, 0, 606, 0, 607, 608, 0, 0, 0, 609, 0, 0, 610, 0,
    0, 0, 611, 0, 612, 0, 0, 0, 0, 613, 614, 0, 0, 0, 0, 0, 0, 0, 615, 0, 0, 0, 0, 0, 0, 0, 0, 616, 0, 0, 0, 617,
    0, 0, 618, 0, 0, 619, 0, 0, 0, 0, 620, 0, 0, 0, 0, 0, 621, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 622, 0, 623, 0, 0, 624, 0, 0, 0, 625, 0, 0, 0, 0, 626, 0, 0, 0, 627, 0, 0, 0, 628, 0, 0, 0, 629, 0, 630,
    0, 631, 0, 0, 0, 632, 0, 0, 0, 0, 0, 0, 0, 633, 0, 0, 0, 634, 0, 635, 0, 636, 0, 0, 0, 637, 0, 0, 638, 0, 0, 639,
    0, 640, 0, 0, 641, 0, 642, 0, 0, 643, 0, 0, 0, 644, 0, 0, 0, 645, 0, 0, 646, 0, 647, 0, 648, 0, 649, 0, 0, 650, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 651, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 652, 0, 0, 0, 0, 653, 0, 0,
    0, 0, 0, 0, 654, 0, 0, 655, 0, 0, 656, 0, 0, 0, 0, 0, 657, 0, 658, 0, 0, 659, 0, 0, 660, 0, 0, 661, 0, 662, 0, 663,
    0, 0, 664, 665, 0, 0, 0, 666, 0, 0, 0, 667, 0, 0, 0, 0, 0, 0, 0, 668, 669, 0, 0, 0, 0, 670, 0, 0, 671, 0, 0, 0,
    0, 0, 672, 0, 673, 0, 674, 0, 675, 0, 0, 0, 676, 0, 0, 0, 677, 0, 678, 679, 0, 0, 0, 0, 0, 680, 0, 681, 0, 682, 0, 683,
    0, 0, 684, 0, 0, 0, 0, 0, 685, 0, 686, 0, 0, 0, 687, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 688, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 689, 0, 0, 0, 0, 0, 690, 0, 691, 0, 0, 0, 0, 0, 0, 0, 692, 0, 0, 693, 0, 0, 694, 0,
    695, 0, 696, 0, 697, 0, 0, 0, 698, 0, 0, 699, 0, 0, 0, 700, 0, 701, 702, 0, 0, 0, 0, 0, 0, 703, 0, 704, 705, 0, 0, 0,
    0, 0, 0, 706, 0, 0, 0, 707, 0, 708, 709, 0, 0, 0, 0, 0, 710, 0, 0, 711, 0, 0, 0, 712, 0, 713, 714, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 715, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 716, 0, 0, 717, 0, 718,
    0, 0, 719, 0, 0, 0, 0, 0, 0, 720, 0, 0, 0, 0, 0, 721, 0, 722, 0, 723, 0, 0, 724, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    725, 0, 0, 0, 0, 0, 726, 0, 727, 0, 728, 0, 0, 0, 0, 0, 729, 0, 0, 0, 730, 0, 0, 0, 731, 0, 0, 0, 732, 0, 0, 0,
    0, 0, 733, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 734, 0, 0, 0, 0, 0, 0, 735, 0, 0, 0, 736, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 737, 0, 0, 0, 738, 0, 0, 0, 0, 0, 739, 0, 0, 0, 740, 0, 0, 0, 0, 741, 0, 742, 0, 0, 0, 0, 743, 0,
    744, 0, 0, 0, 745, 0, 746, 0, 0, 0, 747, 0, 0, 748, 0, 749, 0, 750, 0, 751, 0, 0, 0, 752, 0, 0, 753, 0, 754, 0, 755, 0,
    0, 0, 0, 756, 0, 0, 0, 757, 0, 0, 758, 0, 0, 0, 0, 759, 0, 0, 0, 760, 0, 761, 0, 0, 0, 0, 762, 0, 763, 0, 764, 0,
    765, 0, 0, 0, 0, 0, 0, 0, 0, 0, 766, 0, 0, 0, 767, 0, 0, 768, 0, 769, 0, 770, 0, 771, 0, 772, 0, 0, 773, 0, 0, 0,
    774, 0, 775, 0, 0, 776, 0, 0, 0, 0, 777, 0, 0, 0, 0, 778, 0, 779, 780, 0, 0, 0, 781, 0, 782, 0, 0, 0, 0, 0, 783, 0,
    784, 0, 0, 785, 0, 786, 0, 787, 0, 788, 0, 0, 0, 0, 789, 0, 790, 0, 791, 0, 0, 0, 0, 792, 0, 793, 0, 0, 0, 0, 794, 0,
    795, 0, 796, 0, 0, 797, 0, 798, 0, 0, 0, 0, 0, 0, 0, 799, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 800, 0, 0, 0,
    0, 0, 801, 0, 0, 802, 0, 0, 0, 803, 0, 0, 0, 0, 804, 0, 805, 806, 0, 0, 0, 0, 0, 0, 807, 0, 0, 0, 0, 808, 0, 0,
    0, 0, 809, 0, 810, 811, 0, 0, 0, 0, 0, 0, 812, 0, 0, 0, 0, 0, 0, 0, 0, 0, 813, 0, 0, 0, 814, 0, 0, 0, 0, 0,
    815, 0, 0, 0, 816, 0, 0, 817, 0, 0, 0, 0, 0, 818, 0, 0, 0, 819, 0, 820, 0, 0, 0, 821, 0, 822, 0, 0, 823, 0, 0, 0,
    0, 824, 0, 825, 0, 0, 0, 0, 826, 0, 0, 0, 0, 0, 0, 827, 0, 0, 828, 0, 0, 0, 0, 0, 829, 0, 0, 0, 830, 0, 831, 0,
    0, 832, 0, 833, 0, 0, 0, 0, 834, 0, 835, 0, 0, 0, 836, 0, 837, 0, 0, 0, 838, 0, 0, 839, 0, 0, 0, 840, 0, 0, 841, 0,
    842, 0, 843, 0, 0, 0, 844, 0, 0, 845, 0, 0, 0, 846, 0, 0, 847, 0, 848, 849, 0, 0, 0, 0, 0, 0, 0, 0, 850, 0, 0, 0,
    0, 851, 0, 0, 0, 0, 0, 0, 0, 852, 0, 0, 0, 0, 0, 0, 853, 0, 0, 0, 0, 0, 854, 0, 0, 855, 0, 856, 0, 0, 0, 0,
    857, 0, 0, 0, 858, 0, 0, 859, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 860, 0, 861, 0, 0, 862, 0, 863, 0, 0, 0, 0, 0, 864,
    0, 865, 0, 866, 0, 0, 0, 0, 867, 0, 0, 0, 0, 0, 868, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 869, 0, 870, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 871, 0, 872, 0, 0, 0, 0, 873, 0, 874, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 875, 0, 876,
    0, 877, 0, 878, 0, 0, 0, 0, 0, 0, 0, 0, 0, 879, 0, 880, 0, 881, 0, 882, 0, 883, 0, 0, 0, 0, 0, 884, 0, 885, 0, 886,
    0, 0, 887, 0, 0, 888, 0, 0, 0, 0, 0, 0, 889, 0, 0, 0, 0, 0, 0, 0, 0, 0, 890, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 891, 0, 0,
    0, 0, 892, 0, 893, 0, 0, 894, 0, 0, 0, 0, 895, 0, 896, 0, 0, 0, 897, 0, 0, 0, 0, 0, 898, 0, 0, 0, 0, 0, 899, 0,
    900, 0, 901, 0, 0, 902, 0, 0, 0, 0, 903, 0, 0, 0, 904, 0, 905, 0, 0, 0, 906, 0, 907, 0, 0, 0, 0, 0, 0, 908, 0, 0,
    909, 0, 910, 911, 0, 912, 0, 0, 0, 913, 0, 0, 0, 0, 914, 0, 0, 915, 0, 916, 917, 0, 0, 0, 0, 918, 0, 0, 919, 920, 0, 921,
    0, 922, 0, 0, 0, 0, 923, 0, 0, 0, 924, 0, 0, 0, 0, 925, 0, 0, 0, 926, 0, 0, 0, 0, 927, 0, 928, 0, 929, 0, 0, 0,
    0, 930, 0, 0, 0, 931, 0, 0, 932, 0, 0, 0, 0, 0, 933, 0, 934, 0, 935, 0, 936, 0, 0, 937, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 938, 0, 0, 939, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 940, 0, 0, 941, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 942, 0, 0, 943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 944, 0, 0, 945, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 946, 0, 0, 947, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 948, 0, 949, 0, 0, 950, 0, 0, 0, 0, 951, 0, 952, 0,
    953, 0, 954, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 955, 0, 956, 0, 0, 0, 0, 0, 0, 0, 957, 0, 0, 958, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 959, 0, 0, 0, 0, 0, 0, 960, 0, 961, 0, 962, 0, 963, 0, 0, 0, 0, 964, 0, 0, 0, 0, 0, 0,
    965, 0, 0, 0, 0, 0, 0, 0, 966, 0, 0, 0, 967, 0, 968, 0, 969, 970, 0, 971, 0, 0, 972, 0, 0, 0, 0, 0, 973, 0, 0, 974,
    0, 0, 975, 0, 0, 976, 0, 0, 977, 0, 0, 978, 0, 0, 979, 0, 980, 0, 981, 0, 0, 0, 0, 982, 0, 0, 0, 0, 0, 0, 0, 983,
    0, 984, 0, 985, 0, 0, 986, 0, 987, 0, 0, 0, 0, 988, 0, 0, 0, 0, 0, 0, 0, 989, 0, 0, 0, 0, 990, 0, 991, 0, 992, 0,
    0, 993, 0, 0, 0, 994, 0, 995, 0, 0, 996, 0, 0, 0, 0, 997, 0, 0, 998, 0, 0, 999, 0, 0, 0, 0, 0, 1000, 0, 1001, 0, 0,
    0, 0, 1002, 0, 0, 0, 0, 1003, 0, 0, 0, 0, 1004, 0, 0, 0, 0, 1005, 0, 0, 0, 0, 1006, 0, 0, 0, 0, 1007, 0, 0, 1008, 0,
    1009, 0, 0, 1010, 0, 1011, 0, 0, 1012, 0, 1013, 0, 0, 1014, 0, 0, 0, 1015, 0, 1016, 0, 1017, 0, 0, 1018, 1019, 1020, 0, 1021, 0, 0, 1022,
    0, 0, 0, 1023, 0, 1024, 0, 1025, 0, 0, 1026, 1027, 1028, 0, 1029, 0, 0, 1030, 0, 0, 0, 1031, 0, 1032, 0, 1033, 0, 0, 1034, 1035, 1036,
};
void recomp_unit_0171_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08AB0000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0171[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08AB0000;
    case 2u: goto L_08AB001C;
    case 3u: goto L_08AB0038;
    case 4u: goto L_08AB0050;
    case 5u: goto L_08AB005C;
    case 6u: goto L_08AB0064;
    case 7u: goto L_08AB0078;
    case 8u: goto L_08AB0088;
    case 9u: goto L_08AB0094;
    case 10u: goto L_08AB00A8;
    case 11u: goto L_08AB00B4;
    case 12u: goto L_08AB0100;
    case 13u: goto L_08AB0180;
    case 14u: goto L_08AB0190;
    case 15u: goto L_08AB01B0;
    case 16u: goto L_08AB01BC;
    case 17u: goto L_08AB01DC;
    case 18u: goto L_08AB01EC;
    case 19u: goto L_08AB020C;
    case 20u: goto L_08AB0218;
    case 21u: goto L_08AB0220;
    case 22u: goto L_08AB0248;
    case 23u: goto L_08AB0258;
    case 24u: goto L_08AB0280;
    case 25u: goto L_08AB028C;
    case 26u: goto L_08AB02A8;
    case 27u: goto L_08AB02C8;
    case 28u: goto L_08AB02DC;
    case 29u: goto L_08AB02F0;
    case 30u: goto L_08AB0300;
    case 31u: goto L_08AB0308;
    case 32u: goto L_08AB0310;
    case 33u: goto L_08AB0314;
    case 34u: goto L_08AB0320;
    case 35u: goto L_08AB032C;
    case 36u: goto L_08AB0338;
    case 37u: goto L_08AB0348;
    case 38u: goto L_08AB0350;
    case 39u: goto L_08AB0360;
    case 40u: goto L_08AB036C;
    case 41u: goto L_08AB037C;
    case 42u: goto L_08AB038C;
    case 43u: goto L_08AB0394;
    case 44u: goto L_08AB03A8;
    case 45u: goto L_08AB03C4;
    case 46u: goto L_08AB03F4;
    case 47u: goto L_08AB0410;
    case 48u: goto L_08AB0418;
    case 49u: goto L_08AB042C;
    case 50u: goto L_08AB043C;
    case 51u: goto L_08AB0444;
    case 52u: goto L_08AB044C;
    case 53u: goto L_08AB0454;
    case 54u: goto L_08AB0488;
    case 55u: goto L_08AB049C;
    case 56u: goto L_08AB04C0;
    case 57u: goto L_08AB04FC;
    case 58u: goto L_08AB0510;
    case 59u: goto L_08AB0548;
    case 60u: goto L_08AB0558;
    case 61u: goto L_08AB0564;
    case 62u: goto L_08AB0574;
    case 63u: goto L_08AB057C;
    case 64u: goto L_08AB0588;
    case 65u: goto L_08AB0590;
    case 66u: goto L_08AB05A8;
    case 67u: goto L_08AB05D0;
    case 68u: goto L_08AB05DC;
    case 69u: goto L_08AB05F8;
    case 70u: goto L_08AB0604;
    case 71u: goto L_08AB0614;
    case 72u: goto L_08AB064C;
    case 73u: goto L_08AB0654;
    case 74u: goto L_08AB0668;
    case 75u: goto L_08AB0688;
    case 76u: goto L_08AB069C;
    case 77u: goto L_08AB06F8;
    case 78u: goto L_08AB0724;
    case 79u: goto L_08AB073C;
    case 80u: goto L_08AB0754;
    case 81u: goto L_08AB076C;
    case 82u: goto L_08AB078C;
    case 83u: goto L_08AB07A4;
    case 84u: goto L_08AB07B8;
    case 85u: goto L_08AB07CC;
    case 86u: goto L_08AB07E0;
    case 87u: goto L_08AB07F4;
    case 88u: goto L_08AB0800;
    case 89u: goto L_08AB0808;
    case 90u: goto L_08AB0814;
    case 91u: goto L_08AB0824;
    case 92u: goto L_08AB082C;
    case 93u: goto L_08AB0844;
    case 94u: goto L_08AB0854;
    case 95u: goto L_08AB0860;
    case 96u: goto L_08AB0870;
    case 97u: goto L_08AB087C;
    case 98u: goto L_08AB0880;
    case 99u: goto L_08AB0888;
    case 100u: goto L_08AB08B8;
    case 101u: goto L_08AB08D0;
    case 102u: goto L_08AB08D8;
    case 103u: goto L_08AB08E0;
    case 104u: goto L_08AB08E4;
    case 105u: goto L_08AB0900;
    case 106u: goto L_08AB0908;
    case 107u: goto L_08AB0928;
    case 108u: goto L_08AB0934;
    case 109u: goto L_08AB094C;
    case 110u: goto L_08AB0950;
    case 111u: goto L_08AB096C;
    case 112u: goto L_08AB0984;
    case 113u: goto L_08AB09A0;
    case 114u: goto L_08AB09B4;
    case 115u: goto L_08AB09F0;
    case 116u: goto L_08AB09F8;
    case 117u: goto L_08AB0A04;
    case 118u: goto L_08AB0A10;
    case 119u: goto L_08AB0A34;
    case 120u: goto L_08AB0A58;
    case 121u: goto L_08AB0A88;
    case 122u: goto L_08AB0A98;
    case 123u: goto L_08AB0AB0;
    case 124u: goto L_08AB0AB8;
    case 125u: goto L_08AB0AC0;
    case 126u: goto L_08AB0AC8;
    case 127u: goto L_08AB0AD0;
    case 128u: goto L_08AB0AD8;
    case 129u: goto L_08AB0AE0;
    case 130u: goto L_08AB0AE8;
    case 131u: goto L_08AB0AF0;
    case 132u: goto L_08AB0AF8;
    case 133u: goto L_08AB0B00;
    case 134u: goto L_08AB0B08;
    case 135u: goto L_08AB0B10;
    case 136u: goto L_08AB0B18;
    case 137u: goto L_08AB0B24;
    case 138u: goto L_08AB0B2C;
    case 139u: goto L_08AB0B34;
    case 140u: goto L_08AB0B3C;
    case 141u: goto L_08AB0B44;
    case 142u: goto L_08AB0B4C;
    case 143u: goto L_08AB0B54;
    case 144u: goto L_08AB0B5C;
    case 145u: goto L_08AB0B64;
    case 146u: goto L_08AB0B6C;
    case 147u: goto L_08AB0B74;
    case 148u: goto L_08AB0B7C;
    case 149u: goto L_08AB0B84;
    case 150u: goto L_08AB0B8C;
    case 151u: goto L_08AB0B94;
    case 152u: goto L_08AB0B9C;
    case 153u: goto L_08AB0BA4;
    case 154u: goto L_08AB0BAC;
    case 155u: goto L_08AB0BB4;
    case 156u: goto L_08AB0BBC;
    case 157u: goto L_08AB0BC4;
    case 158u: goto L_08AB0BCC;
    case 159u: goto L_08AB0BD4;
    case 160u: goto L_08AB0BDC;
    case 161u: goto L_08AB0BE4;
    case 162u: goto L_08AB0BEC;
    case 163u: goto L_08AB0BF4;
    case 164u: goto L_08AB0BFC;
    case 165u: goto L_08AB0C04;
    case 166u: goto L_08AB0C0C;
    case 167u: goto L_08AB0C14;
    case 168u: goto L_08AB0C1C;
    case 169u: goto L_08AB0C24;
    case 170u: goto L_08AB0C2C;
    case 171u: goto L_08AB0C34;
    case 172u: goto L_08AB0C3C;
    case 173u: goto L_08AB0C44;
    case 174u: goto L_08AB0C4C;
    case 175u: goto L_08AB0C54;
    case 176u: goto L_08AB0C5C;
    case 177u: goto L_08AB0C64;
    case 178u: goto L_08AB0C6C;
    case 179u: goto L_08AB0C74;
    case 180u: goto L_08AB0C7C;
    case 181u: goto L_08AB0C84;
    case 182u: goto L_08AB0C8C;
    case 183u: goto L_08AB0C94;
    case 184u: goto L_08AB0C9C;
    case 185u: goto L_08AB0CA4;
    case 186u: goto L_08AB0CAC;
    case 187u: goto L_08AB0CB4;
    case 188u: goto L_08AB0CBC;
    case 189u: goto L_08AB0CC4;
    case 190u: goto L_08AB0CCC;
    case 191u: goto L_08AB0CD4;
    case 192u: goto L_08AB0CDC;
    case 193u: goto L_08AB0CE4;
    case 194u: goto L_08AB0CEC;
    case 195u: goto L_08AB0CF4;
    case 196u: goto L_08AB0CFC;
    case 197u: goto L_08AB0D04;
    case 198u: goto L_08AB0D0C;
    case 199u: goto L_08AB0D14;
    case 200u: goto L_08AB0D1C;
    case 201u: goto L_08AB0D24;
    case 202u: goto L_08AB0D2C;
    case 203u: goto L_08AB0D34;
    case 204u: goto L_08AB0D3C;
    case 205u: goto L_08AB0D44;
    case 206u: goto L_08AB0D4C;
    case 207u: goto L_08AB0D54;
    case 208u: goto L_08AB0D5C;
    case 209u: goto L_08AB0D64;
    case 210u: goto L_08AB0D6C;
    case 211u: goto L_08AB0D74;
    case 212u: goto L_08AB0D7C;
    case 213u: goto L_08AB0D84;
    case 214u: goto L_08AB0D8C;
    case 215u: goto L_08AB0D94;
    case 216u: goto L_08AB0D9C;
    case 217u: goto L_08AB0DA4;
    case 218u: goto L_08AB0DAC;
    case 219u: goto L_08AB0DB4;
    case 220u: goto L_08AB0DBC;
    case 221u: goto L_08AB0DC4;
    case 222u: goto L_08AB0DCC;
    case 223u: goto L_08AB0DD4;
    case 224u: goto L_08AB0DDC;
    case 225u: goto L_08AB0DE4;
    case 226u: goto L_08AB0DEC;
    case 227u: goto L_08AB0DF4;
    case 228u: goto L_08AB0DFC;
    case 229u: goto L_08AB0E04;
    case 230u: goto L_08AB0E0C;
    case 231u: goto L_08AB0E14;
    case 232u: goto L_08AB0E1C;
    case 233u: goto L_08AB0E24;
    case 234u: goto L_08AB0E2C;
    case 235u: goto L_08AB0E34;
    case 236u: goto L_08AB0E3C;
    case 237u: goto L_08AB0E44;
    case 238u: goto L_08AB0E4C;
    case 239u: goto L_08AB0E54;
    case 240u: goto L_08AB0E5C;
    case 241u: goto L_08AB0E64;
    case 242u: goto L_08AB0E6C;
    case 243u: goto L_08AB0E74;
    case 244u: goto L_08AB0E7C;
    case 245u: goto L_08AB0E84;
    case 246u: goto L_08AB0E8C;
    case 247u: goto L_08AB0E94;
    case 248u: goto L_08AB0E9C;
    case 249u: goto L_08AB0EA4;
    case 250u: goto L_08AB0EAC;
    case 251u: goto L_08AB0EB4;
    case 252u: goto L_08AB0EBC;
    case 253u: goto L_08AB0EC4;
    case 254u: goto L_08AB0ECC;
    case 255u: goto L_08AB0ED4;
    case 256u: goto L_08AB0EDC;
    case 257u: goto L_08AB0EE4;
    case 258u: goto L_08AB0EEC;
    case 259u: goto L_08AB0EFC;
    case 260u: goto L_08AB0F04;
    case 261u: goto L_08AB0F14;
    case 262u: goto L_08AB0F30;
    case 263u: goto L_08AB0F3C;
    case 264u: goto L_08AB0F54;
    case 265u: goto L_08AB0F5C;
    case 266u: goto L_08AB0F64;
    case 267u: goto L_08AB0F6C;
    case 268u: goto L_08AB0F74;
    case 269u: goto L_08AB0F7C;
    case 270u: goto L_08AB0F84;
    case 271u: goto L_08AB0F8C;
    case 272u: goto L_08AB0F98;
    case 273u: goto L_08AB0FA0;
    case 274u: goto L_08AB0FA8;
    case 275u: goto L_08AB0FB0;
    case 276u: goto L_08AB0FB8;
    case 277u: goto L_08AB0FC4;
    case 278u: goto L_08AB0FCC;
    case 279u: goto L_08AB0FD4;
    case 280u: goto L_08AB0FDC;
    case 281u: goto L_08AB0FE4;
    case 282u: goto L_08AB0FEC;
    case 283u: goto L_08AB0FF4;
    case 284u: goto L_08AB0FFC;
    case 285u: goto L_08AB1004;
    case 286u: goto L_08AB100C;
    case 287u: goto L_08AB1014;
    case 288u: goto L_08AB1018;
    case 289u: goto L_08AB1020;
    case 290u: goto L_08AB1030;
    case 291u: goto L_08AB1048;
    case 292u: goto L_08AB1050;
    case 293u: goto L_08AB1058;
    case 294u: goto L_08AB1060;
    case 295u: goto L_08AB1068;
    case 296u: goto L_08AB1070;
    case 297u: goto L_08AB1078;
    case 298u: goto L_08AB1080;
    case 299u: goto L_08AB1088;
    case 300u: goto L_08AB1090;
    case 301u: goto L_08AB1098;
    case 302u: goto L_08AB10A0;
    case 303u: goto L_08AB10A8;
    case 304u: goto L_08AB10B0;
    case 305u: goto L_08AB10B8;
    case 306u: goto L_08AB10C0;
    case 307u: goto L_08AB10C8;
    case 308u: goto L_08AB10D0;
    case 309u: goto L_08AB10D8;
    case 310u: goto L_08AB10FC;
    case 311u: goto L_08AB110C;
    case 312u: goto L_08AB1118;
    case 313u: goto L_08AB1120;
    case 314u: goto L_08AB1138;
    case 315u: goto L_08AB1140;
    case 316u: goto L_08AB1148;
    case 317u: goto L_08AB1150;
    case 318u: goto L_08AB117C;
    case 319u: goto L_08AB118C;
    case 320u: goto L_08AB119C;
    case 321u: goto L_08AB11B4;
    case 322u: goto L_08AB11C4;
    case 323u: goto L_08AB11D4;
    case 324u: goto L_08AB11D8;
    case 325u: goto L_08AB11E4;
    case 326u: goto L_08AB11E8;
    case 327u: goto L_08AB11F4;
    case 328u: goto L_08AB120C;
    case 329u: goto L_08AB1214;
    case 330u: goto L_08AB1224;
    case 331u: goto L_08AB1244;
    case 332u: goto L_08AB1278;
    case 333u: goto L_08AB128C;
    case 334u: goto L_08AB12A0;
    case 335u: goto L_08AB12AC;
    case 336u: goto L_08AB12BC;
    case 337u: goto L_08AB12C4;
    case 338u: goto L_08AB12C8;
    case 339u: goto L_08AB12E4;
    case 340u: goto L_08AB12EC;
    case 341u: goto L_08AB1310;
    case 342u: goto L_08AB1318;
    case 343u: goto L_08AB1340;
    case 344u: goto L_08AB1374;
    case 345u: goto L_08AB1388;
    case 346u: goto L_08AB139C;
    case 347u: goto L_08AB13A8;
    case 348u: goto L_08AB13B8;
    case 349u: goto L_08AB13C0;
    case 350u: goto L_08AB13C4;
    case 351u: goto L_08AB13E0;
    case 352u: goto L_08AB13E8;
    case 353u: goto L_08AB140C;
    case 354u: goto L_08AB1414;
    case 355u: goto L_08AB143C;
    case 356u: goto L_08AB1470;
    case 357u: goto L_08AB1480;
    case 358u: goto L_08AB1498;
    case 359u: goto L_08AB14A4;
    case 360u: goto L_08AB14B4;
    case 361u: goto L_08AB14C4;
    case 362u: goto L_08AB14CC;
    case 363u: goto L_08AB14F4;
    case 364u: goto L_08AB151C;
    case 365u: goto L_08AB1534;
    case 366u: goto L_08AB1544;
    case 367u: goto L_08AB1550;
    case 368u: goto L_08AB1560;
    case 369u: goto L_08AB1568;
    case 370u: goto L_08AB1584;
    case 371u: goto L_08AB1588;
    case 372u: goto L_08AB15A0;
    case 373u: goto L_08AB15C8;
    case 374u: goto L_08AB15D8;
    case 375u: goto L_08AB15E4;
    case 376u: goto L_08AB15EC;
    case 377u: goto L_08AB15F8;
    case 378u: goto L_08AB160C;
    case 379u: goto L_08AB1618;
    case 380u: goto L_08AB1628;
    case 381u: goto L_08AB1630;
    case 382u: goto L_08AB1650;
    case 383u: goto L_08AB1658;
    case 384u: goto L_08AB1680;
    case 385u: goto L_08AB1690;
    case 386u: goto L_08AB16A0;
    case 387u: goto L_08AB16C4;
    case 388u: goto L_08AB16D0;
    case 389u: goto L_08AB16E4;
    case 390u: goto L_08AB16EC;
    case 391u: goto L_08AB16FC;
    case 392u: goto L_08AB1704;
    case 393u: goto L_08AB171C;
    case 394u: goto L_08AB1730;
    case 395u: goto L_08AB1740;
    case 396u: goto L_08AB1754;
    case 397u: goto L_08AB1764;
    case 398u: goto L_08AB176C;
    case 399u: goto L_08AB1778;
    case 400u: goto L_08AB1794;
    case 401u: goto L_08AB179C;
    case 402u: goto L_08AB17A8;
    case 403u: goto L_08AB17B8;
    case 404u: goto L_08AB17C8;
    case 405u: goto L_08AB17D0;
    case 406u: goto L_08AB17DC;
    case 407u: goto L_08AB17F4;
    case 408u: goto L_08AB1800;
    case 409u: goto L_08AB180C;
    case 410u: goto L_08AB1814;
    case 411u: goto L_08AB1820;
    case 412u: goto L_08AB1830;
    case 413u: goto L_08AB1838;
    case 414u: goto L_08AB1840;
    case 415u: goto L_08AB1854;
    case 416u: goto L_08AB1858;
    case 417u: goto L_08AB1860;
    case 418u: goto L_08AB186C;
    case 419u: goto L_08AB187C;
    case 420u: goto L_08AB1884;
    case 421u: goto L_08AB18A0;
    case 422u: goto L_08AB18B8;
    case 423u: goto L_08AB18CC;
    case 424u: goto L_08AB18D4;
    case 425u: goto L_08AB18E0;
    case 426u: goto L_08AB18E8;
    case 427u: goto L_08AB18F4;
    case 428u: goto L_08AB1914;
    case 429u: goto L_08AB191C;
    case 430u: goto L_08AB192C;
    case 431u: goto L_08AB1944;
    case 432u: goto L_08AB1958;
    case 433u: goto L_08AB196C;
    case 434u: goto L_08AB1980;
    case 435u: goto L_08AB1994;
    case 436u: goto L_08AB19A8;
    case 437u: goto L_08AB19BC;
    case 438u: goto L_08AB19D0;
    case 439u: goto L_08AB19E4;
    case 440u: goto L_08AB19F8;
    case 441u: goto L_08AB1A04;
    case 442u: goto L_08AB1A10;
    case 443u: goto L_08AB1A1C;
    case 444u: goto L_08AB1A24;
    case 445u: goto L_08AB1A60;
    case 446u: goto L_08AB1A68;
    case 447u: goto L_08AB1A78;
    case 448u: goto L_08AB1A7C;
    case 449u: goto L_08AB1A88;
    case 450u: goto L_08AB1A98;
    case 451u: goto L_08AB1AA0;
    case 452u: goto L_08AB1AB0;
    case 453u: goto L_08AB1AB8;
    case 454u: goto L_08AB1AC0;
    case 455u: goto L_08AB1ACC;
    case 456u: goto L_08AB1AD8;
    case 457u: goto L_08AB1AF0;
    case 458u: goto L_08AB1B04;
    case 459u: goto L_08AB1B0C;
    case 460u: goto L_08AB1B18;
    case 461u: goto L_08AB1B1C;
    case 462u: goto L_08AB1B40;
    case 463u: goto L_08AB1B60;
    case 464u: goto L_08AB1B6C;
    case 465u: goto L_08AB1B74;
    case 466u: goto L_08AB1B80;
    case 467u: goto L_08AB1B88;
    case 468u: goto L_08AB1B90;
    case 469u: goto L_08AB1BA0;
    case 470u: goto L_08AB1BA8;
    case 471u: goto L_08AB1BB4;
    case 472u: goto L_08AB1BC0;
    case 473u: goto L_08AB1BD4;
    case 474u: goto L_08AB1BE0;
    case 475u: goto L_08AB1BFC;
    case 476u: goto L_08AB1C0C;
    case 477u: goto L_08AB1C18;
    case 478u: goto L_08AB1C20;
    case 479u: goto L_08AB1C38;
    case 480u: goto L_08AB1C48;
    case 481u: goto L_08AB1C54;
    case 482u: goto L_08AB1C60;
    case 483u: goto L_08AB1C68;
    case 484u: goto L_08AB1C70;
    case 485u: goto L_08AB1C78;
    case 486u: goto L_08AB1C80;
    case 487u: goto L_08AB1C84;
    case 488u: goto L_08AB1C90;
    case 489u: goto L_08AB1CCC;
    case 490u: goto L_08AB1CD4;
    case 491u: goto L_08AB1CE8;
    case 492u: goto L_08AB1CF0;
    case 493u: goto L_08AB1D04;
    case 494u: goto L_08AB1D0C;
    case 495u: goto L_08AB1D1C;
    case 496u: goto L_08AB1D24;
    case 497u: goto L_08AB1D2C;
    case 498u: goto L_08AB1D38;
    case 499u: goto L_08AB1D3C;
    case 500u: goto L_08AB1D5C;
    case 501u: goto L_08AB1D8C;
    case 502u: goto L_08AB1D9C;
    case 503u: goto L_08AB1DA4;
    case 504u: goto L_08AB1DB4;
    case 505u: goto L_08AB1DC8;
    case 506u: goto L_08AB1DD0;
    case 507u: goto L_08AB1DD8;
    case 508u: goto L_08AB1DE0;
    case 509u: goto L_08AB1DE8;
    case 510u: goto L_08AB1DF0;
    case 511u: goto L_08AB1E10;
    case 512u: goto L_08AB1E40;
    case 513u: goto L_08AB1E60;
    case 514u: goto L_08AB1E70;
    case 515u: goto L_08AB1E9C;
    case 516u: goto L_08AB1EA4;
    case 517u: goto L_08AB1EB0;
    case 518u: goto L_08AB1EC0;
    case 519u: goto L_08AB1EE8;
    case 520u: goto L_08AB1F0C;
    case 521u: goto L_08AB1F14;
    case 522u: goto L_08AB1F1C;
    case 523u: goto L_08AB1F38;
    case 524u: goto L_08AB1F58;
    case 525u: goto L_08AB1F78;
    case 526u: goto L_08AB1F88;
    case 527u: goto L_08AB1F90;
    case 528u: goto L_08AB1F98;
    case 529u: goto L_08AB1F9C;
    case 530u: goto L_08AB1FB0;
    case 531u: goto L_08AB1FE0;
    case 532u: goto L_08AB1FEC;
    case 533u: goto L_08AB1FF4;
    case 534u: goto L_08AB1FFC;
    case 535u: goto L_08AB2004;
    case 536u: goto L_08AB200C;
    case 537u: goto L_08AB201C;
    case 538u: goto L_08AB2028;
    case 539u: goto L_08AB203C;
    case 540u: goto L_08AB2044;
    case 541u: goto L_08AB2054;
    case 542u: goto L_08AB205C;
    case 543u: goto L_08AB2064;
    case 544u: goto L_08AB2084;
    case 545u: goto L_08AB20A4;
    case 546u: goto L_08AB20C4;
    case 547u: goto L_08AB20D4;
    case 548u: goto L_08AB20E0;
    case 549u: goto L_08AB20FC;
    case 550u: goto L_08AB2104;
    case 551u: goto L_08AB2110;
    case 552u: goto L_08AB211C;
    case 553u: goto L_08AB2150;
    case 554u: goto L_08AB215C;
    case 555u: goto L_08AB2164;
    case 556u: goto L_08AB2174;
    case 557u: goto L_08AB217C;
    case 558u: goto L_08AB218C;
    case 559u: goto L_08AB2194;
    case 560u: goto L_08AB21A0;
    case 561u: goto L_08AB21B4;
    case 562u: goto L_08AB21CC;
    case 563u: goto L_08AB2208;
    case 564u: goto L_08AB2220;
    case 565u: goto L_08AB2238;
    case 566u: goto L_08AB2248;
    case 567u: goto L_08AB2254;
    case 568u: goto L_08AB225C;
    case 569u: goto L_08AB226C;
    case 570u: goto L_08AB2270;
    case 571u: goto L_08AB227C;
    case 572u: goto L_08AB2284;
    case 573u: goto L_08AB2290;
    case 574u: goto L_08AB2298;
    case 575u: goto L_08AB22B0;
    case 576u: goto L_08AB22BC;
    case 577u: goto L_08AB22D4;
    case 578u: goto L_08AB22E8;
    case 579u: goto L_08AB22F4;
    case 580u: goto L_08AB22FC;
    case 581u: goto L_08AB2304;
    case 582u: goto L_08AB230C;
    case 583u: goto L_08AB2324;
    case 584u: goto L_08AB232C;
    case 585u: goto L_08AB233C;
    case 586u: goto L_08AB2350;
    case 587u: goto L_08AB235C;
    case 588u: goto L_08AB2374;
    case 589u: goto L_08AB2388;
    case 590u: goto L_08AB2398;
    case 591u: goto L_08AB23A0;
    case 592u: goto L_08AB23B4;
    case 593u: goto L_08AB23BC;
    case 594u: goto L_08AB23C4;
    case 595u: goto L_08AB23C8;
    case 596u: goto L_08AB23F4;
    case 597u: goto L_08AB241C;
    case 598u: goto L_08AB242C;
    case 599u: goto L_08AB243C;
    case 600u: goto L_08AB245C;
    case 601u: goto L_08AB2478;
    case 602u: goto L_08AB2484;
    case 603u: goto L_08AB249C;
    case 604u: goto L_08AB24B0;
    case 605u: goto L_08AB24C4;
    case 606u: goto L_08AB24D0;
    case 607u: goto L_08AB24D8;
    case 608u: goto L_08AB24DC;
    case 609u: goto L_08AB24EC;
    case 610u: goto L_08AB24F8;
    case 611u: goto L_08AB2508;
    case 612u: goto L_08AB2510;
    case 613u: goto L_08AB2524;
    case 614u: goto L_08AB2528;
    case 615u: goto L_08AB2548;
    case 616u: goto L_08AB256C;
    case 617u: goto L_08AB257C;
    case 618u: goto L_08AB2588;
    case 619u: goto L_08AB2594;
    case 620u: goto L_08AB25A8;
    case 621u: goto L_08AB25C0;
    case 622u: goto L_08AB260C;
    case 623u: goto L_08AB2614;
    case 624u: goto L_08AB2620;
    case 625u: goto L_08AB2630;
    case 626u: goto L_08AB2644;
    case 627u: goto L_08AB2654;
    case 628u: goto L_08AB2664;
    case 629u: goto L_08AB2674;
    case 630u: goto L_08AB267C;
    case 631u: goto L_08AB2684;
    case 632u: goto L_08AB2694;
    case 633u: goto L_08AB26B4;
    case 634u: goto L_08AB26C4;
    case 635u: goto L_08AB26CC;
    case 636u: goto L_08AB26D4;
    case 637u: goto L_08AB26E4;
    case 638u: goto L_08AB26F0;
    case 639u: goto L_08AB26FC;
    case 640u: goto L_08AB2704;
    case 641u: goto L_08AB2710;
    case 642u: goto L_08AB2718;
    case 643u: goto L_08AB2724;
    case 644u: goto L_08AB2734;
    case 645u: goto L_08AB2744;
    case 646u: goto L_08AB2750;
    case 647u: goto L_08AB2758;
    case 648u: goto L_08AB2760;
    case 649u: goto L_08AB2768;
    case 650u: goto L_08AB2774;
    case 651u: goto L_08AB27A4;
    case 652u: goto L_08AB27E0;
    case 653u: goto L_08AB27F4;
    case 654u: goto L_08AB2810;
    case 655u: goto L_08AB281C;
    case 656u: goto L_08AB2828;
    case 657u: goto L_08AB2840;
    case 658u: goto L_08AB2848;
    case 659u: goto L_08AB2854;
    case 660u: goto L_08AB2860;
    case 661u: goto L_08AB286C;
    case 662u: goto L_08AB2874;
    case 663u: goto L_08AB287C;
    case 664u: goto L_08AB2888;
    case 665u: goto L_08AB288C;
    case 666u: goto L_08AB289C;
    case 667u: goto L_08AB28AC;
    case 668u: goto L_08AB28CC;
    case 669u: goto L_08AB28D0;
    case 670u: goto L_08AB28E4;
    case 671u: goto L_08AB28F0;
    case 672u: goto L_08AB2908;
    case 673u: goto L_08AB2910;
    case 674u: goto L_08AB2918;
    case 675u: goto L_08AB2920;
    case 676u: goto L_08AB2930;
    case 677u: goto L_08AB2940;
    case 678u: goto L_08AB2948;
    case 679u: goto L_08AB294C;
    case 680u: goto L_08AB2964;
    case 681u: goto L_08AB296C;
    case 682u: goto L_08AB2974;
    case 683u: goto L_08AB297C;
    case 684u: goto L_08AB2988;
    case 685u: goto L_08AB29A0;
    case 686u: goto L_08AB29A8;
    case 687u: goto L_08AB29B8;
    case 688u: goto L_08AB29EC;
    case 689u: goto L_08AB2A20;
    case 690u: goto L_08AB2A38;
    case 691u: goto L_08AB2A40;
    case 692u: goto L_08AB2A60;
    case 693u: goto L_08AB2A6C;
    case 694u: goto L_08AB2A78;
    case 695u: goto L_08AB2A80;
    case 696u: goto L_08AB2A88;
    case 697u: goto L_08AB2A90;
    case 698u: goto L_08AB2AA0;
    case 699u: goto L_08AB2AAC;
    case 700u: goto L_08AB2ABC;
    case 701u: goto L_08AB2AC4;
    case 702u: goto L_08AB2AC8;
    case 703u: goto L_08AB2AE4;
    case 704u: goto L_08AB2AEC;
    case 705u: goto L_08AB2AF0;
    case 706u: goto L_08AB2B0C;
    case 707u: goto L_08AB2B1C;
    case 708u: goto L_08AB2B24;
    case 709u: goto L_08AB2B28;
    case 710u: goto L_08AB2B40;
    case 711u: goto L_08AB2B4C;
    case 712u: goto L_08AB2B5C;
    case 713u: goto L_08AB2B64;
    case 714u: goto L_08AB2B68;
    case 715u: goto L_08AB2B9C;
    case 716u: goto L_08AB2BE8;
    case 717u: goto L_08AB2BF4;
    case 718u: goto L_08AB2BFC;
    case 719u: goto L_08AB2C08;
    case 720u: goto L_08AB2C24;
    case 721u: goto L_08AB2C3C;
    case 722u: goto L_08AB2C44;
    case 723u: goto L_08AB2C4C;
    case 724u: goto L_08AB2C58;
    case 725u: goto L_08AB2C80;
    case 726u: goto L_08AB2C98;
    case 727u: goto L_08AB2CA0;
    case 728u: goto L_08AB2CA8;
    case 729u: goto L_08AB2CC0;
    case 730u: goto L_08AB2CD0;
    case 731u: goto L_08AB2CE0;
    case 732u: goto L_08AB2CF0;
    case 733u: goto L_08AB2D08;
    case 734u: goto L_08AB2D3C;
    case 735u: goto L_08AB2D58;
    case 736u: goto L_08AB2D68;
    case 737u: goto L_08AB2D90;
    case 738u: goto L_08AB2DA0;
    case 739u: goto L_08AB2DB8;
    case 740u: goto L_08AB2DC8;
    case 741u: goto L_08AB2DDC;
    case 742u: goto L_08AB2DE4;
    case 743u: goto L_08AB2DF8;
    case 744u: goto L_08AB2E00;
    case 745u: goto L_08AB2E10;
    case 746u: goto L_08AB2E18;
    case 747u: goto L_08AB2E28;
    case 748u: goto L_08AB2E34;
    case 749u: goto L_08AB2E3C;
    case 750u: goto L_08AB2E44;
    case 751u: goto L_08AB2E4C;
    case 752u: goto L_08AB2E5C;
    case 753u: goto L_08AB2E68;
    case 754u: goto L_08AB2E70;
    case 755u: goto L_08AB2E78;
    case 756u: goto L_08AB2E8C;
    case 757u: goto L_08AB2E9C;
    case 758u: goto L_08AB2EA8;
    case 759u: goto L_08AB2EBC;
    case 760u: goto L_08AB2ECC;
    case 761u: goto L_08AB2ED4;
    case 762u: goto L_08AB2EE8;
    case 763u: goto L_08AB2EF0;
    case 764u: goto L_08AB2EF8;
    case 765u: goto L_08AB2F00;
    case 766u: goto L_08AB2F28;
    case 767u: goto L_08AB2F38;
    case 768u: goto L_08AB2F44;
    case 769u: goto L_08AB2F4C;
    case 770u: goto L_08AB2F54;
    case 771u: goto L_08AB2F5C;
    case 772u: goto L_08AB2F64;
    case 773u: goto L_08AB2F70;
    case 774u: goto L_08AB2F80;
    case 775u: goto L_08AB2F88;
    case 776u: goto L_08AB2F94;
    case 777u: goto L_08AB2FA8;
    case 778u: goto L_08AB2FBC;
    case 779u: goto L_08AB2FC4;
    case 780u: goto L_08AB2FC8;
    case 781u: goto L_08AB2FD8;
    case 782u: goto L_08AB2FE0;
    case 783u: goto L_08AB2FF8;
    case 784u: goto L_08AB3000;
    case 785u: goto L_08AB300C;
    case 786u: goto L_08AB3014;
    case 787u: goto L_08AB301C;
    case 788u: goto L_08AB3024;
    case 789u: goto L_08AB3038;
    case 790u: goto L_08AB3040;
    case 791u: goto L_08AB3048;
    case 792u: goto L_08AB305C;
    case 793u: goto L_08AB3064;
    case 794u: goto L_08AB3078;
    case 795u: goto L_08AB3080;
    case 796u: goto L_08AB3088;
    case 797u: goto L_08AB3094;
    case 798u: goto L_08AB309C;
    case 799u: goto L_08AB30BC;
    case 800u: goto L_08AB30F0;
    case 801u: goto L_08AB3108;
    case 802u: goto L_08AB3114;
    case 803u: goto L_08AB3124;
    case 804u: goto L_08AB3138;
    case 805u: goto L_08AB3140;
    case 806u: goto L_08AB3144;
    case 807u: goto L_08AB3160;
    case 808u: goto L_08AB3174;
    case 809u: goto L_08AB3188;
    case 810u: goto L_08AB3190;
    case 811u: goto L_08AB3194;
    case 812u: goto L_08AB31B0;
    case 813u: goto L_08AB31D8;
    case 814u: goto L_08AB31E8;
    case 815u: goto L_08AB3200;
    case 816u: goto L_08AB3210;
    case 817u: goto L_08AB321C;
    case 818u: goto L_08AB3234;
    case 819u: goto L_08AB3244;
    case 820u: goto L_08AB324C;
    case 821u: goto L_08AB325C;
    case 822u: goto L_08AB3264;
    case 823u: goto L_08AB3270;
    case 824u: goto L_08AB3284;
    case 825u: goto L_08AB328C;
    case 826u: goto L_08AB32A0;
    case 827u: goto L_08AB32BC;
    case 828u: goto L_08AB32C8;
    case 829u: goto L_08AB32E0;
    case 830u: goto L_08AB32F0;
    case 831u: goto L_08AB32F8;
    case 832u: goto L_08AB3304;
    case 833u: goto L_08AB330C;
    case 834u: goto L_08AB3320;
    case 835u: goto L_08AB3328;
    case 836u: goto L_08AB3338;
    case 837u: goto L_08AB3340;
    case 838u: goto L_08AB3350;
    case 839u: goto L_08AB335C;
    case 840u: goto L_08AB336C;
    case 841u: goto L_08AB3378;
    case 842u: goto L_08AB3380;
    case 843u: goto L_08AB3388;
    case 844u: goto L_08AB3398;
    case 845u: goto L_08AB33A4;
    case 846u: goto L_08AB33B4;
    case 847u: goto L_08AB33C0;
    case 848u: goto L_08AB33C8;
    case 849u: goto L_08AB33CC;
    case 850u: goto L_08AB33F0;
    case 851u: goto L_08AB3404;
    case 852u: goto L_08AB3424;
    case 853u: goto L_08AB3440;
    case 854u: goto L_08AB3458;
    case 855u: goto L_08AB3464;
    case 856u: goto L_08AB346C;
    case 857u: goto L_08AB3480;
    case 858u: goto L_08AB3490;
    case 859u: goto L_08AB349C;
    case 860u: goto L_08AB34C8;
    case 861u: goto L_08AB34D0;
    case 862u: goto L_08AB34DC;
    case 863u: goto L_08AB34E4;
    case 864u: goto L_08AB34FC;
    case 865u: goto L_08AB3504;
    case 866u: goto L_08AB350C;
    case 867u: goto L_08AB3520;
    case 868u: goto L_08AB3538;
    case 869u: goto L_08AB356C;
    case 870u: goto L_08AB3574;
    case 871u: goto L_08AB35A4;
    case 872u: goto L_08AB35AC;
    case 873u: goto L_08AB35C0;
    case 874u: goto L_08AB35C8;
    case 875u: goto L_08AB35F4;
    case 876u: goto L_08AB35FC;
    case 877u: goto L_08AB3604;
    case 878u: goto L_08AB360C;
    case 879u: goto L_08AB3634;
    case 880u: goto L_08AB363C;
    case 881u: goto L_08AB3644;
    case 882u: goto L_08AB364C;
    case 883u: goto L_08AB3654;
    case 884u: goto L_08AB366C;
    case 885u: goto L_08AB3674;
    case 886u: goto L_08AB367C;
    case 887u: goto L_08AB3688;
    case 888u: goto L_08AB3694;
    case 889u: goto L_08AB36B0;
    case 890u: goto L_08AB36D8;
    case 891u: goto L_08AB3774;
    case 892u: goto L_08AB3788;
    case 893u: goto L_08AB3790;
    case 894u: goto L_08AB379C;
    case 895u: goto L_08AB37B0;
    case 896u: goto L_08AB37B8;
    case 897u: goto L_08AB37C8;
    case 898u: goto L_08AB37E0;
    case 899u: goto L_08AB37F8;
    case 900u: goto L_08AB3800;
    case 901u: goto L_08AB3808;
    case 902u: goto L_08AB3814;
    case 903u: goto L_08AB3828;
    case 904u: goto L_08AB3838;
    case 905u: goto L_08AB3840;
    case 906u: goto L_08AB3850;
    case 907u: goto L_08AB3858;
    case 908u: goto L_08AB3874;
    case 909u: goto L_08AB3880;
    case 910u: goto L_08AB3888;
    case 911u: goto L_08AB388C;
    case 912u: goto L_08AB3894;
    case 913u: goto L_08AB38A4;
    case 914u: goto L_08AB38B8;
    case 915u: goto L_08AB38C4;
    case 916u: goto L_08AB38CC;
    case 917u: goto L_08AB38D0;
    case 918u: goto L_08AB38E4;
    case 919u: goto L_08AB38F0;
    case 920u: goto L_08AB38F4;
    case 921u: goto L_08AB38FC;
    case 922u: goto L_08AB3904;
    case 923u: goto L_08AB3918;
    case 924u: goto L_08AB3928;
    case 925u: goto L_08AB393C;
    case 926u: goto L_08AB394C;
    case 927u: goto L_08AB3960;
    case 928u: goto L_08AB3968;
    case 929u: goto L_08AB3970;
    case 930u: goto L_08AB3984;
    case 931u: goto L_08AB3994;
    case 932u: goto L_08AB39A0;
    case 933u: goto L_08AB39B8;
    case 934u: goto L_08AB39C0;
    case 935u: goto L_08AB39C8;
    case 936u: goto L_08AB39D0;
    case 937u: goto L_08AB39DC;
    case 938u: goto L_08AB3A10;
    case 939u: goto L_08AB3A1C;
    case 940u: goto L_08AB3A50;
    case 941u: goto L_08AB3A5C;
    case 942u: goto L_08AB3A90;
    case 943u: goto L_08AB3A9C;
    case 944u: goto L_08AB3AD0;
    case 945u: goto L_08AB3ADC;
    case 946u: goto L_08AB3B0C;
    case 947u: goto L_08AB3B18;
    case 948u: goto L_08AB3B48;
    case 949u: goto L_08AB3B50;
    case 950u: goto L_08AB3B5C;
    case 951u: goto L_08AB3B70;
    case 952u: goto L_08AB3B78;
    case 953u: goto L_08AB3B80;
    case 954u: goto L_08AB3B88;
    case 955u: goto L_08AB3BB4;
    case 956u: goto L_08AB3BBC;
    case 957u: goto L_08AB3BDC;
    case 958u: goto L_08AB3BE8;
    case 959u: goto L_08AB3C1C;
    case 960u: goto L_08AB3C38;
    case 961u: goto L_08AB3C40;
    case 962u: goto L_08AB3C48;
    case 963u: goto L_08AB3C50;
    case 964u: goto L_08AB3C64;
    case 965u: goto L_08AB3C80;
    case 966u: goto L_08AB3CA0;
    case 967u: goto L_08AB3CB0;
    case 968u: goto L_08AB3CB8;
    case 969u: goto L_08AB3CC0;
    case 970u: goto L_08AB3CC4;
    case 971u: goto L_08AB3CCC;
    case 972u: goto L_08AB3CD8;
    case 973u: goto L_08AB3CF0;
    case 974u: goto L_08AB3CFC;
    case 975u: goto L_08AB3D08;
    case 976u: goto L_08AB3D14;
    case 977u: goto L_08AB3D20;
    case 978u: goto L_08AB3D2C;
    case 979u: goto L_08AB3D38;
    case 980u: goto L_08AB3D40;
    case 981u: goto L_08AB3D48;
    case 982u: goto L_08AB3D5C;
    case 983u: goto L_08AB3D7C;
    case 984u: goto L_08AB3D84;
    case 985u: goto L_08AB3D8C;
    case 986u: goto L_08AB3D98;
    case 987u: goto L_08AB3DA0;
    case 988u: goto L_08AB3DB4;
    case 989u: goto L_08AB3DD4;
    case 990u: goto L_08AB3DE8;
    case 991u: goto L_08AB3DF0;
    case 992u: goto L_08AB3DF8;
    case 993u: goto L_08AB3E04;
    case 994u: goto L_08AB3E14;
    case 995u: goto L_08AB3E1C;
    case 996u: goto L_08AB3E28;
    case 997u: goto L_08AB3E3C;
    case 998u: goto L_08AB3E48;
    case 999u: goto L_08AB3E54;
    case 1000u: goto L_08AB3E6C;
    case 1001u: goto L_08AB3E74;
    case 1002u: goto L_08AB3E88;
    case 1003u: goto L_08AB3E9C;
    case 1004u: goto L_08AB3EB0;
    case 1005u: goto L_08AB3EC4;
    case 1006u: goto L_08AB3ED8;
    case 1007u: goto L_08AB3EEC;
    case 1008u: goto L_08AB3EF8;
    case 1009u: goto L_08AB3F00;
    case 1010u: goto L_08AB3F0C;
    case 1011u: goto L_08AB3F14;
    case 1012u: goto L_08AB3F20;
    case 1013u: goto L_08AB3F28;
    case 1014u: goto L_08AB3F34;
    case 1015u: goto L_08AB3F44;
    case 1016u: goto L_08AB3F4C;
    case 1017u: goto L_08AB3F54;
    case 1018u: goto L_08AB3F60;
    case 1019u: goto L_08AB3F64;
    case 1020u: goto L_08AB3F68;
    case 1021u: goto L_08AB3F70;
    case 1022u: goto L_08AB3F7C;
    case 1023u: goto L_08AB3F8C;
    case 1024u: goto L_08AB3F94;
    case 1025u: goto L_08AB3F9C;
    case 1026u: goto L_08AB3FA8;
    case 1027u: goto L_08AB3FAC;
    case 1028u: goto L_08AB3FB0;
    case 1029u: goto L_08AB3FB8;
    case 1030u: goto L_08AB3FC4;
    case 1031u: goto L_08AB3FD4;
    case 1032u: goto L_08AB3FDC;
    case 1033u: goto L_08AB3FE4;
    case 1034u: goto L_08AB3FF0;
    case 1035u: goto L_08AB3FF4;
    case 1036u: goto L_08AB3FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08AB0000:
    ctx.gpr[4] = (ctx.gpr[4] | 12u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB001C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AB0064;
      }
      goto L_08AB0038;
    }
L_08AB0038:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32560));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AB0050u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 1039u, 0x08ACF9BCu>(ctx, &aot_mem) && ctx.pc == 0x08AB0050u) goto L_08AB0050;
    return;
L_08AB0050:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB0064;
      }
      goto L_08AB005C;
    }
L_08AB005C:
    ctx.gpr[31] = (0x08AB0064u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AB0094;
L_08AB0064:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB0078:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB0088u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15952)));
    if (rt.invoke_chained_direct<&recomp_unit_0219_entry, 219u, 112u, 0x08B70978u>(ctx, &aot_mem) && ctx.pc == 0x08AB0088u) goto L_08AB0088;
    return;
L_08AB0088:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB0094:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB00A8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15952)));
    if (rt.invoke_chained_direct<&recomp_unit_0219_entry, 219u, 120u, 0x08B70A34u>(ctx, &aot_mem) && ctx.pc == 0x08AB00A8u) goto L_08AB00A8;
    return;
L_08AB00A8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB00B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(80));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08AB0100u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AB0100u) goto L_08AB0100;
    return;
L_08AB0100:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (17056u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[12] / ctx.fpr[16];
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = ctx.fpr[14] + ctx.fpr[17];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[9]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u | 49u);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[6] = (16840u << 16u);
    ctx.gpr[7] = (16128u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (0u | 49u);
        goto L_08AB0180;
    }
    goto L_08AB0180;
L_08AB0180:
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[8]) < 0 ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[8] = (0u | 0u);
        goto L_08AB0190;
    }
    goto L_08AB0190;
L_08AB0190:
    ctx.fpr[0] = ctx.fpr[15] / ctx.fpr[16];
    ctx.gpr[5] = (0u | 49u);
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[18];
    ctx.fpr[0] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (0u | 49u);
        goto L_08AB01B0;
    }
    goto L_08AB01B0;
L_08AB01B0:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (0u | 0u);
        goto L_08AB01BC;
    }
    goto L_08AB01BC;
L_08AB01BC:
    ctx.fpr[0] = ctx.fpr[14] / ctx.fpr[16];
    ctx.gpr[6] = (0u | 49u);
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[17];
    ctx.fpr[0] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (0u | 49u);
        goto L_08AB01DC;
    }
    goto L_08AB01DC;
L_08AB01DC:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[7]) < 0 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[7] = (0u | 0u);
        goto L_08AB01EC;
    }
    goto L_08AB01EC;
L_08AB01EC:
    ctx.fpr[0] = ctx.fpr[13] / ctx.fpr[16];
    ctx.gpr[6] = (0u | 49u);
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[18];
    ctx.fpr[0] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (0u | 49u);
        goto L_08AB020C;
    }
    goto L_08AB020C;
L_08AB020C:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 0 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AB0220;
      }
      goto L_08AB0218;
    }
L_08AB0218:
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    goto L_08AB0220;
L_08AB0220:
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[16];
    ctx.gpr[6] = (0u | 49u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[17];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (0u | 49u);
        goto L_08AB0248;
    }
    goto L_08AB0248;
L_08AB0248:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 0 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[6] = (0u | 0u);
        goto L_08AB0258;
    }
    goto L_08AB0258;
L_08AB0258:
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[13];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[16];
    ctx.gpr[5] = (0u | 49u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[18];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[30] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[30] = (0u | 49u);
        goto L_08AB0280;
    }
    goto L_08AB0280;
L_08AB0280:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[30]) < 0 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[30] = (0u | 0u);
        goto L_08AB028C;
    }
    goto L_08AB028C;
L_08AB028C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[23] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
      if (branch_taken) {
          goto L_08AB03C4;
      }
      goto L_08AB02A8;
    }
L_08AB02A8:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(68));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    goto L_08AB02C8;
L_08AB02C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB03A8;
      }
      goto L_08AB02DC;
    }
L_08AB02DC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[21] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[21] = (ctx.gpr[21] - ctx.gpr[4]);
    goto L_08AB02F0;
L_08AB02F0:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[21]);
      if (branch_taken) {
          goto L_08AB0310;
      }
      goto L_08AB0300;
    }
L_08AB0300:
    { const bool branch_taken = ctx.gpr[30] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08AB0310;
      }
      goto L_08AB0308;
    }
L_08AB0308:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08AB0314;
      }
      goto L_08AB0310;
    }
L_08AB0310:
    ctx.gpr[18] = (ctx.gpr[19] + static_cast<std::uint32_t>(52));
    goto L_08AB0314;
L_08AB0314:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AB0320u);
    ctx.gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 593u, 0x08807C9Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB0320u) goto L_08AB0320;
    return;
L_08AB0320:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB0338;
      }
      goto L_08AB032C;
    }
L_08AB032C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08AB0338;
L_08AB0338:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AB0350;
      }
      goto L_08AB0348;
    }
L_08AB0348:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    goto L_08AB0350;
L_08AB0350:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08AB0360u);
    ctx.gpr[4] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 722u, 0x0897EBD8u>(ctx, &aot_mem) && ctx.pc == 0x08AB0360u) goto L_08AB0360;
    return;
L_08AB0360:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_08AB037C;
      }
      goto L_08AB036C;
    }
L_08AB036C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[19]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    goto L_08AB037C;
L_08AB037C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AB0394;
      }
      goto L_08AB038C;
    }
L_08AB038C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    goto L_08AB0394;
L_08AB0394:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(56));
      if (branch_taken) {
          goto L_08AB02F0;
      }
      goto L_08AB03A8;
    }
L_08AB03A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(50));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AB02C8;
      }
      goto L_08AB03C4;
    }
L_08AB03C4:
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
L_08AB03F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2280u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(2192));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB0410u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 890u, 0x08AAFFD4u>(ctx, &aot_mem) && ctx.pc == 0x08AB0410u) goto L_08AB0410;
    return;
L_08AB0410:
    ctx.gpr[31] = (0x08AB0418u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2760));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08AB0418u) goto L_08AB0418;
    return;
L_08AB0418:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(10272));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2748));
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB042Cu);
    ctx.gpr[7] = (0u | 96u);
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 279u, 0x08A312B4u>(ctx, &aot_mem) && ctx.pc == 0x08AB042Cu) goto L_08AB042C;
    return;
L_08AB042C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB043C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB0444:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB044C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB0454:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[4] << 3u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB0488u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 148u, 0x08A9D3CCu>(ctx, &aot_mem) && ctx.pc == 0x08AB0488u) goto L_08AB0488;
    return;
L_08AB0488:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AB049Cu);
    ctx.gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 539u, 0x08A16D90u>(ctx, &aot_mem) && ctx.pc == 0x08AB049Cu) goto L_08AB049C;
    return;
L_08AB049C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB04C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[4] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(28));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB04FCu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 148u, 0x08A9D3CCu>(ctx, &aot_mem) && ctx.pc == 0x08AB04FCu) goto L_08AB04FC;
    return;
L_08AB04FC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AB0510u);
    ctx.gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 539u, 0x08A16D90u>(ctx, &aot_mem) && ctx.pc == 0x08AB0510u) goto L_08AB0510;
    return;
L_08AB0510:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
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
L_08AB0548:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(72));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    goto L_08AB0558;
L_08AB0558:
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB0590;
      }
      goto L_08AB0564;
    }
L_08AB0564:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (ctx.gpr[6] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB0590;
      }
      goto L_08AB0574;
    }
L_08AB0574:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AB0588;
      }
      goto L_08AB057C;
    }
L_08AB057C:
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AB0558;
      }
      goto L_08AB0588;
    }
L_08AB0588:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB05D0;
      }
      goto L_08AB0590;
    }
L_08AB0590:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AB05A8u);
    ctx.gpr[7] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 148u, 0x08A9D3CCu>(ctx, &aot_mem) && ctx.pc == 0x08AB05A8u) goto L_08AB05A8;
    return;
L_08AB05A8:
    ctx.gpr[4] = (0u | 10u);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08AB05D0;
L_08AB05D0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB05DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    goto L_08AB05F8;
L_08AB05F8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB0654;
      }
      goto L_08AB0604;
    }
L_08AB0604:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[4] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB0654;
      }
      goto L_08AB0614;
    }
L_08AB0614:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), ctx.gpr[6]);
    ctx.gpr[31] = (0x08AB064Cu);
    ctx.gpr[6] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 539u, 0x08A16D90u>(ctx, &aot_mem) && ctx.pc == 0x08AB064Cu) goto L_08AB064C;
    return;
L_08AB064C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
      if (branch_taken) {
          goto L_08AB05F8;
      }
      goto L_08AB0654;
    }
L_08AB0654:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB0668:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB0688u);
    ctx.gpr[7] = (0u | 72u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 148u, 0x08A9D3CCu>(ctx, &aot_mem) && ctx.pc == 0x08AB0688u) goto L_08AB0688;
    return;
L_08AB0688:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB069Cu);
    ctx.gpr[6] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 539u, 0x08A16D90u>(ctx, &aot_mem) && ctx.pc == 0x08AB069Cu) goto L_08AB069C;
    return;
L_08AB069C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(69), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(70), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(71), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB06F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB0724u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 148u, 0x08A9D3CCu>(ctx, &aot_mem) && ctx.pc == 0x08AB0724u) goto L_08AB0724;
    return;
L_08AB0724:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[31] = (0x08AB073Cu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 148u, 0x08A9D3CCu>(ctx, &aot_mem) && ctx.pc == 0x08AB073Cu) goto L_08AB073C;
    return;
L_08AB073C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[31] = (0x08AB0754u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 148u, 0x08A9D3CCu>(ctx, &aot_mem) && ctx.pc == 0x08AB0754u) goto L_08AB0754;
    return;
L_08AB0754:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[31] = (0x08AB076Cu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 148u, 0x08A9D3CCu>(ctx, &aot_mem) && ctx.pc == 0x08AB076Cu) goto L_08AB076C;
    return;
L_08AB076C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AB078Cu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 148u, 0x08A9D3CCu>(ctx, &aot_mem) && ctx.pc == 0x08AB078Cu) goto L_08AB078C;
    return;
L_08AB078C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[31] = (0x08AB07A4u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 148u, 0x08A9D3CCu>(ctx, &aot_mem) && ctx.pc == 0x08AB07A4u) goto L_08AB07A4;
    return;
L_08AB07A4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 72u);
    ctx.gpr[31] = (0x08AB07B8u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 148u, 0x08A9D3CCu>(ctx, &aot_mem) && ctx.pc == 0x08AB07B8u) goto L_08AB07B8;
    return;
L_08AB07B8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB07CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(6)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(7)));
        goto L_08AB07F4;
    }
    goto L_08AB07E0;
L_08AB07E0:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(7)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08AB0800;
      }
      goto L_08AB07F4;
    }
L_08AB07F4:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(28));
    goto L_08AB0800;
L_08AB0800:
    ctx.gpr[31] = (0x08AB0808u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 148u, 0x08A9D3CCu>(ctx, &aot_mem) && ctx.pc == 0x08AB0808u) goto L_08AB0808;
    return;
L_08AB0808:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB0814:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    goto L_08AB0824;
L_08AB0824:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB087C;
      }
      goto L_08AB082C;
    }
L_08AB082C:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[7]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(4)));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[11]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB087C;
      }
      goto L_08AB0844;
    }
L_08AB0844:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(8)));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[11]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB0860;
      }
      goto L_08AB0854;
    }
L_08AB0854:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB0870;
      }
      goto L_08AB0860;
    }
L_08AB0860:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB0824;
      }
      goto L_08AB0870;
    }
L_08AB0870:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08AB0880;
      }
      goto L_08AB087C;
    }
L_08AB087C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AB0880;
L_08AB0880:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB0888:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB08B8u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB08B8u) goto L_08AB08B8;
    return;
L_08AB08B8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[31] = (0x08AB08D0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 487u, 0x08862D50u>(ctx, &aot_mem) && ctx.pc == 0x08AB08D0u) goto L_08AB08D0;
    return;
L_08AB08D0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB08E0;
      }
      goto L_08AB08D8;
    }
L_08AB08D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08AB08E4;
      }
      goto L_08AB08E0;
    }
L_08AB08E0:
    ctx.gpr[4] = (0u | 0u);
    goto L_08AB08E4;
L_08AB08E4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB0908;
      }
      goto L_08AB0900;
    }
L_08AB0900:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AB0950;
      }
      goto L_08AB0908;
    }
L_08AB0908:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB0934;
      }
      goto L_08AB0928;
    }
L_08AB0928:
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AB0950;
      }
      goto L_08AB0934;
    }
L_08AB0934:
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB0950;
      }
      goto L_08AB094C;
    }
L_08AB094C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08AB0950;
L_08AB0950:
    ctx.gpr[2] = (0u | 0u);
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
L_08AB096C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB0984u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08AB0984u) goto L_08AB0984;
    return;
L_08AB0984:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(150)));
    ctx.gpr[5] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(29704), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB09A0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem) && ctx.pc == 0x08AB09A0u) goto L_08AB09A0;
    return;
L_08AB09A0:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB09B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB09F0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB09F0u) goto L_08AB09F0;
    return;
L_08AB09F0:
    ctx.gpr[31] = (0x08AB09F8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08AB09F8u) goto L_08AB09F8;
    return;
L_08AB09F8:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AB0A04u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 956u, 0x0898BB4Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB0A04u) goto L_08AB0A04;
    return;
L_08AB0A04:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
    ctx.gpr[31] = (0x08AB0A10u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 960u, 0x0898BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB0A10u) goto L_08AB0A10;
    return;
L_08AB0A10:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(6))))));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[31] = (0x08AB0A34u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem) && ctx.pc == 0x08AB0A34u) goto L_08AB0A34;
    return;
L_08AB0A34:
    ctx.gpr[2] = (0u | 0u);
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
L_08AB0A58:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB0A88u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB0A88u) goto L_08AB0A88;
    return;
L_08AB0A88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(45) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0A98;
    }
L_08AB0A98:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(10008)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB0AB0:
    ctx.gpr[31] = (0x08AB0AB8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08AB0AB8u) goto L_08AB0AB8;
    return;
L_08AB0AB8:
    ctx.gpr[31] = (0x08AB0AC0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 41u, 0x0898C160u>(ctx, &aot_mem) && ctx.pc == 0x08AB0AC0u) goto L_08AB0AC0;
    return;
L_08AB0AC0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0AC8;
    }
L_08AB0AC8:
    ctx.gpr[31] = (0x08AB0AD0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08AB0AD0u) goto L_08AB0AD0;
    return;
L_08AB0AD0:
    ctx.gpr[31] = (0x08AB0AD8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 388u, 0x0898D140u>(ctx, &aot_mem) && ctx.pc == 0x08AB0AD8u) goto L_08AB0AD8;
    return;
L_08AB0AD8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0AE0;
    }
L_08AB0AE0:
    ctx.gpr[31] = (0x08AB0AE8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08AB0AE8u) goto L_08AB0AE8;
    return;
L_08AB0AE8:
    ctx.gpr[31] = (0x08AB0AF0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 1086u, 0x0898F36Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB0AF0u) goto L_08AB0AF0;
    return;
L_08AB0AF0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0AF8;
    }
L_08AB0AF8:
    ctx.gpr[31] = (0x08AB0B00u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08AB0B00u) goto L_08AB0B00;
    return;
L_08AB0B00:
    ctx.gpr[31] = (0x08AB0B08u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 52u, 0x0898C1C8u>(ctx, &aot_mem) && ctx.pc == 0x08AB0B08u) goto L_08AB0B08;
    return;
L_08AB0B08:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0B10;
    }
L_08AB0B10:
    ctx.gpr[31] = (0x08AB0B18u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08AB0B18u) goto L_08AB0B18;
    return;
L_08AB0B18:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AB0B24u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 73u, 0x0898C2B4u>(ctx, &aot_mem) && ctx.pc == 0x08AB0B24u) goto L_08AB0B24;
    return;
L_08AB0B24:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0B2C;
    }
L_08AB0B2C:
    ctx.gpr[31] = (0x08AB0B34u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08AB0B34u) goto L_08AB0B34;
    return;
L_08AB0B34:
    ctx.gpr[31] = (0x08AB0B3Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 90u, 0x0898C3A8u>(ctx, &aot_mem) && ctx.pc == 0x08AB0B3Cu) goto L_08AB0B3C;
    return;
L_08AB0B3C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0B44;
    }
L_08AB0B44:
    ctx.gpr[31] = (0x08AB0B4Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08AB0B4Cu) goto L_08AB0B4C;
    return;
L_08AB0B4C:
    ctx.gpr[31] = (0x08AB0B54u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 114u, 0x0898C4ECu>(ctx, &aot_mem) && ctx.pc == 0x08AB0B54u) goto L_08AB0B54;
    return;
L_08AB0B54:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0B5C;
    }
L_08AB0B5C:
    ctx.gpr[31] = (0x08AB0B64u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08AB0B64u) goto L_08AB0B64;
    return;
L_08AB0B64:
    ctx.gpr[31] = (0x08AB0B6Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 124u, 0x0898C578u>(ctx, &aot_mem) && ctx.pc == 0x08AB0B6Cu) goto L_08AB0B6C;
    return;
L_08AB0B6C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0B74;
    }
L_08AB0B74:
    ctx.gpr[31] = (0x08AB0B7Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08AB0B7Cu) goto L_08AB0B7C;
    return;
L_08AB0B7C:
    ctx.gpr[31] = (0x08AB0B84u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 148u, 0x0898C6D0u>(ctx, &aot_mem) && ctx.pc == 0x08AB0B84u) goto L_08AB0B84;
    return;
L_08AB0B84:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0B8C;
    }
L_08AB0B8C:
    ctx.gpr[31] = (0x08AB0B94u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08AB0B94u) goto L_08AB0B94;
    return;
L_08AB0B94:
    ctx.gpr[31] = (0x08AB0B9Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 200u, 0x0898C924u>(ctx, &aot_mem) && ctx.pc == 0x08AB0B9Cu) goto L_08AB0B9C;
    return;
L_08AB0B9C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0BA4;
    }
L_08AB0BA4:
    ctx.gpr[31] = (0x08AB0BACu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08AB0BACu) goto L_08AB0BAC;
    return;
L_08AB0BAC:
    ctx.gpr[31] = (0x08AB0BB4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 252u, 0x0898CB7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB0BB4u) goto L_08AB0BB4;
    return;
L_08AB0BB4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0BBC;
    }
L_08AB0BBC:
    ctx.gpr[31] = (0x08AB0BC4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08AB0BC4u) goto L_08AB0BC4;
    return;
L_08AB0BC4:
    ctx.gpr[31] = (0x08AB0BCCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 309u, 0x0898CE14u>(ctx, &aot_mem) && ctx.pc == 0x08AB0BCCu) goto L_08AB0BCC;
    return;
L_08AB0BCC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0BD4;
    }
L_08AB0BD4:
    ctx.gpr[31] = (0x08AB0BDCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08AB0BDCu) goto L_08AB0BDC;
    return;
L_08AB0BDC:
    ctx.gpr[31] = (0x08AB0BE4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 319u, 0x0898CE74u>(ctx, &aot_mem) && ctx.pc == 0x08AB0BE4u) goto L_08AB0BE4;
    return;
L_08AB0BE4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0BEC;
    }
L_08AB0BEC:
    ctx.gpr[31] = (0x08AB0BF4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08AB0BF4u) goto L_08AB0BF4;
    return;
L_08AB0BF4:
    ctx.gpr[31] = (0x08AB0BFCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 333u, 0x0898CF00u>(ctx, &aot_mem) && ctx.pc == 0x08AB0BFCu) goto L_08AB0BFC;
    return;
L_08AB0BFC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0C04;
    }
L_08AB0C04:
    ctx.gpr[31] = (0x08AB0C0Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08AB0C0Cu) goto L_08AB0C0C;
    return;
L_08AB0C0C:
    ctx.gpr[31] = (0x08AB0C14u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 347u, 0x0898CF8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB0C14u) goto L_08AB0C14;
    return;
L_08AB0C14:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0C1C;
    }
L_08AB0C1C:
    ctx.gpr[31] = (0x08AB0C24u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08AB0C24u) goto L_08AB0C24;
    return;
L_08AB0C24:
    ctx.gpr[31] = (0x08AB0C2Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 351u, 0x0898CFB8u>(ctx, &aot_mem) && ctx.pc == 0x08AB0C2Cu) goto L_08AB0C2C;
    return;
L_08AB0C2C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0C34;
    }
L_08AB0C34:
    ctx.gpr[31] = (0x08AB0C3Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08AB0C3Cu) goto L_08AB0C3C;
    return;
L_08AB0C3C:
    ctx.gpr[31] = (0x08AB0C44u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 367u, 0x0898D050u>(ctx, &aot_mem) && ctx.pc == 0x08AB0C44u) goto L_08AB0C44;
    return;
L_08AB0C44:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0C4C;
    }
L_08AB0C4C:
    ctx.gpr[31] = (0x08AB0C54u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08AB0C54u) goto L_08AB0C54;
    return;
L_08AB0C54:
    ctx.gpr[31] = (0x08AB0C5Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 388u, 0x0898D140u>(ctx, &aot_mem) && ctx.pc == 0x08AB0C5Cu) goto L_08AB0C5C;
    return;
L_08AB0C5C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0C64;
    }
L_08AB0C64:
    ctx.gpr[31] = (0x08AB0C6Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08AB0C6Cu) goto L_08AB0C6C;
    return;
L_08AB0C6C:
    ctx.gpr[31] = (0x08AB0C74u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 392u, 0x0898D168u>(ctx, &aot_mem) && ctx.pc == 0x08AB0C74u) goto L_08AB0C74;
    return;
L_08AB0C74:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0C7C;
    }
L_08AB0C7C:
    ctx.gpr[31] = (0x08AB0C84u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08AB0C84u) goto L_08AB0C84;
    return;
L_08AB0C84:
    ctx.gpr[31] = (0x08AB0C8Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 400u, 0x0898D1B8u>(ctx, &aot_mem) && ctx.pc == 0x08AB0C8Cu) goto L_08AB0C8C;
    return;
L_08AB0C8C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0C94;
    }
L_08AB0C94:
    ctx.gpr[31] = (0x08AB0C9Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08AB0C9Cu) goto L_08AB0C9C;
    return;
L_08AB0C9C:
    ctx.gpr[31] = (0x08AB0CA4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 412u, 0x0898D22Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB0CA4u) goto L_08AB0CA4;
    return;
L_08AB0CA4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0CAC;
    }
L_08AB0CAC:
    ctx.gpr[31] = (0x08AB0CB4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08AB0CB4u) goto L_08AB0CB4;
    return;
L_08AB0CB4:
    ctx.gpr[31] = (0x08AB0CBCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 419u, 0x0898D270u>(ctx, &aot_mem) && ctx.pc == 0x08AB0CBCu) goto L_08AB0CBC;
    return;
L_08AB0CBC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0CC4;
    }
L_08AB0CC4:
    ctx.gpr[31] = (0x08AB0CCCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08AB0CCCu) goto L_08AB0CCC;
    return;
L_08AB0CCC:
    ctx.gpr[31] = (0x08AB0CD4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 430u, 0x0898D2D8u>(ctx, &aot_mem) && ctx.pc == 0x08AB0CD4u) goto L_08AB0CD4;
    return;
L_08AB0CD4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0CDC;
    }
L_08AB0CDC:
    ctx.gpr[31] = (0x08AB0CE4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08AB0CE4u) goto L_08AB0CE4;
    return;
L_08AB0CE4:
    ctx.gpr[31] = (0x08AB0CECu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 442u, 0x0898D354u>(ctx, &aot_mem) && ctx.pc == 0x08AB0CECu) goto L_08AB0CEC;
    return;
L_08AB0CEC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0CF4;
    }
L_08AB0CF4:
    ctx.gpr[31] = (0x08AB0CFCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08AB0CFCu) goto L_08AB0CFC;
    return;
L_08AB0CFC:
    ctx.gpr[31] = (0x08AB0D04u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 475u, 0x0898D4B8u>(ctx, &aot_mem) && ctx.pc == 0x08AB0D04u) goto L_08AB0D04;
    return;
L_08AB0D04:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0D0C;
    }
L_08AB0D0C:
    ctx.gpr[31] = (0x08AB0D14u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08AB0D14u) goto L_08AB0D14;
    return;
L_08AB0D14:
    ctx.gpr[31] = (0x08AB0D1Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 482u, 0x0898D50Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB0D1Cu) goto L_08AB0D1C;
    return;
L_08AB0D1C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0D24;
    }
L_08AB0D24:
    ctx.gpr[31] = (0x08AB0D2Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08AB0D2Cu) goto L_08AB0D2C;
    return;
L_08AB0D2C:
    ctx.gpr[31] = (0x08AB0D34u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 489u, 0x0898D560u>(ctx, &aot_mem) && ctx.pc == 0x08AB0D34u) goto L_08AB0D34;
    return;
L_08AB0D34:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0D3C;
    }
L_08AB0D3C:
    ctx.gpr[31] = (0x08AB0D44u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08AB0D44u) goto L_08AB0D44;
    return;
L_08AB0D44:
    ctx.gpr[31] = (0x08AB0D4Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 496u, 0x0898D5BCu>(ctx, &aot_mem) && ctx.pc == 0x08AB0D4Cu) goto L_08AB0D4C;
    return;
L_08AB0D4C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0D54;
    }
L_08AB0D54:
    ctx.gpr[31] = (0x08AB0D5Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08AB0D5Cu) goto L_08AB0D5C;
    return;
L_08AB0D5C:
    ctx.gpr[31] = (0x08AB0D64u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 508u, 0x0898D640u>(ctx, &aot_mem) && ctx.pc == 0x08AB0D64u) goto L_08AB0D64;
    return;
L_08AB0D64:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0D6C;
    }
L_08AB0D6C:
    ctx.gpr[31] = (0x08AB0D74u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08AB0D74u) goto L_08AB0D74;
    return;
L_08AB0D74:
    ctx.gpr[31] = (0x08AB0D7Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 543u, 0x0898D7C0u>(ctx, &aot_mem) && ctx.pc == 0x08AB0D7Cu) goto L_08AB0D7C;
    return;
L_08AB0D7C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0D84;
    }
L_08AB0D84:
    ctx.gpr[31] = (0x08AB0D8Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08AB0D8Cu) goto L_08AB0D8C;
    return;
L_08AB0D8C:
    ctx.gpr[31] = (0x08AB0D94u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 561u, 0x0898D8A0u>(ctx, &aot_mem) && ctx.pc == 0x08AB0D94u) goto L_08AB0D94;
    return;
L_08AB0D94:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0D9C;
    }
L_08AB0D9C:
    ctx.gpr[31] = (0x08AB0DA4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08AB0DA4u) goto L_08AB0DA4;
    return;
L_08AB0DA4:
    ctx.gpr[31] = (0x08AB0DACu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 613u, 0x0898DAFCu>(ctx, &aot_mem) && ctx.pc == 0x08AB0DACu) goto L_08AB0DAC;
    return;
L_08AB0DAC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0DB4;
    }
L_08AB0DB4:
    ctx.gpr[31] = (0x08AB0DBCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08AB0DBCu) goto L_08AB0DBC;
    return;
L_08AB0DBC:
    ctx.gpr[31] = (0x08AB0DC4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 672u, 0x0898DD9Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB0DC4u) goto L_08AB0DC4;
    return;
L_08AB0DC4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0DCC;
    }
L_08AB0DCC:
    ctx.gpr[31] = (0x08AB0DD4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08AB0DD4u) goto L_08AB0DD4;
    return;
L_08AB0DD4:
    ctx.gpr[31] = (0x08AB0DDCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 679u, 0x0898DDE4u>(ctx, &aot_mem) && ctx.pc == 0x08AB0DDCu) goto L_08AB0DDC;
    return;
L_08AB0DDC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0DE4;
    }
L_08AB0DE4:
    ctx.gpr[31] = (0x08AB0DECu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08AB0DECu) goto L_08AB0DEC;
    return;
L_08AB0DEC:
    ctx.gpr[31] = (0x08AB0DF4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 686u, 0x0898DE2Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB0DF4u) goto L_08AB0DF4;
    return;
L_08AB0DF4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0DFC;
    }
L_08AB0DFC:
    ctx.gpr[31] = (0x08AB0E04u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08AB0E04u) goto L_08AB0E04;
    return;
L_08AB0E04:
    ctx.gpr[31] = (0x08AB0E0Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 703u, 0x0898DF58u>(ctx, &aot_mem) && ctx.pc == 0x08AB0E0Cu) goto L_08AB0E0C;
    return;
L_08AB0E0C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0E14;
    }
L_08AB0E14:
    ctx.gpr[31] = (0x08AB0E1Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08AB0E1Cu) goto L_08AB0E1C;
    return;
L_08AB0E1C:
    ctx.gpr[31] = (0x08AB0E24u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 722u, 0x0898E080u>(ctx, &aot_mem) && ctx.pc == 0x08AB0E24u) goto L_08AB0E24;
    return;
L_08AB0E24:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0E2C;
    }
L_08AB0E2C:
    ctx.gpr[31] = (0x08AB0E34u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08AB0E34u) goto L_08AB0E34;
    return;
L_08AB0E34:
    ctx.gpr[31] = (0x08AB0E3Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 742u, 0x0898E188u>(ctx, &aot_mem) && ctx.pc == 0x08AB0E3Cu) goto L_08AB0E3C;
    return;
L_08AB0E3C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0E44;
    }
L_08AB0E44:
    ctx.gpr[31] = (0x08AB0E4Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08AB0E4Cu) goto L_08AB0E4C;
    return;
L_08AB0E4C:
    ctx.gpr[31] = (0x08AB0E54u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 1040u, 0x0898BEC8u>(ctx, &aot_mem) && ctx.pc == 0x08AB0E54u) goto L_08AB0E54;
    return;
L_08AB0E54:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0E5C;
    }
L_08AB0E5C:
    ctx.gpr[31] = (0x08AB0E64u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08AB0E64u) goto L_08AB0E64;
    return;
L_08AB0E64:
    ctx.gpr[31] = (0x08AB0E6Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 1047u, 0x0898BF10u>(ctx, &aot_mem) && ctx.pc == 0x08AB0E6Cu) goto L_08AB0E6C;
    return;
L_08AB0E6C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0E74;
    }
L_08AB0E74:
    ctx.gpr[31] = (0x08AB0E7Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08AB0E7Cu) goto L_08AB0E7C;
    return;
L_08AB0E7C:
    ctx.gpr[31] = (0x08AB0E84u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 1054u, 0x0898BF58u>(ctx, &aot_mem) && ctx.pc == 0x08AB0E84u) goto L_08AB0E84;
    return;
L_08AB0E84:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0E8C;
    }
L_08AB0E8C:
    ctx.gpr[31] = (0x08AB0E94u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08AB0E94u) goto L_08AB0E94;
    return;
L_08AB0E94:
    ctx.gpr[31] = (0x08AB0E9Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 1061u, 0x0898BFA0u>(ctx, &aot_mem) && ctx.pc == 0x08AB0E9Cu) goto L_08AB0E9C;
    return;
L_08AB0E9C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0EA4;
    }
L_08AB0EA4:
    ctx.gpr[31] = (0x08AB0EACu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08AB0EACu) goto L_08AB0EAC;
    return;
L_08AB0EAC:
    ctx.gpr[31] = (0x08AB0EB4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 1068u, 0x0898BFE8u>(ctx, &aot_mem) && ctx.pc == 0x08AB0EB4u) goto L_08AB0EB4;
    return;
L_08AB0EB4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0EBC;
    }
L_08AB0EBC:
    ctx.gpr[31] = (0x08AB0EC4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08AB0EC4u) goto L_08AB0EC4;
    return;
L_08AB0EC4:
    ctx.gpr[31] = (0x08AB0ECCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 1069u, 0x0898BFF4u>(ctx, &aot_mem) && ctx.pc == 0x08AB0ECCu) goto L_08AB0ECC;
    return;
L_08AB0ECC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0ED4;
    }
L_08AB0ED4:
    ctx.gpr[31] = (0x08AB0EDCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08AB0EDCu) goto L_08AB0EDC;
    return;
L_08AB0EDC:
    ctx.gpr[31] = (0x08AB0EE4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 24u, 0x0898C0C4u>(ctx, &aot_mem) && ctx.pc == 0x08AB0EE4u) goto L_08AB0EE4;
    return;
L_08AB0EE4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB0EFC;
      }
      goto L_08AB0EEC;
    }
L_08AB0EEC:
    ctx.gpr[5] = (2236u << 16u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32304));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2063), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08AB0EFC;
L_08AB0EFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB0F04;
      }
      goto L_08AB0F04;
    }
L_08AB0F04:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AB0F14u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem) && ctx.pc == 0x08AB0F14u) goto L_08AB0F14;
    return;
L_08AB0F14:
    ctx.gpr[2] = (0u | 0u);
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
L_08AB0F30:
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(54) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB1014;
      }
      goto L_08AB0F3C;
    }
L_08AB0F3C:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(10232)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB0F54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2688));
      if (branch_taken) {
          goto L_08AB1018;
      }
      goto L_08AB0F5C;
    }
L_08AB0F5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2684));
      if (branch_taken) {
          goto L_08AB1018;
      }
      goto L_08AB0F64;
    }
L_08AB0F64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2676));
      if (branch_taken) {
          goto L_08AB1018;
      }
      goto L_08AB0F6C;
    }
L_08AB0F6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2668));
      if (branch_taken) {
          goto L_08AB1018;
      }
      goto L_08AB0F74;
    }
L_08AB0F74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2660));
      if (branch_taken) {
          goto L_08AB1018;
      }
      goto L_08AB0F7C;
    }
L_08AB0F7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2652));
      if (branch_taken) {
          goto L_08AB1018;
      }
      goto L_08AB0F84;
    }
L_08AB0F84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2644));
      if (branch_taken) {
          goto L_08AB1018;
      }
      goto L_08AB0F8C;
    }
L_08AB0F8C:
    ctx.gpr[2] = (2232u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(10192));
      if (branch_taken) {
          goto L_08AB1018;
      }
      goto L_08AB0F98;
    }
L_08AB0F98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2636));
      if (branch_taken) {
          goto L_08AB1018;
      }
      goto L_08AB0FA0;
    }
L_08AB0FA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2624));
      if (branch_taken) {
          goto L_08AB1018;
      }
      goto L_08AB0FA8;
    }
L_08AB0FA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2612));
      if (branch_taken) {
          goto L_08AB1018;
      }
      goto L_08AB0FB0;
    }
L_08AB0FB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2604));
      if (branch_taken) {
          goto L_08AB1018;
      }
      goto L_08AB0FB8;
    }
L_08AB0FB8:
    ctx.gpr[2] = (2232u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(10212));
      if (branch_taken) {
          goto L_08AB1018;
      }
      goto L_08AB0FC4;
    }
L_08AB0FC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2592));
      if (branch_taken) {
          goto L_08AB1018;
      }
      goto L_08AB0FCC;
    }
L_08AB0FCC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2580));
      if (branch_taken) {
          goto L_08AB1018;
      }
      goto L_08AB0FD4;
    }
L_08AB0FD4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2568));
      if (branch_taken) {
          goto L_08AB1018;
      }
      goto L_08AB0FDC;
    }
L_08AB0FDC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2560));
      if (branch_taken) {
          goto L_08AB1018;
      }
      goto L_08AB0FE4;
    }
L_08AB0FE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2548));
      if (branch_taken) {
          goto L_08AB1018;
      }
      goto L_08AB0FEC;
    }
L_08AB0FEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2540));
      if (branch_taken) {
          goto L_08AB1018;
      }
      goto L_08AB0FF4;
    }
L_08AB0FF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2532));
      if (branch_taken) {
          goto L_08AB1018;
      }
      goto L_08AB0FFC;
    }
L_08AB0FFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2524));
      if (branch_taken) {
          goto L_08AB1018;
      }
      goto L_08AB1004;
    }
L_08AB1004:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2516));
      if (branch_taken) {
          goto L_08AB1018;
      }
      goto L_08AB100C;
    }
L_08AB100C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2508));
      if (branch_taken) {
          goto L_08AB1018;
      }
      goto L_08AB1014;
    }
L_08AB1014:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AB1018;
L_08AB1018:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB1020:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(17) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AB10D0;
      }
      goto L_08AB1030;
    }
L_08AB1030:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(10448)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB1048:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 3u);
      if (branch_taken) {
          goto L_08AB10D0;
      }
      goto L_08AB1050;
    }
L_08AB1050:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5u);
      if (branch_taken) {
          goto L_08AB10D0;
      }
      goto L_08AB1058;
    }
L_08AB1058:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 32u);
      if (branch_taken) {
          goto L_08AB10D0;
      }
      goto L_08AB1060;
    }
L_08AB1060:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 22u);
      if (branch_taken) {
          goto L_08AB10D0;
      }
      goto L_08AB1068;
    }
L_08AB1068:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 34u);
      if (branch_taken) {
          goto L_08AB10D0;
      }
      goto L_08AB1070;
    }
L_08AB1070:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 24u);
      if (branch_taken) {
          goto L_08AB10D0;
      }
      goto L_08AB1078;
    }
L_08AB1078:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 41u);
      if (branch_taken) {
          goto L_08AB10D0;
      }
      goto L_08AB1080;
    }
L_08AB1080:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 51u);
      if (branch_taken) {
          goto L_08AB10D0;
      }
      goto L_08AB1088;
    }
L_08AB1088:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 43u);
      if (branch_taken) {
          goto L_08AB10D0;
      }
      goto L_08AB1090;
    }
L_08AB1090:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 53u);
      if (branch_taken) {
          goto L_08AB10D0;
      }
      goto L_08AB1098;
    }
L_08AB1098:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 42u);
      if (branch_taken) {
          goto L_08AB10D0;
      }
      goto L_08AB10A0;
    }
L_08AB10A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 52u);
      if (branch_taken) {
          goto L_08AB10D0;
      }
      goto L_08AB10A8;
    }
L_08AB10A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 33u);
      if (branch_taken) {
          goto L_08AB10D0;
      }
      goto L_08AB10B0;
    }
L_08AB10B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 23u);
      if (branch_taken) {
          goto L_08AB10D0;
      }
      goto L_08AB10B8;
    }
L_08AB10B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 31u);
      if (branch_taken) {
          goto L_08AB10D0;
      }
      goto L_08AB10C0;
    }
L_08AB10C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 21u);
      if (branch_taken) {
          goto L_08AB10D0;
      }
      goto L_08AB10C8;
    }
L_08AB10C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 4u);
      if (branch_taken) {
          goto L_08AB10D0;
      }
      goto L_08AB10D0;
    }
L_08AB10D0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB10D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB10FCu);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 277u, 0x0889D50Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB10FCu) goto L_08AB10FC;
    return;
L_08AB10FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08AB1118;
      }
      goto L_08AB110C;
    }
L_08AB110C:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08AB1118;
L_08AB1118:
    ctx.gpr[31] = (0x08AB1120u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x08AB1120u) goto L_08AB1120;
    return;
L_08AB1120:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB1138:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AB1148;
      }
      goto L_08AB1140;
    }
L_08AB1140:
    ctx.gpr[2] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    goto L_08AB1148;
L_08AB1148:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB1150:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB117Cu);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 277u, 0x0889D50Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB117Cu) goto L_08AB117C;
    return;
L_08AB117C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB118Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 294u, 0x0889D610u>(ctx, &aot_mem) && ctx.pc == 0x08AB118Cu) goto L_08AB118C;
    return;
L_08AB118C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AB119Cu);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AB1138;
L_08AB119C:
    ctx.gpr[6] = (49024u << 16u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB11B4u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 300u, 0x0889D684u>(ctx, &aot_mem) && ctx.pc == 0x08AB11B4u) goto L_08AB11B4;
    return;
L_08AB11B4:
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AB11C4u);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08AB1138;
L_08AB11C4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[17]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AB11D8;
      }
      goto L_08AB11D4;
    }
L_08AB11D4:
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    goto L_08AB11D8;
L_08AB11D8:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB11E8;
      }
      goto L_08AB11E4;
    }
L_08AB11E4:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08AB11E8;
L_08AB11E8:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB1214;
      }
      goto L_08AB11F4;
    }
L_08AB11F4:
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[17]);
    ctx.gpr[6] = (ctx.gpr[4] - ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x08AB120Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x08AB120Cu) goto L_08AB120C;
    return;
L_08AB120C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB1224;
      }
      goto L_08AB1214;
    }
L_08AB1214:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2404));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB1224u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x08AB1224u) goto L_08AB1224;
    return;
L_08AB1224:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
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
L_08AB1244:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1072));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1040), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1060), ctx.gpr[21]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1044), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1048), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1052), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1056), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1064), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB1278u);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 277u, 0x0889D50Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB1278u) goto L_08AB1278;
    return;
L_08AB1278:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB128Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 453u, 0x0889DFC8u>(ctx, &aot_mem) && ctx.pc == 0x08AB128Cu) goto L_08AB128C;
    return;
L_08AB128C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2234u << 16u);
      if (branch_taken) {
          goto L_08AB1310;
      }
      goto L_08AB12A0;
    }
L_08AB12A0:
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(14520));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1040));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08AB12AC;
L_08AB12AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_08AB12C8;
      }
      goto L_08AB12BC;
    }
L_08AB12BC:
    ctx.gpr[31] = (0x08AB12C4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 429u, 0x0889DDECu>(ctx, &aot_mem) && ctx.pc == 0x08AB12C4u) goto L_08AB12C4;
    return;
L_08AB12C4:
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[18]);
    goto L_08AB12C8;
L_08AB12C8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB12EC;
      }
      goto L_08AB12E4;
    }
L_08AB12E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08AB12EC;
      }
      goto L_08AB12EC;
    }
L_08AB12EC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB12AC;
      }
      goto L_08AB1310;
    }
L_08AB1310:
    ctx.gpr[31] = (0x08AB1318u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 439u, 0x0889DEB8u>(ctx, &aot_mem) && ctx.pc == 0x08AB1318u) goto L_08AB1318;
    return;
L_08AB1318:
    ctx.gpr[2] = (ctx.gpr[21] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1040)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1044)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1048)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1052)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1056)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1060)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1064)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1072));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB1340:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1072));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1040), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1060), ctx.gpr[21]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1044), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1048), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1052), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1056), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1064), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB1374u);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 277u, 0x0889D50Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB1374u) goto L_08AB1374;
    return;
L_08AB1374:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB1388u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 453u, 0x0889DFC8u>(ctx, &aot_mem) && ctx.pc == 0x08AB1388u) goto L_08AB1388;
    return;
L_08AB1388:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2234u << 16u);
      if (branch_taken) {
          goto L_08AB140C;
      }
      goto L_08AB139C;
    }
L_08AB139C:
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(14520));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1040));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08AB13A8;
L_08AB13A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_08AB13C4;
      }
      goto L_08AB13B8;
    }
L_08AB13B8:
    ctx.gpr[31] = (0x08AB13C0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 429u, 0x0889DDECu>(ctx, &aot_mem) && ctx.pc == 0x08AB13C0u) goto L_08AB13C0;
    return;
L_08AB13C0:
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[18]);
    goto L_08AB13C4;
L_08AB13C4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] & 2u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB13E8;
      }
      goto L_08AB13E0;
    }
L_08AB13E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32));
      if (branch_taken) {
          goto L_08AB13E8;
      }
      goto L_08AB13E8;
    }
L_08AB13E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB13A8;
      }
      goto L_08AB140C;
    }
L_08AB140C:
    ctx.gpr[31] = (0x08AB1414u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 439u, 0x0889DEB8u>(ctx, &aot_mem) && ctx.pc == 0x08AB1414u) goto L_08AB1414;
    return;
L_08AB1414:
    ctx.gpr[2] = (ctx.gpr[21] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1040)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1044)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1048)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1052)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1056)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1060)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1064)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1072));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB143C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1072));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1040), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1056), ctx.gpr[20]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1044), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1048), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1052), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1060), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1064), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB1470u);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 277u, 0x0889D50Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB1470u) goto L_08AB1470;
    return;
L_08AB1470:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB1480u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 294u, 0x0889D610u>(ctx, &aot_mem) && ctx.pc == 0x08AB1480u) goto L_08AB1480;
    return;
L_08AB1480:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AB1498u);
    ctx.gpr[21] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 453u, 0x0889DFC8u>(ctx, &aot_mem) && ctx.pc == 0x08AB1498u) goto L_08AB1498;
    return;
L_08AB1498:
    ctx.gpr[16] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) <= 0;
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AB14C4;
      }
      goto L_08AB14A4;
    }
L_08AB14A4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AB14B4u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 433u, 0x0889DE24u>(ctx, &aot_mem) && ctx.pc == 0x08AB14B4u) goto L_08AB14B4;
    return;
L_08AB14B4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AB14A4;
      }
      goto L_08AB14C4;
    }
L_08AB14C4:
    ctx.gpr[31] = (0x08AB14CCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 439u, 0x0889DEB8u>(ctx, &aot_mem) && ctx.pc == 0x08AB14CCu) goto L_08AB14CC;
    return;
L_08AB14CC:
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1040)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1044)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1048)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1052)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1056)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1060)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1064)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1072));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB14F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB151Cu);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 277u, 0x0889D50Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB151Cu) goto L_08AB151C;
    return;
L_08AB151C:
    ctx.gpr[6] = (16256u << 16u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB1534u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 300u, 0x0889D684u>(ctx, &aot_mem) && ctx.pc == 0x08AB1534u) goto L_08AB1534;
    return;
L_08AB1534:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AB1544u);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AB1138;
L_08AB1544:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AB1560;
      }
      goto L_08AB1550;
    }
L_08AB1550:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB1568;
      }
      goto L_08AB1560;
    }
L_08AB1560:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB1588;
      }
      goto L_08AB1568;
    }
L_08AB1568:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-1))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x08AB1584u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x08AB1584u) goto L_08AB1584;
    return;
L_08AB1584:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_08AB1588;
L_08AB1588:
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
L_08AB15A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1072));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1036), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1040), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1044), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1048), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1052), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1056), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1060), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB15C8u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem) && ctx.pc == 0x08AB15C8u) goto L_08AB15C8;
    return;
L_08AB15C8:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB15D8u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 453u, 0x0889DFC8u>(ctx, &aot_mem) && ctx.pc == 0x08AB15D8u) goto L_08AB15D8;
    return;
L_08AB15D8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_08AB1650;
      }
      goto L_08AB15E4;
    }
L_08AB15E4:
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2400));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1036));
    goto L_08AB15EC;
L_08AB15EC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB15F8u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 294u, 0x0889D610u>(ctx, &aot_mem) && ctx.pc == 0x08AB15F8u) goto L_08AB15F8;
    return;
L_08AB15F8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[19] & 255u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AB1618;
      }
      goto L_08AB160C;
    }
L_08AB160C:
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AB1618u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 201u, 0x0889CFFCu>(ctx, &aot_mem) && ctx.pc == 0x08AB1618u) goto L_08AB1618;
    return;
L_08AB1618:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB1630;
      }
      goto L_08AB1628;
    }
L_08AB1628:
    ctx.gpr[31] = (0x08AB1630u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 429u, 0x0889DDECu>(ctx, &aot_mem) && ctx.pc == 0x08AB1630u) goto L_08AB1630;
    return;
L_08AB1630:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB15EC;
      }
      goto L_08AB1650;
    }
L_08AB1650:
    ctx.gpr[31] = (0x08AB1658u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 439u, 0x0889DEB8u>(ctx, &aot_mem) && ctx.pc == 0x08AB1658u) goto L_08AB1658;
    return;
L_08AB1658:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1036)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1040)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1044)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1048)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1052)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1056)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1060)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1072));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB1680:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB1690u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 433u, 0x0889DE24u>(ctx, &aot_mem) && ctx.pc == 0x08AB1690u) goto L_08AB1690;
    return;
L_08AB1690:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB16A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1056));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1036), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1040), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1044), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB16C4u);
    ctx.gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 269u, 0x0889D46Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB16C4u) goto L_08AB16C4;
    return;
L_08AB16C4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB16D0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 453u, 0x0889DFC8u>(ctx, &aot_mem) && ctx.pc == 0x08AB16D0u) goto L_08AB16D0;
    return;
L_08AB16D0:
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08AB16E4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5760));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 523u, 0x08807790u>(ctx, &aot_mem) && ctx.pc == 0x08AB16E4u) goto L_08AB16E4;
    return;
L_08AB16E4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB16FC;
      }
      goto L_08AB16EC;
    }
L_08AB16EC:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB16FCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10624));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 229u, 0x0889D1FCu>(ctx, &aot_mem) && ctx.pc == 0x08AB16FCu) goto L_08AB16FC;
    return;
L_08AB16FC:
    ctx.gpr[31] = (0x08AB1704u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 439u, 0x0889DEB8u>(ctx, &aot_mem) && ctx.pc == 0x08AB1704u) goto L_08AB1704;
    return;
L_08AB1704:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1036)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1040)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1044)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1056));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB171C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[2] = (ctx.gpr[5] + static_cast<std::uint32_t>(-49));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AB1754;
      }
      goto L_08AB1730;
    }
L_08AB1730:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[2] << 3u);
      if (branch_taken) {
          goto L_08AB1754;
      }
      goto L_08AB1740;
    }
L_08AB1740:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08AB176C;
      }
      goto L_08AB1754;
    }
L_08AB1754:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08AB1764u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10656));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 229u, 0x0889D1FCu>(ctx, &aot_mem) && ctx.pc == 0x08AB1764u) goto L_08AB1764;
    return;
L_08AB1764:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB176C;
      }
      goto L_08AB176C;
    }
L_08AB176C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB1778:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) < 0;
    ctx.gpr[6] = (ctx.gpr[2] << 3u);
      if (branch_taken) {
          goto L_08AB17B8;
      }
      goto L_08AB1794;
    }
L_08AB1794:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    goto L_08AB179C;
L_08AB179C:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AB17D0;
      }
      goto L_08AB17A8;
    }
L_08AB17A8:
    ctx.gpr[2] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) >= 0;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-8));
      if (branch_taken) {
          goto L_08AB179C;
      }
      goto L_08AB17B8;
    }
L_08AB17B8:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08AB17C8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10680));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 229u, 0x0889D1FCu>(ctx, &aot_mem) && ctx.pc == 0x08AB17C8u) goto L_08AB17C8;
    return;
L_08AB17C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB17D0;
      }
      goto L_08AB17D0;
    }
L_08AB17D0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB17DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 38 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AB1814;
      }
      goto L_08AB17F4;
    }
L_08AB17F4:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 37 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB1838;
      }
      goto L_08AB1800;
    }
L_08AB1800:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[2] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AB1840;
      }
      goto L_08AB180C;
    }
L_08AB180C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB1858;
      }
      goto L_08AB1814;
    }
L_08AB1814:
    ctx.gpr[7] = (0u | 91u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08AB1838;
      }
      goto L_08AB1820;
    }
L_08AB1820:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (0u | 94u);
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[6];
    ctx.gpr[2] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AB1860;
      }
      goto L_08AB1830;
    }
L_08AB1830:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB186C;
      }
      goto L_08AB1838;
    }
L_08AB1838:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AB18E8;
      }
      goto L_08AB1840;
    }
L_08AB1840:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.gpr[31] = (0x08AB1854u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10704));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 229u, 0x0889D1FCu>(ctx, &aot_mem) && ctx.pc == 0x08AB1854u) goto L_08AB1854;
    return;
L_08AB1854:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AB1858;
L_08AB1858:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB18E8;
      }
      goto L_08AB1860;
    }
L_08AB1860:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[2] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    goto L_08AB186C;
L_08AB186C:
    ctx.gpr[8] = (2232u << 16u);
    ctx.gpr[7] = (0u | 37u);
    ctx.gpr[6] = (0u | 93u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(10740));
    goto L_08AB187C;
L_08AB187C:
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB18B8;
      }
      goto L_08AB1884;
    }
L_08AB1884:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08AB18A0u);
    ctx.gpr[5] = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 229u, 0x0889D1FCu>(ctx, &aot_mem) && ctx.pc == 0x08AB18A0u) goto L_08AB18A0;
    return;
L_08AB18A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (0u | 93u);
    ctx.gpr[7] = (0u | 37u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AB18B8;
L_08AB18B8:
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[2] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[7];
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08AB18E0;
      }
      goto L_08AB18CC;
    }
L_08AB18CC:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB18E0;
      }
      goto L_08AB18D4;
    }
L_08AB18D4:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[2] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    goto L_08AB18E0;
L_08AB18E0:
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08AB187C;
      }
      goto L_08AB18E8;
    }
L_08AB18E8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB18F4:
    ctx.gpr[6] = (2234u << 16u);
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(14520));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (ctx.gpr[6] & 1u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AB191C;
      }
      goto L_08AB1914;
    }
L_08AB1914:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08AB191C;
      }
      goto L_08AB191C;
    }
L_08AB191C:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-97));
    ctx.gpr[9] = (ctx.gpr[8] < static_cast<std::uint32_t>(26) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB1A04;
      }
      goto L_08AB192C;
    }
L_08AB192C:
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[8]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(11040)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB1944:
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (ctx.gpr[6] & 2u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
      if (branch_taken) {
          goto L_08AB1A10;
      }
      goto L_08AB1958;
    }
L_08AB1958:
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (ctx.gpr[6] & 2u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
      if (branch_taken) {
          goto L_08AB1A10;
      }
      goto L_08AB196C;
    }
L_08AB196C:
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (ctx.gpr[6] & 2u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
      if (branch_taken) {
          goto L_08AB1A10;
      }
      goto L_08AB1980;
    }
L_08AB1980:
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (ctx.gpr[6] & 2u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
      if (branch_taken) {
          goto L_08AB1A10;
      }
      goto L_08AB1994;
    }
L_08AB1994:
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (ctx.gpr[6] & 2u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
      if (branch_taken) {
          goto L_08AB1A10;
      }
      goto L_08AB19A8;
    }
L_08AB19A8:
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (ctx.gpr[6] & 2u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
      if (branch_taken) {
          goto L_08AB1A10;
      }
      goto L_08AB19BC;
    }
L_08AB19BC:
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (ctx.gpr[6] & 2u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
      if (branch_taken) {
          goto L_08AB1A10;
      }
      goto L_08AB19D0;
    }
L_08AB19D0:
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (ctx.gpr[6] & 2u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
      if (branch_taken) {
          goto L_08AB1A10;
      }
      goto L_08AB19E4;
    }
L_08AB19E4:
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (ctx.gpr[6] & 2u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 68u);
      if (branch_taken) {
          goto L_08AB1A10;
      }
      goto L_08AB19F8;
    }
L_08AB19F8:
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[6] & 2u);
      if (branch_taken) {
          goto L_08AB1A10;
      }
      goto L_08AB1A04;
    }
L_08AB1A04:
    ctx.gpr[2] = (ctx.gpr[4] ^ ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB1A1C;
      }
      goto L_08AB1A10;
    }
L_08AB1A10:
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[2] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
        goto L_08AB1A1C;
    }
    goto L_08AB1A1C;
L_08AB1A1C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB1A24:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[8] = (0u | 94u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AB1A68;
      }
      goto L_08AB1A60;
    }
L_08AB1A60:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08AB1A68;
L_08AB1A68:
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (0u | 37u);
      if (branch_taken) {
          goto L_08AB1AB0;
      }
      goto L_08AB1A78;
    }
L_08AB1A78:
    ctx.gpr[20] = (0u | 45u);
    goto L_08AB1A7C;
L_08AB1A7C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08AB1AC0;
      }
      goto L_08AB1A88;
    }
L_08AB1A88:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[31] = (0x08AB1A98u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08AB18F4;
L_08AB1A98:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB1AB8;
      }
      goto L_08AB1AA0;
    }
L_08AB1AA0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB1A7C;
      }
      goto L_08AB1AB0;
    }
L_08AB1AB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[19] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB1B1C;
      }
      goto L_08AB1AB8;
    }
L_08AB1AB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08AB1B1C;
      }
      goto L_08AB1AC0;
    }
L_08AB1AC0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AB1B0C;
      }
      goto L_08AB1ACC;
    }
L_08AB1ACC:
    ctx.gpr[6] = (ctx.gpr[4] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB1B0C;
      }
      goto L_08AB1AD8;
    }
L_08AB1AD8:
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-2))))));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB1AA0;
      }
      goto L_08AB1AF0;
    }
L_08AB1AF0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB1AA0;
      }
      goto L_08AB1B04;
    }
L_08AB1B04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08AB1B1C;
      }
      goto L_08AB1B0C;
    }
L_08AB1B0C:
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08AB1AA0;
      }
      goto L_08AB1B18;
    }
L_08AB1B18:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
    goto L_08AB1B1C;
L_08AB1B1C:
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
L_08AB1B40:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (0u | 91u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[9];
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08AB1B90;
      }
      goto L_08AB1B60;
    }
L_08AB1B60:
    ctx.gpr[4] = (0u | 46u);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 37u);
      if (branch_taken) {
          goto L_08AB1B88;
      }
      goto L_08AB1B6C;
    }
L_08AB1B6C:
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AB1BA8;
      }
      goto L_08AB1B74;
    }
L_08AB1B74:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[31] = (0x08AB1B80u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    goto L_08AB18F4;
L_08AB1B80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB1BB4;
      }
      goto L_08AB1B88;
    }
L_08AB1B88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AB1BB4;
      }
      goto L_08AB1B90;
    }
L_08AB1B90:
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08AB1BA0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    goto L_08AB1A24;
L_08AB1BA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB1BB4;
      }
      goto L_08AB1BA8;
    }
L_08AB1BA8:
    ctx.gpr[4] = (ctx.gpr[7] & 255u);
    ctx.gpr[2] = (ctx.gpr[4] ^ ctx.gpr[6]);
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    goto L_08AB1BB4;
L_08AB1BB4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB1BC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB1BE0;
      }
      goto L_08AB1BD4;
    }
L_08AB1BD4:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1))))));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB1C0C;
      }
      goto L_08AB1BE0;
    }
L_08AB1BE0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08AB1BFCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10772));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 229u, 0x0889D1FCu>(ctx, &aot_mem) && ctx.pc == 0x08AB1BFCu) goto L_08AB1BFC;
    return;
L_08AB1BFC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_08AB1C0C;
L_08AB1C0C:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08AB1C20;
      }
      goto L_08AB1C18;
    }
L_08AB1C18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB1C84;
      }
      goto L_08AB1C20;
    }
L_08AB1C20:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_08AB1C80;
      }
      goto L_08AB1C38;
    }
L_08AB1C38:
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AB1C70;
      }
      goto L_08AB1C48;
    }
L_08AB1C48:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB1C68;
      }
      goto L_08AB1C54;
    }
L_08AB1C54:
    ctx.gpr[9] = (ctx.gpr[2] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AB1C38;
      }
      goto L_08AB1C60;
    }
L_08AB1C60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB1C80;
      }
      goto L_08AB1C68;
    }
L_08AB1C68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB1C84;
      }
      goto L_08AB1C70;
    }
L_08AB1C70:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08AB1C54;
      }
      goto L_08AB1C78;
    }
L_08AB1C78:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AB1C54;
      }
      goto L_08AB1C80;
    }
L_08AB1C80:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AB1C84;
L_08AB1C84:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB1C90:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (ctx.gpr[18] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[8] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[20] = (ctx.gpr[6] | 0u);
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    goto L_08AB1CCC;
L_08AB1CCC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_08AB1D04;
      }
      goto L_08AB1CD4;
    }
L_08AB1CD4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[31] = (0x08AB1CE8u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    goto L_08AB1B40;
L_08AB1CE8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB1D04;
      }
      goto L_08AB1CF0;
    }
L_08AB1CF0:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB1CCC;
      }
      goto L_08AB1D04;
    }
L_08AB1D04:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AB1D38;
      }
      goto L_08AB1D0C;
    }
L_08AB1D0C:
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AB1D1Cu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    goto L_08AB2D68;
L_08AB1D1C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB1D2C;
      }
      goto L_08AB1D24;
    }
L_08AB1D24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB1D3C;
      }
      goto L_08AB1D2C;
    }
L_08AB1D2C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AB1D0C;
      }
      goto L_08AB1D38;
    }
L_08AB1D38:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AB1D3C;
L_08AB1D3C:
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
L_08AB1D5C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    goto L_08AB1D8C;
L_08AB1D8C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AB1D9Cu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    goto L_08AB2D68;
L_08AB1D9C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB1DE0;
      }
      goto L_08AB1DA4;
    }
L_08AB1DA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB1DD8;
      }
      goto L_08AB1DB4;
    }
L_08AB1DB4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[31] = (0x08AB1DC8u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08AB1B40;
L_08AB1DC8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB1DD8;
      }
      goto L_08AB1DD0;
    }
L_08AB1DD0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AB1DE8;
      }
      goto L_08AB1DD8;
    }
L_08AB1DD8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB1DF0;
      }
      goto L_08AB1DE0;
    }
L_08AB1DE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB1DF0;
      }
      goto L_08AB1DE8;
    }
L_08AB1DE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB1D8C;
      }
      goto L_08AB1DF0;
    }
L_08AB1DF0:
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
L_08AB1E10:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[9] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[7]) < 32 ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[9] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08AB1E70;
      }
      goto L_08AB1E40;
    }
L_08AB1E40:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[31] = (0x08AB1E60u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10792));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 229u, 0x0889D1FCu>(ctx, &aot_mem) && ctx.pc == 0x08AB1E60u) goto L_08AB1E60;
    return;
L_08AB1E60:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AB1E70;
L_08AB1E70:
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] << 3u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB1E9Cu);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    goto L_08AB2D68;
L_08AB1E9C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB1EB0;
      }
      goto L_08AB1EA4;
    }
L_08AB1EA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    goto L_08AB1EB0;
L_08AB1EB0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB1EC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB1EE8u);
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    goto L_08AB1778;
L_08AB1EE8:
    ctx.gpr[16] = (ctx.gpr[2] << 3u);
    ctx.gpr[16] = (ctx.gpr[18] + ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[19] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AB1F0Cu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_08AB2D68;
L_08AB1F0C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB1F1C;
      }
      goto L_08AB1F14;
    }
L_08AB1F14:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    goto L_08AB1F1C;
L_08AB1F1C:
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
L_08AB1F38:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB1F58u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_08AB171C;
L_08AB1F58:
    ctx.gpr[4] = (ctx.gpr[2] << 3u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB1F98;
      }
      goto L_08AB1F78;
    }
L_08AB1F78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB1F88u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 23u, 0x08B58100u>(ctx, &aot_mem) && ctx.pc == 0x08AB1F88u) goto L_08AB1F88;
    return;
L_08AB1F88:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB1F98;
      }
      goto L_08AB1F90;
    }
L_08AB1F90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_08AB1F9C;
      }
      goto L_08AB1F98;
    }
L_08AB1F98:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AB1F9C;
L_08AB1F9C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB1FB0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08AB1FF4;
      }
      goto L_08AB1FE0;
    }
L_08AB1FE0:
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB1FFC;
      }
      goto L_08AB1FEC;
    }
L_08AB1FEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB2064;
      }
      goto L_08AB1FF4;
    }
L_08AB1FF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08AB2064;
      }
      goto L_08AB1FFC;
    }
L_08AB1FFC:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (ctx.gpr[18] - ctx.gpr[16]);
    goto L_08AB2004;
L_08AB2004:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB205C;
      }
      goto L_08AB200C;
    }
L_08AB200C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AB201Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 18u, 0x08B580BCu>(ctx, &aot_mem) && ctx.pc == 0x08AB201Cu) goto L_08AB201C;
    return;
L_08AB201C:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB205C;
      }
      goto L_08AB2028;
    }
L_08AB2028:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AB203Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 23u, 0x08B58100u>(ctx, &aot_mem) && ctx.pc == 0x08AB203Cu) goto L_08AB203C;
    return;
L_08AB203C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB2054;
      }
      goto L_08AB2044;
    }
L_08AB2044:
    ctx.gpr[4] = (ctx.gpr[20] - ctx.gpr[19]);
    ctx.gpr[18] = (ctx.gpr[18] - ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08AB2004;
      }
      goto L_08AB2054;
    }
L_08AB2054:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[20] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AB2064;
      }
      goto L_08AB205C;
    }
L_08AB205C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB2064;
      }
      goto L_08AB2064;
    }
L_08AB2064:
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
L_08AB2084:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (ctx.gpr[5] << 3u);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[8];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08AB20D4;
      }
      goto L_08AB20A4;
    }
L_08AB20A4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(10812));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AB20C4u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 229u, 0x0889D1FCu>(ctx, &aot_mem) && ctx.pc == 0x08AB20C4u) goto L_08AB20C4;
    return;
L_08AB20C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_08AB20D4;
L_08AB20D4:
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[8];
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08AB2104;
      }
      goto L_08AB20E0;
    }
L_08AB20E0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x08AB20FCu);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x08AB20FCu) goto L_08AB20FC;
    return;
L_08AB20FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB2110;
      }
      goto L_08AB2104;
    }
L_08AB2104:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AB2110u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x08AB2110u) goto L_08AB2110;
    return;
L_08AB2110:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB211C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB2150u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(10792));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 265u, 0x0889D420u>(ctx, &aot_mem) && ctx.pc == 0x08AB2150u) goto L_08AB2150;
    return;
L_08AB2150:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB2164;
      }
      goto L_08AB215C;
    }
L_08AB215C:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB217C;
      }
      goto L_08AB2164;
    }
L_08AB2164:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB2194;
      }
      goto L_08AB2174;
    }
L_08AB2174:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB21B4;
      }
      goto L_08AB217C;
    }
L_08AB217C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[17] - ctx.gpr[18]);
    ctx.gpr[31] = (0x08AB218Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x08AB218Cu) goto L_08AB218C;
    return;
L_08AB218C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AB21B4;
      }
      goto L_08AB2194;
    }
L_08AB2194:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB21A0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08AB2084;
L_08AB21A0:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB2194;
      }
      goto L_08AB21B4;
    }
L_08AB21B4:
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
L_08AB21CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-320));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB2208u);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 277u, 0x0889D50Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB2208u) goto L_08AB2208;
    return;
L_08AB2208:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[21] = (0u | 2u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB2220u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 277u, 0x0889D50Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB2220u) goto L_08AB2220;
    return;
L_08AB2220:
    ctx.gpr[6] = (16256u << 16u);
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB2238u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 300u, 0x0889D684u>(ctx, &aot_mem) && ctx.pc == 0x08AB2238u) goto L_08AB2238;
    return;
L_08AB2238:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AB2248u);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AB1138;
L_08AB2248:
    ctx.gpr[22] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AB225C;
      }
      goto L_08AB2254;
    }
L_08AB2254:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB2270;
      }
      goto L_08AB225C;
    }
L_08AB225C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[22] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB2270;
      }
      goto L_08AB226C;
    }
L_08AB226C:
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
    goto L_08AB2270;
L_08AB2270:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB227Cu);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 368u, 0x08806AE0u>(ctx, &aot_mem) && ctx.pc == 0x08AB227Cu) goto L_08AB227C;
    return;
L_08AB227C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[20] = (ctx.gpr[22] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_08AB2298;
      }
      goto L_08AB2284;
    }
L_08AB2284:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2384));
    ctx.gpr[31] = (0x08AB2290u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 207u, 0x08B58C00u>(ctx, &aot_mem) && ctx.pc == 0x08AB2290u) goto L_08AB2290;
    return;
L_08AB2290:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB230C;
      }
      goto L_08AB2298;
    }
L_08AB2298:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[22]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AB22B0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    goto L_08AB1FB0;
L_08AB22B0:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB2304;
      }
      goto L_08AB22BC;
    }
L_08AB22BC:
    ctx.gpr[17] = (ctx.gpr[19] - ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB22D4u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x08AB22D4u) goto L_08AB22D4;
    return;
L_08AB22D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08AB22F4;
      }
      goto L_08AB22E8;
    }
L_08AB22E8:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08AB22F4;
L_08AB22F4:
    ctx.gpr[31] = (0x08AB22FCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x08AB22FCu) goto L_08AB22FC;
    return;
L_08AB22FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_08AB23C8;
      }
      goto L_08AB2304;
    }
L_08AB2304:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB23BC;
      }
      goto L_08AB230C;
    }
L_08AB230C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[6] = (0u | 94u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08AB232C;
      }
      goto L_08AB2324;
    }
L_08AB2324:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[21] = (ctx.gpr[17] | 0u);
    goto L_08AB232C;
L_08AB232C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    goto L_08AB233C;
L_08AB233C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AB2350u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    goto L_08AB2D68;
L_08AB2350:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB23A0;
      }
      goto L_08AB235C;
    }
L_08AB235C:
    ctx.gpr[4] = (ctx.gpr[20] - ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB2374u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x08AB2374u) goto L_08AB2374;
    return;
L_08AB2374:
    ctx.gpr[4] = (ctx.gpr[23] - ctx.gpr[18]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB2388u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x08AB2388u) goto L_08AB2388;
    return;
L_08AB2388:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AB2398u);
    ctx.gpr[6] = (0u | 0u);
    goto L_08AB211C;
L_08AB2398:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AB23C8;
      }
      goto L_08AB23A0;
    }
L_08AB23A0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AB23BC;
      }
      goto L_08AB23B4;
    }
L_08AB23B4:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB233C;
      }
      goto L_08AB23BC;
    }
L_08AB23BC:
    ctx.gpr[31] = (0x08AB23C4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 424u, 0x08806DA8u>(ctx, &aot_mem) && ctx.pc == 0x08AB23C4u) goto L_08AB23C4;
    return;
L_08AB23C4:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    goto L_08AB23C8;
L_08AB23C8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB23F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-304));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB241Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10002));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 375u, 0x08806B2Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB241Cu) goto L_08AB241C;
    return;
L_08AB241C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB242Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10002));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 387u, 0x08806BD8u>(ctx, &aot_mem) && ctx.pc == 0x08AB242Cu) goto L_08AB242C;
    return;
L_08AB242C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB243Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10003));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 375u, 0x08806B2Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB243Cu) goto L_08AB243C;
    return;
L_08AB243C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB245Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10004));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem) && ctx.pc == 0x08AB245Cu) goto L_08AB245C;
    return;
L_08AB245C:
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (20224u << 16u);
      if (branch_taken) {
          goto L_08AB2484;
      }
      goto L_08AB2478;
    }
L_08AB2478:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AB249C;
      }
      goto L_08AB2484;
    }
L_08AB2484:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[17] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[17]);
    goto L_08AB249C;
L_08AB249C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (ctx.gpr[18] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB2524;
      }
      goto L_08AB24B0;
    }
L_08AB24B0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AB24C4u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    goto L_08AB2D68;
L_08AB24C4:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB2510;
      }
      goto L_08AB24D0;
    }
L_08AB24D0:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[17];
    ctx.gpr[18] = (ctx.gpr[19] - ctx.gpr[18]);
      if (branch_taken) {
          goto L_08AB24DC;
      }
      goto L_08AB24D8;
    }
L_08AB24D8:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08AB24DC;
L_08AB24DC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB24ECu);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x08AB24ECu) goto L_08AB24EC;
    return;
L_08AB24EC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB24F8u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10004));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 320u, 0x088067C4u>(ctx, &aot_mem) && ctx.pc == 0x08AB24F8u) goto L_08AB24F8;
    return;
L_08AB24F8:
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AB2508u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    goto L_08AB211C;
L_08AB2508:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB2528;
      }
      goto L_08AB2510;
    }
L_08AB2510:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB24B0;
      }
      goto L_08AB2524;
    }
L_08AB2524:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AB2528;
L_08AB2528:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB2548:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB256Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 277u, 0x0889D50Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB256Cu) goto L_08AB256C;
    return;
L_08AB256C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x08AB257Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 277u, 0x0889D50Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB257Cu) goto L_08AB257C;
    return;
L_08AB257C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB2588u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 303u, 0x08806654u>(ctx, &aot_mem) && ctx.pc == 0x08AB2588u) goto L_08AB2588;
    return;
L_08AB2588:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x08AB2594u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x08AB2594u) goto L_08AB2594;
    return;
L_08AB2594:
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x08AB25A8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(9204));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 444u, 0x08806FA8u>(ctx, &aot_mem) && ctx.pc == 0x08AB25A8u) goto L_08AB25A8;
    return;
L_08AB25A8:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB25C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[20] = (ctx.gpr[7] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB260Cu);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 344u, 0x08806984u>(ctx, &aot_mem) && ctx.pc == 0x08AB260Cu) goto L_08AB260C;
    return;
L_08AB260C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB2718;
      }
      goto L_08AB2614;
    }
L_08AB2614:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AB2620u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 375u, 0x08806B2Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB2620u) goto L_08AB2620;
    return;
L_08AB2620:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AB2630u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 387u, 0x08806BD8u>(ctx, &aot_mem) && ctx.pc == 0x08AB2630u) goto L_08AB2630;
    return;
L_08AB2630:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[23] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2234u << 16u);
      if (branch_taken) {
          goto L_08AB2710;
      }
      goto L_08AB2644;
    }
L_08AB2644:
    ctx.gpr[30] = (ctx.gpr[4] + static_cast<std::uint32_t>(14520));
    ctx.gpr[21] = (0u | 37u);
    ctx.gpr[22] = (ctx.gpr[17] + static_cast<std::uint32_t>(1036));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(1));
    goto L_08AB2654;
L_08AB2654:
    ctx.gpr[20] = (ctx.gpr[18] + ctx.gpr[23]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[21];
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AB2694;
      }
      goto L_08AB2664;
    }
L_08AB2664:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[22] ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08AB2684;
    }
    goto L_08AB2674;
L_08AB2674:
    ctx.gpr[31] = (0x08AB267Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 429u, 0x0889DDECu>(ctx, &aot_mem) && ctx.pc == 0x08AB267Cu) goto L_08AB267C;
    return;
L_08AB267C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08AB2684;
L_08AB2684:
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AB2704;
      }
      goto L_08AB2694;
    }
L_08AB2694:
    ctx.gpr[20] = (ctx.gpr[18] + ctx.gpr[23]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[30] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] & 4u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AB26E4;
      }
      goto L_08AB26B4;
    }
L_08AB26B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[22] ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08AB26D4;
    }
    goto L_08AB26C4;
L_08AB26C4:
    ctx.gpr[31] = (0x08AB26CCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 429u, 0x0889DDECu>(ctx, &aot_mem) && ctx.pc == 0x08AB26CCu) goto L_08AB26CC;
    return;
L_08AB26CC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08AB26D4;
L_08AB26D4:
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AB2704;
      }
      goto L_08AB26E4;
    }
L_08AB26E4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AB26F0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AB171C;
L_08AB26F0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB26FCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_08AB2084;
L_08AB26FC:
    ctx.gpr[31] = (0x08AB2704u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 442u, 0x0889DEF0u>(ctx, &aot_mem) && ctx.pc == 0x08AB2704u) goto L_08AB2704;
    return;
L_08AB2704:
    ctx.gpr[4] = (ctx.gpr[23] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB2654;
      }
      goto L_08AB2710;
    }
L_08AB2710:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB2774;
      }
      goto L_08AB2718;
    }
L_08AB2718:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AB2724u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB2724u) goto L_08AB2724;
    return;
L_08AB2724:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AB2734u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    goto L_08AB211C;
L_08AB2734:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AB2744u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 508u, 0x08807644u>(ctx, &aot_mem) && ctx.pc == 0x08AB2744u) goto L_08AB2744;
    return;
L_08AB2744:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AB2750u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 344u, 0x08806984u>(ctx, &aot_mem) && ctx.pc == 0x08AB2750u) goto L_08AB2750;
    return;
L_08AB2750:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB2768;
      }
      goto L_08AB2758;
    }
L_08AB2758:
    ctx.gpr[31] = (0x08AB2760u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 442u, 0x0889DEF0u>(ctx, &aot_mem) && ctx.pc == 0x08AB2760u) goto L_08AB2760;
    return;
L_08AB2760:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB2774;
      }
      goto L_08AB2768;
    }
L_08AB2768:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AB2774u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 303u, 0x08806654u>(ctx, &aot_mem) && ctx.pc == 0x08AB2774u) goto L_08AB2774;
    return;
L_08AB2774:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB27A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1360));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1316), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1320), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1324), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1328), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1332), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1336), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1340), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1344), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1348), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1352), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB27E0u);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 277u, 0x0889D50Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB27E0u) goto L_08AB27E0;
    return;
L_08AB27E0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x08AB27F4u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 277u, 0x0889D50Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB27F4u) goto L_08AB27F4;
    return;
L_08AB27F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(276));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08AB281C;
      }
      goto L_08AB2810;
    }
L_08AB2810:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08AB281C;
L_08AB281C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB2828u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 300u, 0x0889D684u>(ctx, &aot_mem) && ctx.pc == 0x08AB2828u) goto L_08AB2828;
    return;
L_08AB2828:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[5] = (0u | 94u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[30] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AB2848;
      }
      goto L_08AB2840;
    }
L_08AB2840:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[23] = (0u | 1u);
    goto L_08AB2848;
L_08AB2848:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x08AB2854u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem) && ctx.pc == 0x08AB2854u) goto L_08AB2854;
    return;
L_08AB2854:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (2232u << 16u);
      if (branch_taken) {
          goto L_08AB288C;
      }
      goto L_08AB2860;
    }
L_08AB2860:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB286Cu);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 344u, 0x08806984u>(ctx, &aot_mem) && ctx.pc == 0x08AB286Cu) goto L_08AB286C;
    return;
L_08AB286C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AB289C;
      }
      goto L_08AB2874;
    }
L_08AB2874:
    ctx.gpr[31] = (0x08AB287Cu);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 324u, 0x08806888u>(ctx, &aot_mem) && ctx.pc == 0x08AB287Cu) goto L_08AB287C;
    return;
L_08AB287C:
    ctx.gpr[4] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AB289C;
      }
      goto L_08AB2888;
    }
L_08AB2888:
    ctx.gpr[6] = (2232u << 16u);
    goto L_08AB288C;
L_08AB288C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[31] = (0x08AB289Cu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(10832));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 201u, 0x0889CFFCu>(ctx, &aot_mem) && ctx.pc == 0x08AB289Cu) goto L_08AB289C;
    return;
L_08AB289C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1312), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB28ACu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 453u, 0x0889DFC8u>(ctx, &aot_mem) && ctx.pc == 0x08AB28ACu) goto L_08AB28AC;
    return;
L_08AB28AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AB2988;
      }
      goto L_08AB28CC;
    }
L_08AB28CC:
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(1312));
    goto L_08AB28D0;
L_08AB28D0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AB28E4u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    goto L_08AB2D68;
L_08AB28E4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB2908;
      }
      goto L_08AB28F0;
    }
L_08AB28F0:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AB2908u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    goto L_08AB25C0;
L_08AB2908:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[16] ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB2920;
      }
      goto L_08AB2910;
    }
L_08AB2910:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB2920;
      }
      goto L_08AB2918;
    }
L_08AB2918:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AB296C;
      }
      goto L_08AB2920;
    }
L_08AB2920:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB2964;
      }
      goto L_08AB2930;
    }
L_08AB2930:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[21] ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
        goto L_08AB294C;
    }
    goto L_08AB2940;
L_08AB2940:
    ctx.gpr[31] = (0x08AB2948u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 429u, 0x0889DDECu>(ctx, &aot_mem) && ctx.pc == 0x08AB2948u) goto L_08AB2948;
    return;
L_08AB2948:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    goto L_08AB294C;
L_08AB294C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08AB296C;
      }
      goto L_08AB2964;
    }
L_08AB2964:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB2988;
      }
      goto L_08AB296C;
    }
L_08AB296C:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB297C;
      }
      goto L_08AB2974;
    }
L_08AB2974:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB2988;
      }
      goto L_08AB297C;
    }
L_08AB297C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB28D0;
      }
      goto L_08AB2988;
    }
L_08AB2988:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1312)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AB29A0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 433u, 0x0889DE24u>(ctx, &aot_mem) && ctx.pc == 0x08AB29A0u) goto L_08AB29A0;
    return;
L_08AB29A0:
    ctx.gpr[31] = (0x08AB29A8u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 439u, 0x0889DEB8u>(ctx, &aot_mem) && ctx.pc == 0x08AB29A8u) goto L_08AB29A8;
    return;
L_08AB29A8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB29B8u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x08AB29B8u) goto L_08AB29B8;
    return;
L_08AB29B8:
    ctx.gpr[2] = (0u | 2u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1316)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1320)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1324)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1328)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1336)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1340)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1344)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1348)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1352)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1360));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB29EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB2A20u);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 277u, 0x0889D50Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB2A20u) goto L_08AB2A20;
    return;
L_08AB2A20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(1036));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (0u | 34u);
      if (branch_taken) {
          goto L_08AB2A40;
      }
      goto L_08AB2A38;
    }
L_08AB2A38:
    ctx.gpr[31] = (0x08AB2A40u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 429u, 0x0889DDECu>(ctx, &aot_mem) && ctx.pc == 0x08AB2A40u) goto L_08AB2A40;
    return;
L_08AB2A40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AB2B4C;
      }
      goto L_08AB2A60;
    }
L_08AB2A60:
    ctx.gpr[20] = (0u | 92u);
    ctx.gpr[21] = (0u | 10u);
    ctx.gpr[22] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2372));
    goto L_08AB2A6C;
L_08AB2A6C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08AB2AAC;
      }
      goto L_08AB2A78;
    }
L_08AB2A78:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08AB2AAC;
      }
      goto L_08AB2A80;
    }
L_08AB2A80:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08AB2AAC;
      }
      goto L_08AB2A88;
    }
L_08AB2A88:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB2B0C;
      }
      goto L_08AB2A90;
    }
L_08AB2A90:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AB2AA0u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 433u, 0x0889DE24u>(ctx, &aot_mem) && ctx.pc == 0x08AB2AA0u) goto L_08AB2AA0;
    return;
L_08AB2AA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AB2B40;
      }
      goto L_08AB2AAC;
    }
L_08AB2AAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[18] ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08AB2AC8;
    }
    goto L_08AB2ABC;
L_08AB2ABC:
    ctx.gpr[31] = (0x08AB2AC4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 429u, 0x0889DDECu>(ctx, &aot_mem) && ctx.pc == 0x08AB2AC4u) goto L_08AB2AC4;
    return;
L_08AB2AC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08AB2AC8;
L_08AB2AC8:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[18] ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08AB2AF0;
    }
    goto L_08AB2AE4;
L_08AB2AE4:
    ctx.gpr[31] = (0x08AB2AECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 429u, 0x0889DDECu>(ctx, &aot_mem) && ctx.pc == 0x08AB2AECu) goto L_08AB2AEC;
    return;
L_08AB2AEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08AB2AF0;
L_08AB2AF0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AB2B40;
      }
      goto L_08AB2B0C;
    }
L_08AB2B0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[18] ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08AB2B28;
    }
    goto L_08AB2B1C;
L_08AB2B1C:
    ctx.gpr[31] = (0x08AB2B24u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 429u, 0x0889DDECu>(ctx, &aot_mem) && ctx.pc == 0x08AB2B24u) goto L_08AB2B24;
    return;
L_08AB2B24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08AB2B28;
L_08AB2B28:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    goto L_08AB2B40;
L_08AB2B40:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AB2A6C;
      }
      goto L_08AB2B4C;
    }
L_08AB2B4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[18] ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08AB2B68;
    }
    goto L_08AB2B5C;
L_08AB2B5C:
    ctx.gpr[31] = (0x08AB2B64u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 429u, 0x0889DDECu>(ctx, &aot_mem) && ctx.pc == 0x08AB2B64u) goto L_08AB2B64;
    return;
L_08AB2B64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08AB2B68;
L_08AB2B68:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB2B9C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (2234u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[22] = (ctx.gpr[5] + static_cast<std::uint32_t>(14520));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    ctx.gpr[21] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2364));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    goto L_08AB2BE8;
L_08AB2BE8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AB2BF4u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 50u, 0x08B58294u>(ctx, &aot_mem) && ctx.pc == 0x08AB2BF4u) goto L_08AB2BF4;
    return;
L_08AB2BF4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB2C08;
      }
      goto L_08AB2BFC;
    }
L_08AB2BFC:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08AB2BE8;
      }
      goto L_08AB2C08;
    }
L_08AB2C08:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] & 4u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB2C3C;
      }
      goto L_08AB2C24;
    }
L_08AB2C24:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] & 4u);
    goto L_08AB2C3C;
L_08AB2C3C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB2C4C;
      }
      goto L_08AB2C44;
    }
L_08AB2C44:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    goto L_08AB2C4C;
L_08AB2C4C:
    ctx.gpr[5] = (0u | 46u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AB2CA8;
      }
      goto L_08AB2C58;
    }
L_08AB2C58:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[19] = (ctx.gpr[19] & 4u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB2C98;
      }
      goto L_08AB2C80;
    }
L_08AB2C80:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[19] = (ctx.gpr[19] & 4u);
    goto L_08AB2C98;
L_08AB2C98:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB2CA8;
      }
      goto L_08AB2CA0;
    }
L_08AB2CA0:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    goto L_08AB2CA8;
L_08AB2CA8:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (ctx.gpr[20] - ctx.gpr[17]);
      if (branch_taken) {
          goto L_08AB2CD0;
      }
      goto L_08AB2CC0;
    }
L_08AB2CC0:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB2CD0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10860));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 229u, 0x0889D1FCu>(ctx, &aot_mem) && ctx.pc == 0x08AB2CD0u) goto L_08AB2CD0;
    return;
L_08AB2CD0:
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB2CF0;
      }
      goto L_08AB2CE0;
    }
L_08AB2CE0:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB2CF0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10908));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 229u, 0x0889D1FCu>(ctx, &aot_mem) && ctx.pc == 0x08AB2CF0u) goto L_08AB2CF0;
    return;
L_08AB2CF0:
    ctx.gpr[4] = (0u | 37u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x08AB2D08u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 200u, 0x08B58BA0u>(ctx, &aot_mem) && ctx.pc == 0x08AB2D08u) goto L_08AB2D08;
    return;
L_08AB2D08:
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[22]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
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
L_08AB2D3C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-2356));
    ctx.gpr[7] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB2D58u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(10520));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 328u, 0x0889D80Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB2D58u) goto L_08AB2D58;
    return;
L_08AB2D58:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB2D68:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    goto L_08AB2D90;
L_08AB2D90:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(42) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB2F88;
      }
      goto L_08AB2DA0;
    }
L_08AB2DA0:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(11144)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB2DB8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[5] = (0u | 41u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AB2DE4;
      }
      goto L_08AB2DC8;
    }
L_08AB2DC8:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AB2DDCu);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-2));
    goto L_08AB1E10;
L_08AB2DDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB309C;
      }
      goto L_08AB2DE4;
    }
L_08AB2DE4:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AB2DF8u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08AB1E10;
L_08AB2DF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB309C;
      }
      goto L_08AB2E00;
    }
L_08AB2E00:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB2E10u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08AB1EC0;
L_08AB2E10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB309C;
      }
      goto L_08AB2E18;
    }
L_08AB2E18:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 99 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 102u);
      if (branch_taken) {
          goto L_08AB2E3C;
      }
      goto L_08AB2E28;
    }
L_08AB2E28:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 98 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB2F00;
      }
      goto L_08AB2E34;
    }
L_08AB2E34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB2E4C;
      }
      goto L_08AB2E3C;
    }
L_08AB2E3C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AB2E78;
      }
      goto L_08AB2E44;
    }
L_08AB2E44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB2F00;
      }
      goto L_08AB2E4C;
    }
L_08AB2E4C:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB2E5Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08AB1BC0;
L_08AB2E5C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB2E70;
      }
      goto L_08AB2E68;
    }
L_08AB2E68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AB2D90;
      }
      goto L_08AB2E70;
    }
L_08AB2E70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB309C;
      }
      goto L_08AB2E78;
    }
L_08AB2E78:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (0u | 91u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AB2E9C;
      }
      goto L_08AB2E8C;
    }
L_08AB2E8C:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08AB2E9Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10936));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 229u, 0x0889D1FCu>(ctx, &aot_mem) && ctx.pc == 0x08AB2E9Cu) goto L_08AB2E9C;
    return;
L_08AB2E9C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB2EA8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08AB17DC;
L_08AB2EA8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u | 0u);
    if (ctx.gpr[17] != ctx.gpr[5]) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-1))))));
        goto L_08AB2EBC;
    }
    goto L_08AB2EBC;
L_08AB2EBC:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[6] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08AB2ECCu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08AB1A24;
L_08AB2ECC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB2EF8;
      }
      goto L_08AB2ED4;
    }
L_08AB2ED4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[31] = (0x08AB2EE8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08AB1A24;
L_08AB2EE8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB2EF8;
      }
      goto L_08AB2EF0;
    }
L_08AB2EF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08AB2D90;
      }
      goto L_08AB2EF8;
    }
L_08AB2EF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB309C;
      }
      goto L_08AB2F00;
    }
L_08AB2F00:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[5] = (2234u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(14520));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB2F54;
      }
      goto L_08AB2F28;
    }
L_08AB2F28:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB2F38u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08AB1F38;
L_08AB2F38:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB2F4C;
      }
      goto L_08AB2F44;
    }
L_08AB2F44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AB2D90;
      }
      goto L_08AB2F4C;
    }
L_08AB2F4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB309C;
      }
      goto L_08AB2F54;
    }
L_08AB2F54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB2F88;
      }
      goto L_08AB2F5C;
    }
L_08AB2F5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08AB309C;
      }
      goto L_08AB2F64;
    }
L_08AB2F64:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB2F88;
      }
      goto L_08AB2F70;
    }
L_08AB2F70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (0u | 0u);
    if (ctx.gpr[17] == ctx.gpr[4]) {
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
        goto L_08AB2F80;
    }
    goto L_08AB2F80;
L_08AB2F80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB309C;
      }
      goto L_08AB2F88;
    }
L_08AB2F88:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB2F94u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08AB17DC;
L_08AB2F94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB2FC8;
      }
      goto L_08AB2FA8;
    }
L_08AB2FA8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[31] = (0x08AB2FBCu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    goto L_08AB1B40;
L_08AB2FBC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB2FC8;
      }
      goto L_08AB2FC4;
    }
L_08AB2FC4:
    ctx.gpr[20] = (0u | 1u);
    goto L_08AB2FC8;
L_08AB2FC8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 42 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 64 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB3080;
      }
      goto L_08AB2FD8;
    }
L_08AB2FD8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-42));
      if (branch_taken) {
          goto L_08AB3080;
      }
      goto L_08AB2FE0;
    }
L_08AB2FE0:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(11312)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB2FF8:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AB3014;
      }
      goto L_08AB3000;
    }
L_08AB3000:
    ctx.gpr[6] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x08AB300Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AB2D68;
L_08AB300C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB301C;
      }
      goto L_08AB3014;
    }
L_08AB3014:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AB2D90;
      }
      goto L_08AB301C;
    }
L_08AB301C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB309C;
      }
      goto L_08AB3024;
    }
L_08AB3024:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AB3038u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    goto L_08AB1C90;
L_08AB3038:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB309C;
      }
      goto L_08AB3040;
    }
L_08AB3040:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB305C;
      }
      goto L_08AB3048;
    }
L_08AB3048:
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AB305Cu);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    goto L_08AB1C90;
L_08AB305C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB309C;
      }
      goto L_08AB3064;
    }
L_08AB3064:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AB3078u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    goto L_08AB1D5C;
L_08AB3078:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB309C;
      }
      goto L_08AB3080;
    }
L_08AB3080:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB3094;
      }
      goto L_08AB3088;
    }
L_08AB3088:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08AB2D90;
      }
      goto L_08AB3094;
    }
L_08AB3094:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB309C;
      }
      goto L_08AB309C;
    }
L_08AB309C:
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
L_08AB30BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1616));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1592), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1580), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1584), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1588), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1596), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1600), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1604), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB30F0u);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 277u, 0x0889D50Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB30F0u) goto L_08AB30F0;
    return;
L_08AB30F0:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.gpr[17] = (ctx.gpr[18] + ctx.gpr[17]);
    ctx.gpr[31] = (0x08AB3108u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 453u, 0x0889DFC8u>(ctx, &aot_mem) && ctx.pc == 0x08AB3108u) goto L_08AB3108;
    return;
L_08AB3108:
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB33C0;
      }
      goto L_08AB3114;
    }
L_08AB3114:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (0u | 37u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AB3160;
      }
      goto L_08AB3124;
    }
L_08AB3124:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1040));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AB3144;
      }
      goto L_08AB3138;
    }
L_08AB3138:
    ctx.gpr[31] = (0x08AB3140u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 429u, 0x0889DDECu>(ctx, &aot_mem) && ctx.pc == 0x08AB3140u) goto L_08AB3140;
    return;
L_08AB3140:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    goto L_08AB3144;
L_08AB3144:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08AB33B4;
      }
      goto L_08AB3160;
    }
L_08AB3160:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (0u | 37u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1572), 0u);
        goto L_08AB31B0;
    }
    goto L_08AB3174;
L_08AB3174:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1040));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AB3194;
      }
      goto L_08AB3188;
    }
L_08AB3188:
    ctx.gpr[31] = (0x08AB3190u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 429u, 0x0889DDECu>(ctx, &aot_mem) && ctx.pc == 0x08AB3190u) goto L_08AB3190;
    return;
L_08AB3190:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    goto L_08AB3194;
L_08AB3194:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08AB33B4;
      }
      goto L_08AB31B0;
    }
L_08AB31B0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (2234u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(14520));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB31E8;
      }
      goto L_08AB31D8;
    }
L_08AB31D8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[5] = (0u | 36u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AB324C;
      }
      goto L_08AB31E8;
    }
L_08AB31E8:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(1040));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(1572));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB3200u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08AB2B9C;
L_08AB3200:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 69 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[18] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AB3234;
      }
      goto L_08AB3210;
    }
L_08AB3210:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 121 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-69));
      if (branch_taken) {
          goto L_08AB3234;
      }
      goto L_08AB321C;
    }
L_08AB321C:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(11400)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB3234:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB3244u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11008));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 229u, 0x0889D1FCu>(ctx, &aot_mem) && ctx.pc == 0x08AB3244u) goto L_08AB3244;
    return;
L_08AB3244:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB33CC;
      }
      goto L_08AB324C;
    }
L_08AB324C:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB325Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10972));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 229u, 0x0889D1FCu>(ctx, &aot_mem) && ctx.pc == 0x08AB325Cu) goto L_08AB325C;
    return;
L_08AB325C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB33CC;
      }
      goto L_08AB3264;
    }
L_08AB3264:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB3270u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 294u, 0x0889D610u>(ctx, &aot_mem) && ctx.pc == 0x08AB3270u) goto L_08AB3270;
    return;
L_08AB3270:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1060));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1040));
    ctx.gpr[31] = (0x08AB3284u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x08AB3284u) goto L_08AB3284;
    return;
L_08AB3284:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB3398;
      }
      goto L_08AB328C;
    }
L_08AB328C:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1060));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(1040));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB32A0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 294u, 0x0889D610u>(ctx, &aot_mem) && ctx.pc == 0x08AB32A0u) goto L_08AB32A0;
    return;
L_08AB32A0:
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (20224u << 16u);
      if (branch_taken) {
          goto L_08AB32C8;
      }
      goto L_08AB32BC;
    }
L_08AB32BC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AB32E0;
      }
      goto L_08AB32C8;
    }
L_08AB32C8:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08AB32E0;
L_08AB32E0:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AB32F0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x08AB32F0u) goto L_08AB32F0;
    return;
L_08AB32F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB3398;
      }
      goto L_08AB32F8;
    }
L_08AB32F8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB3304u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 294u, 0x0889D610u>(ctx, &aot_mem) && ctx.pc == 0x08AB3304u) goto L_08AB3304;
    return;
L_08AB3304:
    ctx.gpr[31] = (0x08AB330Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem) && ctx.pc == 0x08AB330Cu) goto L_08AB330C;
    return;
L_08AB330C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1060));
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1040));
    ctx.gpr[31] = (0x08AB3320u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x08AB3320u) goto L_08AB3320;
    return;
L_08AB3320:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB3398;
      }
      goto L_08AB3328;
    }
L_08AB3328:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB3338u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    goto L_08AB29EC;
L_08AB3338:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB33B4;
      }
      goto L_08AB3340;
    }
L_08AB3340:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(1576));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB3350u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 277u, 0x0889D50Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB3350u) goto L_08AB3350;
    return;
L_08AB3350:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1572)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AB3388;
      }
      goto L_08AB335C;
    }
L_08AB335C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1576)));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(100) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB3388;
      }
      goto L_08AB336C;
    }
L_08AB336C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB3378u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB3378u) goto L_08AB3378;
    return;
L_08AB3378:
    ctx.gpr[31] = (0x08AB3380u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 442u, 0x0889DEF0u>(ctx, &aot_mem) && ctx.pc == 0x08AB3380u) goto L_08AB3380;
    return;
L_08AB3380:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB33B4;
      }
      goto L_08AB3388;
    }
L_08AB3388:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1060));
    ctx.gpr[31] = (0x08AB3398u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1040));
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x08AB3398u) goto L_08AB3398;
    return;
L_08AB3398:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1060));
    ctx.gpr[31] = (0x08AB33A4u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x08AB33A4u) goto L_08AB33A4;
    return;
L_08AB33A4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AB33B4u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 433u, 0x0889DE24u>(ctx, &aot_mem) && ctx.pc == 0x08AB33B4u) goto L_08AB33B4;
    return;
L_08AB33B4:
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB3114;
      }
      goto L_08AB33C0;
    }
L_08AB33C0:
    ctx.gpr[31] = (0x08AB33C8u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 439u, 0x0889DEB8u>(ctx, &aot_mem) && ctx.pc == 0x08AB33C8u) goto L_08AB33C8;
    return;
L_08AB33C8:
    ctx.gpr[2] = (0u | 1u);
    goto L_08AB33CC;
L_08AB33CC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1580)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1584)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1588)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1592)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1596)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1600)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1604)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1616));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB33F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB3404u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 565u, 0x088BAB60u>(ctx, &aot_mem) && ctx.pc == 0x08AB3404u) goto L_08AB3404;
    return;
L_08AB3404:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32744));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB3424:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AB346C;
      }
      goto L_08AB3440;
    }
L_08AB3440:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32744));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AB3458u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 566u, 0x088BABB4u>(ctx, &aot_mem) && ctx.pc == 0x08AB3458u) goto L_08AB3458;
    return;
L_08AB3458:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB346C;
      }
      goto L_08AB3464;
    }
L_08AB3464:
    ctx.gpr[31] = (0x08AB346Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08AB346Cu) goto L_08AB346C;
    return;
L_08AB346C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB3480:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB3490u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 311u, 0x088BF13Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB3490u) goto L_08AB3490;
    return;
L_08AB3490:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB349C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08AB34D0;
      }
      goto L_08AB34C8;
    }
L_08AB34C8:
    ctx.gpr[31] = (0x08AB34D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem) && ctx.pc == 0x08AB34D0u) goto L_08AB34D0;
    return;
L_08AB34D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    ctx.gpr[31] = (0x08AB34DCu);
    ctx.gpr[5] = (ctx.gpr[17] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 553u, 0x08A52FF8u>(ctx, &aot_mem) && ctx.pc == 0x08AB34DCu) goto L_08AB34DC;
    return;
L_08AB34DC:
    ctx.gpr[31] = (0x08AB34E4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 480u, 0x08A52B40u>(ctx, &aot_mem) && ctx.pc == 0x08AB34E4u) goto L_08AB34E4;
    return;
L_08AB34E4:
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (0x08AB34FCu);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 10u, 0x08ADC0D4u>(ctx, &aot_mem) && ctx.pc == 0x08AB34FCu) goto L_08AB34FC;
    return;
L_08AB34FC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB350C;
      }
      goto L_08AB3504;
    }
L_08AB3504:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB3520;
      }
      goto L_08AB350C;
    }
L_08AB350C:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AB3520u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 56u, 0x088C05C0u>(ctx, &aot_mem) && ctx.pc == 0x08AB3520u) goto L_08AB3520;
    return;
L_08AB3520:
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
L_08AB3538:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (0u | 56u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[17] = (ctx.lo);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AB3574;
      }
      goto L_08AB356C;
    }
L_08AB356C:
    ctx.gpr[31] = (0x08AB3574u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem) && ctx.pc == 0x08AB3574u) goto L_08AB3574;
    return;
L_08AB3574:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AB35AC;
      }
      goto L_08AB35A4;
    }
L_08AB35A4:
    ctx.gpr[31] = (0x08AB35ACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AB35C8;
L_08AB35AC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB35C0:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB35C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[17] = (2237u << 16u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28736));
    goto L_08AB35F4;
L_08AB35F4:
    if (ctx.gpr[18] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
        goto L_08AB360C;
    }
    goto L_08AB35FC;
L_08AB35FC:
    ctx.gpr[31] = (0x08AB3604u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem) && ctx.pc == 0x08AB3604u) goto L_08AB3604;
    return;
L_08AB3604:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    goto L_08AB360C;
L_08AB360C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB3694;
      }
      goto L_08AB3634;
    }
L_08AB3634:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[5] = (ctx.gpr[19] & 255u);
      if (branch_taken) {
          goto L_08AB364C;
      }
      goto L_08AB363C;
    }
L_08AB363C:
    ctx.gpr[31] = (0x08AB3644u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem) && ctx.pc == 0x08AB3644u) goto L_08AB3644;
    return;
L_08AB3644:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    ctx.gpr[5] = (ctx.gpr[19] & 255u);
    goto L_08AB364C;
L_08AB364C:
    ctx.gpr[31] = (0x08AB3654u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 561u, 0x08A53098u>(ctx, &aot_mem) && ctx.pc == 0x08AB3654u) goto L_08AB3654;
    return;
L_08AB3654:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AB3688;
      }
      goto L_08AB366C;
    }
L_08AB366C:
    ctx.gpr[31] = (0x08AB3674u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 620u, 0x088BAF70u>(ctx, &aot_mem) && ctx.pc == 0x08AB3674u) goto L_08AB3674;
    return;
L_08AB3674:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB3688;
      }
      goto L_08AB367C;
    }
L_08AB367C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AB3688u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 15u, 0x088BC128u>(ctx, &aot_mem) && ctx.pc == 0x08AB3688u) goto L_08AB3688;
    return;
L_08AB3688:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
      if (branch_taken) {
          goto L_08AB35F4;
      }
      goto L_08AB3694;
    }
L_08AB3694:
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
L_08AB36B0:
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
L_08AB36D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(30))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(30))))));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-3));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(30))))));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-5));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(30))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(30))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    goto L_08AB3774;
L_08AB3774:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(816), 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AB3774;
      }
      goto L_08AB3788;
    }
L_08AB3788:
    ctx.gpr[31] = (0x08AB3790u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 27u, 0x08AB4198u>(ctx, &aot_mem) && ctx.pc == 0x08AB3790u) goto L_08AB3790;
    return;
L_08AB3790:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB379C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB37B0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 16u, 0x08AB4098u>(ctx, &aot_mem) && ctx.pc == 0x08AB37B0u) goto L_08AB37B0;
    return;
L_08AB37B0:
    ctx.gpr[31] = (0x08AB37B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AB36D8;
L_08AB37B8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB37C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AB3800;
      }
      goto L_08AB37E0;
    }
L_08AB37E0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(20000));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB3808;
      }
      goto L_08AB37F8;
    }
L_08AB37F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB3814;
      }
      goto L_08AB3800;
    }
L_08AB3800:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB3984;
      }
      goto L_08AB3808;
    }
L_08AB3808:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    goto L_08AB3814;
L_08AB3814:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1001) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB3984;
      }
      goto L_08AB3828;
    }
L_08AB3828:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB3888;
      }
      goto L_08AB3838;
    }
L_08AB3838:
    ctx.gpr[31] = (0x08AB3840u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem) && ctx.pc == 0x08AB3840u) goto L_08AB3840;
    return;
L_08AB3840:
    ctx.gpr[5] = (16784u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08AB3850u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 62u, 0x08AB437Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB3850u) goto L_08AB3850;
    return;
L_08AB3850:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB3880;
      }
      goto L_08AB3858;
    }
L_08AB3858:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (0u | 0u);
        goto L_08AB3874;
    }
    goto L_08AB3874;
L_08AB3874:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AB3880u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AB3994;
L_08AB3880:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB388C;
      }
      goto L_08AB3888;
    }
L_08AB3888:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_08AB388C;
L_08AB388C:
    ctx.gpr[31] = (0x08AB3894u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 50u, 0x08AB42A4u>(ctx, &aot_mem) && ctx.pc == 0x08AB3894u) goto L_08AB3894;
    return;
L_08AB3894:
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08AB38A4;
L_08AB38A4:
    ctx.gpr[8] = (ctx.gpr[7] << 2u);
    ctx.gpr[8] = (ctx.gpr[16] + ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(816)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB38CC;
      }
      goto L_08AB38B8;
    }
L_08AB38B8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08AB38D0;
      }
      goto L_08AB38C4;
    }
L_08AB38C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08AB38D0;
      }
      goto L_08AB38CC;
    }
L_08AB38CC:
    ctx.gpr[6] = (0u | 1u);
    goto L_08AB38D0;
L_08AB38D0:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB38A4;
      }
      goto L_08AB38E4;
    }
L_08AB38E4:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08AB38F4;
      }
      goto L_08AB38F0;
    }
L_08AB38F0:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08AB38F4;
L_08AB38F4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB3984;
      }
      goto L_08AB38FC;
    }
L_08AB38FC:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (0u | 0u);
    goto L_08AB3904;
L_08AB3904:
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(816)));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB3970;
      }
      goto L_08AB3918;
    }
L_08AB3918:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB3960;
      }
      goto L_08AB3928;
    }
L_08AB3928:
    ctx.gpr[8] = (ctx.gpr[7] << 2u);
    ctx.gpr[8] = (ctx.gpr[16] + ctx.gpr[8]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(816)));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB394C;
      }
      goto L_08AB393C;
    }
L_08AB393C:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(816), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(816), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB3960;
      }
      goto L_08AB394C;
    }
L_08AB394C:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB3928;
      }
      goto L_08AB3960;
    }
L_08AB3960:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB3970;
      }
      goto L_08AB3968;
    }
L_08AB3968:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB3984;
      }
      goto L_08AB3970;
    }
L_08AB3970:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB3904;
      }
      goto L_08AB3984;
    }
L_08AB3984:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB3994:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB39C0;
      }
      goto L_08AB39A0;
    }
L_08AB39A0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2324)));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08AB39C8;
      }
      goto L_08AB39B8;
    }
L_08AB39B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB39D0;
      }
      goto L_08AB39C0;
    }
L_08AB39C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB3B80;
      }
      goto L_08AB39C8;
    }
L_08AB39C8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[8] | 0u);
    goto L_08AB39D0;
L_08AB39D0:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4800 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB3A10;
      }
      goto L_08AB39DC;
    }
L_08AB39DC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9332)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(6));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9332), ctx.gpr[5]);
    ctx.gpr[7] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    ctx.gpr[5] = (0u | 4u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 10u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 30u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08AB3B70;
      }
      goto L_08AB3A10;
    }
L_08AB3A10:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2400 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB3A50;
      }
      goto L_08AB3A1C;
    }
L_08AB3A1C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9332)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9332), ctx.gpr[5]);
    ctx.gpr[7] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    ctx.gpr[5] = (0u | 4u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 8u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 24u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08AB3B70;
      }
      goto L_08AB3A50;
    }
L_08AB3A50:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < 1200 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB3A90;
      }
      goto L_08AB3A5C;
    }
L_08AB3A5C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9332)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9332), ctx.gpr[5]);
    ctx.gpr[7] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    ctx.gpr[5] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 6u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 18u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08AB3B70;
      }
      goto L_08AB3A90;
    }
L_08AB3A90:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < 550 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB3AD0;
      }
      goto L_08AB3A9C;
    }
L_08AB3A9C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9332)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(3));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9332), ctx.gpr[5]);
    ctx.gpr[7] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    ctx.gpr[5] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 4u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 12u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08AB3B70;
      }
      goto L_08AB3AD0;
    }
L_08AB3AD0:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < 180 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB3B0C;
      }
      goto L_08AB3ADC;
    }
L_08AB3ADC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9332)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9332), ctx.gpr[5]);
    ctx.gpr[7] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[5]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          goto L_08AB3B70;
      }
      goto L_08AB3B0C;
    }
L_08AB3B0C:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < 40 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08AB3B48;
      }
      goto L_08AB3B18;
    }
L_08AB3B18:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9332)));
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[7] = (ctx.gpr[8] - ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9332), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[7] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AB3B70;
      }
      goto L_08AB3B48;
    }
L_08AB3B48:
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AB3B5C;
      }
      goto L_08AB3B50;
    }
L_08AB3B50:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9336)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9336), ctx.gpr[5]);
    goto L_08AB3B5C;
L_08AB3B5C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(0u));
    ctx.gpr[7] = (0u | 0u);
    goto L_08AB3B70;
L_08AB3B70:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08AB3B80;
      }
      goto L_08AB3B78;
    }
L_08AB3B78:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    goto L_08AB3B80;
L_08AB3B80:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB3B88:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[10] = (ctx.gpr[6] | 0u);
    ctx.gpr[9] = (ctx.gpr[7] | 0u);
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[5] = (ctx.gpr[10] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.gpr[4] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_08AB3BBC;
      }
      goto L_08AB3BB4;
    }
L_08AB3BB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB3BDC;
      }
      goto L_08AB3BBC;
    }
L_08AB3BBC:
    ctx.gpr[9] = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    ctx.gpr[31] = (0x08AB3BDCu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 30u, 0x08AB41B8u>(ctx, &aot_mem) && ctx.pc == 0x08AB3BDCu) goto L_08AB3BDC;
    return;
L_08AB3BDC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB3BE8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[8] & 255u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08AB3C48;
      }
      goto L_08AB3C1C;
    }
L_08AB3C1C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08AB3C38u);
    ctx.gpr[9] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 30u, 0x08AB41B8u>(ctx, &aot_mem) && ctx.pc == 0x08AB3C38u) goto L_08AB3C38;
    return;
L_08AB3C38:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB3C50;
      }
      goto L_08AB3C40;
    }
L_08AB3C40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB3C64;
      }
      goto L_08AB3C48;
    }
L_08AB3C48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB3C64;
      }
      goto L_08AB3C50;
    }
L_08AB3C50:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB3C64u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 107u, 0x08AB4688u>(ctx, &aot_mem) && ctx.pc == 0x08AB3C64u) goto L_08AB3C64;
    return;
L_08AB3C64:
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
L_08AB3C80:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AB3CB8;
      }
      goto L_08AB3CA0;
    }
L_08AB3CA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2328)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB3CC0;
      }
      goto L_08AB3CB0;
    }
L_08AB3CB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB3CC4;
      }
      goto L_08AB3CB8;
    }
L_08AB3CB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB3D48;
      }
      goto L_08AB3CC0;
    }
L_08AB3CC0:
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08AB3CC4;
L_08AB3CC4:
    ctx.gpr[31] = (0x08AB3CCCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 27u, 0x08AB4198u>(ctx, &aot_mem) && ctx.pc == 0x08AB3CCCu) goto L_08AB3CCC;
    return;
L_08AB3CCC:
    ctx.gpr[4] = (ctx.gpr[16] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB3D40;
      }
      goto L_08AB3CD8;
    }
L_08AB3CD8:
    ctx.gpr[16] = (ctx.gpr[16] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[16]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(11656)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB3CF0:
    ctx.gpr[4] = (0u | 60u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AB3D40;
      }
      goto L_08AB3CFC;
    }
L_08AB3CFC:
    ctx.gpr[4] = (0u | 200u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AB3D40;
      }
      goto L_08AB3D08;
    }
L_08AB3D08:
    ctx.gpr[4] = (0u | 570u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AB3D40;
      }
      goto L_08AB3D14;
    }
L_08AB3D14:
    ctx.gpr[4] = (0u | 1220u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AB3D40;
      }
      goto L_08AB3D20;
    }
L_08AB3D20:
    ctx.gpr[4] = (0u | 2420u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AB3D40;
      }
      goto L_08AB3D2C;
    }
L_08AB3D2C:
    ctx.gpr[4] = (0u | 4820u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AB3D40;
      }
      goto L_08AB3D38;
    }
L_08AB3D38:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08AB3D40;
      }
      goto L_08AB3D40;
    }
L_08AB3D40:
    ctx.gpr[31] = (0x08AB3D48u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AB3994;
L_08AB3D48:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB3D5C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AB3D84;
      }
      goto L_08AB3D7C;
    }
L_08AB3D7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB3DA0;
      }
      goto L_08AB3D84;
    }
L_08AB3D84:
    ctx.gpr[31] = (0x08AB3D8Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AB3E3C;
L_08AB3D8C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AB3D98u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AB3C80;
L_08AB3D98:
    ctx.gpr[31] = (0x08AB3DA0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AB3994;
L_08AB3DA0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB3DB4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AB3DF0;
      }
      goto L_08AB3DD4;
    }
L_08AB3DD4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB3DF8;
      }
      goto L_08AB3DE8;
    }
L_08AB3DE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB3E04;
      }
      goto L_08AB3DF0;
    }
L_08AB3DF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB3E28;
      }
      goto L_08AB3DF8;
    }
L_08AB3DF8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AB3E04u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AB3C80;
L_08AB3E04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB3E1C;
      }
      goto L_08AB3E14;
    }
L_08AB3E14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB3E28;
      }
      goto L_08AB3E1C;
    }
L_08AB3E1C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AB3E28u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AB3C80;
L_08AB3E28:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB3E3C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB3E6C;
      }
      goto L_08AB3E48;
    }
L_08AB3E48:
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB3EF8;
      }
      goto L_08AB3E54;
    }
L_08AB3E54:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(11688)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB3E6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB3EF8;
      }
      goto L_08AB3E74;
    }
L_08AB3E74:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2328), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 110u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2324), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AB3EF8;
      }
      goto L_08AB3E88;
    }
L_08AB3E88:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2328), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 365u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2324), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AB3EF8;
      }
      goto L_08AB3E9C;
    }
L_08AB3E9C:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2328), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 875u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2324), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AB3EF8;
      }
      goto L_08AB3EB0;
    }
L_08AB3EB0:
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2328), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1800u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2324), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AB3EF8;
      }
      goto L_08AB3EC4;
    }
L_08AB3EC4:
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2328), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3600u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2324), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AB3EF8;
      }
      goto L_08AB3ED8;
    }
L_08AB3ED8:
    ctx.gpr[4] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2328), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 7200u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2324), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AB3EF8;
      }
      goto L_08AB3EEC;
    }
L_08AB3EEC:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2328), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2324), 0u);
      if (branch_taken) {
          goto L_08AB3EF8;
      }
      goto L_08AB3EF8;
    }
L_08AB3EF8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB3F00:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB3F14;
      }
      goto L_08AB3F0C;
    }
L_08AB3F0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB3F20;
      }
      goto L_08AB3F14;
    }
L_08AB3F14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    ctx.gpr[2] = (ctx.gpr[2] ^ 1u);
    goto L_08AB3F20;
L_08AB3F20:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB3F28:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB3F4C;
      }
      goto L_08AB3F34;
    }
L_08AB3F34:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB3F60;
      }
      goto L_08AB3F44;
    }
L_08AB3F44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(30))))));
      if (branch_taken) {
          goto L_08AB3F54;
      }
      goto L_08AB3F4C;
    }
L_08AB3F4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB3F68;
      }
      goto L_08AB3F54;
    }
L_08AB3F54:
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB3F64;
      }
      goto L_08AB3F60;
    }
L_08AB3F60:
    ctx.gpr[5] = (0u | 1u);
    goto L_08AB3F64;
L_08AB3F64:
    ctx.gpr[2] = (ctx.gpr[5] & 255u);
    goto L_08AB3F68;
L_08AB3F68:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB3F70:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB3F94;
      }
      goto L_08AB3F7C;
    }
L_08AB3F7C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB3FA8;
      }
      goto L_08AB3F8C;
    }
L_08AB3F8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(30))))));
      if (branch_taken) {
          goto L_08AB3F9C;
      }
      goto L_08AB3F94;
    }
L_08AB3F94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB3FB0;
      }
      goto L_08AB3F9C;
    }
L_08AB3F9C:
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB3FAC;
      }
      goto L_08AB3FA8;
    }
L_08AB3FA8:
    ctx.gpr[5] = (0u | 1u);
    goto L_08AB3FAC;
L_08AB3FAC:
    ctx.gpr[2] = (ctx.gpr[5] & 255u);
    goto L_08AB3FB0;
L_08AB3FB0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB3FB8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB3FDC;
      }
      goto L_08AB3FC4;
    }
L_08AB3FC4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB3FF0;
      }
      goto L_08AB3FD4;
    }
L_08AB3FD4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(30))))));
      if (branch_taken) {
          goto L_08AB3FE4;
      }
      goto L_08AB3FDC;
    }
L_08AB3FDC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB3FF8;
      }
      goto L_08AB3FE4;
    }
L_08AB3FE4:
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB3FF4;
      }
      goto L_08AB3FF0;
    }
L_08AB3FF0:
    ctx.gpr[5] = (0u | 1u);
    goto L_08AB3FF4;
L_08AB3FF4:
    ctx.gpr[2] = (ctx.gpr[5] & 255u);
    goto L_08AB3FF8;
L_08AB3FF8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void recomp_unit_0171(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0171_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_171(Runtime &runtime) {
    runtime.register_generated_unit(171u, 0x08AB0000u, 16384u, &recomp_unit_0171, &recomp_unit_0171_entry);
    runtime.register_function(0x08AB0000u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB001Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0038u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0050u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB005Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0064u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0078u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0088u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0094u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB00A8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB00B4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0100u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0180u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0190u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB01B0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB01BCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB01DCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB01ECu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB020Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0218u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0220u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0248u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0258u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0280u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB028Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB02A8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB02C8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB02DCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB02F0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0300u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0308u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0310u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0314u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0320u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB032Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0338u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0348u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0350u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0360u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB036Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB037Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB038Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0394u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB03A8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB03C4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB03F4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0410u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0418u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB042Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB043Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0444u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB044Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0454u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0488u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB049Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB04C0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB04FCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0510u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0548u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0558u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0564u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0574u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB057Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0588u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0590u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB05A8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB05D0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB05DCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB05F8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0604u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0614u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB064Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0654u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0668u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0688u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB069Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB06F8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0724u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB073Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0754u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB076Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB078Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB07A4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB07B8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB07CCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB07E0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB07F4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0800u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0808u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0814u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0824u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB082Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0844u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0854u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0860u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0870u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB087Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0880u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0888u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB08B8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB08D0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB08D8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB08E0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB08E4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0900u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0908u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0928u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0934u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB094Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0950u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB096Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0984u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB09A0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB09B4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB09F0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB09F8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0A04u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0A10u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0A34u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0A58u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0A88u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0A98u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0AB0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0AB8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0AC0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0AC8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0AD0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0AD8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0AE0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0AE8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0AF0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0AF8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0B00u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0B08u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0B10u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0B18u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0B24u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0B2Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0B34u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0B3Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0B44u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0B4Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0B54u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0B5Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0B64u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0B6Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0B74u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0B7Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0B84u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0B8Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0B94u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0B9Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0BA4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0BACu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0BB4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0BBCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0BC4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0BCCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0BD4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0BDCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0BE4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0BECu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0BF4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0BFCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0C04u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0C0Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0C14u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0C1Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0C24u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0C2Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0C34u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0C3Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0C44u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0C4Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0C54u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0C5Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0C64u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0C6Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0C74u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0C7Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0C84u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0C8Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0C94u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0C9Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0CA4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0CACu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0CB4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0CBCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0CC4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0CCCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0CD4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0CDCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0CE4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0CECu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0CF4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0CFCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0D04u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0D0Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0D14u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0D1Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0D24u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0D2Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0D34u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0D3Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0D44u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0D4Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0D54u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0D5Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0D64u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0D6Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0D74u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0D7Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0D84u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0D8Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0D94u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0D9Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0DA4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0DACu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0DB4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0DBCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0DC4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0DCCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0DD4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0DDCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0DE4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0DECu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0DF4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0DFCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0E04u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0E0Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0E14u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0E1Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0E24u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0E2Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0E34u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0E3Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0E44u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0E4Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0E54u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0E5Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0E64u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0E6Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0E74u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0E7Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0E84u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0E8Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0E94u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0E9Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0EA4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0EACu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0EB4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0EBCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0EC4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0ECCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0ED4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0EDCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0EE4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0EECu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0EFCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0F04u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0F14u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0F30u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0F3Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0F54u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0F5Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0F64u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0F6Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0F74u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0F7Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0F84u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0F8Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0F98u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0FA0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0FA8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0FB0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0FB8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0FC4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0FCCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0FD4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0FDCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0FE4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0FECu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0FF4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB0FFCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1004u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB100Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1014u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1018u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1020u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1030u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1048u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1050u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1058u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1060u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1068u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1070u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1078u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1080u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1088u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1090u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1098u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB10A0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB10A8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB10B0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB10B8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB10C0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB10C8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB10D0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB10D8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB10FCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB110Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1118u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1120u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1138u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1140u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1148u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1150u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB117Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB118Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB119Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB11B4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB11C4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB11D4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB11D8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB11E4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB11E8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB11F4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB120Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1214u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1224u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1244u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1278u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB128Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB12A0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB12ACu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB12BCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB12C4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB12C8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB12E4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB12ECu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1310u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1318u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1340u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1374u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1388u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB139Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB13A8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB13B8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB13C0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB13C4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB13E0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB13E8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB140Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1414u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB143Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1470u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1480u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1498u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB14A4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB14B4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB14C4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB14CCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB14F4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB151Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1534u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1544u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1550u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1560u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1568u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1584u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1588u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB15A0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB15C8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB15D8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB15E4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB15ECu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB15F8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB160Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1618u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1628u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1630u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1650u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1658u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1680u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1690u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB16A0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB16C4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB16D0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB16E4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB16ECu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB16FCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1704u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB171Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1730u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1740u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1754u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1764u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB176Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1778u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1794u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB179Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB17A8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB17B8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB17C8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB17D0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB17DCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB17F4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1800u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB180Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1814u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1820u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1830u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1838u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1840u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1854u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1858u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1860u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB186Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB187Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1884u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB18A0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB18B8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB18CCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB18D4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB18E0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB18E8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB18F4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1914u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB191Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB192Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1944u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1958u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB196Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1980u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1994u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB19A8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB19BCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB19D0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB19E4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB19F8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1A04u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1A10u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1A1Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1A24u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1A60u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1A68u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1A78u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1A7Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1A88u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1A98u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1AA0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1AB0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1AB8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1AC0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1ACCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1AD8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1AF0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1B04u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1B0Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1B18u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1B1Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1B40u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1B60u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1B6Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1B74u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1B80u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1B88u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1B90u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1BA0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1BA8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1BB4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1BC0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1BD4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1BE0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1BFCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1C0Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1C18u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1C20u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1C38u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1C48u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1C54u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1C60u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1C68u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1C70u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1C78u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1C80u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1C84u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1C90u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1CCCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1CD4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1CE8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1CF0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1D04u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1D0Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1D1Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1D24u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1D2Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1D38u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1D3Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1D5Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1D8Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1D9Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1DA4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1DB4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1DC8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1DD0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1DD8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1DE0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1DE8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1DF0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1E10u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1E40u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1E60u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1E70u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1E9Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1EA4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1EB0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1EC0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1EE8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1F0Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1F14u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1F1Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1F38u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1F58u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1F78u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1F88u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1F90u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1F98u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1F9Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1FB0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1FE0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1FECu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1FF4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB1FFCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2004u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB200Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB201Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2028u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB203Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2044u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2054u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB205Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2064u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2084u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB20A4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB20C4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB20D4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB20E0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB20FCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2104u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2110u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB211Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2150u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB215Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2164u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2174u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB217Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB218Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2194u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB21A0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB21B4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB21CCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2208u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2220u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2238u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2248u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2254u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB225Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB226Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2270u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB227Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2284u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2290u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2298u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB22B0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB22BCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB22D4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB22E8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB22F4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB22FCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2304u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB230Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2324u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB232Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB233Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2350u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB235Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2374u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2388u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2398u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB23A0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB23B4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB23BCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB23C4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB23C8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB23F4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB241Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB242Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB243Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB245Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2478u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2484u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB249Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB24B0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB24C4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB24D0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB24D8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB24DCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB24ECu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB24F8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2508u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2510u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2524u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2528u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2548u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB256Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB257Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2588u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2594u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB25A8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB25C0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB260Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2614u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2620u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2630u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2644u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2654u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2664u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2674u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB267Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2684u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2694u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB26B4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB26C4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB26CCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB26D4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB26E4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB26F0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB26FCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2704u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2710u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2718u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2724u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2734u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2744u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2750u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2758u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2760u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2768u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2774u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB27A4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB27E0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB27F4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2810u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB281Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2828u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2840u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2848u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2854u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2860u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB286Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2874u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB287Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2888u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB288Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB289Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB28ACu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB28CCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB28D0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB28E4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB28F0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2908u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2910u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2918u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2920u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2930u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2940u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2948u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB294Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2964u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB296Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2974u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB297Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2988u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB29A0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB29A8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB29B8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB29ECu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2A20u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2A38u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2A40u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2A60u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2A6Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2A78u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2A80u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2A88u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2A90u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2AA0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2AACu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2ABCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2AC4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2AC8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2AE4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2AECu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2AF0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2B0Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2B1Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2B24u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2B28u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2B40u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2B4Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2B5Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2B64u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2B68u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2B9Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2BE8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2BF4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2BFCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2C08u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2C24u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2C3Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2C44u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2C4Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2C58u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2C80u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2C98u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2CA0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2CA8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2CC0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2CD0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2CE0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2CF0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2D08u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2D3Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2D58u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2D68u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2D90u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2DA0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2DB8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2DC8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2DDCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2DE4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2DF8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2E00u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2E10u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2E18u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2E28u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2E34u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2E3Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2E44u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2E4Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2E5Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2E68u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2E70u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2E78u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2E8Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2E9Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2EA8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2EBCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2ECCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2ED4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2EE8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2EF0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2EF8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2F00u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2F28u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2F38u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2F44u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2F4Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2F54u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2F5Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2F64u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2F70u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2F80u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2F88u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2F94u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2FA8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2FBCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2FC4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2FC8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2FD8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2FE0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB2FF8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3000u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB300Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3014u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB301Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3024u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3038u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3040u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3048u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB305Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3064u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3078u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3080u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3088u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3094u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB309Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB30BCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB30F0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3108u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3114u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3124u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3138u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3140u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3144u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3160u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3174u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3188u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3190u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3194u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB31B0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB31D8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB31E8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3200u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3210u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB321Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3234u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3244u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB324Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB325Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3264u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3270u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3284u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB328Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB32A0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB32BCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB32C8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB32E0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB32F0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB32F8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3304u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB330Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3320u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3328u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3338u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3340u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3350u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB335Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB336Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3378u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3380u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3388u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3398u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB33A4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB33B4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB33C0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB33C8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB33CCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB33F0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3404u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3424u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3440u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3458u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3464u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB346Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3480u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3490u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB349Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB34C8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB34D0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB34DCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB34E4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB34FCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3504u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB350Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3520u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3538u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB356Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3574u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB35A4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB35ACu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB35C0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB35C8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB35F4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB35FCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3604u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB360Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3634u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB363Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3644u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB364Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3654u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB366Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3674u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB367Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3688u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3694u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB36B0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB36D8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3774u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3788u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3790u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB379Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB37B0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB37B8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB37C8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB37E0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB37F8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3800u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3808u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3814u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3828u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3838u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3840u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3850u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3858u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3874u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3880u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3888u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB388Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3894u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB38A4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB38B8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB38C4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB38CCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB38D0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB38E4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB38F0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB38F4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB38FCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3904u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3918u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3928u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB393Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB394Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3960u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3968u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3970u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3984u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3994u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB39A0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB39B8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB39C0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB39C8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB39D0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB39DCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3A10u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3A1Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3A50u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3A5Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3A90u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3A9Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3AD0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3ADCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3B0Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3B18u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3B48u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3B50u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3B5Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3B70u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3B78u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3B80u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3B88u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3BB4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3BBCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3BDCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3BE8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3C1Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3C38u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3C40u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3C48u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3C50u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3C64u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3C80u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3CA0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3CB0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3CB8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3CC0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3CC4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3CCCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3CD8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3CF0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3CFCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3D08u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3D14u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3D20u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3D2Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3D38u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3D40u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3D48u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3D5Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3D7Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3D84u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3D8Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3D98u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3DA0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3DB4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3DD4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3DE8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3DF0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3DF8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3E04u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3E14u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3E1Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3E28u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3E3Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3E48u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3E54u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3E6Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3E74u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3E88u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3E9Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3EB0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3EC4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3ED8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3EECu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3EF8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3F00u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3F0Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3F14u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3F20u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3F28u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3F34u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3F44u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3F4Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3F54u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3F60u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3F64u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3F68u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3F70u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3F7Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3F8Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3F94u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3F9Cu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3FA8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3FACu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3FB0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3FB8u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3FC4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3FD4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3FDCu, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3FE4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3FF0u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3FF4u, &recomp_unit_0171, "recomp_unit_0171");
    runtime.register_function(0x08AB3FF8u, &recomp_unit_0171, "recomp_unit_0171");
}
} // namespace psprecomp
