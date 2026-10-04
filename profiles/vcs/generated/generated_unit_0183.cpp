#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0183[4091] = {
    1, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 7, 0, 0, 8, 0, 9, 0,
    0, 10, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 0, 13, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 16, 0, 17, 0, 18, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 21, 22, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 25, 26, 0, 27, 0, 0, 0,
    28, 0, 29, 0, 0, 0, 30, 0, 0, 0, 0, 31, 32, 0, 0, 0, 0, 33, 34, 0, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 37, 0,
    0, 38, 0, 39, 40, 0, 41, 0, 0, 42, 0, 0, 43, 0, 44, 45, 46, 0, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 49, 50, 0, 0,
    51, 0, 0, 52, 0, 53, 0, 54, 0, 55, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 58, 0, 0, 0, 59,
    60, 0, 61, 0, 0, 0, 62, 0, 63, 0, 0, 64, 0, 0, 0, 0, 0, 65, 0, 0, 0, 66, 0, 67, 68, 0, 69, 0, 0, 0, 70, 0,
    71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 73, 0, 0, 74, 75, 0, 76, 0, 0, 77, 0, 0, 0, 78, 0, 0, 79, 0, 0,
    0, 80, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 83, 0, 0, 84, 85, 0, 86, 0, 0, 87, 0, 0, 0, 88, 0, 0,
    89, 0, 0, 0, 90, 0, 91, 0, 0, 0, 92, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 95, 0, 0, 96, 0, 0, 0,
    97, 0, 0, 98, 0, 0, 0, 99, 0, 100, 0, 101, 0, 102, 0, 0, 0, 0, 0, 0, 103, 0, 104, 0, 105, 0, 106, 0, 107, 0, 108, 0,
    0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 112, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0,
    117, 0, 0, 118, 0, 0, 0, 0, 119, 0, 0, 120, 0, 0, 121, 0, 122, 0, 123, 0, 0, 0, 124, 0, 0, 125, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 128, 129, 0, 0,
    130, 0, 131, 0, 132, 0, 133, 0, 0, 0, 134, 0, 135, 0, 136, 0, 0, 137, 0, 138, 0, 139, 0, 140, 0, 141, 0, 142, 0, 0, 143, 0,
    144, 0, 145, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 0, 148, 0, 0, 149, 0, 0, 0, 0, 150, 0, 151, 0, 0, 152, 0, 153, 0,
    0, 154, 0, 0, 0, 0, 0, 0, 155, 156, 0, 157, 0, 158, 0, 159, 0, 0, 160, 0, 0, 0, 0, 161, 0, 162, 0, 163, 0, 164, 0, 0,
    165, 0, 0, 0, 0, 166, 0, 167, 0, 168, 0, 169, 0, 0, 0, 0, 170, 0, 171, 0, 172, 0, 0, 173, 0, 174, 175, 0, 176, 0, 177, 0,
    0, 178, 0, 0, 0, 0, 0, 179, 0, 180, 0, 0, 181, 0, 0, 0, 182, 0, 183, 0, 184, 0, 185, 0, 0, 0, 186, 187, 0, 188, 0, 0,
    0, 0, 189, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 192, 0,
    193, 194, 0, 195, 0, 196, 0, 0, 197, 0, 198, 0, 199, 0, 200, 0, 0, 201, 0, 0, 202, 0, 0, 203, 0, 204, 0, 205, 206, 0, 207, 0,
    0, 0, 0, 0, 0, 0, 0, 208, 0, 209, 0, 210, 0, 211, 0, 0, 212, 0, 213, 0, 214, 0, 0, 215, 0, 216, 0, 217, 0, 218, 0, 0,
    0, 219, 0, 220, 0, 221, 0, 222, 0, 0, 0, 0, 223, 0, 224, 0, 0, 225, 0, 0, 0, 0, 226, 0, 0, 227, 0, 228, 0, 229, 0, 230,
    0, 231, 0, 232, 0, 0, 233, 0, 0, 234, 0, 0, 0, 0, 235, 0, 236, 0, 0, 0, 237, 0, 238, 0, 239, 0, 240, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 242, 0, 0, 0, 243, 0, 0, 0, 0, 0, 244, 0, 0, 0, 245, 0, 0, 0, 0, 0, 246,
    0, 0, 0, 247, 0, 248, 0, 0, 0, 249, 0, 0, 0, 250, 0, 251, 0, 0, 0, 252, 0, 253, 0, 0, 0, 254, 0, 0, 0, 255, 0, 256,
    0, 0, 0, 257, 0, 258, 0, 0, 0, 259, 0, 260, 0, 0, 0, 261, 0, 0, 0, 262, 0, 263, 0, 0, 0, 264, 0, 0, 0, 265, 0, 266,
    0, 0, 267, 0, 0, 0, 268, 0, 0, 0, 269, 0, 270, 0, 271, 0, 0, 272, 0, 273, 0, 0, 0, 274, 0, 0, 0, 275, 0, 276, 0, 277,
    0, 278, 0, 279, 0, 0, 0, 280, 0, 281, 0, 0, 0, 282, 0, 0, 0, 283, 0, 284, 0, 285, 0, 0, 286, 0, 0, 0, 287, 0, 288, 0,
    0, 0, 289, 0, 0, 290, 0, 291, 0, 292, 0, 293, 0, 0, 0, 294, 0, 295, 0, 0, 0, 296, 0, 0, 0, 297, 0, 0, 0, 298, 0, 299,
    0, 0, 0, 300, 0, 0, 0, 301, 0, 302, 0, 0, 0, 303, 0, 0, 0, 304, 0, 305, 0, 0, 0, 306, 0, 0, 307, 0, 308, 0, 309, 0,
    310, 0, 0, 0, 311, 0, 0, 0, 312, 0, 313, 0, 0, 0, 314, 0, 315, 0, 0, 0, 316, 0, 0, 0, 317, 0, 318, 0, 0, 0, 319, 0,
    320, 0, 0, 0, 321, 0, 322, 0, 0, 323, 0, 324, 0, 0, 0, 325, 0, 326, 0, 327, 0, 0, 0, 328, 0, 0, 0, 329, 0, 330, 0, 331,
    0, 332, 0, 0, 333, 0, 0, 0, 334, 0, 0, 0, 335, 0, 0, 0, 0, 0, 336, 0, 0, 0, 337, 0, 0, 0, 0, 0, 338, 0, 0, 339,
    0, 0, 0, 340, 0, 341, 0, 0, 342, 0, 343, 0, 0, 0, 344, 0, 345, 0, 346, 0, 347, 0, 348, 0, 0, 0, 349, 0, 350, 0, 0, 0,
    351, 0, 352, 0, 0, 353, 0, 354, 0, 0, 0, 355, 0, 356, 0, 357, 0, 358, 0, 359, 0, 0, 0, 360, 0, 361, 0, 0, 0, 362, 0, 363,
    0, 0, 364, 0, 365, 0, 0, 0, 366, 0, 367, 0, 368, 0, 369, 0, 370, 0, 0, 0, 371, 0, 372, 0, 0, 0, 373, 0, 374, 0, 375, 0,
    0, 376, 0, 377, 0, 0, 0, 378, 0, 379, 0, 380, 0, 0, 0, 381, 0, 382, 0, 0, 0, 383, 0, 0, 384, 0, 385, 0, 386, 0, 387, 0,
    0, 0, 388, 0, 389, 0, 0, 0, 390, 0, 391, 0, 0, 0, 392, 0, 393, 0, 0, 0, 394, 0, 0, 0, 395, 0, 396, 0, 0, 0, 397, 0,
    398, 0, 0, 399, 0, 400, 0, 0, 0, 401, 0, 402, 0, 403, 0, 0, 0, 404, 0, 405, 0, 0, 406, 0, 0, 0, 407, 408, 0, 409, 410, 0,
    411, 0, 0, 0, 412, 0, 413, 0, 0, 414, 0, 415, 0, 0, 0, 416, 0, 417, 0, 418, 0, 0, 0, 419, 0, 420, 0, 0, 421, 0, 0, 0,
    422, 0, 0, 0, 423, 0, 0, 0, 0, 0, 424, 0, 0, 425, 0, 426, 0, 427, 0, 428, 0, 0, 429, 0, 430, 0, 0, 0, 431, 0, 0, 0,
    432, 0, 0, 0, 433, 0, 0, 0, 434, 0, 435, 0, 436, 0, 437, 0, 438, 0, 0, 0, 439, 0, 0, 0, 440, 0, 0, 0, 441, 0, 0, 0,
    442, 0, 443, 0, 0, 0, 444, 0, 0, 0, 445, 0, 0, 0, 446, 0, 0, 0, 447, 0, 448, 0, 0, 449, 0, 450, 0, 0, 0, 451, 0, 0,
    0, 452, 0, 0, 0, 453, 0, 0, 0, 454, 0, 455, 0, 456, 0, 0, 0, 457, 0, 0, 0, 458, 0, 0, 0, 459, 0, 0, 0, 460, 0, 0,
    0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 465, 0, 0, 0,
    0, 0, 466, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0,
    471, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 473, 0, 474, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    476, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 478, 0, 479, 480, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 482, 0, 0, 0,
    0, 483, 0, 0, 0, 484, 0, 485, 0, 486, 0, 0, 487, 0, 488, 489, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0, 491, 0,
    0, 0, 0, 492, 0, 493, 0, 0, 494, 0, 495, 0, 0, 0, 0, 0, 496, 497, 0, 0, 0, 0, 498, 0, 499, 0, 0, 0, 0, 500, 0, 0,
    0, 501, 0, 502, 0, 0, 0, 0, 503, 0, 504, 0, 0, 0, 0, 0, 0, 0, 505, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 506, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 0, 508, 0, 0, 0, 0, 0, 0, 0, 0, 509, 0, 0, 0, 510,
    0, 0, 0, 511, 0, 0, 512, 0, 513, 0, 514, 0, 515, 0, 516, 0, 517, 0, 518, 0, 519, 0, 520, 0, 0, 0, 0, 0, 0, 521, 0, 522,
    0, 0, 523, 0, 0, 0, 0, 0, 524, 0, 525, 0, 526, 0, 0, 527, 0, 0, 0, 0, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 529, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 530, 531, 0, 0, 0, 532, 0, 0, 0, 0, 0, 0, 533, 0, 534, 0, 0,
    0, 0, 0, 0, 0, 0, 535, 0, 0, 0, 0, 536, 0, 0, 537, 0, 538, 0, 539, 0, 540, 0, 541, 0, 542, 0, 543, 0, 544, 0, 545, 0,
    546, 0, 547, 0, 548, 549, 0, 550, 0, 551, 0, 0, 0, 0, 0, 0, 0, 0, 552, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 553, 0, 0, 0, 554, 0, 0, 0, 0, 0, 0, 0, 555, 0, 0, 556, 0, 0, 557, 0, 558, 0, 559, 0, 560, 0,
    0, 561, 0, 0, 562, 0, 563, 564, 0, 565, 0, 566, 0, 0, 0, 0, 0, 0, 0, 0, 0, 567, 0, 0, 0, 0, 0, 0, 0, 0, 568, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 569, 0, 0, 0, 0, 0, 0, 0, 570, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 571, 0, 0, 0, 0, 0, 572, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 573, 0, 0, 0, 0, 0, 0,
    0, 574, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 575, 0, 0, 0, 0, 0, 576, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 577, 0, 0, 0, 578, 0, 0, 0, 0, 579, 0, 580, 0, 0, 581, 0, 0, 582, 0, 583, 0, 584, 0, 585, 0,
    0, 586, 0, 0, 0, 0, 0, 587, 0, 0, 0, 0, 0, 0, 0, 588, 0, 0, 0, 0, 0, 589, 0, 0, 0, 0, 0, 0, 590, 0, 0, 0,
    591, 0, 0, 0, 0, 0, 0, 0, 0, 0, 592, 0, 0, 0, 0, 0, 0, 0, 0, 593, 0, 0, 0, 594, 0, 595, 0, 0, 596, 0, 597, 0,
    0, 598, 0, 599, 0, 600, 0, 0, 0, 0, 601, 0, 0, 0, 0, 0, 0, 0, 602, 0, 0, 0, 0, 603, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 604, 0, 0, 0, 0, 0, 605, 0, 606, 0, 607, 0, 608, 0, 609, 0, 0, 0, 610, 611,
    0, 0, 0, 0, 0, 0, 0, 0, 612, 0, 0, 0, 0, 0, 0, 0, 613, 0, 0, 614, 0, 615, 0, 0, 0, 0, 616, 0, 0, 0, 617, 0,
    618, 0, 619, 0, 620, 0, 621, 622, 0, 0, 0, 0, 0, 0, 623, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 624, 0, 0, 0, 625, 0, 0, 0, 0, 626, 0, 0, 0, 627, 0, 628, 0, 629, 0, 0, 630, 0, 0, 0, 0, 0, 631, 632, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 633, 0, 0, 0, 0, 0, 0, 0, 0, 634, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 635, 0, 0, 0, 0, 0, 0, 0, 636, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 637, 0, 0, 0, 0, 0, 638, 0, 0, 0, 0, 0,
    639, 0, 0, 0, 0, 0, 0, 0, 0, 640, 0, 0, 0, 641, 0, 0, 0, 0, 642, 0, 0, 0, 0, 643, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 644, 0, 645, 0, 0, 646, 0, 647, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 648, 0, 0, 0, 649, 0, 0, 650, 0,
    651, 0, 0, 0, 0, 652, 0, 0, 0, 653, 0, 0, 654, 0, 655, 0, 0, 656, 0, 657, 0, 0, 0, 0, 658, 0, 659, 0, 0, 0, 0, 660,
    0, 0, 0, 661, 662, 0, 0, 663, 0, 664, 0, 0, 0, 0, 665, 0, 0, 0, 0, 0, 0, 0, 666, 0, 0, 667, 0, 668, 669, 0, 670, 0,
    0, 0, 0, 671, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 672, 0, 0, 673, 0, 674, 0, 675, 0, 676, 0, 677, 0, 678,
    0, 679, 0, 0, 0, 0, 680, 0, 0, 681, 0, 0, 682, 0, 683, 0, 684, 0, 0, 685, 0, 686, 0, 0, 0, 0, 0, 687, 0, 688, 0, 0,
    0, 689, 0, 0, 690, 0, 0, 691, 0, 0, 0, 0, 0, 0, 0, 692, 0, 693, 0, 0, 0, 694, 0, 695, 0, 0, 0, 696, 0, 0, 0, 697,
    0, 0, 698, 699, 0, 0, 700, 0, 701, 0, 702, 0, 0, 0, 703, 0, 0, 0, 704, 0, 0, 0, 0, 0, 705, 706, 0, 707, 0, 708, 0, 0,
    0, 709, 0, 0, 710, 0, 0, 711, 0, 712, 0, 713, 0, 0, 714, 0, 715, 0, 0, 0, 0, 0, 716, 0, 717, 0, 0, 0, 718, 0, 0, 719,
    0, 720, 0, 0, 721, 0, 722, 0, 0, 0, 723, 0, 0, 724, 0, 725, 0, 0, 726, 0, 727, 0, 0, 0, 728, 0, 0, 729, 0, 0, 730, 0,
    731, 0, 732, 0, 0, 733, 0, 734, 0, 0, 0, 0, 0, 735, 0, 736, 0, 0, 0, 737, 0, 0, 738, 0, 0, 739, 0, 0, 0, 0, 0, 0,
    0, 740, 0, 741, 0, 0, 0, 742, 0, 743, 0, 0, 0, 744, 0, 0, 0, 745, 0, 0, 746, 747, 0, 0, 748, 0, 749, 0, 0, 750, 0, 0,
    0, 751, 0, 0, 0, 752, 0, 0, 0, 0, 0, 753, 754, 0, 755, 0, 756, 0, 0, 0, 757, 0, 0, 758, 0, 0, 759, 0, 760, 0, 761, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 762, 0, 763, 0, 0, 0, 0, 764,
    0, 0, 765, 0, 0, 766, 0, 767, 0, 0, 0, 768, 0, 769, 0, 770, 0, 771, 0, 0, 772, 0, 0, 773, 0, 774, 775, 0, 776, 0, 0, 777,
    0, 778, 0, 779, 0, 780, 0, 0, 781, 0, 0, 782, 0, 783, 784, 0, 785, 0, 0, 786, 0, 787, 0, 788, 0, 789, 0, 0, 790, 0, 0, 791,
    0, 792, 793, 0, 794, 0, 0, 795, 0, 796, 0, 797, 0, 798, 0, 0, 799, 0, 0, 800, 0, 801, 802, 0, 803, 0, 0, 804, 0, 805, 0, 806,
    0, 807, 0, 0, 808, 0, 0, 809, 0, 810, 811, 0, 812, 0, 0, 813, 0, 814, 0, 0, 815, 0, 816, 0, 0, 0, 817, 0, 0, 818, 0, 0,
    819, 0, 820, 0, 0, 0, 821, 0, 0, 822, 0, 0, 823, 0, 824, 0, 0, 825, 0, 826, 0, 0, 827, 0, 0, 828, 0, 829, 830, 0, 831, 0,
    0, 832, 0, 833, 0, 0, 834, 0, 0, 835, 0, 836, 837, 0, 838, 0, 0, 839, 0, 840, 0, 0, 841, 0, 0, 842, 0, 843, 844, 0, 845, 0,
    0, 846, 0, 847, 0, 0, 848, 0, 0, 849, 0, 850, 851, 0, 852, 0, 0, 0, 0, 0, 0, 853, 0, 0, 854, 0, 0, 0, 855, 0, 0, 856,
    0, 0, 857, 0, 858, 0, 859, 0, 0, 0, 860, 0, 861, 0, 0, 0, 0, 0, 862, 863, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 864,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 865, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 866, 0, 867, 0,
    868, 869, 0, 0, 0, 0, 870, 0, 0, 871, 0, 0, 872, 0, 873, 0, 874, 0, 0, 0, 0, 0, 875, 0, 0, 0, 0, 0, 0, 876, 0, 0,
    0, 0, 0, 877, 0, 878, 0, 0, 879, 0, 880, 0, 0, 0, 0, 0, 0, 0, 0, 0, 881, 0, 0, 882, 0, 0, 883, 0, 884, 0, 0, 0,
    0, 885, 0, 0, 0, 0, 0, 0, 0, 886, 0, 0, 0, 0, 0, 0, 0, 887, 0, 0, 0, 0, 0, 0, 0, 888, 0, 0, 889, 0, 0, 0,
    890, 0, 0, 0, 0, 0, 891, 0, 0, 0, 892, 0, 893, 0, 894, 0, 0, 0, 0, 0, 0, 0, 895, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 896, 0, 0, 0, 0, 0, 0, 0, 897, 0, 898, 0, 0, 899, 0, 0, 0, 0, 900, 0, 0, 0, 0, 901, 0, 0, 0, 0, 0, 0,
    902, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 903, 0, 0, 0, 0, 904, 0, 905, 0, 906, 0, 0, 0, 0, 0,
    907, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 908, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 909, 0, 0, 0, 0, 0, 910,
    911, 912, 0, 913, 0, 0, 0, 0, 0, 914, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 915, 0, 916, 0, 0, 917,
    0, 0, 0, 0, 0, 0, 0, 918, 0, 0, 0, 0, 919, 0, 0, 0, 0, 0, 0, 920, 0, 0, 0, 0, 0, 0, 0, 0, 921, 0, 0, 0,
    0, 922, 0, 923, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 924, 0, 0, 925, 0, 0, 926, 927, 0, 0, 0, 0, 928, 0, 0, 929, 0,
    0, 930, 0, 0, 931, 0, 0, 0, 0, 0, 0, 932, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 933, 0, 0, 0, 0, 934, 935, 0, 0,
    0, 0, 0, 0, 936, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 937, 0, 938, 0, 0, 0, 0, 0, 0, 0, 939, 0, 0, 0, 0, 0, 0,
    0, 0, 940, 0, 0, 941, 0, 942, 0, 0, 0, 943, 0, 0, 0, 0, 0, 0, 944, 0, 0, 0, 0, 0, 0, 945, 0, 0, 946, 0, 0, 947,
    948, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 949, 0, 950, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 951,
    0, 0, 0, 0, 0, 0, 952, 0, 0, 953, 0, 0, 0, 954, 0, 0, 955, 0, 956, 0, 0, 0, 0, 0, 0, 957, 0, 958, 0, 959, 0, 0,
    0, 960, 0, 0, 0, 961, 0, 962, 0, 963, 0, 0, 964, 0, 965, 0, 966, 0, 967, 0, 968, 0, 0, 969, 0, 970, 0, 971, 972, 0, 973, 0,
    974, 0, 975, 0, 0, 0, 0, 0, 0, 976, 0, 977, 0, 978, 0, 979, 0, 980, 981, 0, 0, 0, 982, 0, 0, 0, 0, 0, 0, 0, 983, 0,
    0, 0, 0, 0, 0, 984, 0, 985, 0, 0, 986, 0, 987, 0, 0, 0, 988, 0, 0, 0, 989, 0, 990, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    991, 0, 0, 0, 992, 0, 993, 0, 994, 0, 0, 995, 0, 0, 0, 0, 0, 0, 0, 996, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 997, 0, 0, 0, 998, 0, 0, 0, 999, 0, 0, 0, 0, 0, 0, 0, 1000, 0, 0, 0, 0, 0, 0, 0, 0, 1001, 0, 0,
    1002, 0, 0, 0, 1003, 0, 0, 0, 0, 0, 1004, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1005, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1006, 0, 0, 0, 0, 0, 0, 1007, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 1008, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1009, 0, 0, 0, 0, 0, 0, 1010, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1011, 0, 1012, 0, 0, 0, 0, 1013, 0, 0, 0, 1014, 0, 1015, 0, 1016, 0, 1017, 1018, 0, 1019, 0, 0, 0, 0, 1020, 0, 0, 0, 1021, 0, 0,
    0, 1022, 0, 0, 0, 0, 1023, 0, 1024, 0, 1025, 0, 1026, 0, 1027, 0, 0, 0, 1028, 0, 1029, 0, 1030, 0, 0, 0, 1031, 0, 1032, 0, 1033, 1034,
    0, 0, 0, 1035, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1036,
};
void recomp_unit_0183_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08AE0000u;
        entry_id = (entry_delta < 16364u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0183[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08AE0000;
    case 2u: goto L_08AE0004;
    case 3u: goto L_08AE0010;
    case 4u: goto L_08AE0038;
    case 5u: goto L_08AE0040;
    case 6u: goto L_08AE0058;
    case 7u: goto L_08AE0064;
    case 8u: goto L_08AE0070;
    case 9u: goto L_08AE0078;
    case 10u: goto L_08AE0084;
    case 11u: goto L_08AE0090;
    case 12u: goto L_08AE00A0;
    case 13u: goto L_08AE00B8;
    case 14u: goto L_08AE00C0;
    case 15u: goto L_08AE0120;
    case 16u: goto L_08AE0128;
    case 17u: goto L_08AE0130;
    case 18u: goto L_08AE0138;
    case 19u: goto L_08AE0144;
    case 20u: goto L_08AE01A4;
    case 21u: goto L_08AE01AC;
    case 22u: goto L_08AE01B0;
    case 23u: goto L_08AE01B8;
    case 24u: goto L_08AE01DC;
    case 25u: goto L_08AE01E4;
    case 26u: goto L_08AE01E8;
    case 27u: goto L_08AE01F0;
    case 28u: goto L_08AE0200;
    case 29u: goto L_08AE0208;
    case 30u: goto L_08AE0218;
    case 31u: goto L_08AE022C;
    case 32u: goto L_08AE0230;
    case 33u: goto L_08AE0244;
    case 34u: goto L_08AE0248;
    case 35u: goto L_08AE025C;
    case 36u: goto L_08AE026C;
    case 37u: goto L_08AE0278;
    case 38u: goto L_08AE0284;
    case 39u: goto L_08AE028C;
    case 40u: goto L_08AE0290;
    case 41u: goto L_08AE0298;
    case 42u: goto L_08AE02A4;
    case 43u: goto L_08AE02B0;
    case 44u: goto L_08AE02B8;
    case 45u: goto L_08AE02BC;
    case 46u: goto L_08AE02C0;
    case 47u: goto L_08AE02D4;
    case 48u: goto L_08AE02E4;
    case 49u: goto L_08AE02F0;
    case 50u: goto L_08AE02F4;
    case 51u: goto L_08AE0300;
    case 52u: goto L_08AE030C;
    case 53u: goto L_08AE0314;
    case 54u: goto L_08AE031C;
    case 55u: goto L_08AE0324;
    case 56u: goto L_08AE0334;
    case 57u: goto L_08AE0360;
    case 58u: goto L_08AE036C;
    case 59u: goto L_08AE037C;
    case 60u: goto L_08AE0380;
    case 61u: goto L_08AE0388;
    case 62u: goto L_08AE0398;
    case 63u: goto L_08AE03A0;
    case 64u: goto L_08AE03AC;
    case 65u: goto L_08AE03C4;
    case 66u: goto L_08AE03D4;
    case 67u: goto L_08AE03DC;
    case 68u: goto L_08AE03E0;
    case 69u: goto L_08AE03E8;
    case 70u: goto L_08AE03F8;
    case 71u: goto L_08AE0400;
    case 72u: goto L_08AE0428;
    case 73u: goto L_08AE0434;
    case 74u: goto L_08AE0440;
    case 75u: goto L_08AE0444;
    case 76u: goto L_08AE044C;
    case 77u: goto L_08AE0458;
    case 78u: goto L_08AE0468;
    case 79u: goto L_08AE0474;
    case 80u: goto L_08AE0484;
    case 81u: goto L_08AE048C;
    case 82u: goto L_08AE04B4;
    case 83u: goto L_08AE04C0;
    case 84u: goto L_08AE04CC;
    case 85u: goto L_08AE04D0;
    case 86u: goto L_08AE04D8;
    case 87u: goto L_08AE04E4;
    case 88u: goto L_08AE04F4;
    case 89u: goto L_08AE0500;
    case 90u: goto L_08AE0510;
    case 91u: goto L_08AE0518;
    case 92u: goto L_08AE0528;
    case 93u: goto L_08AE0534;
    case 94u: goto L_08AE055C;
    case 95u: goto L_08AE0564;
    case 96u: goto L_08AE0570;
    case 97u: goto L_08AE0580;
    case 98u: goto L_08AE058C;
    case 99u: goto L_08AE059C;
    case 100u: goto L_08AE05A4;
    case 101u: goto L_08AE05AC;
    case 102u: goto L_08AE05B4;
    case 103u: goto L_08AE05D0;
    case 104u: goto L_08AE05D8;
    case 105u: goto L_08AE05E0;
    case 106u: goto L_08AE05E8;
    case 107u: goto L_08AE05F0;
    case 108u: goto L_08AE05F8;
    case 109u: goto L_08AE0608;
    case 110u: goto L_08AE062C;
    case 111u: goto L_08AE0664;
    case 112u: goto L_08AE066C;
    case 113u: goto L_08AE0694;
    case 114u: goto L_08AE06A4;
    case 115u: goto L_08AE06BC;
    case 116u: goto L_08AE06F0;
    case 117u: goto L_08AE0700;
    case 118u: goto L_08AE070C;
    case 119u: goto L_08AE0720;
    case 120u: goto L_08AE072C;
    case 121u: goto L_08AE0738;
    case 122u: goto L_08AE0740;
    case 123u: goto L_08AE0748;
    case 124u: goto L_08AE0758;
    case 125u: goto L_08AE0764;
    case 126u: goto L_08AE0790;
    case 127u: goto L_08AE07E8;
    case 128u: goto L_08AE07F0;
    case 129u: goto L_08AE07F4;
    case 130u: goto L_08AE0800;
    case 131u: goto L_08AE0808;
    case 132u: goto L_08AE0810;
    case 133u: goto L_08AE0818;
    case 134u: goto L_08AE0828;
    case 135u: goto L_08AE0830;
    case 136u: goto L_08AE0838;
    case 137u: goto L_08AE0844;
    case 138u: goto L_08AE084C;
    case 139u: goto L_08AE0854;
    case 140u: goto L_08AE085C;
    case 141u: goto L_08AE0864;
    case 142u: goto L_08AE086C;
    case 143u: goto L_08AE0878;
    case 144u: goto L_08AE0880;
    case 145u: goto L_08AE0888;
    case 146u: goto L_08AE0894;
    case 147u: goto L_08AE08AC;
    case 148u: goto L_08AE08BC;
    case 149u: goto L_08AE08C8;
    case 150u: goto L_08AE08DC;
    case 151u: goto L_08AE08E4;
    case 152u: goto L_08AE08F0;
    case 153u: goto L_08AE08F8;
    case 154u: goto L_08AE0904;
    case 155u: goto L_08AE0920;
    case 156u: goto L_08AE0924;
    case 157u: goto L_08AE092C;
    case 158u: goto L_08AE0934;
    case 159u: goto L_08AE093C;
    case 160u: goto L_08AE0948;
    case 161u: goto L_08AE095C;
    case 162u: goto L_08AE0964;
    case 163u: goto L_08AE096C;
    case 164u: goto L_08AE0974;
    case 165u: goto L_08AE0980;
    case 166u: goto L_08AE0994;
    case 167u: goto L_08AE099C;
    case 168u: goto L_08AE09A4;
    case 169u: goto L_08AE09AC;
    case 170u: goto L_08AE09C0;
    case 171u: goto L_08AE09C8;
    case 172u: goto L_08AE09D0;
    case 173u: goto L_08AE09DC;
    case 174u: goto L_08AE09E4;
    case 175u: goto L_08AE09E8;
    case 176u: goto L_08AE09F0;
    case 177u: goto L_08AE09F8;
    case 178u: goto L_08AE0A04;
    case 179u: goto L_08AE0A1C;
    case 180u: goto L_08AE0A24;
    case 181u: goto L_08AE0A30;
    case 182u: goto L_08AE0A40;
    case 183u: goto L_08AE0A48;
    case 184u: goto L_08AE0A50;
    case 185u: goto L_08AE0A58;
    case 186u: goto L_08AE0A68;
    case 187u: goto L_08AE0A6C;
    case 188u: goto L_08AE0A74;
    case 189u: goto L_08AE0A88;
    case 190u: goto L_08AE0A90;
    case 191u: goto L_08AE0AEC;
    case 192u: goto L_08AE0AF8;
    case 193u: goto L_08AE0B00;
    case 194u: goto L_08AE0B04;
    case 195u: goto L_08AE0B0C;
    case 196u: goto L_08AE0B14;
    case 197u: goto L_08AE0B20;
    case 198u: goto L_08AE0B28;
    case 199u: goto L_08AE0B30;
    case 200u: goto L_08AE0B38;
    case 201u: goto L_08AE0B44;
    case 202u: goto L_08AE0B50;
    case 203u: goto L_08AE0B5C;
    case 204u: goto L_08AE0B64;
    case 205u: goto L_08AE0B6C;
    case 206u: goto L_08AE0B70;
    case 207u: goto L_08AE0B78;
    case 208u: goto L_08AE0B9C;
    case 209u: goto L_08AE0BA4;
    case 210u: goto L_08AE0BAC;
    case 211u: goto L_08AE0BB4;
    case 212u: goto L_08AE0BC0;
    case 213u: goto L_08AE0BC8;
    case 214u: goto L_08AE0BD0;
    case 215u: goto L_08AE0BDC;
    case 216u: goto L_08AE0BE4;
    case 217u: goto L_08AE0BEC;
    case 218u: goto L_08AE0BF4;
    case 219u: goto L_08AE0C04;
    case 220u: goto L_08AE0C0C;
    case 221u: goto L_08AE0C14;
    case 222u: goto L_08AE0C1C;
    case 223u: goto L_08AE0C30;
    case 224u: goto L_08AE0C38;
    case 225u: goto L_08AE0C44;
    case 226u: goto L_08AE0C58;
    case 227u: goto L_08AE0C64;
    case 228u: goto L_08AE0C6C;
    case 229u: goto L_08AE0C74;
    case 230u: goto L_08AE0C7C;
    case 231u: goto L_08AE0C84;
    case 232u: goto L_08AE0C8C;
    case 233u: goto L_08AE0C98;
    case 234u: goto L_08AE0CA4;
    case 235u: goto L_08AE0CB8;
    case 236u: goto L_08AE0CC0;
    case 237u: goto L_08AE0CD0;
    case 238u: goto L_08AE0CD8;
    case 239u: goto L_08AE0CE0;
    case 240u: goto L_08AE0CE8;
    case 241u: goto L_08AE0D14;
    case 242u: goto L_08AE0D2C;
    case 243u: goto L_08AE0D3C;
    case 244u: goto L_08AE0D54;
    case 245u: goto L_08AE0D64;
    case 246u: goto L_08AE0D7C;
    case 247u: goto L_08AE0D8C;
    case 248u: goto L_08AE0D94;
    case 249u: goto L_08AE0DA4;
    case 250u: goto L_08AE0DB4;
    case 251u: goto L_08AE0DBC;
    case 252u: goto L_08AE0DCC;
    case 253u: goto L_08AE0DD4;
    case 254u: goto L_08AE0DE4;
    case 255u: goto L_08AE0DF4;
    case 256u: goto L_08AE0DFC;
    case 257u: goto L_08AE0E0C;
    case 258u: goto L_08AE0E14;
    case 259u: goto L_08AE0E24;
    case 260u: goto L_08AE0E2C;
    case 261u: goto L_08AE0E3C;
    case 262u: goto L_08AE0E4C;
    case 263u: goto L_08AE0E54;
    case 264u: goto L_08AE0E64;
    case 265u: goto L_08AE0E74;
    case 266u: goto L_08AE0E7C;
    case 267u: goto L_08AE0E88;
    case 268u: goto L_08AE0E98;
    case 269u: goto L_08AE0EA8;
    case 270u: goto L_08AE0EB0;
    case 271u: goto L_08AE0EB8;
    case 272u: goto L_08AE0EC4;
    case 273u: goto L_08AE0ECC;
    case 274u: goto L_08AE0EDC;
    case 275u: goto L_08AE0EEC;
    case 276u: goto L_08AE0EF4;
    case 277u: goto L_08AE0EFC;
    case 278u: goto L_08AE0F04;
    case 279u: goto L_08AE0F0C;
    case 280u: goto L_08AE0F1C;
    case 281u: goto L_08AE0F24;
    case 282u: goto L_08AE0F34;
    case 283u: goto L_08AE0F44;
    case 284u: goto L_08AE0F4C;
    case 285u: goto L_08AE0F54;
    case 286u: goto L_08AE0F60;
    case 287u: goto L_08AE0F70;
    case 288u: goto L_08AE0F78;
    case 289u: goto L_08AE0F88;
    case 290u: goto L_08AE0F94;
    case 291u: goto L_08AE0F9C;
    case 292u: goto L_08AE0FA4;
    case 293u: goto L_08AE0FAC;
    case 294u: goto L_08AE0FBC;
    case 295u: goto L_08AE0FC4;
    case 296u: goto L_08AE0FD4;
    case 297u: goto L_08AE0FE4;
    case 298u: goto L_08AE0FF4;
    case 299u: goto L_08AE0FFC;
    case 300u: goto L_08AE100C;
    case 301u: goto L_08AE101C;
    case 302u: goto L_08AE1024;
    case 303u: goto L_08AE1034;
    case 304u: goto L_08AE1044;
    case 305u: goto L_08AE104C;
    case 306u: goto L_08AE105C;
    case 307u: goto L_08AE1068;
    case 308u: goto L_08AE1070;
    case 309u: goto L_08AE1078;
    case 310u: goto L_08AE1080;
    case 311u: goto L_08AE1090;
    case 312u: goto L_08AE10A0;
    case 313u: goto L_08AE10A8;
    case 314u: goto L_08AE10B8;
    case 315u: goto L_08AE10C0;
    case 316u: goto L_08AE10D0;
    case 317u: goto L_08AE10E0;
    case 318u: goto L_08AE10E8;
    case 319u: goto L_08AE10F8;
    case 320u: goto L_08AE1100;
    case 321u: goto L_08AE1110;
    case 322u: goto L_08AE1118;
    case 323u: goto L_08AE1124;
    case 324u: goto L_08AE112C;
    case 325u: goto L_08AE113C;
    case 326u: goto L_08AE1144;
    case 327u: goto L_08AE114C;
    case 328u: goto L_08AE115C;
    case 329u: goto L_08AE116C;
    case 330u: goto L_08AE1174;
    case 331u: goto L_08AE117C;
    case 332u: goto L_08AE1184;
    case 333u: goto L_08AE1190;
    case 334u: goto L_08AE11A0;
    case 335u: goto L_08AE11B0;
    case 336u: goto L_08AE11C8;
    case 337u: goto L_08AE11D8;
    case 338u: goto L_08AE11F0;
    case 339u: goto L_08AE11FC;
    case 340u: goto L_08AE120C;
    case 341u: goto L_08AE1214;
    case 342u: goto L_08AE1220;
    case 343u: goto L_08AE1228;
    case 344u: goto L_08AE1238;
    case 345u: goto L_08AE1240;
    case 346u: goto L_08AE1248;
    case 347u: goto L_08AE1250;
    case 348u: goto L_08AE1258;
    case 349u: goto L_08AE1268;
    case 350u: goto L_08AE1270;
    case 351u: goto L_08AE1280;
    case 352u: goto L_08AE1288;
    case 353u: goto L_08AE1294;
    case 354u: goto L_08AE129C;
    case 355u: goto L_08AE12AC;
    case 356u: goto L_08AE12B4;
    case 357u: goto L_08AE12BC;
    case 358u: goto L_08AE12C4;
    case 359u: goto L_08AE12CC;
    case 360u: goto L_08AE12DC;
    case 361u: goto L_08AE12E4;
    case 362u: goto L_08AE12F4;
    case 363u: goto L_08AE12FC;
    case 364u: goto L_08AE1308;
    case 365u: goto L_08AE1310;
    case 366u: goto L_08AE1320;
    case 367u: goto L_08AE1328;
    case 368u: goto L_08AE1330;
    case 369u: goto L_08AE1338;
    case 370u: goto L_08AE1340;
    case 371u: goto L_08AE1350;
    case 372u: goto L_08AE1358;
    case 373u: goto L_08AE1368;
    case 374u: goto L_08AE1370;
    case 375u: goto L_08AE1378;
    case 376u: goto L_08AE1384;
    case 377u: goto L_08AE138C;
    case 378u: goto L_08AE139C;
    case 379u: goto L_08AE13A4;
    case 380u: goto L_08AE13AC;
    case 381u: goto L_08AE13BC;
    case 382u: goto L_08AE13C4;
    case 383u: goto L_08AE13D4;
    case 384u: goto L_08AE13E0;
    case 385u: goto L_08AE13E8;
    case 386u: goto L_08AE13F0;
    case 387u: goto L_08AE13F8;
    case 388u: goto L_08AE1408;
    case 389u: goto L_08AE1410;
    case 390u: goto L_08AE1420;
    case 391u: goto L_08AE1428;
    case 392u: goto L_08AE1438;
    case 393u: goto L_08AE1440;
    case 394u: goto L_08AE1450;
    case 395u: goto L_08AE1460;
    case 396u: goto L_08AE1468;
    case 397u: goto L_08AE1478;
    case 398u: goto L_08AE1480;
    case 399u: goto L_08AE148C;
    case 400u: goto L_08AE1494;
    case 401u: goto L_08AE14A4;
    case 402u: goto L_08AE14AC;
    case 403u: goto L_08AE14B4;
    case 404u: goto L_08AE14C4;
    case 405u: goto L_08AE14CC;
    case 406u: goto L_08AE14D8;
    case 407u: goto L_08AE14E8;
    case 408u: goto L_08AE14EC;
    case 409u: goto L_08AE14F4;
    case 410u: goto L_08AE14F8;
    case 411u: goto L_08AE1500;
    case 412u: goto L_08AE1510;
    case 413u: goto L_08AE1518;
    case 414u: goto L_08AE1524;
    case 415u: goto L_08AE152C;
    case 416u: goto L_08AE153C;
    case 417u: goto L_08AE1544;
    case 418u: goto L_08AE154C;
    case 419u: goto L_08AE155C;
    case 420u: goto L_08AE1564;
    case 421u: goto L_08AE1570;
    case 422u: goto L_08AE1580;
    case 423u: goto L_08AE1590;
    case 424u: goto L_08AE15A8;
    case 425u: goto L_08AE15B4;
    case 426u: goto L_08AE15BC;
    case 427u: goto L_08AE15C4;
    case 428u: goto L_08AE15CC;
    case 429u: goto L_08AE15D8;
    case 430u: goto L_08AE15E0;
    case 431u: goto L_08AE15F0;
    case 432u: goto L_08AE1600;
    case 433u: goto L_08AE1610;
    case 434u: goto L_08AE1620;
    case 435u: goto L_08AE1628;
    case 436u: goto L_08AE1630;
    case 437u: goto L_08AE1638;
    case 438u: goto L_08AE1640;
    case 439u: goto L_08AE1650;
    case 440u: goto L_08AE1660;
    case 441u: goto L_08AE1670;
    case 442u: goto L_08AE1680;
    case 443u: goto L_08AE1688;
    case 444u: goto L_08AE1698;
    case 445u: goto L_08AE16A8;
    case 446u: goto L_08AE16B8;
    case 447u: goto L_08AE16C8;
    case 448u: goto L_08AE16D0;
    case 449u: goto L_08AE16DC;
    case 450u: goto L_08AE16E4;
    case 451u: goto L_08AE16F4;
    case 452u: goto L_08AE1704;
    case 453u: goto L_08AE1714;
    case 454u: goto L_08AE1724;
    case 455u: goto L_08AE172C;
    case 456u: goto L_08AE1734;
    case 457u: goto L_08AE1744;
    case 458u: goto L_08AE1754;
    case 459u: goto L_08AE1764;
    case 460u: goto L_08AE1774;
    case 461u: goto L_08AE1784;
    case 462u: goto L_08AE1828;
    case 463u: goto L_08AE1840;
    case 464u: goto L_08AE1858;
    case 465u: goto L_08AE1870;
    case 466u: goto L_08AE1888;
    case 467u: goto L_08AE18A0;
    case 468u: goto L_08AE18B8;
    case 469u: goto L_08AE18D0;
    case 470u: goto L_08AE18E8;
    case 471u: goto L_08AE1900;
    case 472u: goto L_08AE1918;
    case 473u: goto L_08AE1930;
    case 474u: goto L_08AE1938;
    case 475u: goto L_08AE1948;
    case 476u: goto L_08AE1980;
    case 477u: goto L_08AE19A0;
    case 478u: goto L_08AE19B8;
    case 479u: goto L_08AE19C0;
    case 480u: goto L_08AE19C4;
    case 481u: goto L_08AE19E4;
    case 482u: goto L_08AE19F0;
    case 483u: goto L_08AE1A04;
    case 484u: goto L_08AE1A14;
    case 485u: goto L_08AE1A1C;
    case 486u: goto L_08AE1A24;
    case 487u: goto L_08AE1A30;
    case 488u: goto L_08AE1A38;
    case 489u: goto L_08AE1A3C;
    case 490u: goto L_08AE1A68;
    case 491u: goto L_08AE1A78;
    case 492u: goto L_08AE1A8C;
    case 493u: goto L_08AE1A94;
    case 494u: goto L_08AE1AA0;
    case 495u: goto L_08AE1AA8;
    case 496u: goto L_08AE1AC0;
    case 497u: goto L_08AE1AC4;
    case 498u: goto L_08AE1AD8;
    case 499u: goto L_08AE1AE0;
    case 500u: goto L_08AE1AF4;
    case 501u: goto L_08AE1B04;
    case 502u: goto L_08AE1B0C;
    case 503u: goto L_08AE1B20;
    case 504u: goto L_08AE1B28;
    case 505u: goto L_08AE1B48;
    case 506u: goto L_08AE1B78;
    case 507u: goto L_08AE1BAC;
    case 508u: goto L_08AE1BC8;
    case 509u: goto L_08AE1BEC;
    case 510u: goto L_08AE1BFC;
    case 511u: goto L_08AE1C0C;
    case 512u: goto L_08AE1C18;
    case 513u: goto L_08AE1C20;
    case 514u: goto L_08AE1C28;
    case 515u: goto L_08AE1C30;
    case 516u: goto L_08AE1C38;
    case 517u: goto L_08AE1C40;
    case 518u: goto L_08AE1C48;
    case 519u: goto L_08AE1C50;
    case 520u: goto L_08AE1C58;
    case 521u: goto L_08AE1C74;
    case 522u: goto L_08AE1C7C;
    case 523u: goto L_08AE1C88;
    case 524u: goto L_08AE1CA0;
    case 525u: goto L_08AE1CA8;
    case 526u: goto L_08AE1CB0;
    case 527u: goto L_08AE1CBC;
    case 528u: goto L_08AE1CE0;
    case 529u: goto L_08AE1D0C;
    case 530u: goto L_08AE1D3C;
    case 531u: goto L_08AE1D40;
    case 532u: goto L_08AE1D50;
    case 533u: goto L_08AE1D6C;
    case 534u: goto L_08AE1D74;
    case 535u: goto L_08AE1D98;
    case 536u: goto L_08AE1DAC;
    case 537u: goto L_08AE1DB8;
    case 538u: goto L_08AE1DC0;
    case 539u: goto L_08AE1DC8;
    case 540u: goto L_08AE1DD0;
    case 541u: goto L_08AE1DD8;
    case 542u: goto L_08AE1DE0;
    case 543u: goto L_08AE1DE8;
    case 544u: goto L_08AE1DF0;
    case 545u: goto L_08AE1DF8;
    case 546u: goto L_08AE1E00;
    case 547u: goto L_08AE1E08;
    case 548u: goto L_08AE1E10;
    case 549u: goto L_08AE1E14;
    case 550u: goto L_08AE1E1C;
    case 551u: goto L_08AE1E24;
    case 552u: goto L_08AE1E48;
    case 553u: goto L_08AE1E98;
    case 554u: goto L_08AE1EA8;
    case 555u: goto L_08AE1EC8;
    case 556u: goto L_08AE1ED4;
    case 557u: goto L_08AE1EE0;
    case 558u: goto L_08AE1EE8;
    case 559u: goto L_08AE1EF0;
    case 560u: goto L_08AE1EF8;
    case 561u: goto L_08AE1F04;
    case 562u: goto L_08AE1F10;
    case 563u: goto L_08AE1F18;
    case 564u: goto L_08AE1F1C;
    case 565u: goto L_08AE1F24;
    case 566u: goto L_08AE1F2C;
    case 567u: goto L_08AE1F54;
    case 568u: goto L_08AE1F78;
    case 569u: goto L_08AE1FBC;
    case 570u: goto L_08AE1FDC;
    case 571u: goto L_08AE2008;
    case 572u: goto L_08AE2020;
    case 573u: goto L_08AE2064;
    case 574u: goto L_08AE2084;
    case 575u: goto L_08AE20B0;
    case 576u: goto L_08AE20C8;
    case 577u: goto L_08AE211C;
    case 578u: goto L_08AE212C;
    case 579u: goto L_08AE2140;
    case 580u: goto L_08AE2148;
    case 581u: goto L_08AE2154;
    case 582u: goto L_08AE2160;
    case 583u: goto L_08AE2168;
    case 584u: goto L_08AE2170;
    case 585u: goto L_08AE2178;
    case 586u: goto L_08AE2184;
    case 587u: goto L_08AE219C;
    case 588u: goto L_08AE21BC;
    case 589u: goto L_08AE21D4;
    case 590u: goto L_08AE21F0;
    case 591u: goto L_08AE2200;
    case 592u: goto L_08AE2228;
    case 593u: goto L_08AE224C;
    case 594u: goto L_08AE225C;
    case 595u: goto L_08AE2264;
    case 596u: goto L_08AE2270;
    case 597u: goto L_08AE2278;
    case 598u: goto L_08AE2284;
    case 599u: goto L_08AE228C;
    case 600u: goto L_08AE2294;
    case 601u: goto L_08AE22A8;
    case 602u: goto L_08AE22C8;
    case 603u: goto L_08AE22DC;
    case 604u: goto L_08AE2330;
    case 605u: goto L_08AE2348;
    case 606u: goto L_08AE2350;
    case 607u: goto L_08AE2358;
    case 608u: goto L_08AE2360;
    case 609u: goto L_08AE2368;
    case 610u: goto L_08AE2378;
    case 611u: goto L_08AE237C;
    case 612u: goto L_08AE23A0;
    case 613u: goto L_08AE23C0;
    case 614u: goto L_08AE23CC;
    case 615u: goto L_08AE23D4;
    case 616u: goto L_08AE23E8;
    case 617u: goto L_08AE23F8;
    case 618u: goto L_08AE2400;
    case 619u: goto L_08AE2408;
    case 620u: goto L_08AE2410;
    case 621u: goto L_08AE2418;
    case 622u: goto L_08AE241C;
    case 623u: goto L_08AE2438;
    case 624u: goto L_08AE2488;
    case 625u: goto L_08AE2498;
    case 626u: goto L_08AE24AC;
    case 627u: goto L_08AE24BC;
    case 628u: goto L_08AE24C4;
    case 629u: goto L_08AE24CC;
    case 630u: goto L_08AE24D8;
    case 631u: goto L_08AE24F0;
    case 632u: goto L_08AE24F4;
    case 633u: goto L_08AE251C;
    case 634u: goto L_08AE2540;
    case 635u: goto L_08AE2584;
    case 636u: goto L_08AE25A4;
    case 637u: goto L_08AE25D0;
    case 638u: goto L_08AE25E8;
    case 639u: goto L_08AE2600;
    case 640u: goto L_08AE2624;
    case 641u: goto L_08AE2634;
    case 642u: goto L_08AE2648;
    case 643u: goto L_08AE265C;
    case 644u: goto L_08AE2690;
    case 645u: goto L_08AE2698;
    case 646u: goto L_08AE26A4;
    case 647u: goto L_08AE26AC;
    case 648u: goto L_08AE26DC;
    case 649u: goto L_08AE26EC;
    case 650u: goto L_08AE26F8;
    case 651u: goto L_08AE2700;
    case 652u: goto L_08AE2714;
    case 653u: goto L_08AE2724;
    case 654u: goto L_08AE2730;
    case 655u: goto L_08AE2738;
    case 656u: goto L_08AE2744;
    case 657u: goto L_08AE274C;
    case 658u: goto L_08AE2760;
    case 659u: goto L_08AE2768;
    case 660u: goto L_08AE277C;
    case 661u: goto L_08AE278C;
    case 662u: goto L_08AE2790;
    case 663u: goto L_08AE279C;
    case 664u: goto L_08AE27A4;
    case 665u: goto L_08AE27B8;
    case 666u: goto L_08AE27D8;
    case 667u: goto L_08AE27E4;
    case 668u: goto L_08AE27EC;
    case 669u: goto L_08AE27F0;
    case 670u: goto L_08AE27F8;
    case 671u: goto L_08AE280C;
    case 672u: goto L_08AE2848;
    case 673u: goto L_08AE2854;
    case 674u: goto L_08AE285C;
    case 675u: goto L_08AE2864;
    case 676u: goto L_08AE286C;
    case 677u: goto L_08AE2874;
    case 678u: goto L_08AE287C;
    case 679u: goto L_08AE2884;
    case 680u: goto L_08AE2898;
    case 681u: goto L_08AE28A4;
    case 682u: goto L_08AE28B0;
    case 683u: goto L_08AE28B8;
    case 684u: goto L_08AE28C0;
    case 685u: goto L_08AE28CC;
    case 686u: goto L_08AE28D4;
    case 687u: goto L_08AE28EC;
    case 688u: goto L_08AE28F4;
    case 689u: goto L_08AE2904;
    case 690u: goto L_08AE2910;
    case 691u: goto L_08AE291C;
    case 692u: goto L_08AE293C;
    case 693u: goto L_08AE2944;
    case 694u: goto L_08AE2954;
    case 695u: goto L_08AE295C;
    case 696u: goto L_08AE296C;
    case 697u: goto L_08AE297C;
    case 698u: goto L_08AE2988;
    case 699u: goto L_08AE298C;
    case 700u: goto L_08AE2998;
    case 701u: goto L_08AE29A0;
    case 702u: goto L_08AE29A8;
    case 703u: goto L_08AE29B8;
    case 704u: goto L_08AE29C8;
    case 705u: goto L_08AE29E0;
    case 706u: goto L_08AE29E4;
    case 707u: goto L_08AE29EC;
    case 708u: goto L_08AE29F4;
    case 709u: goto L_08AE2A04;
    case 710u: goto L_08AE2A10;
    case 711u: goto L_08AE2A1C;
    case 712u: goto L_08AE2A24;
    case 713u: goto L_08AE2A2C;
    case 714u: goto L_08AE2A38;
    case 715u: goto L_08AE2A40;
    case 716u: goto L_08AE2A58;
    case 717u: goto L_08AE2A60;
    case 718u: goto L_08AE2A70;
    case 719u: goto L_08AE2A7C;
    case 720u: goto L_08AE2A84;
    case 721u: goto L_08AE2A90;
    case 722u: goto L_08AE2A98;
    case 723u: goto L_08AE2AA8;
    case 724u: goto L_08AE2AB4;
    case 725u: goto L_08AE2ABC;
    case 726u: goto L_08AE2AC8;
    case 727u: goto L_08AE2AD0;
    case 728u: goto L_08AE2AE0;
    case 729u: goto L_08AE2AEC;
    case 730u: goto L_08AE2AF8;
    case 731u: goto L_08AE2B00;
    case 732u: goto L_08AE2B08;
    case 733u: goto L_08AE2B14;
    case 734u: goto L_08AE2B1C;
    case 735u: goto L_08AE2B34;
    case 736u: goto L_08AE2B3C;
    case 737u: goto L_08AE2B4C;
    case 738u: goto L_08AE2B58;
    case 739u: goto L_08AE2B64;
    case 740u: goto L_08AE2B84;
    case 741u: goto L_08AE2B8C;
    case 742u: goto L_08AE2B9C;
    case 743u: goto L_08AE2BA4;
    case 744u: goto L_08AE2BB4;
    case 745u: goto L_08AE2BC4;
    case 746u: goto L_08AE2BD0;
    case 747u: goto L_08AE2BD4;
    case 748u: goto L_08AE2BE0;
    case 749u: goto L_08AE2BE8;
    case 750u: goto L_08AE2BF4;
    case 751u: goto L_08AE2C04;
    case 752u: goto L_08AE2C14;
    case 753u: goto L_08AE2C2C;
    case 754u: goto L_08AE2C30;
    case 755u: goto L_08AE2C38;
    case 756u: goto L_08AE2C40;
    case 757u: goto L_08AE2C50;
    case 758u: goto L_08AE2C5C;
    case 759u: goto L_08AE2C68;
    case 760u: goto L_08AE2C70;
    case 761u: goto L_08AE2C78;
    case 762u: goto L_08AE2CE0;
    case 763u: goto L_08AE2CE8;
    case 764u: goto L_08AE2CFC;
    case 765u: goto L_08AE2D08;
    case 766u: goto L_08AE2D14;
    case 767u: goto L_08AE2D1C;
    case 768u: goto L_08AE2D2C;
    case 769u: goto L_08AE2D34;
    case 770u: goto L_08AE2D3C;
    case 771u: goto L_08AE2D44;
    case 772u: goto L_08AE2D50;
    case 773u: goto L_08AE2D5C;
    case 774u: goto L_08AE2D64;
    case 775u: goto L_08AE2D68;
    case 776u: goto L_08AE2D70;
    case 777u: goto L_08AE2D7C;
    case 778u: goto L_08AE2D84;
    case 779u: goto L_08AE2D8C;
    case 780u: goto L_08AE2D94;
    case 781u: goto L_08AE2DA0;
    case 782u: goto L_08AE2DAC;
    case 783u: goto L_08AE2DB4;
    case 784u: goto L_08AE2DB8;
    case 785u: goto L_08AE2DC0;
    case 786u: goto L_08AE2DCC;
    case 787u: goto L_08AE2DD4;
    case 788u: goto L_08AE2DDC;
    case 789u: goto L_08AE2DE4;
    case 790u: goto L_08AE2DF0;
    case 791u: goto L_08AE2DFC;
    case 792u: goto L_08AE2E04;
    case 793u: goto L_08AE2E08;
    case 794u: goto L_08AE2E10;
    case 795u: goto L_08AE2E1C;
    case 796u: goto L_08AE2E24;
    case 797u: goto L_08AE2E2C;
    case 798u: goto L_08AE2E34;
    case 799u: goto L_08AE2E40;
    case 800u: goto L_08AE2E4C;
    case 801u: goto L_08AE2E54;
    case 802u: goto L_08AE2E58;
    case 803u: goto L_08AE2E60;
    case 804u: goto L_08AE2E6C;
    case 805u: goto L_08AE2E74;
    case 806u: goto L_08AE2E7C;
    case 807u: goto L_08AE2E84;
    case 808u: goto L_08AE2E90;
    case 809u: goto L_08AE2E9C;
    case 810u: goto L_08AE2EA4;
    case 811u: goto L_08AE2EA8;
    case 812u: goto L_08AE2EB0;
    case 813u: goto L_08AE2EBC;
    case 814u: goto L_08AE2EC4;
    case 815u: goto L_08AE2ED0;
    case 816u: goto L_08AE2ED8;
    case 817u: goto L_08AE2EE8;
    case 818u: goto L_08AE2EF4;
    case 819u: goto L_08AE2F00;
    case 820u: goto L_08AE2F08;
    case 821u: goto L_08AE2F18;
    case 822u: goto L_08AE2F24;
    case 823u: goto L_08AE2F30;
    case 824u: goto L_08AE2F38;
    case 825u: goto L_08AE2F44;
    case 826u: goto L_08AE2F4C;
    case 827u: goto L_08AE2F58;
    case 828u: goto L_08AE2F64;
    case 829u: goto L_08AE2F6C;
    case 830u: goto L_08AE2F70;
    case 831u: goto L_08AE2F78;
    case 832u: goto L_08AE2F84;
    case 833u: goto L_08AE2F8C;
    case 834u: goto L_08AE2F98;
    case 835u: goto L_08AE2FA4;
    case 836u: goto L_08AE2FAC;
    case 837u: goto L_08AE2FB0;
    case 838u: goto L_08AE2FB8;
    case 839u: goto L_08AE2FC4;
    case 840u: goto L_08AE2FCC;
    case 841u: goto L_08AE2FD8;
    case 842u: goto L_08AE2FE4;
    case 843u: goto L_08AE2FEC;
    case 844u: goto L_08AE2FF0;
    case 845u: goto L_08AE2FF8;
    case 846u: goto L_08AE3004;
    case 847u: goto L_08AE300C;
    case 848u: goto L_08AE3018;
    case 849u: goto L_08AE3024;
    case 850u: goto L_08AE302C;
    case 851u: goto L_08AE3030;
    case 852u: goto L_08AE3038;
    case 853u: goto L_08AE3054;
    case 854u: goto L_08AE3060;
    case 855u: goto L_08AE3070;
    case 856u: goto L_08AE307C;
    case 857u: goto L_08AE3088;
    case 858u: goto L_08AE3090;
    case 859u: goto L_08AE3098;
    case 860u: goto L_08AE30A8;
    case 861u: goto L_08AE30B0;
    case 862u: goto L_08AE30C8;
    case 863u: goto L_08AE30CC;
    case 864u: goto L_08AE30FC;
    case 865u: goto L_08AE31F0;
    case 866u: goto L_08AE32F0;
    case 867u: goto L_08AE32F8;
    case 868u: goto L_08AE3300;
    case 869u: goto L_08AE3304;
    case 870u: goto L_08AE3318;
    case 871u: goto L_08AE3324;
    case 872u: goto L_08AE3330;
    case 873u: goto L_08AE3338;
    case 874u: goto L_08AE3340;
    case 875u: goto L_08AE3358;
    case 876u: goto L_08AE3374;
    case 877u: goto L_08AE338C;
    case 878u: goto L_08AE3394;
    case 879u: goto L_08AE33A0;
    case 880u: goto L_08AE33A8;
    case 881u: goto L_08AE33D0;
    case 882u: goto L_08AE33DC;
    case 883u: goto L_08AE33E8;
    case 884u: goto L_08AE33F0;
    case 885u: goto L_08AE3404;
    case 886u: goto L_08AE3424;
    case 887u: goto L_08AE3444;
    case 888u: goto L_08AE3464;
    case 889u: goto L_08AE3470;
    case 890u: goto L_08AE3480;
    case 891u: goto L_08AE3498;
    case 892u: goto L_08AE34A8;
    case 893u: goto L_08AE34B0;
    case 894u: goto L_08AE34B8;
    case 895u: goto L_08AE34D8;
    case 896u: goto L_08AE3508;
    case 897u: goto L_08AE3528;
    case 898u: goto L_08AE3530;
    case 899u: goto L_08AE353C;
    case 900u: goto L_08AE3550;
    case 901u: goto L_08AE3564;
    case 902u: goto L_08AE3580;
    case 903u: goto L_08AE35C4;
    case 904u: goto L_08AE35D8;
    case 905u: goto L_08AE35E0;
    case 906u: goto L_08AE35E8;
    case 907u: goto L_08AE3600;
    case 908u: goto L_08AE3634;
    case 909u: goto L_08AE3664;
    case 910u: goto L_08AE367C;
    case 911u: goto L_08AE3680;
    case 912u: goto L_08AE3684;
    case 913u: goto L_08AE368C;
    case 914u: goto L_08AE36A4;
    case 915u: goto L_08AE36E8;
    case 916u: goto L_08AE36F0;
    case 917u: goto L_08AE36FC;
    case 918u: goto L_08AE371C;
    case 919u: goto L_08AE3730;
    case 920u: goto L_08AE374C;
    case 921u: goto L_08AE3770;
    case 922u: goto L_08AE3784;
    case 923u: goto L_08AE378C;
    case 924u: goto L_08AE37BC;
    case 925u: goto L_08AE37C8;
    case 926u: goto L_08AE37D4;
    case 927u: goto L_08AE37D8;
    case 928u: goto L_08AE37EC;
    case 929u: goto L_08AE37F8;
    case 930u: goto L_08AE3804;
    case 931u: goto L_08AE3810;
    case 932u: goto L_08AE382C;
    case 933u: goto L_08AE385C;
    case 934u: goto L_08AE3870;
    case 935u: goto L_08AE3874;
    case 936u: goto L_08AE3890;
    case 937u: goto L_08AE38BC;
    case 938u: goto L_08AE38C4;
    case 939u: goto L_08AE38E4;
    case 940u: goto L_08AE3908;
    case 941u: goto L_08AE3914;
    case 942u: goto L_08AE391C;
    case 943u: goto L_08AE392C;
    case 944u: goto L_08AE3948;
    case 945u: goto L_08AE3964;
    case 946u: goto L_08AE3970;
    case 947u: goto L_08AE397C;
    case 948u: goto L_08AE3980;
    case 949u: goto L_08AE39B4;
    case 950u: goto L_08AE39BC;
    case 951u: goto L_08AE39FC;
    case 952u: goto L_08AE3A18;
    case 953u: goto L_08AE3A24;
    case 954u: goto L_08AE3A34;
    case 955u: goto L_08AE3A40;
    case 956u: goto L_08AE3A48;
    case 957u: goto L_08AE3A64;
    case 958u: goto L_08AE3A6C;
    case 959u: goto L_08AE3A74;
    case 960u: goto L_08AE3A84;
    case 961u: goto L_08AE3A94;
    case 962u: goto L_08AE3A9C;
    case 963u: goto L_08AE3AA4;
    case 964u: goto L_08AE3AB0;
    case 965u: goto L_08AE3AB8;
    case 966u: goto L_08AE3AC0;
    case 967u: goto L_08AE3AC8;
    case 968u: goto L_08AE3AD0;
    case 969u: goto L_08AE3ADC;
    case 970u: goto L_08AE3AE4;
    case 971u: goto L_08AE3AEC;
    case 972u: goto L_08AE3AF0;
    case 973u: goto L_08AE3AF8;
    case 974u: goto L_08AE3B00;
    case 975u: goto L_08AE3B08;
    case 976u: goto L_08AE3B24;
    case 977u: goto L_08AE3B2C;
    case 978u: goto L_08AE3B34;
    case 979u: goto L_08AE3B3C;
    case 980u: goto L_08AE3B44;
    case 981u: goto L_08AE3B48;
    case 982u: goto L_08AE3B58;
    case 983u: goto L_08AE3B78;
    case 984u: goto L_08AE3B94;
    case 985u: goto L_08AE3B9C;
    case 986u: goto L_08AE3BA8;
    case 987u: goto L_08AE3BB0;
    case 988u: goto L_08AE3BC0;
    case 989u: goto L_08AE3BD0;
    case 990u: goto L_08AE3BD8;
    case 991u: goto L_08AE3C00;
    case 992u: goto L_08AE3C10;
    case 993u: goto L_08AE3C18;
    case 994u: goto L_08AE3C20;
    case 995u: goto L_08AE3C2C;
    case 996u: goto L_08AE3C4C;
    case 997u: goto L_08AE3C90;
    case 998u: goto L_08AE3CA0;
    case 999u: goto L_08AE3CB0;
    case 1000u: goto L_08AE3CD0;
    case 1001u: goto L_08AE3CF4;
    case 1002u: goto L_08AE3D00;
    case 1003u: goto L_08AE3D10;
    case 1004u: goto L_08AE3D28;
    case 1005u: goto L_08AE3D68;
    case 1006u: goto L_08AE3DAC;
    case 1007u: goto L_08AE3DC8;
    case 1008u: goto L_08AE3E0C;
    case 1009u: goto L_08AE3E3C;
    case 1010u: goto L_08AE3E58;
    case 1011u: goto L_08AE3E80;
    case 1012u: goto L_08AE3E88;
    case 1013u: goto L_08AE3E9C;
    case 1014u: goto L_08AE3EAC;
    case 1015u: goto L_08AE3EB4;
    case 1016u: goto L_08AE3EBC;
    case 1017u: goto L_08AE3EC4;
    case 1018u: goto L_08AE3EC8;
    case 1019u: goto L_08AE3ED0;
    case 1020u: goto L_08AE3EE4;
    case 1021u: goto L_08AE3EF4;
    case 1022u: goto L_08AE3F04;
    case 1023u: goto L_08AE3F18;
    case 1024u: goto L_08AE3F20;
    case 1025u: goto L_08AE3F28;
    case 1026u: goto L_08AE3F30;
    case 1027u: goto L_08AE3F38;
    case 1028u: goto L_08AE3F48;
    case 1029u: goto L_08AE3F50;
    case 1030u: goto L_08AE3F58;
    case 1031u: goto L_08AE3F68;
    case 1032u: goto L_08AE3F70;
    case 1033u: goto L_08AE3F78;
    case 1034u: goto L_08AE3F7C;
    case 1035u: goto L_08AE3F8C;
    case 1036u: goto L_08AE3FE8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08AE0000:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-29120));
    goto L_08AE0004;
L_08AE0004:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE0010:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AE0040;
      }
      goto L_08AE0038;
    }
L_08AE0038:
    ctx.gpr[31] = (0x08AE0040u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem) && ctx.pc == 0x08AE0040u) goto L_08AE0040;
    return;
L_08AE0040:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16456));
    ctx.gpr[31] = (0x08AE0058u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem) && ctx.pc == 0x08AE0058u) goto L_08AE0058;
    return;
L_08AE0058:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AE0064u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 453u, 0x088070DCu>(ctx, &aot_mem) && ctx.pc == 0x08AE0064u) goto L_08AE0064;
    return;
L_08AE0064:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AE0070u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 324u, 0x08806888u>(ctx, &aot_mem) && ctx.pc == 0x08AE0070u) goto L_08AE0070;
    return;
L_08AE0070:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE00A0;
      }
      goto L_08AE0078;
    }
L_08AE0078:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AE0084u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0196_entry, 196u, 284u, 0x08B156A8u>(ctx, &aot_mem) && ctx.pc == 0x08AE0084u) goto L_08AE0084;
    return;
L_08AE0084:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    ctx.gpr[31] = (0x08AE0090u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0196_entry, 196u, 284u, 0x08B156A8u>(ctx, &aot_mem) && ctx.pc == 0x08AE0090u) goto L_08AE0090;
    return;
L_08AE0090:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x08AE00A0u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 299u, 0x089753F4u>(ctx, &aot_mem) && ctx.pc == 0x08AE00A0u) goto L_08AE00A0;
    return;
L_08AE00A0:
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
L_08AE00B8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE00C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[31]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(140), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(141), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(142), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[20] = (2222u << 16u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-56));
    ctx.gpr[21] = (2222u << 16u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-20));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[23] = (2237u << 16u);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-28416));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AE0128;
      }
      goto L_08AE0120;
    }
L_08AE0120:
    ctx.gpr[31] = (0x08AE0128u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 413u, 0x08B65B0Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE0128u) goto L_08AE0128;
    return;
L_08AE0128:
    ctx.gpr[31] = (0x08AE0130u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 881u, 0x08953F1Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE0130u) goto L_08AE0130;
    return;
L_08AE0130:
    ctx.gpr[31] = (0x08AE0138u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 984u, 0x08ADFDB4u>(ctx, &aot_mem) && ctx.pc == 0x08AE0138u) goto L_08AE0138;
    return;
L_08AE0138:
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[31] = (0x08AE0144u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-29120));
    if (rt.invoke_chained_direct<&recomp_unit_0141_entry, 141u, 391u, 0x08A39A64u>(ctx, &aot_mem) && ctx.pc == 0x08AE0144u) goto L_08AE0144;
    return;
L_08AE0144:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(136), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(20))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(38), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE01B0;
      }
      goto L_08AE01A4;
    }
L_08AE01A4:
    ctx.gpr[31] = (0x08AE01ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE01ACu) goto L_08AE01AC;
    return;
L_08AE01AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_08AE01B0;
L_08AE01B0:
    ctx.gpr[31] = (0x08AE01B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 247u, 0x08A54F5Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE01B8u) goto L_08AE01B8;
    return;
L_08AE01B8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE01E8;
      }
      goto L_08AE01DC;
    }
L_08AE01DC:
    ctx.gpr[31] = (0x08AE01E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE01E4u) goto L_08AE01E4;
    return;
L_08AE01E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_08AE01E8;
L_08AE01E8:
    ctx.gpr[31] = (0x08AE01F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 247u, 0x08A54F5Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE01F0u) goto L_08AE01F0;
    return;
L_08AE01F0:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AE0200u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.pc = 0x08B73074u;
    return;
L_08AE0200:
    ctx.gpr[31] = (0x08AE0208u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x08AE0208u) goto L_08AE0208;
    return;
L_08AE0208:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AE0218u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem) && ctx.pc == 0x08AE0218u) goto L_08AE0218;
    return;
L_08AE0218:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (0u | 58u);
      if (branch_taken) {
          goto L_08AE025C;
      }
      goto L_08AE022C;
    }
L_08AE022C:
    ctx.gpr[7] = (0u | 46u);
    goto L_08AE0230;
L_08AE0230:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08AE0248;
      }
      goto L_08AE0244;
    }
L_08AE0244:
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    goto L_08AE0248;
L_08AE0248:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE0230;
      }
      goto L_08AE025C;
    }
L_08AE025C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE0298;
      }
      goto L_08AE026C;
    }
L_08AE026C:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08AE0278u);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08AE0278u) goto L_08AE0278;
    return;
L_08AE0278:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08AE0290;
      }
      goto L_08AE0284;
    }
L_08AE0284:
    ctx.gpr[31] = (0x08AE028Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 114u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x08AE028Cu) goto L_08AE028C;
    return;
L_08AE028C:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_08AE0290;
L_08AE0290:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(280), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08AE02C0;
      }
      goto L_08AE0298;
    }
L_08AE0298:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08AE02A4u);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08AE02A4u) goto L_08AE02A4;
    return;
L_08AE02A4:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08AE02BC;
      }
      goto L_08AE02B0;
    }
L_08AE02B0:
    ctx.gpr[31] = (0x08AE02B8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 114u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x08AE02B8u) goto L_08AE02B8;
    return;
L_08AE02B8:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_08AE02BC;
L_08AE02BC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(280), ctx.gpr[18]);
    goto L_08AE02C0;
L_08AE02C0:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29232));
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[31] = (0x08AE02D4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2440));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 501u, 0x08ABE57Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE02D4u) goto L_08AE02D4;
    return;
L_08AE02D4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (22089u << 16u);
      if (branch_taken) {
          goto L_08AE02F4;
      }
      goto L_08AE02E4;
    }
L_08AE02E4:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17221));
    ctx.gpr[31] = (0x08AE02F0u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 580u, 0x08A87AC8u>(ctx, &aot_mem) && ctx.pc == 0x08AE02F0u) goto L_08AE02F0;
    return;
L_08AE02F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    goto L_08AE02F4;
L_08AE02F4:
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AE0300u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 634u, 0x08A87E54u>(ctx, &aot_mem) && ctx.pc == 0x08AE0300u) goto L_08AE0300;
    return;
L_08AE0300:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08AE031C;
      }
      goto L_08AE030C;
    }
L_08AE030C:
    ctx.gpr[31] = (0x08AE0314u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE0314u) goto L_08AE0314;
    return;
L_08AE0314:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_08AE031C;
L_08AE031C:
    ctx.gpr[31] = (0x08AE0324u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 496u, 0x08A52C54u>(ctx, &aot_mem) && ctx.pc == 0x08AE0324u) goto L_08AE0324;
    return;
L_08AE0324:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(4156)));
    ctx.gpr[31] = (0x08AE0334u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 11u, 0x08A88108u>(ctx, &aot_mem) && ctx.pc == 0x08AE0334u) goto L_08AE0334;
    return;
L_08AE0334:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-272)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-268)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AE0360u);
    ctx.gpr[4] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08AE0360u) goto L_08AE0360;
    return;
L_08AE0360:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
      if (branch_taken) {
          goto L_08AE0380;
      }
      goto L_08AE036C;
    }
L_08AE036C:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AE037Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0219_entry, 219u, 139u, 0x08B70BC0u>(ctx, &aot_mem) && ctx.pc == 0x08AE037Cu) goto L_08AE037C;
    return;
L_08AE037C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08AE0380;
L_08AE0380:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AE0398;
      }
      goto L_08AE0388;
    }
L_08AE0388:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_08AE0398;
L_08AE0398:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AE03AC;
      }
      goto L_08AE03A0;
    }
L_08AE03A0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08AE03AC;
L_08AE03AC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
        goto L_08AE03E0;
    }
    goto L_08AE03C4;
L_08AE03C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AE03DC;
      }
      goto L_08AE03D4;
    }
L_08AE03D4:
    ctx.gpr[31] = (0x08AE03DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08AE03DCu) goto L_08AE03DC;
    return;
L_08AE03DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_08AE03E0;
L_08AE03E0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE0400;
      }
      goto L_08AE03E8;
    }
L_08AE03E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AE0400;
      }
      goto L_08AE03F8;
    }
L_08AE03F8:
    ctx.gpr[31] = (0x08AE0400u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08AE0400u) goto L_08AE0400;
    return;
L_08AE0400:
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10338))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-264)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-260)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08AE0428u);
    ctx.gpr[4] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08AE0428u) goto L_08AE0428;
    return;
L_08AE0428:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_08AE0444;
      }
      goto L_08AE0434;
    }
L_08AE0434:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AE0440u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0219_entry, 219u, 139u, 0x08B70BC0u>(ctx, &aot_mem) && ctx.pc == 0x08AE0440u) goto L_08AE0440;
    return;
L_08AE0440:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_08AE0444;
L_08AE0444:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08AE0458;
      }
      goto L_08AE044C;
    }
L_08AE044C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08AE0458;
L_08AE0458:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AE0468u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem) && ctx.pc == 0x08AE0468u) goto L_08AE0468;
    return;
L_08AE0468:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE048C;
      }
      goto L_08AE0474;
    }
L_08AE0474:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AE048C;
      }
      goto L_08AE0484;
    }
L_08AE0484:
    ctx.gpr[31] = (0x08AE048Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08AE048Cu) goto L_08AE048C;
    return;
L_08AE048C:
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8618))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-256)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-252)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[5]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08AE04B4u);
    ctx.gpr[4] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08AE04B4u) goto L_08AE04B4;
    return;
L_08AE04B4:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
      if (branch_taken) {
          goto L_08AE04D0;
      }
      goto L_08AE04C0;
    }
L_08AE04C0:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AE04CCu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0219_entry, 219u, 139u, 0x08B70BC0u>(ctx, &aot_mem) && ctx.pc == 0x08AE04CCu) goto L_08AE04CC;
    return;
L_08AE04CC:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_08AE04D0;
L_08AE04D0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08AE04E4;
      }
      goto L_08AE04D8;
    }
L_08AE04D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08AE04E4;
L_08AE04E4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AE04F4u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem) && ctx.pc == 0x08AE04F4u) goto L_08AE04F4;
    return;
L_08AE04F4:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE0518;
      }
      goto L_08AE0500;
    }
L_08AE0500:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AE0518;
      }
      goto L_08AE0510;
    }
L_08AE0510:
    ctx.gpr[31] = (0x08AE0518u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08AE0518u) goto L_08AE0518;
    return;
L_08AE0518:
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10336))))));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08AE0528u);
    ctx.gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08AE0528u) goto L_08AE0528;
    return;
L_08AE0528:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2235u << 16u);
      if (branch_taken) {
          goto L_08AE055C;
      }
      goto L_08AE0534;
    }
L_08AE0534:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (2235u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_08AE055C;
L_08AE055C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08AE0570;
      }
      goto L_08AE0564;
    }
L_08AE0564:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08AE0570;
L_08AE0570:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AE0580u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem) && ctx.pc == 0x08AE0580u) goto L_08AE0580;
    return;
L_08AE0580:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE05A4;
      }
      goto L_08AE058C;
    }
L_08AE058C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AE05A4;
      }
      goto L_08AE059C;
    }
L_08AE059C:
    ctx.gpr[31] = (0x08AE05A4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08AE05A4u) goto L_08AE05A4;
    return;
L_08AE05A4:
    ctx.gpr[31] = (0x08AE05ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 963u, 0x08A37E44u>(ctx, &aot_mem) && ctx.pc == 0x08AE05ACu) goto L_08AE05AC;
    return;
L_08AE05AC:
    ctx.gpr[31] = (0x08AE05B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 241u, 0x0887CD60u>(ctx, &aot_mem) && ctx.pc == 0x08AE05B4u) goto L_08AE05B4;
    return;
L_08AE05B4:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(4203), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(4204), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(4208), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(4209), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08AE05D0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 572u, 0x08B4262Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE05D0u) goto L_08AE05D0;
    return;
L_08AE05D0:
    ctx.gpr[31] = (0x08AE05D8u);
    ctx.gpr[4] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 571u, 0x08B42624u>(ctx, &aot_mem) && ctx.pc == 0x08AE05D8u) goto L_08AE05D8;
    return;
L_08AE05D8:
    ctx.gpr[31] = (0x08AE05E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 530u, 0x0886A6D0u>(ctx, &aot_mem) && ctx.pc == 0x08AE05E0u) goto L_08AE05E0;
    return;
L_08AE05E0:
    ctx.gpr[31] = (0x08AE05E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 318u, 0x08A35524u>(ctx, &aot_mem) && ctx.pc == 0x08AE05E8u) goto L_08AE05E8;
    return;
L_08AE05E8:
    ctx.gpr[31] = (0x08AE05F0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(176));
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 470u, 0x08A762B0u>(ctx, &aot_mem) && ctx.pc == 0x08AE05F0u) goto L_08AE05F0;
    return;
L_08AE05F0:
    ctx.gpr[31] = (0x08AE05F8u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(208));
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 170u, 0x089414D0u>(ctx, &aot_mem) && ctx.pc == 0x08AE05F8u) goto L_08AE05F8;
    return;
L_08AE05F8:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(116));
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08AE0608u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 759u, 0x08933F0Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE0608u) goto L_08AE0608;
    return;
L_08AE0608:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(233), static_cast<std::uint8_t>(0u));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(232), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08AE062Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 145u, 0x08ADC774u>(ctx, &aot_mem) && ctx.pc == 0x08AE062Cu) goto L_08AE062C;
    return;
L_08AE062C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(264), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(265), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08AE0664u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 905u, 0x08ADFA58u>(ctx, &aot_mem) && ctx.pc == 0x08AE0664u) goto L_08AE0664;
    return;
L_08AE0664:
    ctx.gpr[31] = (0x08AE066Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 540u, 0x08AD3204u>(ctx, &aot_mem) && ctx.pc == 0x08AE066Cu) goto L_08AE066C;
    return;
L_08AE066C:
    ctx.gpr[4] = (0u | 100u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(268), ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(276), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(277), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-1044), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    ctx.gpr[31] = (0x08AE0694u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 350u, 0x088DE1D4u>(ctx, &aot_mem) && ctx.pc == 0x08AE0694u) goto L_08AE0694;
    return;
L_08AE0694:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(128), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08AE06A4u);
    ctx.gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 474u, 0x08AFB4E8u>(ctx, &aot_mem) && ctx.pc == 0x08AE06A4u) goto L_08AE06A4;
    return;
L_08AE06A4:
    ctx.gpr[4] = (49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-24260), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2238u << 16u);
    ctx.gpr[31] = (0x08AE06BCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(14864));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 47u, 0x089D03FCu>(ctx, &aot_mem) && ctx.pc == 0x08AE06BCu) goto L_08AE06BC;
    return;
L_08AE06BC:
    ctx.gpr[4] = (18371u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 20352u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(252)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE0720;
      }
      goto L_08AE06F0;
    }
L_08AE06F0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE070C;
      }
      goto L_08AE0700;
    }
L_08AE0700:
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(252)));
    goto L_08AE070C;
L_08AE070C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE06F0;
      }
      goto L_08AE0720;
    }
L_08AE0720:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE0740;
      }
      goto L_08AE072C;
    }
L_08AE072C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AE0738u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x08AE0738u) goto L_08AE0738;
    return;
L_08AE0738:
    ctx.gpr[31] = (0x08AE0740u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-248));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08AE0740u) goto L_08AE0740;
    return;
L_08AE0740:
    ctx.gpr[31] = (0x08AE0748u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 341u, 0x0882DAD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE0748u) goto L_08AE0748;
    return;
L_08AE0748:
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[4];
    ctx.gpr[4] = (2236u << 16u);
      if (branch_taken) {
          goto L_08AE0764;
      }
      goto L_08AE0758;
    }
L_08AE0758:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25856));
    ctx.gpr[31] = (0x08AE0764u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem) && ctx.pc == 0x08AE0764u) goto L_08AE0764;
    return;
L_08AE0764:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE0790:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[18] = (2236u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(32304));
    ctx.gpr[19] = (2236u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(25856));
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-1));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[22] = (2236u << 16u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(31984));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AE07F0;
      }
      goto L_08AE07E8;
    }
L_08AE07E8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(141), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08AE07F4;
      }
      goto L_08AE07F0;
    }
L_08AE07F0:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(141), static_cast<std::uint8_t>(0u));
    goto L_08AE07F4;
L_08AE07F4:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(142), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08AE0800u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08AE0800u) goto L_08AE0800;
    return;
L_08AE0800:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE0818;
      }
      goto L_08AE0808;
    }
L_08AE0808:
    ctx.gpr[31] = (0x08AE0810u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08AE0810u) goto L_08AE0810;
    return;
L_08AE0810:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(3336), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08AE0818;
L_08AE0818:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8360), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(2052), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08AE0828u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 640u, 0x08ABEFD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE0828u) goto L_08AE0828;
    return;
L_08AE0828:
    ctx.gpr[31] = (0x08AE0830u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 42u, 0x088703ECu>(ctx, &aot_mem) && ctx.pc == 0x08AE0830u) goto L_08AE0830;
    return;
L_08AE0830:
    ctx.gpr[31] = (0x08AE0838u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 640u, 0x08ABEFD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE0838u) goto L_08AE0838;
    return;
L_08AE0838:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-4784), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[31] = (0x08AE0844u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 116u, 0x089E8AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AE0844u) goto L_08AE0844;
    return;
L_08AE0844:
    ctx.gpr[31] = (0x08AE084Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 640u, 0x08ABEFD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE084Cu) goto L_08AE084C;
    return;
L_08AE084C:
    ctx.gpr[31] = (0x08AE0854u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(176));
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 593u, 0x08A76D64u>(ctx, &aot_mem) && ctx.pc == 0x08AE0854u) goto L_08AE0854;
    return;
L_08AE0854:
    ctx.gpr[31] = (0x08AE085Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 640u, 0x08ABEFD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE085Cu) goto L_08AE085C;
    return;
L_08AE085C:
    ctx.gpr[31] = (0x08AE0864u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(208));
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 207u, 0x08941748u>(ctx, &aot_mem) && ctx.pc == 0x08AE0864u) goto L_08AE0864;
    return;
L_08AE0864:
    ctx.gpr[31] = (0x08AE086Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 640u, 0x08ABEFD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE086Cu) goto L_08AE086C;
    return;
L_08AE086C:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-4784), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08AE0878u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 530u, 0x0886A6D0u>(ctx, &aot_mem) && ctx.pc == 0x08AE0878u) goto L_08AE0878;
    return;
L_08AE0878:
    ctx.gpr[31] = (0x08AE0880u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 318u, 0x08A35524u>(ctx, &aot_mem) && ctx.pc == 0x08AE0880u) goto L_08AE0880;
    return;
L_08AE0880:
    ctx.gpr[31] = (0x08AE0888u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 241u, 0x0887CD60u>(ctx, &aot_mem) && ctx.pc == 0x08AE0888u) goto L_08AE0888;
    return;
L_08AE0888:
    ctx.gpr[4] = (2238u << 16u);
    ctx.gpr[31] = (0x08AE0894u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(14864));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 47u, 0x089D03FCu>(ctx, &aot_mem) && ctx.pc == 0x08AE0894u) goto L_08AE0894;
    return;
L_08AE0894:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(252)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE08DC;
      }
      goto L_08AE08AC;
    }
L_08AE08AC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE08C8;
      }
      goto L_08AE08BC;
    }
L_08AE08BC:
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(252)));
    goto L_08AE08C8;
L_08AE08C8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE08AC;
      }
      goto L_08AE08DC;
    }
L_08AE08DC:
    ctx.gpr[31] = (0x08AE08E4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 640u, 0x08ABEFD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE08E4u) goto L_08AE08E4;
    return;
L_08AE08E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(224)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE0924;
      }
      goto L_08AE08F0;
    }
L_08AE08F0:
    ctx.gpr[31] = (0x08AE08F8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE08F8u) goto L_08AE08F8;
    return;
L_08AE08F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(224)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE0920;
      }
      goto L_08AE0904;
    }
L_08AE0904:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08AE0920u);
    ctx.gpr[5] = (0u | 3u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AE0920u) goto L_08AE0920;
    return;
L_08AE0920:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(224), 0u);
    goto L_08AE0924;
L_08AE0924:
    ctx.gpr[31] = (0x08AE092Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 640u, 0x08ABEFD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE092Cu) goto L_08AE092C;
    return;
L_08AE092C:
    ctx.gpr[31] = (0x08AE0934u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 887u, 0x08ADF9A4u>(ctx, &aot_mem) && ctx.pc == 0x08AE0934u) goto L_08AE0934;
    return;
L_08AE0934:
    ctx.gpr[31] = (0x08AE093Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 640u, 0x08ABEFD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE093Cu) goto L_08AE093C;
    return;
L_08AE093C:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10340)));
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE0974;
      }
      goto L_08AE0948;
    }
L_08AE0948:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AE096C;
      }
      goto L_08AE095C;
    }
L_08AE095C:
    ctx.gpr[31] = (0x08AE0964u);
    // nop
    ctx.pc = 0x08B7363Cu;
    return;
L_08AE0964:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
      if (branch_taken) {
          goto L_08AE0974;
      }
      goto L_08AE096C;
    }
L_08AE096C:
    ctx.gpr[31] = (0x08AE0974u);
    // nop
    ctx.pc = 0x08B7368Cu;
    return;
L_08AE0974:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10344)));
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE09AC;
      }
      goto L_08AE0980;
    }
L_08AE0980:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AE09A4;
      }
      goto L_08AE0994;
    }
L_08AE0994:
    ctx.gpr[31] = (0x08AE099Cu);
    // nop
    ctx.pc = 0x08B7363Cu;
    return;
L_08AE099C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
      if (branch_taken) {
          goto L_08AE09AC;
      }
      goto L_08AE09A4;
    }
L_08AE09A4:
    ctx.gpr[31] = (0x08AE09ACu);
    // nop
    ctx.pc = 0x08B7368Cu;
    return;
L_08AE09AC:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10344), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10340), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[31] = (0x08AE09C0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 640u, 0x08ABEFD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE09C0u) goto L_08AE09C0;
    return;
L_08AE09C0:
    ctx.gpr[31] = (0x08AE09C8u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(116));
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 735u, 0x08933CF8u>(ctx, &aot_mem) && ctx.pc == 0x08AE09C8u) goto L_08AE09C8;
    return;
L_08AE09C8:
    ctx.gpr[31] = (0x08AE09D0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 640u, 0x08ABEFD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE09D0u) goto L_08AE09D0;
    return;
L_08AE09D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE09E8;
      }
      goto L_08AE09DC;
    }
L_08AE09DC:
    ctx.gpr[31] = (0x08AE09E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE09E4u) goto L_08AE09E4;
    return;
L_08AE09E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    goto L_08AE09E8;
L_08AE09E8:
    ctx.gpr[31] = (0x08AE09F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 497u, 0x08A52C60u>(ctx, &aot_mem) && ctx.pc == 0x08AE09F0u) goto L_08AE09F0;
    return;
L_08AE09F0:
    ctx.gpr[31] = (0x08AE09F8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 640u, 0x08ABEFD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE09F8u) goto L_08AE09F8;
    return;
L_08AE09F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE0A48;
      }
      goto L_08AE0A04;
    }
L_08AE0A04:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 0 ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 1u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE0A48;
      }
      goto L_08AE0A1C;
    }
L_08AE0A1C:
    ctx.gpr[31] = (0x08AE0A24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 74u, 0x08A886C8u>(ctx, &aot_mem) && ctx.pc == 0x08AE0A24u) goto L_08AE0A24;
    return;
L_08AE0A24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (0x08AE0A30u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 585u, 0x08A87C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE0A30u) goto L_08AE0A30;
    return;
L_08AE0A30:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29232));
    ctx.gpr[31] = (0x08AE0A40u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem) && ctx.pc == 0x08AE0A40u) goto L_08AE0A40;
    return;
L_08AE0A40:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), 0u);
      if (branch_taken) {
          goto L_08AE0A6C;
      }
      goto L_08AE0A48;
    }
L_08AE0A48:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE0A6C;
      }
      goto L_08AE0A50;
    }
L_08AE0A50:
    ctx.gpr[31] = (0x08AE0A58u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 585u, 0x08A87C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE0A58u) goto L_08AE0A58;
    return;
L_08AE0A58:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29232));
    ctx.gpr[31] = (0x08AE0A68u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem) && ctx.pc == 0x08AE0A68u) goto L_08AE0A68;
    return;
L_08AE0A68:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), 0u);
    goto L_08AE0A6C;
L_08AE0A6C:
    ctx.gpr[31] = (0x08AE0A74u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 640u, 0x08ABEFD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE0A74u) goto L_08AE0A74;
    return;
L_08AE0A74:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(233), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08AE0A88u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 640u, 0x08ABEFD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE0A88u) goto L_08AE0A88;
    return;
L_08AE0A88:
    ctx.gpr[31] = (0x08AE0A90u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 144u, 0x08864CE4u>(ctx, &aot_mem) && ctx.pc == 0x08AE0A90u) goto L_08AE0A90;
    return;
L_08AE0A90:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(160), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), 0u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(88), static_cast<std::uint16_t>(ctx.gpr[21]));
    ctx.gpr[4] = (0u | 30u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(132), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(236), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[4] = (0u | 10u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 200u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(54), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[31] = (0x08AE0AECu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 640u, 0x08ABEFD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE0AECu) goto L_08AE0AEC;
    return;
L_08AE0AEC:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE0B04;
      }
      goto L_08AE0AF8;
    }
L_08AE0AF8:
    ctx.gpr[31] = (0x08AE0B00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x08AE0B00u) goto L_08AE0B00;
    return;
L_08AE0B00:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08AE0B04;
L_08AE0B04:
    ctx.gpr[31] = (0x08AE0B0Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 418u, 0x0880DCB8u>(ctx, &aot_mem) && ctx.pc == 0x08AE0B0Cu) goto L_08AE0B0C;
    return;
L_08AE0B0C:
    ctx.gpr[31] = (0x08AE0B14u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 640u, 0x08ABEFD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE0B14u) goto L_08AE0B14;
    return;
L_08AE0B14:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (ctx.gpr[17] != 0u) {
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(6850), static_cast<std::uint8_t>(0u));
        goto L_08AE0B30;
    }
    goto L_08AE0B20;
L_08AE0B20:
    ctx.gpr[31] = (0x08AE0B28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x08AE0B28u) goto L_08AE0B28;
    return;
L_08AE0B28:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(6850), static_cast<std::uint8_t>(0u));
    goto L_08AE0B30;
L_08AE0B30:
    ctx.gpr[31] = (0x08AE0B38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 271u, 0x08AB9680u>(ctx, &aot_mem) && ctx.pc == 0x08AE0B38u) goto L_08AE0B38;
    return;
L_08AE0B38:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-196));
      if (branch_taken) {
          goto L_08AE0B70;
      }
      goto L_08AE0B44;
    }
L_08AE0B44:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08AE0B50u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08AE0B50u) goto L_08AE0B50;
    return;
L_08AE0B50:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[20] == 0u) {
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
        goto L_08AE0B6C;
    }
    goto L_08AE0B5C;
L_08AE0B5C:
    ctx.gpr[31] = (0x08AE0B64u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE0B64u) goto L_08AE0B64;
    return;
L_08AE0B64:
    ctx.gpr[17] = (ctx.gpr[20] | 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_08AE0B6C;
L_08AE0B6C:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-196));
    goto L_08AE0B70;
L_08AE0B70:
    ctx.gpr[31] = (0x08AE0B78u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08AE0B78u) goto L_08AE0B78;
    return;
L_08AE0B78:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08AE0B9Cu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 493u, 0x08ABAB74u>(ctx, &aot_mem) && ctx.pc == 0x08AE0B9Cu) goto L_08AE0B9C;
    return;
L_08AE0B9C:
    ctx.gpr[31] = (0x08AE0BA4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 640u, 0x08ABEFD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE0BA4u) goto L_08AE0BA4;
    return;
L_08AE0BA4:
    ctx.gpr[31] = (0x08AE0BACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 62u, 0x0882C3C8u>(ctx, &aot_mem) && ctx.pc == 0x08AE0BACu) goto L_08AE0BAC;
    return;
L_08AE0BAC:
    ctx.gpr[31] = (0x08AE0BB4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 640u, 0x08ABEFD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE0BB4u) goto L_08AE0BB4;
    return;
L_08AE0BB4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE0C0C;
      }
      goto L_08AE0BC0;
    }
L_08AE0BC0:
    ctx.gpr[31] = (0x08AE0BC8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 984u, 0x08ADFDB4u>(ctx, &aot_mem) && ctx.pc == 0x08AE0BC8u) goto L_08AE0BC8;
    return;
L_08AE0BC8:
    ctx.gpr[31] = (0x08AE0BD0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 898u, 0x08ADFA14u>(ctx, &aot_mem) && ctx.pc == 0x08AE0BD0u) goto L_08AE0BD0;
    return;
L_08AE0BD0:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08AE0BDCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 616u, 0x08AD372Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE0BDCu) goto L_08AE0BDC;
    return;
L_08AE0BDC:
    ctx.gpr[31] = (0x08AE0BE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 575u, 0x08AD34BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE0BE4u) goto L_08AE0BE4;
    return;
L_08AE0BE4:
    ctx.gpr[31] = (0x08AE0BECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 600u, 0x08AD3634u>(ctx, &aot_mem) && ctx.pc == 0x08AE0BECu) goto L_08AE0BEC;
    return;
L_08AE0BEC:
    ctx.gpr[31] = (0x08AE0BF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 604u, 0x08AD3670u>(ctx, &aot_mem) && ctx.pc == 0x08AE0BF4u) goto L_08AE0BF4;
    return;
L_08AE0BF4:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08AE0C04u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08AE0C04u) goto L_08AE0C04;
    return;
L_08AE0C04:
    ctx.gpr[31] = (0x08AE0C0Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 598u, 0x08AD3610u>(ctx, &aot_mem) && ctx.pc == 0x08AE0C0Cu) goto L_08AE0C0C;
    return;
L_08AE0C0C:
    ctx.gpr[31] = (0x08AE0C14u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 640u, 0x08ABEFD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE0C14u) goto L_08AE0C14;
    return;
L_08AE0C14:
    ctx.gpr[31] = (0x08AE0C1Cu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 842u, 0x08ABFF10u>(ctx, &aot_mem) && ctx.pc == 0x08AE0C1Cu) goto L_08AE0C1C;
    return;
L_08AE0C1C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(268), ctx.gpr[21]);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-29156), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[31] = (0x08AE0C30u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-29120));
    if (rt.invoke_chained_direct<&recomp_unit_0141_entry, 141u, 396u, 0x08A39ACCu>(ctx, &aot_mem) && ctx.pc == 0x08AE0C30u) goto L_08AE0C30;
    return;
L_08AE0C30:
    ctx.gpr[31] = (0x08AE0C38u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 640u, 0x08ABEFD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE0C38u) goto L_08AE0C38;
    return;
L_08AE0C38:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE0C64;
      }
      goto L_08AE0C44;
    }
L_08AE0C44:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(29232));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AE0C58u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 336u, 0x089B9BA0u>(ctx, &aot_mem) && ctx.pc == 0x08AE0C58u) goto L_08AE0C58;
    return;
L_08AE0C58:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AE0C64u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 323u, 0x089B9ABCu>(ctx, &aot_mem) && ctx.pc == 0x08AE0C64u) goto L_08AE0C64;
    return;
L_08AE0C64:
    ctx.gpr[31] = (0x08AE0C6Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 640u, 0x08ABEFD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE0C6Cu) goto L_08AE0C6C;
    return;
L_08AE0C6C:
    ctx.gpr[31] = (0x08AE0C74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 538u, 0x08AD31E8u>(ctx, &aot_mem) && ctx.pc == 0x08AE0C74u) goto L_08AE0C74;
    return;
L_08AE0C74:
    ctx.gpr[31] = (0x08AE0C7Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 640u, 0x08ABEFD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE0C7Cu) goto L_08AE0C7C;
    return;
L_08AE0C7C:
    ctx.gpr[31] = (0x08AE0C84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 519u, 0x0896E260u>(ctx, &aot_mem) && ctx.pc == 0x08AE0C84u) goto L_08AE0C84;
    return;
L_08AE0C84:
    ctx.gpr[31] = (0x08AE0C8Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 640u, 0x08ABEFD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE0C8Cu) goto L_08AE0C8C;
    return;
L_08AE0C8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(280)));
    ctx.gpr[31] = (0x08AE0C98u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 116u, 0x08804DB4u>(ctx, &aot_mem) && ctx.pc == 0x08AE0C98u) goto L_08AE0C98;
    return;
L_08AE0C98:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(280), 0u);
    ctx.gpr[31] = (0x08AE0CA4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 640u, 0x08ABEFD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE0CA4u) goto L_08AE0CA4;
    return;
L_08AE0CA4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AE0CB8u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 156u, 0x08A1CF7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE0CB8u) goto L_08AE0CB8;
    return;
L_08AE0CB8:
    ctx.gpr[31] = (0x08AE0CC0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 640u, 0x08ABEFD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE0CC0u) goto L_08AE0CC0;
    return;
L_08AE0CC0:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-24260), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE0CD8;
      }
      goto L_08AE0CD0;
    }
L_08AE0CD0:
    ctx.gpr[31] = (0x08AE0CD8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 517u, 0x08ADDF74u>(ctx, &aot_mem) && ctx.pc == 0x08AE0CD8u) goto L_08AE0CD8;
    return;
L_08AE0CD8:
    ctx.gpr[31] = (0x08AE0CE0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 640u, 0x08ABEFD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE0CE0u) goto L_08AE0CE0;
    return;
L_08AE0CE0:
    ctx.gpr[31] = (0x08AE0CE8u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 640u, 0x08ABEFD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE0CE8u) goto L_08AE0CE8;
    return;
L_08AE0CE8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
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
L_08AE0D14:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AE0D2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 141u, 0x08ADC754u>(ctx, &aot_mem) && ctx.pc == 0x08AE0D2Cu) goto L_08AE0D2C;
    return;
L_08AE0D2C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(12) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE11A0;
      }
      goto L_08AE0D3C;
    }
L_08AE0D3C:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(16520)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE0D54:
    ctx.gpr[16] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[16] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE0E74;
      }
      goto L_08AE0D64;
    }
L_08AE0D64:
    ctx.gpr[16] = (ctx.gpr[16] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[16]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(16568)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE0D7C:
    ctx.gpr[4] = (0u | 228u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08AE0D8Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08AE0D8Cu) goto L_08AE0D8C;
    return;
L_08AE0D8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE0E74;
      }
      goto L_08AE0D94;
    }
L_08AE0D94:
    ctx.gpr[4] = (0u | 261u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08AE0DA4u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08AE0DA4u) goto L_08AE0DA4;
    return;
L_08AE0DA4:
    ctx.gpr[4] = (0u | 258u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08AE0DB4u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08AE0DB4u) goto L_08AE0DB4;
    return;
L_08AE0DB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE0E74;
      }
      goto L_08AE0DBC;
    }
L_08AE0DBC:
    ctx.gpr[4] = (0u | 270u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08AE0DCCu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08AE0DCCu) goto L_08AE0DCC;
    return;
L_08AE0DCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE0E74;
      }
      goto L_08AE0DD4;
    }
L_08AE0DD4:
    ctx.gpr[4] = (0u | 270u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08AE0DE4u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08AE0DE4u) goto L_08AE0DE4;
    return;
L_08AE0DE4:
    ctx.gpr[4] = (0u | 258u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08AE0DF4u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08AE0DF4u) goto L_08AE0DF4;
    return;
L_08AE0DF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE0E74;
      }
      goto L_08AE0DFC;
    }
L_08AE0DFC:
    ctx.gpr[4] = (0u | 227u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08AE0E0Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08AE0E0Cu) goto L_08AE0E0C;
    return;
L_08AE0E0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE0E74;
      }
      goto L_08AE0E14;
    }
L_08AE0E14:
    ctx.gpr[4] = (0u | 270u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08AE0E24u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08AE0E24u) goto L_08AE0E24;
    return;
L_08AE0E24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE0E74;
      }
      goto L_08AE0E2C;
    }
L_08AE0E2C:
    ctx.gpr[4] = (0u | 270u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08AE0E3Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08AE0E3Cu) goto L_08AE0E3C;
    return;
L_08AE0E3C:
    ctx.gpr[4] = (0u | 258u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08AE0E4Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08AE0E4Cu) goto L_08AE0E4C;
    return;
L_08AE0E4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE0E74;
      }
      goto L_08AE0E54;
    }
L_08AE0E54:
    ctx.gpr[4] = (0u | 261u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08AE0E64u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08AE0E64u) goto L_08AE0E64;
    return;
L_08AE0E64:
    ctx.gpr[4] = (0u | 228u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08AE0E74u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08AE0E74u) goto L_08AE0E74;
    return;
L_08AE0E74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE11A0;
      }
      goto L_08AE0E7C;
    }
L_08AE0E7C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE0EA8;
      }
      goto L_08AE0E88;
    }
L_08AE0E88:
    ctx.gpr[4] = (0u | 207u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08AE0E98u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08AE0E98u) goto L_08AE0E98;
    return;
L_08AE0E98:
    ctx.gpr[4] = (0u | 234u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08AE0EA8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08AE0EA8u) goto L_08AE0EA8;
    return;
L_08AE0EA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE11A0;
      }
      goto L_08AE0EB0;
    }
L_08AE0EB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE11A0;
      }
      goto L_08AE0EB8;
    }
L_08AE0EB8:
    ctx.gpr[16] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) > 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AE0EF4;
      }
      goto L_08AE0EC4;
    }
L_08AE0EC4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AE0F44;
      }
      goto L_08AE0ECC;
    }
L_08AE0ECC:
    ctx.gpr[4] = (0u | 261u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08AE0EDCu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08AE0EDCu) goto L_08AE0EDC;
    return;
L_08AE0EDC:
    ctx.gpr[4] = (0u | 258u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08AE0EECu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08AE0EECu) goto L_08AE0EEC;
    return;
L_08AE0EEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE0F44;
      }
      goto L_08AE0EF4;
    }
L_08AE0EF4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AE0F0C;
      }
      goto L_08AE0EFC;
    }
L_08AE0EFC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE0F24;
      }
      goto L_08AE0F04;
    }
L_08AE0F04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE0F44;
      }
      goto L_08AE0F0C;
    }
L_08AE0F0C:
    ctx.gpr[4] = (0u | 270u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08AE0F1Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08AE0F1Cu) goto L_08AE0F1C;
    return;
L_08AE0F1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE0F44;
      }
      goto L_08AE0F24;
    }
L_08AE0F24:
    ctx.gpr[4] = (0u | 261u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08AE0F34u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08AE0F34u) goto L_08AE0F34;
    return;
L_08AE0F34:
    ctx.gpr[4] = (0u | 270u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08AE0F44u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08AE0F44u) goto L_08AE0F44;
    return;
L_08AE0F44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE11A0;
      }
      goto L_08AE0F4C;
    }
L_08AE0F4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE11A0;
      }
      goto L_08AE0F54;
    }
L_08AE0F54:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE0F70;
      }
      goto L_08AE0F60;
    }
L_08AE0F60:
    ctx.gpr[4] = (0u | 258u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08AE0F70u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08AE0F70u) goto L_08AE0F70;
    return;
L_08AE0F70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE11A0;
      }
      goto L_08AE0F78;
    }
L_08AE0F78:
    ctx.gpr[16] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[16] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1044;
      }
      goto L_08AE0F88;
    }
L_08AE0F88:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AE0FC4;
      }
      goto L_08AE0F94;
    }
L_08AE0F94:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08AE0FD4;
      }
      goto L_08AE0F9C;
    }
L_08AE0F9C:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AE0FFC;
      }
      goto L_08AE0FA4;
    }
L_08AE0FA4:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08AE1024;
      }
      goto L_08AE0FAC;
    }
L_08AE0FAC:
    ctx.gpr[4] = (0u | 246u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08AE0FBCu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08AE0FBCu) goto L_08AE0FBC;
    return;
L_08AE0FBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1044;
      }
      goto L_08AE0FC4;
    }
L_08AE0FC4:
    ctx.gpr[4] = (0u | 261u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08AE0FD4u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08AE0FD4u) goto L_08AE0FD4;
    return;
L_08AE0FD4:
    ctx.gpr[4] = (0u | 197u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08AE0FE4u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08AE0FE4u) goto L_08AE0FE4;
    return;
L_08AE0FE4:
    ctx.gpr[4] = (0u | 186u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08AE0FF4u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08AE0FF4u) goto L_08AE0FF4;
    return;
L_08AE0FF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1044;
      }
      goto L_08AE0FFC;
    }
L_08AE0FFC:
    ctx.gpr[4] = (0u | 261u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08AE100Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08AE100Cu) goto L_08AE100C;
    return;
L_08AE100C:
    ctx.gpr[4] = (0u | 228u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08AE101Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08AE101Cu) goto L_08AE101C;
    return;
L_08AE101C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1044;
      }
      goto L_08AE1024;
    }
L_08AE1024:
    ctx.gpr[4] = (0u | 197u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08AE1034u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08AE1034u) goto L_08AE1034;
    return;
L_08AE1034:
    ctx.gpr[4] = (0u | 186u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08AE1044u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08AE1044u) goto L_08AE1044;
    return;
L_08AE1044:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE11A0;
      }
      goto L_08AE104C;
    }
L_08AE104C:
    ctx.gpr[16] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[16] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1110;
      }
      goto L_08AE105C;
    }
L_08AE105C:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AE10A8;
      }
      goto L_08AE1068;
    }
L_08AE1068:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08AE10C0;
      }
      goto L_08AE1070;
    }
L_08AE1070:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AE10E8;
      }
      goto L_08AE1078;
    }
L_08AE1078:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08AE1100;
      }
      goto L_08AE1080;
    }
L_08AE1080:
    ctx.gpr[4] = (0u | 261u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08AE1090u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08AE1090u) goto L_08AE1090;
    return;
L_08AE1090:
    ctx.gpr[4] = (0u | 270u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08AE10A0u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08AE10A0u) goto L_08AE10A0;
    return;
L_08AE10A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1110;
      }
      goto L_08AE10A8;
    }
L_08AE10A8:
    ctx.gpr[4] = (0u | 228u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08AE10B8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08AE10B8u) goto L_08AE10B8;
    return;
L_08AE10B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1110;
      }
      goto L_08AE10C0;
    }
L_08AE10C0:
    ctx.gpr[4] = (0u | 261u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08AE10D0u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08AE10D0u) goto L_08AE10D0;
    return;
L_08AE10D0:
    ctx.gpr[4] = (0u | 270u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08AE10E0u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08AE10E0u) goto L_08AE10E0;
    return;
L_08AE10E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1110;
      }
      goto L_08AE10E8;
    }
L_08AE10E8:
    ctx.gpr[4] = (0u | 180u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08AE10F8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08AE10F8u) goto L_08AE10F8;
    return;
L_08AE10F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1110;
      }
      goto L_08AE1100;
    }
L_08AE1100:
    ctx.gpr[4] = (0u | 270u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08AE1110u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08AE1110u) goto L_08AE1110;
    return;
L_08AE1110:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE11A0;
      }
      goto L_08AE1118;
    }
L_08AE1118:
    ctx.gpr[16] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) > 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AE1144;
      }
      goto L_08AE1124;
    }
L_08AE1124:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AE116C;
      }
      goto L_08AE112C;
    }
L_08AE112C:
    ctx.gpr[4] = (0u | 270u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08AE113Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08AE113Cu) goto L_08AE113C;
    return;
L_08AE113C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE116C;
      }
      goto L_08AE1144;
    }
L_08AE1144:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE116C;
      }
      goto L_08AE114C;
    }
L_08AE114C:
    ctx.gpr[4] = (0u | 233u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08AE115Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08AE115Cu) goto L_08AE115C;
    return;
L_08AE115C:
    ctx.gpr[4] = (0u | 258u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08AE116Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08AE116Cu) goto L_08AE116C;
    return;
L_08AE116C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE11A0;
      }
      goto L_08AE1174;
    }
L_08AE1174:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE11A0;
      }
      goto L_08AE117C;
    }
L_08AE117C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE11A0;
      }
      goto L_08AE1184;
    }
L_08AE1184:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE11A0;
      }
      goto L_08AE1190;
    }
L_08AE1190:
    ctx.gpr[4] = (0u | 275u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08AE11A0u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08AE11A0u) goto L_08AE11A0;
    return;
L_08AE11A0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE11B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AE11C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 141u, 0x08ADC754u>(ctx, &aot_mem) && ctx.pc == 0x08AE11C8u) goto L_08AE11C8;
    return;
L_08AE11C8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(12) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1580;
      }
      goto L_08AE11D8;
    }
L_08AE11D8:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(16600)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE11F0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE120C;
      }
      goto L_08AE11FC;
    }
L_08AE11FC:
    ctx.gpr[4] = (0u | 228u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08AE120Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08AE120Cu) goto L_08AE120C;
    return;
L_08AE120C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1580;
      }
      goto L_08AE1214;
    }
L_08AE1214:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AE1240;
      }
      goto L_08AE1220;
    }
L_08AE1220:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AE1280;
      }
      goto L_08AE1228;
    }
L_08AE1228:
    ctx.gpr[4] = (0u | 228u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08AE1238u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08AE1238u) goto L_08AE1238;
    return;
L_08AE1238:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1280;
      }
      goto L_08AE1240;
    }
L_08AE1240:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AE1258;
      }
      goto L_08AE1248;
    }
L_08AE1248:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1270;
      }
      goto L_08AE1250;
    }
L_08AE1250:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1280;
      }
      goto L_08AE1258;
    }
L_08AE1258:
    ctx.gpr[4] = (0u | 228u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08AE1268u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08AE1268u) goto L_08AE1268;
    return;
L_08AE1268:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1280;
      }
      goto L_08AE1270;
    }
L_08AE1270:
    ctx.gpr[4] = (0u | 207u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08AE1280u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08AE1280u) goto L_08AE1280;
    return;
L_08AE1280:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1580;
      }
      goto L_08AE1288;
    }
L_08AE1288:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AE12B4;
      }
      goto L_08AE1294;
    }
L_08AE1294:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AE12F4;
      }
      goto L_08AE129C;
    }
L_08AE129C:
    ctx.gpr[4] = (0u | 265u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08AE12ACu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08AE12ACu) goto L_08AE12AC;
    return;
L_08AE12AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE12F4;
      }
      goto L_08AE12B4;
    }
L_08AE12B4:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AE12CC;
      }
      goto L_08AE12BC;
    }
L_08AE12BC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE12E4;
      }
      goto L_08AE12C4;
    }
L_08AE12C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE12F4;
      }
      goto L_08AE12CC;
    }
L_08AE12CC:
    ctx.gpr[4] = (0u | 227u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08AE12DCu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08AE12DCu) goto L_08AE12DC;
    return;
L_08AE12DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE12F4;
      }
      goto L_08AE12E4;
    }
L_08AE12E4:
    ctx.gpr[4] = (0u | 258u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08AE12F4u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08AE12F4u) goto L_08AE12F4;
    return;
L_08AE12F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1580;
      }
      goto L_08AE12FC;
    }
L_08AE12FC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AE1328;
      }
      goto L_08AE1308;
    }
L_08AE1308:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AE1368;
      }
      goto L_08AE1310;
    }
L_08AE1310:
    ctx.gpr[4] = (0u | 242u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08AE1320u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08AE1320u) goto L_08AE1320;
    return;
L_08AE1320:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1368;
      }
      goto L_08AE1328;
    }
L_08AE1328:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AE1340;
      }
      goto L_08AE1330;
    }
L_08AE1330:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1358;
      }
      goto L_08AE1338;
    }
L_08AE1338:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1368;
      }
      goto L_08AE1340;
    }
L_08AE1340:
    ctx.gpr[4] = (0u | 184u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08AE1350u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08AE1350u) goto L_08AE1350;
    return;
L_08AE1350:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1368;
      }
      goto L_08AE1358;
    }
L_08AE1358:
    ctx.gpr[4] = (0u | 197u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08AE1368u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08AE1368u) goto L_08AE1368;
    return;
L_08AE1368:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1580;
      }
      goto L_08AE1370;
    }
L_08AE1370:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1580;
      }
      goto L_08AE1378;
    }
L_08AE1378:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    if (static_cast<std::int32_t>(ctx.gpr[4]) > 0) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
        goto L_08AE13A4;
    }
    goto L_08AE1384;
L_08AE1384:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AE13BC;
      }
      goto L_08AE138C;
    }
L_08AE138C:
    ctx.gpr[4] = (0u | 228u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08AE139Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08AE139Cu) goto L_08AE139C;
    return;
L_08AE139C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE13BC;
      }
      goto L_08AE13A4;
    }
L_08AE13A4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE13BC;
      }
      goto L_08AE13AC;
    }
L_08AE13AC:
    ctx.gpr[4] = (0u | 265u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08AE13BCu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08AE13BCu) goto L_08AE13BC;
    return;
L_08AE13BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1580;
      }
      goto L_08AE13C4;
    }
L_08AE13C4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1478;
      }
      goto L_08AE13D4;
    }
L_08AE13D4:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AE1410;
      }
      goto L_08AE13E0;
    }
L_08AE13E0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08AE1428;
      }
      goto L_08AE13E8;
    }
L_08AE13E8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AE1440;
      }
      goto L_08AE13F0;
    }
L_08AE13F0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08AE1468;
      }
      goto L_08AE13F8;
    }
L_08AE13F8:
    ctx.gpr[4] = (0u | 228u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08AE1408u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08AE1408u) goto L_08AE1408;
    return;
L_08AE1408:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1478;
      }
      goto L_08AE1410;
    }
L_08AE1410:
    ctx.gpr[4] = (0u | 228u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08AE1420u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08AE1420u) goto L_08AE1420;
    return;
L_08AE1420:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1478;
      }
      goto L_08AE1428;
    }
L_08AE1428:
    ctx.gpr[4] = (0u | 228u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08AE1438u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08AE1438u) goto L_08AE1438;
    return;
L_08AE1438:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1478;
      }
      goto L_08AE1440;
    }
L_08AE1440:
    ctx.gpr[4] = (0u | 261u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08AE1450u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08AE1450u) goto L_08AE1450;
    return;
L_08AE1450:
    ctx.gpr[4] = (0u | 193u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08AE1460u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08AE1460u) goto L_08AE1460;
    return;
L_08AE1460:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1478;
      }
      goto L_08AE1468;
    }
L_08AE1468:
    ctx.gpr[4] = (0u | 194u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08AE1478u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08AE1478u) goto L_08AE1478;
    return;
L_08AE1478:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1580;
      }
      goto L_08AE1480;
    }
L_08AE1480:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    if (static_cast<std::int32_t>(ctx.gpr[4]) > 0) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
        goto L_08AE14AC;
    }
    goto L_08AE148C;
L_08AE148C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AE14C4;
      }
      goto L_08AE1494;
    }
L_08AE1494:
    ctx.gpr[4] = (0u | 209u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08AE14A4u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08AE14A4u) goto L_08AE14A4;
    return;
L_08AE14A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE14C4;
      }
      goto L_08AE14AC;
    }
L_08AE14AC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE14C4;
      }
      goto L_08AE14B4;
    }
L_08AE14B4:
    ctx.gpr[4] = (0u | 209u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08AE14C4u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08AE14C4u) goto L_08AE14C4;
    return;
L_08AE14C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1580;
      }
      goto L_08AE14CC;
    }
L_08AE14CC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE14EC;
      }
      goto L_08AE14D8;
    }
L_08AE14D8:
    ctx.gpr[4] = (0u | 238u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08AE14E8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08AE14E8u) goto L_08AE14E8;
    return;
L_08AE14E8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    goto L_08AE14EC;
L_08AE14EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE14F8;
      }
      goto L_08AE14F4;
    }
L_08AE14F4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    goto L_08AE14F8;
L_08AE14F8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1510;
      }
      goto L_08AE1500;
    }
L_08AE1500:
    ctx.gpr[4] = (0u | 240u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08AE1510u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08AE1510u) goto L_08AE1510;
    return;
L_08AE1510:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1580;
      }
      goto L_08AE1518;
    }
L_08AE1518:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    if (static_cast<std::int32_t>(ctx.gpr[4]) > 0) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
        goto L_08AE1544;
    }
    goto L_08AE1524;
L_08AE1524:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AE155C;
      }
      goto L_08AE152C;
    }
L_08AE152C:
    ctx.gpr[4] = (0u | 257u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08AE153Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08AE153Cu) goto L_08AE153C;
    return;
L_08AE153C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE155C;
      }
      goto L_08AE1544;
    }
L_08AE1544:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE155C;
      }
      goto L_08AE154C;
    }
L_08AE154C:
    ctx.gpr[4] = (0u | 278u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08AE155Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08AE155Cu) goto L_08AE155C;
    return;
L_08AE155C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1580;
      }
      goto L_08AE1564;
    }
L_08AE1564:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1580;
      }
      goto L_08AE1570;
    }
L_08AE1570:
    ctx.gpr[4] = (0u | 246u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08AE1580u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08AE1580u) goto L_08AE1580;
    return;
L_08AE1580:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE1590:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AE15A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 141u, 0x08ADC754u>(ctx, &aot_mem) && ctx.pc == 0x08AE15A8u) goto L_08AE15A8;
    return;
L_08AE15A8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[5] = (0u | 6u);
      if (branch_taken) {
          goto L_08AE15C4;
      }
      goto L_08AE15B4;
    }
L_08AE15B4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AE1774;
      }
      goto L_08AE15BC;
    }
L_08AE15BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE16D0;
      }
      goto L_08AE15C4;
    }
L_08AE15C4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AE1774;
      }
      goto L_08AE15CC;
    }
L_08AE15CC:
    ctx.gpr[16] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) > 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AE1628;
      }
      goto L_08AE15D8;
    }
L_08AE15D8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AE16C8;
      }
      goto L_08AE15E0;
    }
L_08AE15E0:
    ctx.gpr[4] = (0u | 197u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08AE15F0u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08AE15F0u) goto L_08AE15F0;
    return;
L_08AE15F0:
    ctx.gpr[4] = (0u | 212u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08AE1600u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08AE1600u) goto L_08AE1600;
    return;
L_08AE1600:
    ctx.gpr[4] = (0u | 259u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08AE1610u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08AE1610u) goto L_08AE1610;
    return;
L_08AE1610:
    ctx.gpr[4] = (0u | 215u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08AE1620u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08AE1620u) goto L_08AE1620;
    return;
L_08AE1620:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE16C8;
      }
      goto L_08AE1628;
    }
L_08AE1628:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AE1640;
      }
      goto L_08AE1630;
    }
L_08AE1630:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1688;
      }
      goto L_08AE1638;
    }
L_08AE1638:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE16C8;
      }
      goto L_08AE1640;
    }
L_08AE1640:
    ctx.gpr[4] = (0u | 233u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08AE1650u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08AE1650u) goto L_08AE1650;
    return;
L_08AE1650:
    ctx.gpr[4] = (0u | 212u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08AE1660u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08AE1660u) goto L_08AE1660;
    return;
L_08AE1660:
    ctx.gpr[4] = (0u | 258u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08AE1670u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08AE1670u) goto L_08AE1670;
    return;
L_08AE1670:
    ctx.gpr[4] = (0u | 261u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08AE1680u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08AE1680u) goto L_08AE1680;
    return;
L_08AE1680:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE16C8;
      }
      goto L_08AE1688;
    }
L_08AE1688:
    ctx.gpr[4] = (0u | 198u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08AE1698u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08AE1698u) goto L_08AE1698;
    return;
L_08AE1698:
    ctx.gpr[4] = (0u | 215u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08AE16A8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08AE16A8u) goto L_08AE16A8;
    return;
L_08AE16A8:
    ctx.gpr[4] = (0u | 191u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08AE16B8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08AE16B8u) goto L_08AE16B8;
    return;
L_08AE16B8:
    ctx.gpr[4] = (0u | 233u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08AE16C8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08AE16C8u) goto L_08AE16C8;
    return;
L_08AE16C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1774;
      }
      goto L_08AE16D0;
    }
L_08AE16D0:
    ctx.gpr[16] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) > 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AE172C;
      }
      goto L_08AE16DC;
    }
L_08AE16DC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AE1774;
      }
      goto L_08AE16E4;
    }
L_08AE16E4:
    ctx.gpr[4] = (0u | 205u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08AE16F4u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08AE16F4u) goto L_08AE16F4;
    return;
L_08AE16F4:
    ctx.gpr[4] = (0u | 270u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08AE1704u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08AE1704u) goto L_08AE1704;
    return;
L_08AE1704:
    ctx.gpr[4] = (0u | 198u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08AE1714u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08AE1714u) goto L_08AE1714;
    return;
L_08AE1714:
    ctx.gpr[4] = (0u | 275u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08AE1724u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08AE1724u) goto L_08AE1724;
    return;
L_08AE1724:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1774;
      }
      goto L_08AE172C;
    }
L_08AE172C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1774;
      }
      goto L_08AE1734;
    }
L_08AE1734:
    ctx.gpr[4] = (0u | 186u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08AE1744u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08AE1744u) goto L_08AE1744;
    return;
L_08AE1744:
    ctx.gpr[4] = (0u | 212u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08AE1754u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08AE1754u) goto L_08AE1754;
    return;
L_08AE1754:
    ctx.gpr[4] = (0u | 233u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08AE1764u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08AE1764u) goto L_08AE1764;
    return;
L_08AE1764:
    ctx.gpr[4] = (0u | 270u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08AE1774u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08AE1774u) goto L_08AE1774;
    return;
L_08AE1774:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE1784:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(10336), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-176));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10336)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (2237u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-30144));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 14u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8618), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-164));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8618)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 16u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(10337), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-152));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10337)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 17u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(10338), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-140));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10338)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(13104));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 174u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08AE1828u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE1828u) goto L_08AE1828;
    return;
L_08AE1828:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (0u | 77u);
    ctx.gpr[6] = (0u | 155u);
    ctx.gpr[7] = (0u | 210u);
    ctx.gpr[31] = (0x08AE1840u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE1840u) goto L_08AE1840;
    return;
L_08AE1840:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (0u | 75u);
    ctx.gpr[6] = (0u | 151u);
    ctx.gpr[7] = (0u | 75u);
    ctx.gpr[31] = (0x08AE1858u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE1858u) goto L_08AE1858;
    return;
L_08AE1858:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (0u | 217u);
    ctx.gpr[6] = (0u | 174u);
    ctx.gpr[7] = (0u | 87u);
    ctx.gpr[31] = (0x08AE1870u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE1870u) goto L_08AE1870;
    return;
L_08AE1870:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (0u | 252u);
    ctx.gpr[6] = (0u | 116u);
    ctx.gpr[7] = (0u | 186u);
    ctx.gpr[31] = (0x08AE1888u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE1888u) goto L_08AE1888;
    return;
L_08AE1888:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (0u | 151u);
    ctx.gpr[6] = (0u | 82u);
    ctx.gpr[7] = (0u | 197u);
    ctx.gpr[31] = (0x08AE18A0u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE18A0u) goto L_08AE18A0;
    return;
L_08AE18A0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[5] = (0u | 237u);
    ctx.gpr[6] = (0u | 130u);
    ctx.gpr[7] = (0u | 180u);
    ctx.gpr[31] = (0x08AE18B8u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE18B8u) goto L_08AE18B8;
    return;
L_08AE18B8:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 153u);
    ctx.gpr[7] = (0u | 51u);
    ctx.gpr[31] = (0x08AE18D0u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE18D0u) goto L_08AE18D0;
    return;
L_08AE18D0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 227u);
    ctx.gpr[7] = (0u | 79u);
    ctx.gpr[31] = (0x08AE18E8u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE18E8u) goto L_08AE18E8;
    return;
L_08AE18E8:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(36));
    ctx.gpr[5] = (0u | 174u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08AE1900u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE1900u) goto L_08AE1900;
    return;
L_08AE1900:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(40));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x08AE1918u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE1918u) goto L_08AE1918;
    return;
L_08AE1918:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(44));
    ctx.gpr[5] = (0u | 153u);
    ctx.gpr[6] = (0u | 153u);
    ctx.gpr[7] = (0u | 153u);
    ctx.gpr[31] = (0x08AE1930u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE1930u) goto L_08AE1930;
    return;
L_08AE1930:
    ctx.gpr[31] = (0x08AE1938u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-188));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08AE1938u) goto L_08AE1938;
    return;
L_08AE1938:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE1948:
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
          goto L_08AE1B48;
      }
      goto L_08AE1980;
    }
L_08AE1980:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[18] - ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] < static_cast<std::uint32_t>(-1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AE19B8;
      }
      goto L_08AE19A0;
    }
L_08AE19A0:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE19C4;
      }
      goto L_08AE19B8;
    }
L_08AE19B8:
    ctx.gpr[31] = (0x08AE19C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 365u, 0x08B658A0u>(ctx, &aot_mem) && ctx.pc == 0x08AE19C0u) goto L_08AE19C0;
    return;
L_08AE19C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_08AE19C4;
L_08AE19C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1AF4;
      }
      goto L_08AE19E4;
    }
L_08AE19E4:
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AE1A04;
      }
      goto L_08AE19F0;
    }
L_08AE19F0:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE1A14;
      }
      goto L_08AE1A04;
    }
L_08AE1A04:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08AE1A14;
L_08AE1A14:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE1A3C;
      }
      goto L_08AE1A1C;
    }
L_08AE1A1C:
    ctx.gpr[31] = (0x08AE1A24u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem) && ctx.pc == 0x08AE1A24u) goto L_08AE1A24;
    return;
L_08AE1A24:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1A3C;
      }
      goto L_08AE1A30;
    }
L_08AE1A30:
    ctx.gpr[31] = (0x08AE1A38u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem) && ctx.pc == 0x08AE1A38u) goto L_08AE1A38;
    return;
L_08AE1A38:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    goto L_08AE1A3C;
L_08AE1A3C:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(22))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[21] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AE1A68u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08AE27F8;
L_08AE1A68:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(28))))));
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[22];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AE1A94;
      }
      goto L_08AE1A78;
    }
L_08AE1A78:
    ctx.gpr[20] = (ctx.gpr[23] - ctx.gpr[22]);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AE1A8Cu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x08AE1A8Cu) goto L_08AE1A8C;
    return;
L_08AE1A8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[2] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_08AE1A94;
      }
      goto L_08AE1A94;
    }
L_08AE1A94:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08AE1AA8;
      }
      goto L_08AE1AA0;
    }
L_08AE1AA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08AE1AC4;
      }
      goto L_08AE1AA8;
    }
L_08AE1AA8:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[18] - ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08AE1AC0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x08AE1AC0u) goto L_08AE1AC0;
    return;
L_08AE1AC0:
    ctx.gpr[17] = (ctx.gpr[2] + ctx.gpr[17]);
    goto L_08AE1AC4;
L_08AE1AC4:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1AE0;
      }
      goto L_08AE1AD8;
    }
L_08AE1AD8:
    ctx.gpr[31] = (0x08AE1AE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08AE1AE0u) goto L_08AE1AE0;
    return;
L_08AE1AE0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AE1B48;
      }
      goto L_08AE1AF4;
    }
L_08AE1AF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[6];
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE1B0C;
      }
      goto L_08AE1B04;
    }
L_08AE1B04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AE1B28;
      }
      goto L_08AE1B0C;
    }
L_08AE1B0C:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08AE1B20u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x08AE1B20u) goto L_08AE1B20;
    return;
L_08AE1B20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    goto L_08AE1B28;
L_08AE1B28:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_08AE1B48;
L_08AE1B48:
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
L_08AE1B78:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1056));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1028), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1044), ctx.gpr[20]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[20] = (ctx.gpr[28] + static_cast<std::uint32_t>(-116));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1032), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1036), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1040), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1048), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AE1BACu);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x08AE1BACu) goto L_08AE1BAC;
    return;
L_08AE1BAC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x08AE1BC8u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x08AE1BC8u) goto L_08AE1BC8;
    return;
L_08AE1BC8:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(44), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7872)));
    ctx.gpr[18] = (2232u << 16u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(16676));
      if (branch_taken) {
          goto L_08AE1BFC;
      }
      goto L_08AE1BEC;
    }
L_08AE1BEC:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7872), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AE1BFCu);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7864));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 464u, 0x089C6318u>(ctx, &aot_mem) && ctx.pc == 0x08AE1BFCu) goto L_08AE1BFC;
    return;
L_08AE1BFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7868)));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1C58;
      }
      goto L_08AE1C0C;
    }
L_08AE1C0C:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AE1C38;
      }
      goto L_08AE1C18;
    }
L_08AE1C18:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08AE1C40;
      }
      goto L_08AE1C20;
    }
L_08AE1C20:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AE1C48;
      }
      goto L_08AE1C28;
    }
L_08AE1C28:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08AE1C50;
      }
      goto L_08AE1C30;
    }
L_08AE1C30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[28] + static_cast<std::uint32_t>(-104));
      if (branch_taken) {
          goto L_08AE1C58;
      }
      goto L_08AE1C38;
    }
L_08AE1C38:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[28] + static_cast<std::uint32_t>(-100));
      if (branch_taken) {
          goto L_08AE1C58;
      }
      goto L_08AE1C40;
    }
L_08AE1C40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[28] + static_cast<std::uint32_t>(-96));
      if (branch_taken) {
          goto L_08AE1C58;
      }
      goto L_08AE1C48;
    }
L_08AE1C48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[28] + static_cast<std::uint32_t>(-92));
      if (branch_taken) {
          goto L_08AE1C58;
      }
      goto L_08AE1C50;
    }
L_08AE1C50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[28] + static_cast<std::uint32_t>(-88));
      if (branch_taken) {
          goto L_08AE1C58;
      }
      goto L_08AE1C58;
    }
L_08AE1C58:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AE1C74u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16648));
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x08AE1C74u) goto L_08AE1C74;
    return;
L_08AE1C74:
    ctx.gpr[31] = (0x08AE1C7Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 250u, 0x08938F04u>(ctx, &aot_mem) && ctx.pc == 0x08AE1C7Cu) goto L_08AE1C7C;
    return;
L_08AE1C7C:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1CA8;
      }
      goto L_08AE1C88;
    }
L_08AE1C88:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AE1CA0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16700));
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x08AE1CA0u) goto L_08AE1CA0;
    return;
L_08AE1CA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1CB0;
      }
      goto L_08AE1CA8;
    }
L_08AE1CA8:
    ctx.gpr[31] = (0x08AE1CB0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 254u, 0x08938F40u>(ctx, &aot_mem) && ctx.pc == 0x08AE1CB0u) goto L_08AE1CB0;
    return;
L_08AE1CB0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AE1CBCu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08AE280C;
L_08AE1CBC:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1028)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1032)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1036)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1040)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1044)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1048)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1056));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE1CE0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AE1E24;
      }
      goto L_08AE1D0C;
    }
L_08AE1D0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(36));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08AE1D98;
      }
      goto L_08AE1D3C;
    }
L_08AE1D3C:
    ctx.gpr[19] = (0u | 0u);
    goto L_08AE1D40;
L_08AE1D40:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
        goto L_08AE1D74;
    }
    goto L_08AE1D50;
L_08AE1D50:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(24));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08AE1D6Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AE1D6Cu) goto L_08AE1D6C;
    return;
L_08AE1D6C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    goto L_08AE1D74;
L_08AE1D74:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AE1D40;
      }
      goto L_08AE1D98;
    }
L_08AE1D98:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), 0u);
      if (branch_taken) {
          goto L_08AE1DD0;
      }
      goto L_08AE1DAC;
    }
L_08AE1DAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[20] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AE1DD0;
      }
      goto L_08AE1DB8;
    }
L_08AE1DB8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1DD0;
      }
      goto L_08AE1DC0;
    }
L_08AE1DC0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1DD0;
      }
      goto L_08AE1DC8;
    }
L_08AE1DC8:
    ctx.gpr[31] = (0x08AE1DD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08AE1DD0u) goto L_08AE1DD0;
    return;
L_08AE1DD0:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1DF0;
      }
      goto L_08AE1DD8;
    }
L_08AE1DD8:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08AE1DF0;
      }
      goto L_08AE1DE0;
    }
L_08AE1DE0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1DF0;
      }
      goto L_08AE1DE8;
    }
L_08AE1DE8:
    ctx.gpr[31] = (0x08AE1DF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08AE1DF0u) goto L_08AE1DF0;
    return;
L_08AE1DF0:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] & 1u);
      if (branch_taken) {
          goto L_08AE1E14;
      }
      goto L_08AE1DF8;
    }
L_08AE1DF8:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AE1E10;
      }
      goto L_08AE1E00;
    }
L_08AE1E00:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[17] & 1u);
        goto L_08AE1E14;
    }
    goto L_08AE1E08;
L_08AE1E08:
    ctx.gpr[31] = (0x08AE1E10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08AE1E10u) goto L_08AE1E10;
    return;
L_08AE1E10:
    ctx.gpr[4] = (ctx.gpr[17] & 1u);
    goto L_08AE1E14;
L_08AE1E14:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1E24;
      }
      goto L_08AE1E1C;
    }
L_08AE1E1C:
    ctx.gpr[31] = (0x08AE1E24u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08AE1E24u) goto L_08AE1E24;
    return;
L_08AE1E24:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE1E48:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[21] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (2237u << 16u);
      if (branch_taken) {
          goto L_08AE1F54;
      }
      goto L_08AE1E98;
    }
L_08AE1E98:
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(-128));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-28416));
    goto L_08AE1EA8;
L_08AE1EA8:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(40));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08AE1EC8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AE1EC8u) goto L_08AE1EC8;
    return;
L_08AE1EC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1EE8;
      }
      goto L_08AE1ED4;
    }
L_08AE1ED4:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[19]);
    ctx.gpr[31] = (0x08AE1EE0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x08AE1EE0u) goto L_08AE1EE0;
    return;
L_08AE1EE0:
    ctx.gpr[31] = (0x08AE1EE8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08AE1EE8u) goto L_08AE1EE8;
    return;
L_08AE1EE8:
    ctx.gpr[31] = (0x08AE1EF0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 611u, 0x0882E9B4u>(ctx, &aot_mem) && ctx.pc == 0x08AE1EF0u) goto L_08AE1EF0;
    return;
L_08AE1EF0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1F24;
      }
      goto L_08AE1EF8;
    }
L_08AE1EF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
        goto L_08AE1F1C;
    }
    goto L_08AE1F04;
L_08AE1F04:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[19]);
    ctx.gpr[31] = (0x08AE1F10u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x08AE1F10u) goto L_08AE1F10;
    return;
L_08AE1F10:
    ctx.gpr[31] = (0x08AE1F18u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08AE1F18u) goto L_08AE1F18;
    return;
L_08AE1F18:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    goto L_08AE1F1C;
L_08AE1F1C:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
        goto L_08AE1F2C;
    }
    goto L_08AE1F24;
L_08AE1F24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1F54;
      }
      goto L_08AE1F2C;
    }
L_08AE1F2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[21] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AE1EA8;
      }
      goto L_08AE1F54;
    }
L_08AE1F54:
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
L_08AE1F78:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[18] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE2008;
      }
      goto L_08AE1FBC;
    }
L_08AE1FBC:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08AE1FDCu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AE1FDCu) goto L_08AE1FDC;
    return;
L_08AE1FDC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[18] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AE1FBC;
      }
      goto L_08AE2008;
    }
L_08AE2008:
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
L_08AE2020:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[18] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE20B0;
      }
      goto L_08AE2064;
    }
L_08AE2064:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(56));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08AE2084u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AE2084u) goto L_08AE2084;
    return;
L_08AE2084:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[18] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AE2064;
      }
      goto L_08AE20B0;
    }
L_08AE20B0:
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
L_08AE20C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[17] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[21] = (2237u << 16u);
      if (branch_taken) {
          goto L_08AE2200;
      }
      goto L_08AE211C;
    }
L_08AE211C:
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[22] = (ctx.gpr[28] + static_cast<std::uint32_t>(-128));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-28416));
    goto L_08AE212C;
L_08AE212C:
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE2148;
      }
      goto L_08AE2140;
    }
L_08AE2140:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE21F0;
      }
      goto L_08AE2148;
    }
L_08AE2148:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE2168;
      }
      goto L_08AE2154;
    }
L_08AE2154:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[20]);
    ctx.gpr[31] = (0x08AE2160u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x08AE2160u) goto L_08AE2160;
    return;
L_08AE2160:
    ctx.gpr[31] = (0x08AE2168u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08AE2168u) goto L_08AE2168;
    return;
L_08AE2168:
    ctx.gpr[31] = (0x08AE2170u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 601u, 0x0882E950u>(ctx, &aot_mem) && ctx.pc == 0x08AE2170u) goto L_08AE2170;
    return;
L_08AE2170:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08AE21BC;
      }
      goto L_08AE2178;
    }
L_08AE2178:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AE21BC;
      }
      goto L_08AE2184;
    }
L_08AE2184:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(80));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08AE219Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AE219Cu) goto L_08AE219C;
    return;
L_08AE219C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
      if (branch_taken) {
          goto L_08AE21F0;
      }
      goto L_08AE21BC;
    }
L_08AE21BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08AE21D4u);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AE21D4u) goto L_08AE21D4;
    return;
L_08AE21D4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    goto L_08AE21F0;
L_08AE21F0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[17] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AE212C;
      }
      goto L_08AE2200;
    }
L_08AE2200:
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
L_08AE2228:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    ctx.gpr[17] = (2237u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28416));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AE2264;
      }
      goto L_08AE224C;
    }
L_08AE224C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AE225Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x08AE225Cu) goto L_08AE225C;
    return;
L_08AE225C:
    ctx.gpr[31] = (0x08AE2264u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-128));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08AE2264u) goto L_08AE2264;
    return;
L_08AE2264:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AE2270u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 553u, 0x0882E704u>(ctx, &aot_mem) && ctx.pc == 0x08AE2270u) goto L_08AE2270;
    return;
L_08AE2270:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE228C;
      }
      goto L_08AE2278;
    }
L_08AE2278:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE2294;
      }
      goto L_08AE2284;
    }
L_08AE2284:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE22C8;
      }
      goto L_08AE228C;
    }
L_08AE228C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AE22C8;
      }
      goto L_08AE2294;
    }
L_08AE2294:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08AE22A8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AE27D8;
L_08AE22A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(112));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08AE22C8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AE22C8u) goto L_08AE22C8;
    return;
L_08AE22C8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE22DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[21] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 2u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE2378;
      }
      goto L_08AE2330;
    }
L_08AE2330:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AE2348u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 56u, 0x08B582CCu>(ctx, &aot_mem) && ctx.pc == 0x08AE2348u) goto L_08AE2348;
    return;
L_08AE2348:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE2358;
      }
      goto L_08AE2350;
    }
L_08AE2350:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE2358;
      }
      goto L_08AE2358;
    }
L_08AE2358:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE2368;
      }
      goto L_08AE2360;
    }
L_08AE2360:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08AE237C;
      }
      goto L_08AE2368;
    }
L_08AE2368:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AE2330;
      }
      goto L_08AE2378;
    }
L_08AE2378:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AE237C;
L_08AE237C:
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
L_08AE23A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AE23C0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08AE22DC;
L_08AE23C0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE2418;
      }
      goto L_08AE23CC;
    }
L_08AE23CC:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE2400;
      }
      goto L_08AE23D4;
    }
L_08AE23D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[31] = (0x08AE23E8u);
    ctx.gpr[19] = (ctx.gpr[17] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 463u, 0x08AC5950u>(ctx, &aot_mem) && ctx.pc == 0x08AE23E8u) goto L_08AE23E8;
    return;
L_08AE23E8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08AE23F8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AE23F8u) goto L_08AE23F8;
    return;
L_08AE23F8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE2408;
      }
      goto L_08AE2400;
    }
L_08AE2400:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE2408;
      }
      goto L_08AE2408;
    }
L_08AE2408:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08AE2418;
      }
      goto L_08AE2410;
    }
L_08AE2410:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE241C;
      }
      goto L_08AE2418;
    }
L_08AE2418:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AE241C;
L_08AE241C:
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
L_08AE2438:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[19]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE251C;
      }
      goto L_08AE2488;
    }
L_08AE2488:
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[17]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE24C4;
      }
      goto L_08AE2498;
    }
L_08AE2498:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[31] = (0x08AE24ACu);
    ctx.gpr[21] = (ctx.gpr[19] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 463u, 0x08AC5950u>(ctx, &aot_mem) && ctx.pc == 0x08AE24ACu) goto L_08AE24AC;
    return;
L_08AE24AC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08AE24BCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AE24BCu) goto L_08AE24BC;
    return;
L_08AE24BC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE24CC;
      }
      goto L_08AE24C4;
    }
L_08AE24C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE24CC;
      }
      goto L_08AE24CC;
    }
L_08AE24CC:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
        goto L_08AE24F4;
    }
    goto L_08AE24D8;
L_08AE24D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(104));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08AE24F0u);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AE24F0u) goto L_08AE24F0;
    return;
L_08AE24F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    goto L_08AE24F4;
L_08AE24F4:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[19]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AE2488;
      }
      goto L_08AE251C;
    }
L_08AE251C:
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
L_08AE2540:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[18] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE25D0;
      }
      goto L_08AE2584;
    }
L_08AE2584:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(72));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08AE25A4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AE25A4u) goto L_08AE25A4;
    return;
L_08AE25A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[18] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AE2584;
      }
      goto L_08AE25D0;
    }
L_08AE25D0:
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
L_08AE25E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AE2600u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    goto L_08AE22DC;
L_08AE2600:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(112));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 6u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08AE2624u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AE2624u) goto L_08AE2624;
    return;
L_08AE2624:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE2634:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AE2648u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08AE22DC;
L_08AE2648:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE265C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AE26AC;
      }
      goto L_08AE2690;
    }
L_08AE2690:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AE26A4;
      }
      goto L_08AE2698;
    }
L_08AE2698:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    goto L_08AE26A4;
L_08AE26A4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AE27B8;
      }
      goto L_08AE26AC;
    }
L_08AE26AC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[7] >> 30u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AE26EC;
      }
      goto L_08AE26DC;
    }
L_08AE26DC:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(8));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[5] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_08AE26F8;
      }
      goto L_08AE26EC;
    }
L_08AE26EC:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(12));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[5] + ctx.gpr[18]);
    goto L_08AE26F8;
L_08AE26F8:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE2738;
      }
      goto L_08AE2700;
    }
L_08AE2700:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[31] = (0x08AE2714u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem) && ctx.pc == 0x08AE2714u) goto L_08AE2714;
    return;
L_08AE2714:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08AE2738;
      }
      goto L_08AE2724;
    }
L_08AE2724:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AE2730u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem) && ctx.pc == 0x08AE2730u) goto L_08AE2730;
    return;
L_08AE2730:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_08AE2738;
L_08AE2738:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AE274C;
      }
      goto L_08AE2744;
    }
L_08AE2744:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08AE2768;
      }
      goto L_08AE274C;
    }
L_08AE274C:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[20] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AE2760u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x08AE2760u) goto L_08AE2760;
    return;
L_08AE2760:
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_08AE2768;
L_08AE2768:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
        goto L_08AE2790;
    }
    goto L_08AE277C;
L_08AE277C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AE277C;
      }
      goto L_08AE278C;
    }
L_08AE278C:
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    goto L_08AE2790;
L_08AE2790:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AE27A4;
      }
      goto L_08AE279C;
    }
L_08AE279C:
    ctx.gpr[31] = (0x08AE27A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08AE27A4u) goto L_08AE27A4;
    return;
L_08AE27A4:
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    goto L_08AE27B8;
L_08AE27B8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE27D8:
    ctx.gpr[6] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 3u);
      if (branch_taken) {
          goto L_08AE27EC;
      }
      goto L_08AE27E4;
    }
L_08AE27E4:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08AE27F0;
      }
      goto L_08AE27EC;
    }
L_08AE27EC:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    goto L_08AE27F0;
L_08AE27F0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE27F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(0))))));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE280C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-208));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[22]);
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AE2848u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 436u, 0x08985908u>(ctx, &aot_mem) && ctx.pc == 0x08AE2848u) goto L_08AE2848;
    return;
L_08AE2848:
    ctx.gpr[20] = (2234u << 16u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(22832));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AE2854;
L_08AE2854:
    ctx.gpr[31] = (0x08AE285Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x089859A0u>(ctx, &aot_mem) && ctx.pc == 0x08AE285Cu) goto L_08AE285C;
    return;
L_08AE285C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE287C;
      }
      goto L_08AE2864;
    }
L_08AE2864:
    ctx.gpr[31] = (0x08AE286Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 751u, 0x08A07260u>(ctx, &aot_mem) && ctx.pc == 0x08AE286Cu) goto L_08AE286C;
    return;
L_08AE286C:
    ctx.gpr[31] = (0x08AE2874u);
    ctx.gpr[4] = (0u | 1000u);
    ctx.pc = 0x08B7340Cu;
    return;
L_08AE2874:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08AE2854;
      }
      goto L_08AE287C;
    }
L_08AE287C:
    ctx.gpr[31] = (0x08AE2884u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 127u, 0x089846E0u>(ctx, &aot_mem) && ctx.pc == 0x08AE2884u) goto L_08AE2884;
    return;
L_08AE2884:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (0u | 131u);
    ctx.gpr[31] = (0x08AE2898u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE2898u) goto L_08AE2898;
    return;
L_08AE2898:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AE28A4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 89u, 0x089844FCu>(ctx, &aot_mem) && ctx.pc == 0x08AE28A4u) goto L_08AE28A4;
    return;
L_08AE28A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AE28B8;
      }
      goto L_08AE28B0;
    }
L_08AE28B0:
    ctx.gpr[31] = (0x08AE28B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08AE28B8u) goto L_08AE28B8;
    return;
L_08AE28B8:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08AE28F4;
      }
      goto L_08AE28C0;
    }
L_08AE28C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
      if (branch_taken) {
          goto L_08AE28D4;
      }
      goto L_08AE28CC;
    }
L_08AE28CC:
    ctx.gpr[31] = (0x08AE28D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem) && ctx.pc == 0x08AE28D4u) goto L_08AE28D4;
    return;
L_08AE28D4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), 0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AE28ECu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 69u, 0x089843C4u>(ctx, &aot_mem) && ctx.pc == 0x08AE28ECu) goto L_08AE28EC;
    return;
L_08AE28EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE30CC;
      }
      goto L_08AE28F4;
    }
L_08AE28F4:
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (0u | 171u);
    ctx.gpr[31] = (0x08AE2904u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE2904u) goto L_08AE2904;
    return;
L_08AE2904:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AE2910u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 237u, 0x08984D14u>(ctx, &aot_mem) && ctx.pc == 0x08AE2910u) goto L_08AE2910;
    return;
L_08AE2910:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AE291Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x08AE291Cu) goto L_08AE291C;
    return;
L_08AE291C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[16] + ctx.gpr[2]);
    ctx.gpr[18] = (ctx.gpr[17] - ctx.gpr[16]);
    ctx.gpr[6] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[18] ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
        goto L_08AE29A0;
    }
    goto L_08AE293C;
L_08AE293C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AE295C;
      }
      goto L_08AE2944;
    }
L_08AE2944:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AE2954u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08AE2954u) goto L_08AE2954;
    return;
L_08AE2954:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    goto L_08AE295C;
L_08AE295C:
    ctx.gpr[18] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08AE2998;
      }
      goto L_08AE296C;
    }
L_08AE296C:
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AE298C;
      }
      goto L_08AE297C;
    }
L_08AE297C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AE2988u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x08AE2988u) goto L_08AE2988;
    return;
L_08AE2988:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    goto L_08AE298C;
L_08AE298C:
    ctx.gpr[5] = (ctx.gpr[16] - ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_08AE2998;
L_08AE2998:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AE29E4;
      }
      goto L_08AE29A0;
    }
L_08AE29A0:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[6]);
        goto L_08AE29C8;
    }
    goto L_08AE29A8;
L_08AE29A8:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AE29B8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08AE29B8u) goto L_08AE29B8;
    return;
L_08AE29B8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[6]);
    goto L_08AE29C8;
L_08AE29C8:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(120), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(121), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(121));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AE29E0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_08AE1948;
L_08AE29E0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08AE29E4;
L_08AE29E4:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE29F4;
      }
      goto L_08AE29EC;
    }
L_08AE29EC:
    ctx.gpr[31] = (0x08AE29F4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08AE29F4u) goto L_08AE29F4;
    return;
L_08AE29F4:
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (0u | 130u);
    ctx.gpr[31] = (0x08AE2A04u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE2A04u) goto L_08AE2A04;
    return;
L_08AE2A04:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AE2A10u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 89u, 0x089844FCu>(ctx, &aot_mem) && ctx.pc == 0x08AE2A10u) goto L_08AE2A10;
    return;
L_08AE2A10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AE2A24;
      }
      goto L_08AE2A1C;
    }
L_08AE2A1C:
    ctx.gpr[31] = (0x08AE2A24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08AE2A24u) goto L_08AE2A24;
    return;
L_08AE2A24:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE2A60;
      }
      goto L_08AE2A2C;
    }
L_08AE2A2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
      if (branch_taken) {
          goto L_08AE2A40;
      }
      goto L_08AE2A38;
    }
L_08AE2A38:
    ctx.gpr[31] = (0x08AE2A40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem) && ctx.pc == 0x08AE2A40u) goto L_08AE2A40;
    return;
L_08AE2A40:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), 0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AE2A58u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 69u, 0x089843C4u>(ctx, &aot_mem) && ctx.pc == 0x08AE2A58u) goto L_08AE2A58;
    return;
L_08AE2A58:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE30CC;
      }
      goto L_08AE2A60;
    }
L_08AE2A60:
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (0u | 175u);
    ctx.gpr[31] = (0x08AE2A70u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE2A70u) goto L_08AE2A70;
    return;
L_08AE2A70:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AE2A7Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 237u, 0x08984D14u>(ctx, &aot_mem) && ctx.pc == 0x08AE2A7Cu) goto L_08AE2A7C;
    return;
L_08AE2A7C:
    ctx.gpr[31] = (0x08AE2A84u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 937u, 0x08B577E8u>(ctx, &aot_mem) && ctx.pc == 0x08AE2A84u) goto L_08AE2A84;
    return;
L_08AE2A84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AE2A98;
      }
      goto L_08AE2A90;
    }
L_08AE2A90:
    ctx.gpr[31] = (0x08AE2A98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08AE2A98u) goto L_08AE2A98;
    return;
L_08AE2A98:
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (0u | 176u);
    ctx.gpr[31] = (0x08AE2AA8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE2AA8u) goto L_08AE2AA8;
    return;
L_08AE2AA8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AE2AB4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 237u, 0x08984D14u>(ctx, &aot_mem) && ctx.pc == 0x08AE2AB4u) goto L_08AE2AB4;
    return;
L_08AE2AB4:
    ctx.gpr[31] = (0x08AE2ABCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 937u, 0x08B577E8u>(ctx, &aot_mem) && ctx.pc == 0x08AE2ABCu) goto L_08AE2ABC;
    return;
L_08AE2ABC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AE2AD0;
      }
      goto L_08AE2AC8;
    }
L_08AE2AC8:
    ctx.gpr[31] = (0x08AE2AD0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08AE2AD0u) goto L_08AE2AD0;
    return;
L_08AE2AD0:
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (0u | 132u);
    ctx.gpr[31] = (0x08AE2AE0u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE2AE0u) goto L_08AE2AE0;
    return;
L_08AE2AE0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AE2AECu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 89u, 0x089844FCu>(ctx, &aot_mem) && ctx.pc == 0x08AE2AECu) goto L_08AE2AEC;
    return;
L_08AE2AEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AE2B00;
      }
      goto L_08AE2AF8;
    }
L_08AE2AF8:
    ctx.gpr[31] = (0x08AE2B00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08AE2B00u) goto L_08AE2B00;
    return;
L_08AE2B00:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[20]);
      if (branch_taken) {
          goto L_08AE2B3C;
      }
      goto L_08AE2B08;
    }
L_08AE2B08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
      if (branch_taken) {
          goto L_08AE2B1C;
      }
      goto L_08AE2B14;
    }
L_08AE2B14:
    ctx.gpr[31] = (0x08AE2B1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem) && ctx.pc == 0x08AE2B1Cu) goto L_08AE2B1C;
    return;
L_08AE2B1C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), 0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AE2B34u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 69u, 0x089843C4u>(ctx, &aot_mem) && ctx.pc == 0x08AE2B34u) goto L_08AE2B34;
    return;
L_08AE2B34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE30CC;
      }
      goto L_08AE2B3C;
    }
L_08AE2B3C:
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (0u | 171u);
    ctx.gpr[31] = (0x08AE2B4Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE2B4Cu) goto L_08AE2B4C;
    return;
L_08AE2B4C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AE2B58u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 237u, 0x08984D14u>(ctx, &aot_mem) && ctx.pc == 0x08AE2B58u) goto L_08AE2B58;
    return;
L_08AE2B58:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AE2B64u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x08AE2B64u) goto L_08AE2B64;
    return;
L_08AE2B64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (ctx.gpr[16] + ctx.gpr[2]);
    ctx.gpr[18] = (ctx.gpr[17] - ctx.gpr[16]);
    ctx.gpr[6] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[20] = (ctx.gpr[22] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08AE2BE8;
      }
      goto L_08AE2B84;
    }
L_08AE2B84:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AE2BA4;
      }
      goto L_08AE2B8C;
    }
L_08AE2B8C:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AE2B9Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08AE2B9Cu) goto L_08AE2B9C;
    return;
L_08AE2B9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(24)));
    goto L_08AE2BA4;
L_08AE2BA4:
    ctx.gpr[18] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08AE2BE0;
      }
      goto L_08AE2BB4;
    }
L_08AE2BB4:
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AE2BD4;
      }
      goto L_08AE2BC4;
    }
L_08AE2BC4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AE2BD0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x08AE2BD0u) goto L_08AE2BD0;
    return;
L_08AE2BD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(28)));
    goto L_08AE2BD4;
L_08AE2BD4:
    ctx.gpr[5] = (ctx.gpr[16] - ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    goto L_08AE2BE0;
L_08AE2BE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AE2C30;
      }
      goto L_08AE2BE8;
    }
L_08AE2BE8:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[6]);
        goto L_08AE2C14;
    }
    goto L_08AE2BF4;
L_08AE2BF4:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AE2C04u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08AE2C04u) goto L_08AE2C04;
    return;
L_08AE2C04:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[6]);
    goto L_08AE2C14;
L_08AE2C14:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(122), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(123), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(123));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AE2C2Cu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_08AE1948;
L_08AE2C2C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08AE2C30;
L_08AE2C30:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE2C40;
      }
      goto L_08AE2C38;
    }
L_08AE2C38:
    ctx.gpr[31] = (0x08AE2C40u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08AE2C40u) goto L_08AE2C40;
    return;
L_08AE2C40:
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (0u | 133u);
    ctx.gpr[31] = (0x08AE2C50u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE2C50u) goto L_08AE2C50;
    return;
L_08AE2C50:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AE2C5Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 89u, 0x089844FCu>(ctx, &aot_mem) && ctx.pc == 0x08AE2C5Cu) goto L_08AE2C5C;
    return;
L_08AE2C5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AE2C70;
      }
      goto L_08AE2C68;
    }
L_08AE2C68:
    ctx.gpr[31] = (0x08AE2C70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08AE2C70u) goto L_08AE2C70;
    return;
L_08AE2C70:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08AE3098;
      }
      goto L_08AE2C78;
    }
L_08AE2C78:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16728));
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(16752));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-76));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-60));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[5]);
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(16772));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-44));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16792));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[4]);
    ctx.gpr[30] = (2232u << 16u);
    ctx.gpr[23] = (2232u << 16u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-116));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(108));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[5]);
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(16812));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(16836));
    goto L_08AE2CE0;
L_08AE2CE0:
    ctx.gpr[31] = (0x08AE2CE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 751u, 0x08A07260u>(ctx, &aot_mem) && ctx.pc == 0x08AE2CE8u) goto L_08AE2CE8;
    return;
L_08AE2CE8:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u | 134u);
    ctx.gpr[31] = (0x08AE2CFCu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE2CFCu) goto L_08AE2CFC;
    return;
L_08AE2CFC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (0x08AE2D08u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 89u, 0x089844FCu>(ctx, &aot_mem) && ctx.pc == 0x08AE2D08u) goto L_08AE2D08;
    return;
L_08AE2D08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AE2D1C;
      }
      goto L_08AE2D14;
    }
L_08AE2D14:
    ctx.gpr[31] = (0x08AE2D1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08AE2D1Cu) goto L_08AE2D1C;
    return;
L_08AE2D1C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08AE2D34;
      }
      goto L_08AE2D2C;
    }
L_08AE2D2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08AE2D34;
      }
      goto L_08AE2D34;
    }
L_08AE2D34:
    ctx.gpr[31] = (0x08AE2D3Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 31u, 0x08B58180u>(ctx, &aot_mem) && ctx.pc == 0x08AE2D3Cu) goto L_08AE2D3C;
    return;
L_08AE2D3C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE2D70;
      }
      goto L_08AE2D44;
    }
L_08AE2D44:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08AE2D50u);
    ctx.gpr[4] = (0u | 200u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08AE2D50u) goto L_08AE2D50;
    return;
L_08AE2D50:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE2D68;
      }
      goto L_08AE2D5C;
    }
L_08AE2D5C:
    ctx.gpr[31] = (0x08AE2D64u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 377u, 0x08971F74u>(ctx, &aot_mem) && ctx.pc == 0x08AE2D64u) goto L_08AE2D64;
    return;
L_08AE2D64:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08AE2D68;
L_08AE2D68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE3030;
      }
      goto L_08AE2D70;
    }
L_08AE2D70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08AE2D84;
      }
      goto L_08AE2D7C;
    }
L_08AE2D7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08AE2D84;
      }
      goto L_08AE2D84;
    }
L_08AE2D84:
    ctx.gpr[31] = (0x08AE2D8Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 31u, 0x08B58180u>(ctx, &aot_mem) && ctx.pc == 0x08AE2D8Cu) goto L_08AE2D8C;
    return;
L_08AE2D8C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE2DC0;
      }
      goto L_08AE2D94;
    }
L_08AE2D94:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08AE2DA0u);
    ctx.gpr[4] = (0u | 200u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08AE2DA0u) goto L_08AE2DA0;
    return;
L_08AE2DA0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE2DB8;
      }
      goto L_08AE2DAC;
    }
L_08AE2DAC:
    ctx.gpr[31] = (0x08AE2DB4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 368u, 0x089B9D74u>(ctx, &aot_mem) && ctx.pc == 0x08AE2DB4u) goto L_08AE2DB4;
    return;
L_08AE2DB4:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08AE2DB8;
L_08AE2DB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE3030;
      }
      goto L_08AE2DC0;
    }
L_08AE2DC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08AE2DD4;
      }
      goto L_08AE2DCC;
    }
L_08AE2DCC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08AE2DD4;
      }
      goto L_08AE2DD4;
    }
L_08AE2DD4:
    ctx.gpr[31] = (0x08AE2DDCu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 31u, 0x08B58180u>(ctx, &aot_mem) && ctx.pc == 0x08AE2DDCu) goto L_08AE2DDC;
    return;
L_08AE2DDC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE2E10;
      }
      goto L_08AE2DE4;
    }
L_08AE2DE4:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08AE2DF0u);
    ctx.gpr[4] = (0u | 212u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08AE2DF0u) goto L_08AE2DF0;
    return;
L_08AE2DF0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE2E08;
      }
      goto L_08AE2DFC;
    }
L_08AE2DFC:
    ctx.gpr[31] = (0x08AE2E04u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 41u, 0x08904258u>(ctx, &aot_mem) && ctx.pc == 0x08AE2E04u) goto L_08AE2E04;
    return;
L_08AE2E04:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08AE2E08;
L_08AE2E08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE3030;
      }
      goto L_08AE2E10;
    }
L_08AE2E10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08AE2E24;
      }
      goto L_08AE2E1C;
    }
L_08AE2E1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08AE2E24;
      }
      goto L_08AE2E24;
    }
L_08AE2E24:
    ctx.gpr[31] = (0x08AE2E2Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 31u, 0x08B58180u>(ctx, &aot_mem) && ctx.pc == 0x08AE2E2Cu) goto L_08AE2E2C;
    return;
L_08AE2E2C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE2E60;
      }
      goto L_08AE2E34;
    }
L_08AE2E34:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08AE2E40u);
    ctx.gpr[4] = (0u | 252u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08AE2E40u) goto L_08AE2E40;
    return;
L_08AE2E40:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE2E58;
      }
      goto L_08AE2E4C;
    }
L_08AE2E4C:
    ctx.gpr[31] = (0x08AE2E54u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 496u, 0x0884EA04u>(ctx, &aot_mem) && ctx.pc == 0x08AE2E54u) goto L_08AE2E54;
    return;
L_08AE2E54:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08AE2E58;
L_08AE2E58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE3030;
      }
      goto L_08AE2E60;
    }
L_08AE2E60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08AE2E74;
      }
      goto L_08AE2E6C;
    }
L_08AE2E6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08AE2E74;
      }
      goto L_08AE2E74;
    }
L_08AE2E74:
    ctx.gpr[31] = (0x08AE2E7Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 31u, 0x08B58180u>(ctx, &aot_mem) && ctx.pc == 0x08AE2E7Cu) goto L_08AE2E7C;
    return;
L_08AE2E7C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE2EB0;
      }
      goto L_08AE2E84;
    }
L_08AE2E84:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08AE2E90u);
    ctx.gpr[4] = (0u | 276u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08AE2E90u) goto L_08AE2E90;
    return;
L_08AE2E90:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE2EA8;
      }
      goto L_08AE2E9C;
    }
L_08AE2E9C:
    ctx.gpr[31] = (0x08AE2EA4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 637u, 0x08B3EE44u>(ctx, &aot_mem) && ctx.pc == 0x08AE2EA4u) goto L_08AE2EA4;
    return;
L_08AE2EA4:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08AE2EA8;
L_08AE2EA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE3030;
      }
      goto L_08AE2EB0;
    }
L_08AE2EB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
        goto L_08AE2EC4;
    }
    goto L_08AE2EBC;
L_08AE2EBC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08AE2EC4;
      }
      goto L_08AE2EC4;
    }
L_08AE2EC4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[31] = (0x08AE2ED0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 31u, 0x08B58180u>(ctx, &aot_mem) && ctx.pc == 0x08AE2ED0u) goto L_08AE2ED0;
    return;
L_08AE2ED0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE3030;
      }
      goto L_08AE2ED8;
    }
L_08AE2ED8:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 170u);
    ctx.gpr[31] = (0x08AE2EE8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE2EE8u) goto L_08AE2EE8;
    return;
L_08AE2EE8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[31] = (0x08AE2EF4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 89u, 0x089844FCu>(ctx, &aot_mem) && ctx.pc == 0x08AE2EF4u) goto L_08AE2EF4;
    return;
L_08AE2EF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AE2F08;
      }
      goto L_08AE2F00;
    }
L_08AE2F00:
    ctx.gpr[31] = (0x08AE2F08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08AE2F08u) goto L_08AE2F08;
    return;
L_08AE2F08:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 171u);
    ctx.gpr[31] = (0x08AE2F18u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE2F18u) goto L_08AE2F18;
    return;
L_08AE2F18:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[31] = (0x08AE2F24u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 237u, 0x08984D14u>(ctx, &aot_mem) && ctx.pc == 0x08AE2F24u) goto L_08AE2F24;
    return;
L_08AE2F24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AE2F38;
      }
      goto L_08AE2F30;
    }
L_08AE2F30:
    ctx.gpr[31] = (0x08AE2F38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08AE2F38u) goto L_08AE2F38;
    return;
L_08AE2F38:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[31] = (0x08AE2F44u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 31u, 0x08B58180u>(ctx, &aot_mem) && ctx.pc == 0x08AE2F44u) goto L_08AE2F44;
    return;
L_08AE2F44:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE2F78;
      }
      goto L_08AE2F4C;
    }
L_08AE2F4C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08AE2F58u);
    ctx.gpr[4] = (0u | 236u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08AE2F58u) goto L_08AE2F58;
    return;
L_08AE2F58:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE2F70;
      }
      goto L_08AE2F64;
    }
L_08AE2F64:
    ctx.gpr[31] = (0x08AE2F6Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 446u, 0x0897B55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE2F6Cu) goto L_08AE2F6C;
    return;
L_08AE2F6C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08AE2F70;
L_08AE2F70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE3030;
      }
      goto L_08AE2F78;
    }
L_08AE2F78:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[31] = (0x08AE2F84u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 31u, 0x08B58180u>(ctx, &aot_mem) && ctx.pc == 0x08AE2F84u) goto L_08AE2F84;
    return;
L_08AE2F84:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE2FB8;
      }
      goto L_08AE2F8C;
    }
L_08AE2F8C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08AE2F98u);
    ctx.gpr[4] = (0u | 260u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08AE2F98u) goto L_08AE2F98;
    return;
L_08AE2F98:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE2FB0;
      }
      goto L_08AE2FA4;
    }
L_08AE2FA4:
    ctx.gpr[31] = (0x08AE2FACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0210_entry, 210u, 580u, 0x08B4FF78u>(ctx, &aot_mem) && ctx.pc == 0x08AE2FACu) goto L_08AE2FAC;
    return;
L_08AE2FAC:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08AE2FB0;
L_08AE2FB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE3030;
      }
      goto L_08AE2FB8;
    }
L_08AE2FB8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AE2FC4u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 31u, 0x08B58180u>(ctx, &aot_mem) && ctx.pc == 0x08AE2FC4u) goto L_08AE2FC4;
    return;
L_08AE2FC4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE2FF8;
      }
      goto L_08AE2FCC;
    }
L_08AE2FCC:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08AE2FD8u);
    ctx.gpr[4] = (0u | 184u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08AE2FD8u) goto L_08AE2FD8;
    return;
L_08AE2FD8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE2FF0;
      }
      goto L_08AE2FE4;
    }
L_08AE2FE4:
    ctx.gpr[31] = (0x08AE2FECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 677u, 0x08B1F920u>(ctx, &aot_mem) && ctx.pc == 0x08AE2FECu) goto L_08AE2FEC;
    return;
L_08AE2FEC:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08AE2FF0;
L_08AE2FF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE3030;
      }
      goto L_08AE2FF8;
    }
L_08AE2FF8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AE3004u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 31u, 0x08B58180u>(ctx, &aot_mem) && ctx.pc == 0x08AE3004u) goto L_08AE3004;
    return;
L_08AE3004:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE3030;
      }
      goto L_08AE300C;
    }
L_08AE300C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08AE3018u);
    ctx.gpr[4] = (0u | 332u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08AE3018u) goto L_08AE3018;
    return;
L_08AE3018:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE3030;
      }
      goto L_08AE3024;
    }
L_08AE3024:
    ctx.gpr[31] = (0x08AE302Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 111u, 0x088B89FCu>(ctx, &aot_mem) && ctx.pc == 0x08AE302Cu) goto L_08AE302C;
    return;
L_08AE302C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08AE3030;
L_08AE3030:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE3060;
      }
      goto L_08AE3038;
    }
L_08AE3038:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08AE3054u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AE3054u) goto L_08AE3054;
    return;
L_08AE3054:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AE3060u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08AE265C;
L_08AE3060:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u | 133u);
    ctx.gpr[31] = (0x08AE3070u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE3070u) goto L_08AE3070;
    return;
L_08AE3070:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (0x08AE307Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 113u, 0x08984650u>(ctx, &aot_mem) && ctx.pc == 0x08AE307Cu) goto L_08AE307C;
    return;
L_08AE307C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AE3090;
      }
      goto L_08AE3088;
    }
L_08AE3088:
    ctx.gpr[31] = (0x08AE3090u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08AE3090u) goto L_08AE3090;
    return;
L_08AE3090:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE2CE0;
      }
      goto L_08AE3098;
    }
L_08AE3098:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AE30B0;
      }
      goto L_08AE30A8;
    }
L_08AE30A8:
    ctx.gpr[31] = (0x08AE30B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem) && ctx.pc == 0x08AE30B0u) goto L_08AE30B0;
    return;
L_08AE30B0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), 0u);
    ctx.gpr[31] = (0x08AE30C8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 69u, 0x089843C4u>(ctx, &aot_mem) && ctx.pc == 0x08AE30C8u) goto L_08AE30C8;
    return;
L_08AE30C8:
    ctx.gpr[2] = (0u | 1u);
    goto L_08AE30CC;
L_08AE30CC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE30FC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[8]);
    ctx.gpr[9] = (0u | 65535u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[9]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[9]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(84))))));
    ctx.gpr[11] = (0u + static_cast<std::uint32_t>(-33));
    ctx.gpr[10] = (ctx.gpr[10] | 1u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[11]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[10]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(84))))));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5))))));
    ctx.gpr[5] = (ctx.gpr[5] | 2u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[10] = (ctx.gpr[10] | 192u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[5] = (ctx.gpr[11] & ctx.gpr[6]);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(84))))));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (2235u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-32352));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[10] & ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(84))))));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[8]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(84))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(85))))));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[9]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[7] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(ctx.gpr[5]));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE31F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[8]);
    ctx.gpr[8] = (0u | 65535u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[8]));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[8]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-33));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[9]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(84))))));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[9] = (ctx.gpr[9] | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(5))))));
    ctx.gpr[4] = (ctx.gpr[4] | 192u);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(84))))));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[9] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[9] = (ctx.gpr[10] | 2u);
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32352));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(84))))));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(84))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(85))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[8]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[7] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AE3338;
      }
      goto L_08AE32F0;
    }
L_08AE32F0:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
        goto L_08AE3304;
    }
    goto L_08AE32F8;
L_08AE32F8:
    ctx.gpr[31] = (0x08AE3300u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 430u, 0x08A93004u>(ctx, &aot_mem) && ctx.pc == 0x08AE3300u) goto L_08AE3300;
    return;
L_08AE3300:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    goto L_08AE3304;
L_08AE3304:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(56));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08AE3318u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AE3318u) goto L_08AE3318;
    return;
L_08AE3318:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[31] = (0x08AE3324u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AE3D28;
L_08AE3324:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE3338;
      }
      goto L_08AE3330;
    }
L_08AE3330:
    ctx.gpr[31] = (0x08AE3338u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem) && ctx.pc == 0x08AE3338u) goto L_08AE3338;
    return;
L_08AE3338:
    ctx.gpr[31] = (0x08AE3340u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AE3D28;
L_08AE3340:
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
L_08AE3358:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AE33F0;
      }
      goto L_08AE3374;
    }
L_08AE3374:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32352));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE3394;
      }
      goto L_08AE338C;
    }
L_08AE338C:
    ctx.gpr[31] = (0x08AE3394u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 430u, 0x08A93004u>(ctx, &aot_mem) && ctx.pc == 0x08AE3394u) goto L_08AE3394;
    return;
L_08AE3394:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE33A8;
      }
      goto L_08AE33A0;
    }
L_08AE33A0:
    ctx.gpr[31] = (0x08AE33A8u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 430u, 0x08A93004u>(ctx, &aot_mem) && ctx.pc == 0x08AE33A8u) goto L_08AE33A8;
    return;
L_08AE33A8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(84))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (19627u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), 0u);
    ctx.gpr[5] = (ctx.gpr[5] | 43344u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AE33DC;
      }
      goto L_08AE33D0;
    }
L_08AE33D0:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-30256));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_08AE33DC;
L_08AE33DC:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE33F0;
      }
      goto L_08AE33E8;
    }
L_08AE33E8:
    ctx.gpr[31] = (0x08AE33F0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08AE33F0u) goto L_08AE33F0;
    return;
L_08AE33F0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE3404:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AE3424u);
    // nop
    goto L_08AE3BD8;
L_08AE3424:
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
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE3444:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
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
L_08AE3464:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE3498;
      }
      goto L_08AE3470;
    }
L_08AE3470:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(84))))));
    ctx.gpr[6] = (ctx.gpr[6] & 8u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE3498;
      }
      goto L_08AE3480;
    }
L_08AE3480:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE34A8;
      }
      goto L_08AE3498;
    }
L_08AE3498:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AE34A8;
L_08AE34A8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE34B0:
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE34B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(85))))));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AE3508;
      }
      goto L_08AE34D8;
    }
L_08AE34D8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(48);
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE3530;
      }
      goto L_08AE3508;
    }
L_08AE3508:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[8];
    ctx.gpr[31] = (0x08AE3528u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AE3528u) goto L_08AE3528;
    return;
L_08AE3528:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE3530;
      }
      goto L_08AE3530;
    }
L_08AE3530:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE353C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AE3550u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08AE3BD8;
L_08AE3550:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE3564:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(84))))));
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(84))))));
    ctx.gpr[5] = (ctx.gpr[5] | 2u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE3580:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[7] = (ctx.gpr[7] & 192u);
    ctx.gpr[8] = (ctx.gpr[8] & 192u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[19]);
    ctx.gpr[7] = (ctx.gpr[7] >> 6u);
    ctx.gpr[8] = (ctx.gpr[8] >> 6u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AE35E0;
      }
      goto L_08AE35C4;
    }
L_08AE35C4:
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
        goto L_08AE35E8;
    }
    goto L_08AE35D8;
L_08AE35D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE368C;
      }
      goto L_08AE35E0;
    }
L_08AE35E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE3874;
      }
      goto L_08AE35E8;
    }
L_08AE35E8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(112));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08AE3600u);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AE3600u) goto L_08AE3600;
    return;
L_08AE3600:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(120));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08AE3634u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AE3634u) goto L_08AE3634;
    return;
L_08AE3634:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[14]) || std::isnan(ctx.fpr[15])) && ctx.fpr[14] == ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE3680;
      }
      goto L_08AE3664;
    }
L_08AE3664:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08AE3684;
      }
      goto L_08AE367C;
    }
L_08AE367C:
    ctx.gpr[4] = (0u | 1u);
    goto L_08AE3680;
L_08AE3680:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08AE3684;
L_08AE3684:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE36F0;
      }
      goto L_08AE368C;
    }
L_08AE368C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08AE36A4u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AE36A4u) goto L_08AE36A4;
    return;
L_08AE36A4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(100))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(100), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(100))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(100), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(100))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(100), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(100))))));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    { const bool branch_taken = 0u != ctx.gpr[16];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(100), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AE36FC;
      }
      goto L_08AE36E8;
    }
L_08AE36E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(100))))));
      if (branch_taken) {
          goto L_08AE371C;
      }
      goto L_08AE36F0;
    }
L_08AE36F0:
    ctx.gpr[2] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_08AE3874;
      }
      goto L_08AE36FC;
    }
L_08AE36FC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(100))))));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(100), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(100))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(100), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(100))))));
    goto L_08AE371C;
L_08AE371C:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[19];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(100), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AE374C;
      }
      goto L_08AE3730;
    }
L_08AE3730:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(100))))));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(100), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(100))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(100), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08AE374C;
L_08AE374C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(100))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(100), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(100))))));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    ctx.gpr[31] = (0x08AE3770u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(100), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 597u, 0x08A2FBA0u>(ctx, &aot_mem) && ctx.pc == 0x08AE3770u) goto L_08AE3770;
    return;
L_08AE3770:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(3964)));
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE3870;
      }
      goto L_08AE3784;
    }
L_08AE3784:
    ctx.gpr[31] = (0x08AE378Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 56u, 0x08B24720u>(ctx, &aot_mem) && ctx.pc == 0x08AE378Cu) goto L_08AE378C;
    return;
L_08AE378C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 1u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AE3810;
      }
      goto L_08AE37BC;
    }
L_08AE37BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_08AE37D8;
    }
    goto L_08AE37C8;
L_08AE37C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08AE37D4u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 430u, 0x08A93004u>(ctx, &aot_mem) && ctx.pc == 0x08AE37D4u) goto L_08AE37D4;
    return;
L_08AE37D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_08AE37D8;
L_08AE37D8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(56));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08AE37ECu);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AE37ECu) goto L_08AE37EC;
    return;
L_08AE37EC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    ctx.gpr[31] = (0x08AE37F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AE3D28;
L_08AE37F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE3810;
      }
      goto L_08AE3804;
    }
L_08AE3804:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08AE3810u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem) && ctx.pc == 0x08AE3810u) goto L_08AE3810;
    return;
L_08AE3810:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(136));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(112));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08AE382Cu);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AE382Cu) goto L_08AE382C;
    return;
L_08AE382C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(56));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08AE385Cu);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AE385Cu) goto L_08AE385C;
    return;
L_08AE385C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(84))))));
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AE3874;
      }
      goto L_08AE3870;
    }
L_08AE3870:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AE3874;
L_08AE3874:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE3890:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] & 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE3964;
      }
      goto L_08AE38BC;
    }
L_08AE38BC:
    ctx.gpr[31] = (0x08AE38C4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 61u, 0x08B2477Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE38C4u) goto L_08AE38C4;
    return;
L_08AE38C4:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08AE38E4u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AE38E4u) goto L_08AE38E4;
    return;
L_08AE38E4:
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[17] = (0u | 1u);
        goto L_08AE3908;
    }
    goto L_08AE3908;
L_08AE3908:
    ctx.gpr[4] = (ctx.gpr[17] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE3964;
      }
      goto L_08AE3914;
    }
L_08AE3914:
    ctx.gpr[31] = (0x08AE391Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 56u, 0x08B24720u>(ctx, &aot_mem) && ctx.pc == 0x08AE391Cu) goto L_08AE391C;
    return;
L_08AE391C:
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-17));
      if (branch_taken) {
          goto L_08AE3948;
      }
      goto L_08AE392C;
    }
L_08AE392C:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[7] = (ctx.gpr[7] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[7] = (ctx.gpr[7] & ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[7] | 16u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[7]));
    goto L_08AE3948;
L_08AE3948:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08AE3964;
L_08AE3964:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(84))))));
        goto L_08AE3980;
    }
    goto L_08AE3970;
L_08AE3970:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (0x08AE397Cu);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 430u, 0x08A93004u>(ctx, &aot_mem) && ctx.pc == 0x08AE397Cu) goto L_08AE397C;
    return;
L_08AE397C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(84))))));
    goto L_08AE3980;
L_08AE3980:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (19627u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), 0u);
    ctx.gpr[5] = (ctx.gpr[5] | 43344u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE39B4:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE39BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08AE39FCu);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AE39FCu) goto L_08AE39FC;
    return;
L_08AE39FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[4] = (ctx.gpr[4] & 192u);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] >> 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08AE3A34;
      }
      goto L_08AE3A18;
    }
L_08AE3A18:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08AE3A24u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 583u, 0x08A2F9E8u>(ctx, &aot_mem) && ctx.pc == 0x08AE3A24u) goto L_08AE3A24;
    return;
L_08AE3A24:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(36))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE3A48;
      }
      goto L_08AE3A34;
    }
L_08AE3A34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE3A64;
      }
      goto L_08AE3A40;
    }
L_08AE3A40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE3B58;
      }
      goto L_08AE3A48;
    }
L_08AE3A48:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08AE3B58;
      }
      goto L_08AE3A64;
    }
L_08AE3A64:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08AE3A40;
      }
      goto L_08AE3A6C;
    }
L_08AE3A6C:
    ctx.gpr[31] = (0x08AE3A74u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 597u, 0x08A2FBA0u>(ctx, &aot_mem) && ctx.pc == 0x08AE3A74u) goto L_08AE3A74;
    return;
L_08AE3A74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08AE3A84u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 602u, 0x08A9FC58u>(ctx, &aot_mem) && ctx.pc == 0x08AE3A84u) goto L_08AE3A84;
    return;
L_08AE3A84:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AE3AF8;
      }
      goto L_08AE3A94;
    }
L_08AE3A94:
    ctx.gpr[31] = (0x08AE3A9Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 583u, 0x08A9FAD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE3A9Cu) goto L_08AE3A9C;
    return;
L_08AE3A9C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE3AB8;
      }
      goto L_08AE3AA4;
    }
L_08AE3AA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AE3AB0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 577u, 0x08A9FA5Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE3AB0u) goto L_08AE3AB0;
    return;
L_08AE3AB0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE3AD0;
      }
      goto L_08AE3AB8;
    }
L_08AE3AB8:
    ctx.gpr[31] = (0x08AE3AC0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 586u, 0x08A9FB14u>(ctx, &aot_mem) && ctx.pc == 0x08AE3AC0u) goto L_08AE3AC0;
    return;
L_08AE3AC0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AE3ADC;
      }
      goto L_08AE3AC8;
    }
L_08AE3AC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE3AF8;
      }
      goto L_08AE3AD0;
    }
L_08AE3AD0:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AE3B58;
      }
      goto L_08AE3ADC;
    }
L_08AE3ADC:
    ctx.gpr[31] = (0x08AE3AE4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 577u, 0x08A9FA5Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE3AE4u) goto L_08AE3AE4;
    return;
L_08AE3AE4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE3AF0;
      }
      goto L_08AE3AEC;
    }
L_08AE3AEC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    goto L_08AE3AF0;
L_08AE3AF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE3B58;
      }
      goto L_08AE3AF8;
    }
L_08AE3AF8:
    ctx.gpr[31] = (0x08AE3B00u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 583u, 0x08A9FAD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE3B00u) goto L_08AE3B00;
    return;
L_08AE3B00:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE3B2C;
      }
      goto L_08AE3B08;
    }
L_08AE3B08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(36))))));
    ctx.gpr[5] = (ctx.gpr[5] & 480u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE3B34;
      }
      goto L_08AE3B24;
    }
L_08AE3B24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE3B48;
      }
      goto L_08AE3B2C;
    }
L_08AE3B2C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
      if (branch_taken) {
          goto L_08AE3B58;
      }
      goto L_08AE3B34;
    }
L_08AE3B34:
    ctx.gpr[31] = (0x08AE3B3Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 570u, 0x08A9F9F8u>(ctx, &aot_mem) && ctx.pc == 0x08AE3B3Cu) goto L_08AE3B3C;
    return;
L_08AE3B3C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE3B48;
      }
      goto L_08AE3B44;
    }
L_08AE3B44:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    goto L_08AE3B48;
L_08AE3B48:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AE3B58u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 63u, 0x08B247A8u>(ctx, &aot_mem) && ctx.pc == 0x08AE3B58u) goto L_08AE3B58;
    return;
L_08AE3B58:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
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
L_08AE3B78:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE3B9C;
      }
      goto L_08AE3B94;
    }
L_08AE3B94:
    ctx.gpr[31] = (0x08AE3B9Cu);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 430u, 0x08A93004u>(ctx, &aot_mem) && ctx.pc == 0x08AE3B9Cu) goto L_08AE3B9C;
    return;
L_08AE3B9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE3BB0;
      }
      goto L_08AE3BA8;
    }
L_08AE3BA8:
    ctx.gpr[31] = (0x08AE3BB0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 430u, 0x08A93004u>(ctx, &aot_mem) && ctx.pc == 0x08AE3BB0u) goto L_08AE3BB0;
    return;
L_08AE3BB0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), 0u);
    ctx.gpr[31] = (0x08AE3BC0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 65u, 0x08B247B8u>(ctx, &aot_mem) && ctx.pc == 0x08AE3BC0u) goto L_08AE3BC0;
    return;
L_08AE3BC0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE3BD0:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE3BD8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(84))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] & 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE3C18;
      }
      goto L_08AE3C00;
    }
L_08AE3C00:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(84))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08AE3C20;
      }
      goto L_08AE3C10;
    }
L_08AE3C10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE3CA0;
      }
      goto L_08AE3C18;
    }
L_08AE3C18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE3D10;
      }
      goto L_08AE3C20;
    }
L_08AE3C20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE3C90;
      }
      goto L_08AE3C2C;
    }
L_08AE3C2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(84))))));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE3C90;
      }
      goto L_08AE3C4C;
    }
L_08AE3C4C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AE3C90u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem) && ctx.pc == 0x08AE3C90u) goto L_08AE3C90;
    return;
L_08AE3C90:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(84))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08AE3CA0;
L_08AE3CA0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(84))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE3CF4;
      }
      goto L_08AE3CB0;
    }
L_08AE3CB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08AE3CD0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AE3CD0u) goto L_08AE3CD0;
    return;
L_08AE3CD0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x08AE3CF4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem) && ctx.pc == 0x08AE3CF4u) goto L_08AE3CF4;
    return;
L_08AE3CF4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x08AE3D00u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 67u, 0x08B24820u>(ctx, &aot_mem) && ctx.pc == 0x08AE3D00u) goto L_08AE3D00;
    return;
L_08AE3D00:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(84))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08AE3D10;
L_08AE3D10:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE3D28:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 14u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 6u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
        goto L_08AE3DAC;
    }
    goto L_08AE3D68;
L_08AE3D68:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(84))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] | 8u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (16025u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[6] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AE3E3C;
      }
      goto L_08AE3DAC;
    }
L_08AE3DAC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 14u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 4u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
        goto L_08AE3E0C;
    }
    goto L_08AE3DC8;
L_08AE3DC8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(84))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] | 8u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (16204u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[6] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AE3E3C;
      }
      goto L_08AE3E0C;
    }
L_08AE3E0C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(84))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-9));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08AE3E3C;
L_08AE3E3C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
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
L_08AE3E58:
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
L_08AE3E80:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE3EC4;
      }
      goto L_08AE3E88;
    }
L_08AE3E88:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (0u | 80u);
    ctx.gpr[5] = (ctx.gpr[5] & 496u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08AE3EB4;
      }
      goto L_08AE3E9C;
    }
L_08AE3E9C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(617))))));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE3EBC;
      }
      goto L_08AE3EAC;
    }
L_08AE3EAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE3EC8;
      }
      goto L_08AE3EB4;
    }
L_08AE3EB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE3EC8;
      }
      goto L_08AE3EBC;
    }
L_08AE3EBC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE3EC8;
      }
      goto L_08AE3EC4;
    }
L_08AE3EC4:
    ctx.gpr[2] = (0u | 1u);
    goto L_08AE3EC8;
L_08AE3EC8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE3ED0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08AE3F78;
      }
      goto L_08AE3EE4;
    }
L_08AE3EE4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    ctx.gpr[6] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08AE3F04;
      }
      goto L_08AE3EF4;
    }
L_08AE3EF4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    ctx.gpr[6] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08AE3F78;
      }
      goto L_08AE3F04;
    }
L_08AE3F04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u | 80u);
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AE3F20;
      }
      goto L_08AE3F18;
    }
L_08AE3F18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE3F7C;
      }
      goto L_08AE3F20;
    }
L_08AE3F20:
    ctx.gpr[31] = (0x08AE3F28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08AE3F28u) goto L_08AE3F28;
    return;
L_08AE3F28:
    ctx.gpr[31] = (0x08AE3F30u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 661u, 0x089474C4u>(ctx, &aot_mem) && ctx.pc == 0x08AE3F30u) goto L_08AE3F30;
    return;
L_08AE3F30:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AE3F58;
      }
      goto L_08AE3F38;
    }
L_08AE3F38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(256)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(51) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE3F50;
      }
      goto L_08AE3F48;
    }
L_08AE3F48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE3F7C;
      }
      goto L_08AE3F50;
    }
L_08AE3F50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE3F7C;
      }
      goto L_08AE3F58;
    }
L_08AE3F58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(51) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE3F70;
      }
      goto L_08AE3F68;
    }
L_08AE3F68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE3F7C;
      }
      goto L_08AE3F70;
    }
L_08AE3F70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE3F7C;
      }
      goto L_08AE3F78;
    }
L_08AE3F78:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AE3F7C;
L_08AE3F7C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE3F8C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
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
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(48);
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
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE3FE8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.pc = 0x08AE4000u; return;
}

void recomp_unit_0183(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0183_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_183(Runtime &runtime) {
    runtime.register_generated_unit(183u, 0x08AE0000u, 16384u, &recomp_unit_0183, &recomp_unit_0183_entry);
    runtime.register_function(0x08AE0000u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0004u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0010u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0038u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0040u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0058u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0064u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0070u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0078u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0084u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0090u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE00A0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE00B8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE00C0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0120u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0128u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0130u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0138u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0144u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE01A4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE01ACu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE01B0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE01B8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE01DCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE01E4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE01E8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE01F0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0200u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0208u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0218u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE022Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0230u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0244u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0248u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE025Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE026Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0278u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0284u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE028Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0290u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0298u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE02A4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE02B0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE02B8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE02BCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE02C0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE02D4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE02E4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE02F0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE02F4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0300u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE030Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0314u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE031Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0324u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0334u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0360u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE036Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE037Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0380u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0388u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0398u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE03A0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE03ACu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE03C4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE03D4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE03DCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE03E0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE03E8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE03F8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0400u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0428u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0434u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0440u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0444u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE044Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0458u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0468u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0474u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0484u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE048Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE04B4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE04C0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE04CCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE04D0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE04D8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE04E4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE04F4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0500u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0510u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0518u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0528u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0534u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE055Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0564u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0570u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0580u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE058Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE059Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE05A4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE05ACu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE05B4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE05D0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE05D8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE05E0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE05E8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE05F0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE05F8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0608u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE062Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0664u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE066Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0694u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE06A4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE06BCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE06F0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0700u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE070Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0720u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE072Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0738u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0740u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0748u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0758u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0764u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0790u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE07E8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE07F0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE07F4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0800u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0808u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0810u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0818u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0828u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0830u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0838u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0844u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE084Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0854u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE085Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0864u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE086Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0878u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0880u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0888u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0894u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE08ACu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE08BCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE08C8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE08DCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE08E4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE08F0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE08F8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0904u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0920u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0924u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE092Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0934u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE093Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0948u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE095Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0964u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE096Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0974u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0980u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0994u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE099Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE09A4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE09ACu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE09C0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE09C8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE09D0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE09DCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE09E4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE09E8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE09F0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE09F8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0A04u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0A1Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0A24u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0A30u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0A40u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0A48u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0A50u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0A58u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0A68u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0A6Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0A74u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0A88u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0A90u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0AECu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0AF8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0B00u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0B04u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0B0Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0B14u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0B20u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0B28u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0B30u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0B38u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0B44u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0B50u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0B5Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0B64u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0B6Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0B70u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0B78u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0B9Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0BA4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0BACu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0BB4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0BC0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0BC8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0BD0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0BDCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0BE4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0BECu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0BF4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0C04u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0C0Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0C14u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0C1Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0C30u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0C38u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0C44u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0C58u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0C64u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0C6Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0C74u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0C7Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0C84u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0C8Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0C98u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0CA4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0CB8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0CC0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0CD0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0CD8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0CE0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0CE8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0D14u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0D2Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0D3Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0D54u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0D64u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0D7Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0D8Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0D94u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0DA4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0DB4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0DBCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0DCCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0DD4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0DE4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0DF4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0DFCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0E0Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0E14u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0E24u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0E2Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0E3Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0E4Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0E54u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0E64u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0E74u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0E7Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0E88u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0E98u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0EA8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0EB0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0EB8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0EC4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0ECCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0EDCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0EECu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0EF4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0EFCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0F04u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0F0Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0F1Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0F24u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0F34u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0F44u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0F4Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0F54u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0F60u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0F70u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0F78u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0F88u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0F94u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0F9Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0FA4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0FACu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0FBCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0FC4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0FD4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0FE4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0FF4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0FFCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE100Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE101Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1024u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1034u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1044u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE104Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE105Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1068u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1070u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1078u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1080u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1090u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE10A0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE10A8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE10B8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE10C0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE10D0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE10E0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE10E8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE10F8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1100u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1110u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1118u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1124u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE112Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE113Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1144u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE114Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE115Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE116Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1174u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE117Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1184u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1190u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE11A0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE11B0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE11C8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE11D8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE11F0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE11FCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE120Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1214u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1220u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1228u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1238u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1240u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1248u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1250u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1258u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1268u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1270u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1280u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1288u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1294u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE129Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE12ACu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE12B4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE12BCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE12C4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE12CCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE12DCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE12E4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE12F4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE12FCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1308u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1310u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1320u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1328u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1330u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1338u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1340u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1350u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1358u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1368u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1370u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1378u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1384u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE138Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE139Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE13A4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE13ACu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE13BCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE13C4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE13D4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE13E0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE13E8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE13F0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE13F8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1408u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1410u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1420u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1428u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1438u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1440u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1450u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1460u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1468u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1478u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1480u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE148Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1494u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE14A4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE14ACu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE14B4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE14C4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE14CCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE14D8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE14E8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE14ECu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE14F4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE14F8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1500u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1510u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1518u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1524u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE152Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE153Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1544u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE154Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE155Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1564u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1570u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1580u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1590u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE15A8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE15B4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE15BCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE15C4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE15CCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE15D8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE15E0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE15F0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1600u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1610u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1620u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1628u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1630u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1638u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1640u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1650u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1660u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1670u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1680u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1688u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1698u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE16A8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE16B8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE16C8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE16D0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE16DCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE16E4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE16F4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1704u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1714u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1724u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE172Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1734u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1744u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1754u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1764u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1774u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1784u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1828u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1840u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1858u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1870u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1888u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE18A0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE18B8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE18D0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE18E8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1900u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1918u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1930u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1938u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1948u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1980u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE19A0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE19B8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE19C0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE19C4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE19E4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE19F0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1A04u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1A14u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1A1Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1A24u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1A30u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1A38u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1A3Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1A68u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1A78u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1A8Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1A94u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1AA0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1AA8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1AC0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1AC4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1AD8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1AE0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1AF4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1B04u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1B0Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1B20u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1B28u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1B48u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1B78u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1BACu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1BC8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1BECu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1BFCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1C0Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1C18u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1C20u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1C28u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1C30u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1C38u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1C40u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1C48u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1C50u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1C58u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1C74u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1C7Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1C88u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1CA0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1CA8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1CB0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1CBCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1CE0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1D0Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1D3Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1D40u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1D50u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1D6Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1D74u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1D98u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1DACu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1DB8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1DC0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1DC8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1DD0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1DD8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1DE0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1DE8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1DF0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1DF8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1E00u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1E08u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1E10u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1E14u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1E1Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1E24u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1E48u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1E98u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1EA8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1EC8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1ED4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1EE0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1EE8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1EF0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1EF8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1F04u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1F10u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1F18u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1F1Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1F24u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1F2Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1F54u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1F78u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1FBCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1FDCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2008u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2020u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2064u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2084u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE20B0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE20C8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE211Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE212Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2140u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2148u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2154u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2160u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2168u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2170u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2178u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2184u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE219Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE21BCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE21D4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE21F0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2200u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2228u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE224Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE225Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2264u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2270u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2278u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2284u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE228Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2294u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE22A8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE22C8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE22DCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2330u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2348u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2350u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2358u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2360u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2368u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2378u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE237Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE23A0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE23C0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE23CCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE23D4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE23E8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE23F8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2400u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2408u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2410u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2418u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE241Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2438u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2488u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2498u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE24ACu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE24BCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE24C4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE24CCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE24D8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE24F0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE24F4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE251Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2540u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2584u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE25A4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE25D0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE25E8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2600u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2624u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2634u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2648u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE265Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2690u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2698u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE26A4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE26ACu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE26DCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE26ECu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE26F8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2700u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2714u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2724u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2730u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2738u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2744u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE274Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2760u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2768u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE277Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE278Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2790u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE279Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE27A4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE27B8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE27D8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE27E4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE27ECu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE27F0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE27F8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE280Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2848u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2854u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE285Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2864u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE286Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2874u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE287Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2884u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2898u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE28A4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE28B0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE28B8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE28C0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE28CCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE28D4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE28ECu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE28F4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2904u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2910u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE291Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE293Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2944u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2954u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE295Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE296Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE297Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2988u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE298Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2998u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE29A0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE29A8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE29B8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE29C8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE29E0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE29E4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE29ECu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE29F4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2A04u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2A10u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2A1Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2A24u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2A2Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2A38u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2A40u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2A58u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2A60u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2A70u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2A7Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2A84u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2A90u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2A98u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2AA8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2AB4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2ABCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2AC8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2AD0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2AE0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2AECu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2AF8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2B00u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2B08u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2B14u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2B1Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2B34u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2B3Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2B4Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2B58u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2B64u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2B84u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2B8Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2B9Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2BA4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2BB4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2BC4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2BD0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2BD4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2BE0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2BE8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2BF4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2C04u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2C14u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2C2Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2C30u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2C38u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2C40u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2C50u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2C5Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2C68u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2C70u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2C78u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2CE0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2CE8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2CFCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2D08u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2D14u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2D1Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2D2Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2D34u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2D3Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2D44u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2D50u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2D5Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2D64u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2D68u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2D70u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2D7Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2D84u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2D8Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2D94u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2DA0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2DACu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2DB4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2DB8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2DC0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2DCCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2DD4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2DDCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2DE4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2DF0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2DFCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2E04u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2E08u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2E10u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2E1Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2E24u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2E2Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2E34u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2E40u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2E4Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2E54u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2E58u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2E60u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2E6Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2E74u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2E7Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2E84u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2E90u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2E9Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2EA4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2EA8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2EB0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2EBCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2EC4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2ED0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2ED8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2EE8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2EF4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2F00u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2F08u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2F18u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2F24u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2F30u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2F38u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2F44u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2F4Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2F58u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2F64u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2F6Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2F70u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2F78u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2F84u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2F8Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2F98u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2FA4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2FACu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2FB0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2FB8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2FC4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2FCCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2FD8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2FE4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2FECu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2FF0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2FF8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3004u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE300Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3018u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3024u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE302Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3030u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3038u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3054u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3060u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3070u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE307Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3088u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3090u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3098u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE30A8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE30B0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE30C8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE30CCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE30FCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE31F0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE32F0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE32F8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3300u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3304u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3318u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3324u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3330u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3338u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3340u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3358u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3374u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE338Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3394u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE33A0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE33A8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE33D0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE33DCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE33E8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE33F0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3404u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3424u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3444u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3464u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3470u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3480u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3498u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE34A8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE34B0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE34B8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE34D8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3508u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3528u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3530u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE353Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3550u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3564u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3580u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE35C4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE35D8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE35E0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE35E8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3600u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3634u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3664u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE367Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3680u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3684u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE368Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE36A4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE36E8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE36F0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE36FCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE371Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3730u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE374Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3770u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3784u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE378Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE37BCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE37C8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE37D4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE37D8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE37ECu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE37F8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3804u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3810u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE382Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE385Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3870u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3874u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3890u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE38BCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE38C4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE38E4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3908u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3914u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE391Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE392Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3948u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3964u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3970u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE397Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3980u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE39B4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE39BCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE39FCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3A18u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3A24u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3A34u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3A40u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3A48u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3A64u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3A6Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3A74u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3A84u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3A94u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3A9Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3AA4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3AB0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3AB8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3AC0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3AC8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3AD0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3ADCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3AE4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3AECu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3AF0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3AF8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3B00u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3B08u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3B24u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3B2Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3B34u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3B3Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3B44u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3B48u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3B58u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3B78u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3B94u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3B9Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3BA8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3BB0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3BC0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3BD0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3BD8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3C00u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3C10u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3C18u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3C20u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3C2Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3C4Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3C90u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3CA0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3CB0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3CD0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3CF4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3D00u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3D10u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3D28u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3D68u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3DACu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3DC8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3E0Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3E3Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3E58u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3E80u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3E88u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3E9Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3EACu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3EB4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3EBCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3EC4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3EC8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3ED0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3EE4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3EF4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3F04u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3F18u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3F20u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3F28u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3F30u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3F38u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3F48u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3F50u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3F58u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3F68u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3F70u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3F78u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3F7Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3F8Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3FE8u, &recomp_unit_0183, "recomp_unit_0183");
}
} // namespace psprecomp
