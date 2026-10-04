#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0127[4094] = {
    1, 0, 2, 0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 5, 6, 0, 7, 0, 0, 0, 0, 0, 0, 0, 8, 0, 9, 0, 10, 0, 0,
    0, 0, 0, 0, 0, 11, 0, 12, 0, 0, 0, 13, 0, 0, 0, 14, 0, 15, 0, 0, 0, 0, 16, 0, 0, 0, 17, 0, 18, 19, 0, 0,
    0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 26, 0,
    27, 28, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 34, 0, 35, 0, 36, 0, 37, 0, 0, 38, 0, 0, 0, 0, 39, 0, 0, 40, 0, 41, 0, 0, 42, 0, 0, 0, 43,
    0, 0, 0, 44, 0, 0, 0, 45, 0, 46, 0, 0, 0, 0, 0, 0, 47, 48, 0, 0, 0, 0, 0, 49, 0, 0, 50, 0, 0, 51, 0, 0,
    0, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 0, 0, 54, 0, 55, 0, 0, 0, 0, 0, 0, 0, 56, 57, 58, 0, 0, 0, 0, 0,
    0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0,
    0, 63, 0, 0, 64, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67,
    0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 71, 0, 0, 72, 0, 73, 0, 74, 0, 75,
    0, 76, 0, 77, 0, 78, 79, 0, 80, 0, 81, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 84, 0, 85, 0,
    86, 0, 87, 0, 88, 0, 89, 0, 90, 0, 91, 0, 92, 0, 93, 0, 94, 0, 95, 0, 96, 0, 97, 0, 98, 0, 99, 0, 100, 0, 101, 0,
    102, 0, 103, 0, 104, 0, 105, 0, 106, 0, 107, 0, 108, 0, 109, 0, 110, 0, 111, 0, 112, 0, 113, 0, 114, 0, 115, 0, 116, 0, 117, 0,
    118, 0, 119, 0, 120, 0, 121, 0, 122, 0, 123, 0, 124, 125, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0,
    0, 0, 129, 0, 0, 0, 130, 0, 131, 0, 132, 0, 0, 0, 133, 0, 134, 0, 135, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 137, 138, 0,
    0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 141, 0, 142, 0, 143, 0, 0, 144, 0, 0, 145, 0, 146, 0, 147,
    0, 148, 0, 0, 0, 149, 0, 0, 0, 150, 0, 151, 0, 152, 0, 0, 153, 0, 154, 0, 0, 0, 155, 0, 0, 0, 0, 0, 156, 157, 0, 0,
    0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 161, 0, 162, 0, 0, 163, 0, 0, 164, 0, 165, 0, 166,
    0, 167, 0, 0, 0, 168, 0, 0, 0, 169, 0, 170, 0, 171, 0, 0, 172, 0, 173, 0, 0, 0, 174, 0, 0, 0, 0, 0, 175, 176, 0, 0,
    0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 179, 0, 180, 0, 0, 181, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0,
    0, 0, 183, 0, 0, 0, 184, 0, 185, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 188, 0,
    0, 0, 189, 0, 190, 0, 0, 0, 0, 0, 0, 0, 191, 0, 192, 0, 193, 0, 194, 0, 0, 195, 0, 196, 0, 197, 0, 0, 198, 0, 199, 200,
    0, 0, 0, 0, 0, 0, 201, 0, 202, 0, 0, 203, 0, 0, 204, 0, 205, 0, 0, 0, 206, 0, 0, 207, 0, 208, 0, 209, 0, 210, 0, 0,
    211, 0, 212, 0, 213, 0, 214, 0, 0, 215, 0, 216, 0, 217, 0, 218, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0,
    0, 221, 0, 222, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 226, 0, 227, 0, 228, 0, 0, 229,
    0, 0, 230, 0, 231, 0, 232, 0, 233, 0, 234, 0, 0, 0, 235, 0, 236, 237, 0, 238, 0, 239, 0, 240, 0, 0, 0, 241, 0, 242, 243, 0,
    244, 0, 245, 0, 0, 246, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 250, 0, 0, 0, 251, 0, 252, 0, 253, 0, 0, 254, 0, 0, 255, 0, 256, 0, 257, 0, 258, 0, 0, 0, 259, 0, 0, 0,
    260, 0, 261, 0, 262, 0, 0, 263, 0, 264, 0, 0, 0, 0, 0, 265, 266, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 268, 0, 0,
    0, 269, 0, 270, 0, 271, 0, 0, 272, 0, 0, 0, 273, 0, 274, 275, 0, 276, 0, 277, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 279, 0,
    280, 281, 0, 0, 282, 0, 283, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 286, 0, 287, 0, 288, 0, 0, 289, 0,
    0, 0, 290, 0, 291, 292, 0, 293, 0, 294, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 297, 0, 298, 0, 299, 0, 300,
    0, 0, 0, 0, 301, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 305, 0, 306, 0, 307, 0, 0,
    308, 0, 0, 309, 0, 310, 0, 311, 0, 0, 0, 312, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 315, 0, 316, 0, 0,
    0, 0, 0, 317, 0, 0, 0, 0, 318, 0, 0, 0, 319, 0, 0, 0, 320, 0, 321, 0, 322, 0, 0, 323, 0, 0, 0, 324, 0, 325, 326, 0,
    327, 0, 328, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 331, 0, 332, 0, 0, 0, 0, 0, 333, 0, 0, 334, 0, 0,
    0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 336, 0, 337, 0, 0, 338, 0, 0, 0, 339, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0,
    0, 341, 0, 342, 0, 343, 0, 0, 0, 344, 0, 0, 345, 0, 346, 0, 347, 0, 0, 348, 0, 349, 0, 0, 350, 0, 351, 0, 0, 0, 352, 0,
    0, 0, 0, 0, 0, 0, 353, 0, 354, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 357, 0, 0, 0, 0, 358, 0, 0,
    0, 359, 0, 0, 0, 0, 0, 0, 0, 360, 361, 0, 0, 0, 0, 362, 363, 0, 0, 0, 0, 364, 365, 0, 366, 0, 0, 0, 0, 0, 367, 0,
    0, 368, 0, 0, 369, 370, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 372, 0, 0, 373, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 376, 0, 0, 0, 0, 377, 0, 0, 0, 0, 378, 0, 0, 0, 0, 379, 0, 0, 0,
    380, 0, 0, 381, 0, 382, 0, 0, 383, 0, 0, 0, 0, 384, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 387, 0, 388, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 391, 0, 392, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 394, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 396, 0, 397, 0, 398, 0, 399, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 402, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0,
    0, 404, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 406, 0, 0, 0, 407, 0, 408, 0, 409, 0, 410, 0, 411, 0, 0, 412, 0,
    413, 0, 414, 0, 415, 416, 0, 417, 0, 418, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421,
    0, 0, 422, 0, 423, 0, 0, 0, 424, 425, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0,
    0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 430, 0, 431, 0, 0, 0, 0, 432, 0, 0, 433, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 436,
    0, 0, 0, 0, 437, 0, 0, 438, 0, 0, 0, 439, 0, 440, 0, 441, 0, 0, 442, 0, 0, 0, 0, 0, 443, 0, 0, 444, 0, 0, 445, 0,
    446, 0, 447, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0,
    451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 453, 0, 0, 0, 454, 0, 0, 0, 455, 0, 0, 0, 456, 0,
    0, 0, 0, 457, 0, 0, 0, 458, 0, 459, 0, 0, 0, 460, 0, 0, 0, 461, 0, 0, 462, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 464, 0, 465, 466, 0, 0, 0, 0, 467, 0, 0, 468, 0, 0, 469, 0, 470, 471, 0, 0, 472, 0, 473, 0, 0, 0, 474,
    475, 0, 0, 476, 0, 0, 0, 477, 478, 0, 479, 0, 0, 480, 0, 0, 0, 481, 0, 482, 0, 0, 483, 0, 484, 0, 0, 0, 0, 485, 0, 486,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 0, 490, 0, 491,
    492, 0, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 494, 0, 0, 495, 0,
    496, 0, 497, 0, 498, 0, 0, 499, 0, 0, 500, 0, 0, 501, 0, 0, 0, 502, 0, 0, 0, 0, 0, 0, 0, 0, 0, 503, 0, 0, 0, 504,
    0, 0, 505, 0, 506, 0, 0, 0, 507, 0, 0, 0, 508, 0, 509, 0, 510, 511, 0, 0, 512, 0, 513, 0, 0, 0, 0, 514, 0, 515, 0, 516,
    0, 0, 0, 517, 0, 0, 518, 0, 519, 0, 0, 0, 0, 0, 0, 520, 0, 0, 521, 0, 0, 522, 0, 0, 523, 0, 0, 524, 0, 0, 0, 0,
    525, 0, 526, 0, 0, 527, 0, 0, 528, 0, 0, 529, 0, 530, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0, 0, 0, 532, 0, 0, 0, 0, 0,
    0, 0, 533, 0, 0, 0, 0, 534, 0, 0, 0, 0, 0, 0, 535, 0, 0, 536, 537, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 538, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 539, 0, 0, 540, 0, 0, 0, 541, 0, 542, 0, 543, 0, 0, 0, 0, 0, 0, 0, 0, 0, 544, 0, 0,
    545, 0, 0, 0, 546, 0, 547, 0, 548, 549, 0, 550, 0, 0, 0, 0, 0, 0, 0, 551, 0, 0, 0, 552, 0, 0, 0, 0, 0, 553, 0, 0,
    0, 554, 0, 555, 0, 556, 0, 557, 0, 558, 0, 0, 559, 0, 560, 0, 561, 0, 562, 563, 0, 564, 0, 565, 0, 0, 0, 0, 0, 566, 0, 567,
    0, 0, 0, 0, 568, 0, 0, 0, 0, 569, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570,
    0, 0, 0, 0, 0, 0, 0, 571, 0, 0, 0, 572, 0, 0, 0, 0, 0, 573, 0, 0, 0, 574, 0, 575, 0, 576, 0, 577, 0, 578, 0, 0,
    579, 0, 580, 0, 581, 0, 582, 583, 0, 584, 0, 585, 0, 0, 0, 0, 0, 586, 0, 587, 0, 588, 0, 0, 0, 0, 0, 0, 0, 589, 0, 0,
    0, 590, 0, 0, 0, 0, 0, 591, 0, 0, 0, 592, 0, 593, 0, 594, 0, 595, 0, 596, 0, 0, 597, 0, 598, 0, 599, 0, 600, 601, 0, 602,
    0, 603, 0, 0, 0, 0, 0, 604, 0, 605, 0, 606, 0, 0, 0, 0, 0, 0, 0, 607, 0, 0, 0, 608, 0, 0, 0, 0, 0, 609, 0, 0,
    0, 610, 0, 611, 0, 612, 0, 613, 0, 614, 0, 0, 615, 0, 616, 0, 617, 0, 618, 619, 0, 620, 0, 621, 0, 0, 0, 0, 0, 622, 0, 623,
    0, 624, 0, 0, 0, 625, 0, 0, 626, 627, 0, 628, 0, 0, 0, 0, 0, 0, 0, 629, 0, 0, 0, 630, 0, 0, 0, 0, 0, 631, 0, 0,
    0, 632, 0, 633, 0, 634, 0, 635, 0, 636, 0, 0, 637, 0, 638, 0, 639, 0, 640, 641, 0, 642, 0, 643, 0, 0, 0, 0, 0, 644, 0, 645,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 646, 0, 0, 647, 0, 0, 0, 0, 0, 648, 0, 0, 0, 0, 649, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 650, 0, 0, 0, 0, 0, 0, 0, 0, 0, 651, 0, 652, 0, 653, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 654, 0, 655, 0, 0, 0, 0, 656, 0, 0, 0, 0, 0, 657, 0, 0, 0, 0, 0, 658, 0, 0, 0, 0, 659, 0, 0, 0,
    660, 0, 0, 0, 661, 0, 0, 662, 0, 0, 663, 0, 664, 0, 0, 0, 665, 0, 0, 666, 0, 667, 0, 668, 0, 0, 669, 0, 0, 670, 0, 0,
    671, 0, 672, 0, 673, 0, 0, 0, 674, 0, 0, 675, 0, 0, 676, 0, 677, 0, 0, 0, 678, 679, 0, 680, 0, 0, 681, 0, 682, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 683, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    684, 0, 0, 0, 0, 685, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 686, 0, 0, 687, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 688, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 689, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 690, 0, 691, 0, 0, 0, 692, 0, 693, 0, 0, 0, 694, 0, 0, 695, 0, 0, 696, 0, 0, 697,
    0, 0, 0, 0, 0, 0, 0, 698, 0, 0, 0, 0, 699, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 700,
    0, 0, 0, 0, 0, 0, 0, 701, 0, 0, 0, 702, 0, 0, 703, 0, 704, 0, 0, 0, 0, 0, 705, 0, 0, 0, 706, 0, 707, 0, 708, 0,
    709, 0, 710, 0, 0, 711, 0, 712, 0, 713, 0, 714, 715, 0, 716, 0, 717, 0, 0, 0, 0, 0, 718, 0, 719, 0, 720, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 721, 0, 0, 722, 0, 723, 0, 0, 0, 724, 0, 725, 0, 726, 0, 727, 0, 728, 0, 729, 0, 730, 0, 731, 0,
    732, 0, 0, 0, 0, 733, 0, 734, 0, 0, 0, 0, 735, 0, 736, 0, 0, 0, 0, 737, 0, 738, 0, 0, 0, 0, 739, 0, 740, 0, 0, 0,
    0, 741, 0, 742, 0, 0, 0, 0, 743, 0, 744, 745, 0, 0, 0, 0, 0, 0, 746, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 747, 0, 0,
    0, 0, 748, 0, 0, 749, 0, 750, 0, 0, 0, 0, 751, 0, 752, 0, 753, 0, 754, 0, 755, 0, 756, 0, 757, 0, 758, 0, 759, 0, 760, 0,
    0, 0, 0, 761, 0, 762, 0, 0, 0, 0, 763, 0, 764, 0, 0, 0, 0, 765, 0, 766, 0, 0, 0, 0, 767, 0, 768, 0, 0, 0, 0, 769,
    0, 770, 0, 0, 0, 0, 771, 0, 772, 773, 0, 0, 0, 0, 0, 0, 774, 0, 0, 0, 0, 0, 0, 0, 0, 775, 0, 0, 0, 0, 776, 0,
    0, 777, 0, 778, 0, 0, 0, 0, 779, 0, 780, 0, 781, 0, 782, 0, 783, 0, 784, 0, 785, 0, 786, 0, 787, 0, 788, 0, 0, 0, 789, 0,
    790, 0, 0, 0, 791, 0, 792, 0, 0, 0, 793, 0, 794, 0, 0, 0, 795, 0, 796, 0, 0, 0, 797, 0, 798, 0, 0, 0, 799, 0, 800, 801,
    0, 0, 0, 0, 0, 802, 0, 0, 0, 0, 0, 0, 0, 0, 803, 0, 0, 0, 0, 804, 0, 0, 805, 0, 806, 0, 0, 0, 0, 807, 0, 808,
    0, 809, 0, 810, 0, 811, 0, 812, 0, 813, 0, 814, 0, 815, 0, 816, 0, 0, 0, 817, 0, 818, 0, 0, 0, 819, 0, 820, 0, 0, 0, 821,
    0, 822, 0, 0, 0, 823, 0, 824, 0, 0, 0, 825, 0, 826, 0, 0, 0, 827, 0, 828, 829, 0, 0, 0, 0, 0, 830, 0, 0, 0, 0, 0,
    0, 0, 0, 831, 0, 0, 0, 0, 832, 0, 0, 833, 0, 834, 0, 0, 0, 0, 835, 0, 836, 0, 837, 0, 838, 0, 839, 0, 840, 0, 841, 0,
    842, 0, 843, 0, 844, 0, 0, 0, 845, 0, 846, 0, 0, 0, 847, 0, 848, 0, 0, 0, 849, 0, 850, 0, 0, 0, 851, 0, 852, 0, 0, 0,
    853, 0, 854, 0, 0, 0, 855, 0, 856, 857, 0, 0, 0, 0, 0, 858, 0, 0, 0, 0, 0, 0, 0, 0, 859, 0, 0, 0, 0, 860, 0, 0,
    861, 0, 862, 0, 0, 0, 0, 863, 0, 864, 0, 865, 0, 866, 0, 867, 0, 868, 0, 869, 0, 870, 0, 871, 0, 872, 0, 0, 0, 873, 0, 874,
    0, 0, 0, 875, 0, 876, 0, 0, 0, 877, 0, 878, 0, 0, 0, 879, 0, 880, 0, 0, 0, 881, 0, 882, 0, 0, 0, 883, 0, 884, 885, 0,
    0, 0, 0, 0, 886, 0, 0, 0, 0, 887, 0, 0, 0, 888, 0, 0, 0, 889, 0, 890, 0, 891, 0, 892, 0, 893, 0, 894, 0, 895, 0, 896,
    0, 897, 0, 0, 0, 898, 0, 899, 0, 0, 0, 900, 0, 901, 0, 0, 0, 902, 0, 903, 0, 0, 0, 904, 0, 905, 0, 0, 0, 906, 0, 907,
    0, 0, 0, 908, 0, 909, 0, 910, 0, 911, 0, 912, 0, 913, 0, 0, 0, 914, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 915, 0,
    0, 916, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 917, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 918, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 919, 0, 0, 0, 0, 920, 0, 0, 0, 0, 921, 0, 0, 0,
    0, 0, 0, 0, 0, 922, 0, 923, 0, 0, 0, 0, 924, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 925, 0, 926, 0, 0, 927, 0, 0, 0,
    928, 0, 0, 0, 0, 0, 0, 0, 0, 929, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 930, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 931, 0, 0, 0, 0, 0, 932, 0, 933, 0, 934, 935, 0, 0, 0, 0, 0,
    0, 0, 936, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 937, 0, 0, 938, 0, 0,
    939, 0, 940, 0, 0, 0, 0, 941, 0, 0, 942, 0, 943, 944, 0, 0, 0, 945, 0, 0, 946, 0, 947, 948, 0, 949, 0, 0, 0, 950, 0, 0,
    951, 0, 952, 0, 0, 953, 0, 0, 0, 954, 0, 0, 955, 0, 956, 957, 0, 958, 959, 0, 960, 0, 0, 961, 0, 0, 962, 0, 963, 964, 0, 965,
    966, 0, 0, 0, 0, 967, 968, 0, 969, 0, 0, 970, 971, 0, 972, 0, 973, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 974, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 975, 976, 0, 0, 0, 977, 0, 0, 978, 0, 979, 0,
    0, 0, 980, 0, 0, 981, 0, 0, 982, 0, 0, 0, 983, 0, 0, 984, 0, 0, 985, 0, 986, 0, 987, 0, 0, 0, 0, 0, 0, 0, 988, 0,
    0, 989, 990, 0, 0, 0, 0, 991, 0, 0, 0, 0, 0, 0, 0, 0, 0, 992, 993, 0, 0, 0, 994, 0, 995, 0, 996, 0, 997, 0, 998, 0,
    0, 0, 999, 1000, 0, 1001, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1002, 0, 0, 1003, 0, 0, 0, 1004, 0, 1005, 0, 1006, 1007, 0, 0,
    0, 1008, 0, 0, 0, 0, 0, 0, 1009, 0, 0, 0, 1010, 1011, 0, 0, 0, 0, 0, 1012, 0, 0, 0, 1013, 1014, 0, 0, 0, 0, 0, 1015, 0,
    0, 0, 1016, 1017, 0, 0, 0, 0, 1018, 0, 0, 0, 1019, 1020, 0, 1021, 0, 1022, 0, 0, 0, 0, 0, 0, 1023, 0, 0, 1024, 0, 0, 0, 1025,
    1026, 0, 0, 0, 1027, 0, 1028, 1029, 0, 1030, 1031, 0, 1032, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1033, 0, 0, 0, 0, 0, 0, 0, 1034,
    0, 0, 1035, 0, 0, 0, 1036, 0, 0, 1037, 0, 0, 0, 1038, 0, 0, 1039, 0, 0, 0, 1040, 0, 0, 1041, 0, 0, 0, 1042, 0, 0, 1043, 0,
    1044, 0, 1045, 0, 1046, 0, 1047, 0, 1048, 0, 1049, 0, 1050, 0, 1051, 1052, 0, 0, 1053, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1054,
};
void recomp_unit_0127_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A00000u;
        entry_id = (entry_delta < 16376u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0127[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A00000;
    case 2u: goto L_08A00008;
    case 3u: goto L_08A00010;
    case 4u: goto L_08A00030;
    case 5u: goto L_08A00038;
    case 6u: goto L_08A0003C;
    case 7u: goto L_08A00044;
    case 8u: goto L_08A00064;
    case 9u: goto L_08A0006C;
    case 10u: goto L_08A00074;
    case 11u: goto L_08A00094;
    case 12u: goto L_08A0009C;
    case 13u: goto L_08A000AC;
    case 14u: goto L_08A000BC;
    case 15u: goto L_08A000C4;
    case 16u: goto L_08A000D8;
    case 17u: goto L_08A000E8;
    case 18u: goto L_08A000F0;
    case 19u: goto L_08A000F4;
    case 20u: goto L_08A00104;
    case 21u: goto L_08A0012C;
    case 22u: goto L_08A0013C;
    case 23u: goto L_08A00148;
    case 24u: goto L_08A0015C;
    case 25u: goto L_08A00170;
    case 26u: goto L_08A00178;
    case 27u: goto L_08A00180;
    case 28u: goto L_08A00184;
    case 29u: goto L_08A0019C;
    case 30u: goto L_08A0020C;
    case 31u: goto L_08A00234;
    case 32u: goto L_08A0024C;
    case 33u: goto L_08A002E8;
    case 34u: goto L_08A00314;
    case 35u: goto L_08A0031C;
    case 36u: goto L_08A00324;
    case 37u: goto L_08A0032C;
    case 38u: goto L_08A00338;
    case 39u: goto L_08A0034C;
    case 40u: goto L_08A00358;
    case 41u: goto L_08A00360;
    case 42u: goto L_08A0036C;
    case 43u: goto L_08A0037C;
    case 44u: goto L_08A0038C;
    case 45u: goto L_08A0039C;
    case 46u: goto L_08A003A4;
    case 47u: goto L_08A003C0;
    case 48u: goto L_08A003C4;
    case 49u: goto L_08A003DC;
    case 50u: goto L_08A003E8;
    case 51u: goto L_08A003F4;
    case 52u: goto L_08A00410;
    case 53u: goto L_08A00424;
    case 54u: goto L_08A00438;
    case 55u: goto L_08A00440;
    case 56u: goto L_08A00460;
    case 57u: goto L_08A00464;
    case 58u: goto L_08A00468;
    case 59u: goto L_08A00488;
    case 60u: goto L_08A004B0;
    case 61u: goto L_08A004C8;
    case 62u: goto L_08A004EC;
    case 63u: goto L_08A00504;
    case 64u: goto L_08A00510;
    case 65u: goto L_08A00518;
    case 66u: goto L_08A00548;
    case 67u: goto L_08A0057C;
    case 68u: goto L_08A00588;
    case 69u: goto L_08A005A0;
    case 70u: goto L_08A005C0;
    case 71u: goto L_08A005D8;
    case 72u: goto L_08A005E4;
    case 73u: goto L_08A005EC;
    case 74u: goto L_08A005F4;
    case 75u: goto L_08A005FC;
    case 76u: goto L_08A00604;
    case 77u: goto L_08A0060C;
    case 78u: goto L_08A00614;
    case 79u: goto L_08A00618;
    case 80u: goto L_08A00620;
    case 81u: goto L_08A00628;
    case 82u: goto L_08A00640;
    case 83u: goto L_08A00658;
    case 84u: goto L_08A00670;
    case 85u: goto L_08A00678;
    case 86u: goto L_08A00680;
    case 87u: goto L_08A00688;
    case 88u: goto L_08A00690;
    case 89u: goto L_08A00698;
    case 90u: goto L_08A006A0;
    case 91u: goto L_08A006A8;
    case 92u: goto L_08A006B0;
    case 93u: goto L_08A006B8;
    case 94u: goto L_08A006C0;
    case 95u: goto L_08A006C8;
    case 96u: goto L_08A006D0;
    case 97u: goto L_08A006D8;
    case 98u: goto L_08A006E0;
    case 99u: goto L_08A006E8;
    case 100u: goto L_08A006F0;
    case 101u: goto L_08A006F8;
    case 102u: goto L_08A00700;
    case 103u: goto L_08A00708;
    case 104u: goto L_08A00710;
    case 105u: goto L_08A00718;
    case 106u: goto L_08A00720;
    case 107u: goto L_08A00728;
    case 108u: goto L_08A00730;
    case 109u: goto L_08A00738;
    case 110u: goto L_08A00740;
    case 111u: goto L_08A00748;
    case 112u: goto L_08A00750;
    case 113u: goto L_08A00758;
    case 114u: goto L_08A00760;
    case 115u: goto L_08A00768;
    case 116u: goto L_08A00770;
    case 117u: goto L_08A00778;
    case 118u: goto L_08A00780;
    case 119u: goto L_08A00788;
    case 120u: goto L_08A00790;
    case 121u: goto L_08A00798;
    case 122u: goto L_08A007A0;
    case 123u: goto L_08A007A8;
    case 124u: goto L_08A007B0;
    case 125u: goto L_08A007B4;
    case 126u: goto L_08A007C0;
    case 127u: goto L_08A007D0;
    case 128u: goto L_08A007E4;
    case 129u: goto L_08A00808;
    case 130u: goto L_08A00818;
    case 131u: goto L_08A00820;
    case 132u: goto L_08A00828;
    case 133u: goto L_08A00838;
    case 134u: goto L_08A00840;
    case 135u: goto L_08A00848;
    case 136u: goto L_08A00864;
    case 137u: goto L_08A00874;
    case 138u: goto L_08A00878;
    case 139u: goto L_08A0088C;
    case 140u: goto L_08A008B4;
    case 141u: goto L_08A008C4;
    case 142u: goto L_08A008CC;
    case 143u: goto L_08A008D4;
    case 144u: goto L_08A008E0;
    case 145u: goto L_08A008EC;
    case 146u: goto L_08A008F4;
    case 147u: goto L_08A008FC;
    case 148u: goto L_08A00904;
    case 149u: goto L_08A00914;
    case 150u: goto L_08A00924;
    case 151u: goto L_08A0092C;
    case 152u: goto L_08A00934;
    case 153u: goto L_08A00940;
    case 154u: goto L_08A00948;
    case 155u: goto L_08A00958;
    case 156u: goto L_08A00970;
    case 157u: goto L_08A00974;
    case 158u: goto L_08A0098C;
    case 159u: goto L_08A009B4;
    case 160u: goto L_08A009C4;
    case 161u: goto L_08A009CC;
    case 162u: goto L_08A009D4;
    case 163u: goto L_08A009E0;
    case 164u: goto L_08A009EC;
    case 165u: goto L_08A009F4;
    case 166u: goto L_08A009FC;
    case 167u: goto L_08A00A04;
    case 168u: goto L_08A00A14;
    case 169u: goto L_08A00A24;
    case 170u: goto L_08A00A2C;
    case 171u: goto L_08A00A34;
    case 172u: goto L_08A00A40;
    case 173u: goto L_08A00A48;
    case 174u: goto L_08A00A58;
    case 175u: goto L_08A00A70;
    case 176u: goto L_08A00A74;
    case 177u: goto L_08A00A8C;
    case 178u: goto L_08A00AB0;
    case 179u: goto L_08A00AC0;
    case 180u: goto L_08A00AC8;
    case 181u: goto L_08A00AD4;
    case 182u: goto L_08A00AEC;
    case 183u: goto L_08A00B08;
    case 184u: goto L_08A00B18;
    case 185u: goto L_08A00B20;
    case 186u: goto L_08A00B3C;
    case 187u: goto L_08A00B64;
    case 188u: goto L_08A00B78;
    case 189u: goto L_08A00B88;
    case 190u: goto L_08A00B90;
    case 191u: goto L_08A00BB0;
    case 192u: goto L_08A00BB8;
    case 193u: goto L_08A00BC0;
    case 194u: goto L_08A00BC8;
    case 195u: goto L_08A00BD4;
    case 196u: goto L_08A00BDC;
    case 197u: goto L_08A00BE4;
    case 198u: goto L_08A00BF0;
    case 199u: goto L_08A00BF8;
    case 200u: goto L_08A00BFC;
    case 201u: goto L_08A00C18;
    case 202u: goto L_08A00C20;
    case 203u: goto L_08A00C2C;
    case 204u: goto L_08A00C38;
    case 205u: goto L_08A00C40;
    case 206u: goto L_08A00C50;
    case 207u: goto L_08A00C5C;
    case 208u: goto L_08A00C64;
    case 209u: goto L_08A00C6C;
    case 210u: goto L_08A00C74;
    case 211u: goto L_08A00C80;
    case 212u: goto L_08A00C88;
    case 213u: goto L_08A00C90;
    case 214u: goto L_08A00C98;
    case 215u: goto L_08A00CA4;
    case 216u: goto L_08A00CAC;
    case 217u: goto L_08A00CB4;
    case 218u: goto L_08A00CBC;
    case 219u: goto L_08A00CC8;
    case 220u: goto L_08A00CE0;
    case 221u: goto L_08A00D04;
    case 222u: goto L_08A00D0C;
    case 223u: goto L_08A00D24;
    case 224u: goto L_08A00D40;
    case 225u: goto L_08A00D50;
    case 226u: goto L_08A00D60;
    case 227u: goto L_08A00D68;
    case 228u: goto L_08A00D70;
    case 229u: goto L_08A00D7C;
    case 230u: goto L_08A00D88;
    case 231u: goto L_08A00D90;
    case 232u: goto L_08A00D98;
    case 233u: goto L_08A00DA0;
    case 234u: goto L_08A00DA8;
    case 235u: goto L_08A00DB8;
    case 236u: goto L_08A00DC0;
    case 237u: goto L_08A00DC4;
    case 238u: goto L_08A00DCC;
    case 239u: goto L_08A00DD4;
    case 240u: goto L_08A00DDC;
    case 241u: goto L_08A00DEC;
    case 242u: goto L_08A00DF4;
    case 243u: goto L_08A00DF8;
    case 244u: goto L_08A00E00;
    case 245u: goto L_08A00E08;
    case 246u: goto L_08A00E14;
    case 247u: goto L_08A00E2C;
    case 248u: goto L_08A00E50;
    case 249u: goto L_08A00E68;
    case 250u: goto L_08A00E90;
    case 251u: goto L_08A00EA0;
    case 252u: goto L_08A00EA8;
    case 253u: goto L_08A00EB0;
    case 254u: goto L_08A00EBC;
    case 255u: goto L_08A00EC8;
    case 256u: goto L_08A00ED0;
    case 257u: goto L_08A00ED8;
    case 258u: goto L_08A00EE0;
    case 259u: goto L_08A00EF0;
    case 260u: goto L_08A00F00;
    case 261u: goto L_08A00F08;
    case 262u: goto L_08A00F10;
    case 263u: goto L_08A00F1C;
    case 264u: goto L_08A00F24;
    case 265u: goto L_08A00F3C;
    case 266u: goto L_08A00F40;
    case 267u: goto L_08A00F58;
    case 268u: goto L_08A00F74;
    case 269u: goto L_08A00F84;
    case 270u: goto L_08A00F8C;
    case 271u: goto L_08A00F94;
    case 272u: goto L_08A00FA0;
    case 273u: goto L_08A00FB0;
    case 274u: goto L_08A00FB8;
    case 275u: goto L_08A00FBC;
    case 276u: goto L_08A00FC4;
    case 277u: goto L_08A00FCC;
    case 278u: goto L_08A00FE0;
    case 279u: goto L_08A00FF8;
    case 280u: goto L_08A01000;
    case 281u: goto L_08A01004;
    case 282u: goto L_08A01010;
    case 283u: goto L_08A01018;
    case 284u: goto L_08A01030;
    case 285u: goto L_08A0104C;
    case 286u: goto L_08A0105C;
    case 287u: goto L_08A01064;
    case 288u: goto L_08A0106C;
    case 289u: goto L_08A01078;
    case 290u: goto L_08A01088;
    case 291u: goto L_08A01090;
    case 292u: goto L_08A01094;
    case 293u: goto L_08A0109C;
    case 294u: goto L_08A010A4;
    case 295u: goto L_08A010B8;
    case 296u: goto L_08A010D4;
    case 297u: goto L_08A010E4;
    case 298u: goto L_08A010EC;
    case 299u: goto L_08A010F4;
    case 300u: goto L_08A010FC;
    case 301u: goto L_08A01110;
    case 302u: goto L_08A01120;
    case 303u: goto L_08A01130;
    case 304u: goto L_08A01154;
    case 305u: goto L_08A01164;
    case 306u: goto L_08A0116C;
    case 307u: goto L_08A01174;
    case 308u: goto L_08A01180;
    case 309u: goto L_08A0118C;
    case 310u: goto L_08A01194;
    case 311u: goto L_08A0119C;
    case 312u: goto L_08A011AC;
    case 313u: goto L_08A011C0;
    case 314u: goto L_08A011DC;
    case 315u: goto L_08A011EC;
    case 316u: goto L_08A011F4;
    case 317u: goto L_08A0120C;
    case 318u: goto L_08A01220;
    case 319u: goto L_08A01230;
    case 320u: goto L_08A01240;
    case 321u: goto L_08A01248;
    case 322u: goto L_08A01250;
    case 323u: goto L_08A0125C;
    case 324u: goto L_08A0126C;
    case 325u: goto L_08A01274;
    case 326u: goto L_08A01278;
    case 327u: goto L_08A01280;
    case 328u: goto L_08A01288;
    case 329u: goto L_08A0129C;
    case 330u: goto L_08A012B8;
    case 331u: goto L_08A012C8;
    case 332u: goto L_08A012D0;
    case 333u: goto L_08A012E8;
    case 334u: goto L_08A012F4;
    case 335u: goto L_08A01318;
    case 336u: goto L_08A01328;
    case 337u: goto L_08A01330;
    case 338u: goto L_08A0133C;
    case 339u: goto L_08A0134C;
    case 340u: goto L_08A01364;
    case 341u: goto L_08A01384;
    case 342u: goto L_08A0138C;
    case 343u: goto L_08A01394;
    case 344u: goto L_08A013A4;
    case 345u: goto L_08A013B0;
    case 346u: goto L_08A013B8;
    case 347u: goto L_08A013C0;
    case 348u: goto L_08A013CC;
    case 349u: goto L_08A013D4;
    case 350u: goto L_08A013E0;
    case 351u: goto L_08A013E8;
    case 352u: goto L_08A013F8;
    case 353u: goto L_08A01418;
    case 354u: goto L_08A01420;
    case 355u: goto L_08A01434;
    case 356u: goto L_08A01450;
    case 357u: goto L_08A01460;
    case 358u: goto L_08A01474;
    case 359u: goto L_08A01484;
    case 360u: goto L_08A014A4;
    case 361u: goto L_08A014A8;
    case 362u: goto L_08A014BC;
    case 363u: goto L_08A014C0;
    case 364u: goto L_08A014D4;
    case 365u: goto L_08A014D8;
    case 366u: goto L_08A014E0;
    case 367u: goto L_08A014F8;
    case 368u: goto L_08A01504;
    case 369u: goto L_08A01510;
    case 370u: goto L_08A01514;
    case 371u: goto L_08A01528;
    case 372u: goto L_08A01540;
    case 373u: goto L_08A0154C;
    case 374u: goto L_08A01558;
    case 375u: goto L_08A015B0;
    case 376u: goto L_08A015B4;
    case 377u: goto L_08A015C8;
    case 378u: goto L_08A015DC;
    case 379u: goto L_08A015F0;
    case 380u: goto L_08A01600;
    case 381u: goto L_08A0160C;
    case 382u: goto L_08A01614;
    case 383u: goto L_08A01620;
    case 384u: goto L_08A01634;
    case 385u: goto L_08A01648;
    case 386u: goto L_08A01660;
    case 387u: goto L_08A01704;
    case 388u: goto L_08A0170C;
    case 389u: goto L_08A0171C;
    case 390u: goto L_08A01760;
    case 391u: goto L_08A01768;
    case 392u: goto L_08A01770;
    case 393u: goto L_08A017BC;
    case 394u: goto L_08A017C4;
    case 395u: goto L_08A017CC;
    case 396u: goto L_08A01818;
    case 397u: goto L_08A01820;
    case 398u: goto L_08A01828;
    case 399u: goto L_08A01830;
    case 400u: goto L_08A01838;
    case 401u: goto L_08A018C0;
    case 402u: goto L_08A018D0;
    case 403u: goto L_08A018E0;
    case 404u: goto L_08A01904;
    case 405u: goto L_08A01924;
    case 406u: goto L_08A0193C;
    case 407u: goto L_08A0194C;
    case 408u: goto L_08A01954;
    case 409u: goto L_08A0195C;
    case 410u: goto L_08A01964;
    case 411u: goto L_08A0196C;
    case 412u: goto L_08A01978;
    case 413u: goto L_08A01980;
    case 414u: goto L_08A01988;
    case 415u: goto L_08A01990;
    case 416u: goto L_08A01994;
    case 417u: goto L_08A0199C;
    case 418u: goto L_08A019A4;
    case 419u: goto L_08A019BC;
    case 420u: goto L_08A019D0;
    case 421u: goto L_08A019FC;
    case 422u: goto L_08A01A08;
    case 423u: goto L_08A01A10;
    case 424u: goto L_08A01A20;
    case 425u: goto L_08A01A24;
    case 426u: goto L_08A01A2C;
    case 427u: goto L_08A01A6C;
    case 428u: goto L_08A01A8C;
    case 429u: goto L_08A01AAC;
    case 430u: goto L_08A01B10;
    case 431u: goto L_08A01B18;
    case 432u: goto L_08A01B2C;
    case 433u: goto L_08A01B38;
    case 434u: goto L_08A01B4C;
    case 435u: goto L_08A01B74;
    case 436u: goto L_08A01B7C;
    case 437u: goto L_08A01B90;
    case 438u: goto L_08A01B9C;
    case 439u: goto L_08A01BAC;
    case 440u: goto L_08A01BB4;
    case 441u: goto L_08A01BBC;
    case 442u: goto L_08A01BC8;
    case 443u: goto L_08A01BE0;
    case 444u: goto L_08A01BEC;
    case 445u: goto L_08A01BF8;
    case 446u: goto L_08A01C00;
    case 447u: goto L_08A01C08;
    case 448u: goto L_08A01C24;
    case 449u: goto L_08A01C44;
    case 450u: goto L_08A01C60;
    case 451u: goto L_08A01C80;
    case 452u: goto L_08A01CBC;
    case 453u: goto L_08A01CC8;
    case 454u: goto L_08A01CD8;
    case 455u: goto L_08A01CE8;
    case 456u: goto L_08A01CF8;
    case 457u: goto L_08A01D0C;
    case 458u: goto L_08A01D1C;
    case 459u: goto L_08A01D24;
    case 460u: goto L_08A01D34;
    case 461u: goto L_08A01D44;
    case 462u: goto L_08A01D50;
    case 463u: goto L_08A01D60;
    case 464u: goto L_08A01D94;
    case 465u: goto L_08A01D9C;
    case 466u: goto L_08A01DA0;
    case 467u: goto L_08A01DB4;
    case 468u: goto L_08A01DC0;
    case 469u: goto L_08A01DCC;
    case 470u: goto L_08A01DD4;
    case 471u: goto L_08A01DD8;
    case 472u: goto L_08A01DE4;
    case 473u: goto L_08A01DEC;
    case 474u: goto L_08A01DFC;
    case 475u: goto L_08A01E00;
    case 476u: goto L_08A01E0C;
    case 477u: goto L_08A01E1C;
    case 478u: goto L_08A01E20;
    case 479u: goto L_08A01E28;
    case 480u: goto L_08A01E34;
    case 481u: goto L_08A01E44;
    case 482u: goto L_08A01E4C;
    case 483u: goto L_08A01E58;
    case 484u: goto L_08A01E60;
    case 485u: goto L_08A01E74;
    case 486u: goto L_08A01E7C;
    case 487u: goto L_08A01EA4;
    case 488u: goto L_08A01EC4;
    case 489u: goto L_08A01ED8;
    case 490u: goto L_08A01EF4;
    case 491u: goto L_08A01EFC;
    case 492u: goto L_08A01F00;
    case 493u: goto L_08A01F28;
    case 494u: goto L_08A01F6C;
    case 495u: goto L_08A01F78;
    case 496u: goto L_08A01F80;
    case 497u: goto L_08A01F88;
    case 498u: goto L_08A01F90;
    case 499u: goto L_08A01F9C;
    case 500u: goto L_08A01FA8;
    case 501u: goto L_08A01FB4;
    case 502u: goto L_08A01FC4;
    case 503u: goto L_08A01FEC;
    case 504u: goto L_08A01FFC;
    case 505u: goto L_08A02008;
    case 506u: goto L_08A02010;
    case 507u: goto L_08A02020;
    case 508u: goto L_08A02030;
    case 509u: goto L_08A02038;
    case 510u: goto L_08A02040;
    case 511u: goto L_08A02044;
    case 512u: goto L_08A02050;
    case 513u: goto L_08A02058;
    case 514u: goto L_08A0206C;
    case 515u: goto L_08A02074;
    case 516u: goto L_08A0207C;
    case 517u: goto L_08A0208C;
    case 518u: goto L_08A02098;
    case 519u: goto L_08A020A0;
    case 520u: goto L_08A020BC;
    case 521u: goto L_08A020C8;
    case 522u: goto L_08A020D4;
    case 523u: goto L_08A020E0;
    case 524u: goto L_08A020EC;
    case 525u: goto L_08A02100;
    case 526u: goto L_08A02108;
    case 527u: goto L_08A02114;
    case 528u: goto L_08A02120;
    case 529u: goto L_08A0212C;
    case 530u: goto L_08A02134;
    case 531u: goto L_08A02144;
    case 532u: goto L_08A02168;
    case 533u: goto L_08A02188;
    case 534u: goto L_08A0219C;
    case 535u: goto L_08A021B8;
    case 536u: goto L_08A021C4;
    case 537u: goto L_08A021C8;
    case 538u: goto L_08A021F4;
    case 539u: goto L_08A02220;
    case 540u: goto L_08A0222C;
    case 541u: goto L_08A0223C;
    case 542u: goto L_08A02244;
    case 543u: goto L_08A0224C;
    case 544u: goto L_08A02274;
    case 545u: goto L_08A02280;
    case 546u: goto L_08A02290;
    case 547u: goto L_08A02298;
    case 548u: goto L_08A022A0;
    case 549u: goto L_08A022A4;
    case 550u: goto L_08A022AC;
    case 551u: goto L_08A022CC;
    case 552u: goto L_08A022DC;
    case 553u: goto L_08A022F4;
    case 554u: goto L_08A02304;
    case 555u: goto L_08A0230C;
    case 556u: goto L_08A02314;
    case 557u: goto L_08A0231C;
    case 558u: goto L_08A02324;
    case 559u: goto L_08A02330;
    case 560u: goto L_08A02338;
    case 561u: goto L_08A02340;
    case 562u: goto L_08A02348;
    case 563u: goto L_08A0234C;
    case 564u: goto L_08A02354;
    case 565u: goto L_08A0235C;
    case 566u: goto L_08A02374;
    case 567u: goto L_08A0237C;
    case 568u: goto L_08A02390;
    case 569u: goto L_08A023A4;
    case 570u: goto L_08A023FC;
    case 571u: goto L_08A0241C;
    case 572u: goto L_08A0242C;
    case 573u: goto L_08A02444;
    case 574u: goto L_08A02454;
    case 575u: goto L_08A0245C;
    case 576u: goto L_08A02464;
    case 577u: goto L_08A0246C;
    case 578u: goto L_08A02474;
    case 579u: goto L_08A02480;
    case 580u: goto L_08A02488;
    case 581u: goto L_08A02490;
    case 582u: goto L_08A02498;
    case 583u: goto L_08A0249C;
    case 584u: goto L_08A024A4;
    case 585u: goto L_08A024AC;
    case 586u: goto L_08A024C4;
    case 587u: goto L_08A024CC;
    case 588u: goto L_08A024D4;
    case 589u: goto L_08A024F4;
    case 590u: goto L_08A02504;
    case 591u: goto L_08A0251C;
    case 592u: goto L_08A0252C;
    case 593u: goto L_08A02534;
    case 594u: goto L_08A0253C;
    case 595u: goto L_08A02544;
    case 596u: goto L_08A0254C;
    case 597u: goto L_08A02558;
    case 598u: goto L_08A02560;
    case 599u: goto L_08A02568;
    case 600u: goto L_08A02570;
    case 601u: goto L_08A02574;
    case 602u: goto L_08A0257C;
    case 603u: goto L_08A02584;
    case 604u: goto L_08A0259C;
    case 605u: goto L_08A025A4;
    case 606u: goto L_08A025AC;
    case 607u: goto L_08A025CC;
    case 608u: goto L_08A025DC;
    case 609u: goto L_08A025F4;
    case 610u: goto L_08A02604;
    case 611u: goto L_08A0260C;
    case 612u: goto L_08A02614;
    case 613u: goto L_08A0261C;
    case 614u: goto L_08A02624;
    case 615u: goto L_08A02630;
    case 616u: goto L_08A02638;
    case 617u: goto L_08A02640;
    case 618u: goto L_08A02648;
    case 619u: goto L_08A0264C;
    case 620u: goto L_08A02654;
    case 621u: goto L_08A0265C;
    case 622u: goto L_08A02674;
    case 623u: goto L_08A0267C;
    case 624u: goto L_08A02684;
    case 625u: goto L_08A02694;
    case 626u: goto L_08A026A0;
    case 627u: goto L_08A026A4;
    case 628u: goto L_08A026AC;
    case 629u: goto L_08A026CC;
    case 630u: goto L_08A026DC;
    case 631u: goto L_08A026F4;
    case 632u: goto L_08A02704;
    case 633u: goto L_08A0270C;
    case 634u: goto L_08A02714;
    case 635u: goto L_08A0271C;
    case 636u: goto L_08A02724;
    case 637u: goto L_08A02730;
    case 638u: goto L_08A02738;
    case 639u: goto L_08A02740;
    case 640u: goto L_08A02748;
    case 641u: goto L_08A0274C;
    case 642u: goto L_08A02754;
    case 643u: goto L_08A0275C;
    case 644u: goto L_08A02774;
    case 645u: goto L_08A0277C;
    case 646u: goto L_08A027A4;
    case 647u: goto L_08A027B0;
    case 648u: goto L_08A027C8;
    case 649u: goto L_08A027DC;
    case 650u: goto L_08A02808;
    case 651u: goto L_08A02830;
    case 652u: goto L_08A02838;
    case 653u: goto L_08A02840;
    case 654u: goto L_08A02890;
    case 655u: goto L_08A02898;
    case 656u: goto L_08A028AC;
    case 657u: goto L_08A028C4;
    case 658u: goto L_08A028DC;
    case 659u: goto L_08A028F0;
    case 660u: goto L_08A02900;
    case 661u: goto L_08A02910;
    case 662u: goto L_08A0291C;
    case 663u: goto L_08A02928;
    case 664u: goto L_08A02930;
    case 665u: goto L_08A02940;
    case 666u: goto L_08A0294C;
    case 667u: goto L_08A02954;
    case 668u: goto L_08A0295C;
    case 669u: goto L_08A02968;
    case 670u: goto L_08A02974;
    case 671u: goto L_08A02980;
    case 672u: goto L_08A02988;
    case 673u: goto L_08A02990;
    case 674u: goto L_08A029A0;
    case 675u: goto L_08A029AC;
    case 676u: goto L_08A029B8;
    case 677u: goto L_08A029C0;
    case 678u: goto L_08A029D0;
    case 679u: goto L_08A029D4;
    case 680u: goto L_08A029DC;
    case 681u: goto L_08A029E8;
    case 682u: goto L_08A029F0;
    case 683u: goto L_08A02A20;
    case 684u: goto L_08A02A80;
    case 685u: goto L_08A02A94;
    case 686u: goto L_08A02AC0;
    case 687u: goto L_08A02ACC;
    case 688u: goto L_08A02B18;
    case 689u: goto L_08A02B6C;
    case 690u: goto L_08A02BA8;
    case 691u: goto L_08A02BB0;
    case 692u: goto L_08A02BC0;
    case 693u: goto L_08A02BC8;
    case 694u: goto L_08A02BD8;
    case 695u: goto L_08A02BE4;
    case 696u: goto L_08A02BF0;
    case 697u: goto L_08A02BFC;
    case 698u: goto L_08A02C1C;
    case 699u: goto L_08A02C30;
    case 700u: goto L_08A02C7C;
    case 701u: goto L_08A02C9C;
    case 702u: goto L_08A02CAC;
    case 703u: goto L_08A02CB8;
    case 704u: goto L_08A02CC0;
    case 705u: goto L_08A02CD8;
    case 706u: goto L_08A02CE8;
    case 707u: goto L_08A02CF0;
    case 708u: goto L_08A02CF8;
    case 709u: goto L_08A02D00;
    case 710u: goto L_08A02D08;
    case 711u: goto L_08A02D14;
    case 712u: goto L_08A02D1C;
    case 713u: goto L_08A02D24;
    case 714u: goto L_08A02D2C;
    case 715u: goto L_08A02D30;
    case 716u: goto L_08A02D38;
    case 717u: goto L_08A02D40;
    case 718u: goto L_08A02D58;
    case 719u: goto L_08A02D60;
    case 720u: goto L_08A02D68;
    case 721u: goto L_08A02D9C;
    case 722u: goto L_08A02DA8;
    case 723u: goto L_08A02DB0;
    case 724u: goto L_08A02DC0;
    case 725u: goto L_08A02DC8;
    case 726u: goto L_08A02DD0;
    case 727u: goto L_08A02DD8;
    case 728u: goto L_08A02DE0;
    case 729u: goto L_08A02DE8;
    case 730u: goto L_08A02DF0;
    case 731u: goto L_08A02DF8;
    case 732u: goto L_08A02E00;
    case 733u: goto L_08A02E14;
    case 734u: goto L_08A02E1C;
    case 735u: goto L_08A02E30;
    case 736u: goto L_08A02E38;
    case 737u: goto L_08A02E4C;
    case 738u: goto L_08A02E54;
    case 739u: goto L_08A02E68;
    case 740u: goto L_08A02E70;
    case 741u: goto L_08A02E84;
    case 742u: goto L_08A02E8C;
    case 743u: goto L_08A02EA0;
    case 744u: goto L_08A02EA8;
    case 745u: goto L_08A02EAC;
    case 746u: goto L_08A02EC8;
    case 747u: goto L_08A02EF4;
    case 748u: goto L_08A02F08;
    case 749u: goto L_08A02F14;
    case 750u: goto L_08A02F1C;
    case 751u: goto L_08A02F30;
    case 752u: goto L_08A02F38;
    case 753u: goto L_08A02F40;
    case 754u: goto L_08A02F48;
    case 755u: goto L_08A02F50;
    case 756u: goto L_08A02F58;
    case 757u: goto L_08A02F60;
    case 758u: goto L_08A02F68;
    case 759u: goto L_08A02F70;
    case 760u: goto L_08A02F78;
    case 761u: goto L_08A02F8C;
    case 762u: goto L_08A02F94;
    case 763u: goto L_08A02FA8;
    case 764u: goto L_08A02FB0;
    case 765u: goto L_08A02FC4;
    case 766u: goto L_08A02FCC;
    case 767u: goto L_08A02FE0;
    case 768u: goto L_08A02FE8;
    case 769u: goto L_08A02FFC;
    case 770u: goto L_08A03004;
    case 771u: goto L_08A03018;
    case 772u: goto L_08A03020;
    case 773u: goto L_08A03024;
    case 774u: goto L_08A03040;
    case 775u: goto L_08A03064;
    case 776u: goto L_08A03078;
    case 777u: goto L_08A03084;
    case 778u: goto L_08A0308C;
    case 779u: goto L_08A030A0;
    case 780u: goto L_08A030A8;
    case 781u: goto L_08A030B0;
    case 782u: goto L_08A030B8;
    case 783u: goto L_08A030C0;
    case 784u: goto L_08A030C8;
    case 785u: goto L_08A030D0;
    case 786u: goto L_08A030D8;
    case 787u: goto L_08A030E0;
    case 788u: goto L_08A030E8;
    case 789u: goto L_08A030F8;
    case 790u: goto L_08A03100;
    case 791u: goto L_08A03110;
    case 792u: goto L_08A03118;
    case 793u: goto L_08A03128;
    case 794u: goto L_08A03130;
    case 795u: goto L_08A03140;
    case 796u: goto L_08A03148;
    case 797u: goto L_08A03158;
    case 798u: goto L_08A03160;
    case 799u: goto L_08A03170;
    case 800u: goto L_08A03178;
    case 801u: goto L_08A0317C;
    case 802u: goto L_08A03194;
    case 803u: goto L_08A031B8;
    case 804u: goto L_08A031CC;
    case 805u: goto L_08A031D8;
    case 806u: goto L_08A031E0;
    case 807u: goto L_08A031F4;
    case 808u: goto L_08A031FC;
    case 809u: goto L_08A03204;
    case 810u: goto L_08A0320C;
    case 811u: goto L_08A03214;
    case 812u: goto L_08A0321C;
    case 813u: goto L_08A03224;
    case 814u: goto L_08A0322C;
    case 815u: goto L_08A03234;
    case 816u: goto L_08A0323C;
    case 817u: goto L_08A0324C;
    case 818u: goto L_08A03254;
    case 819u: goto L_08A03264;
    case 820u: goto L_08A0326C;
    case 821u: goto L_08A0327C;
    case 822u: goto L_08A03284;
    case 823u: goto L_08A03294;
    case 824u: goto L_08A0329C;
    case 825u: goto L_08A032AC;
    case 826u: goto L_08A032B4;
    case 827u: goto L_08A032C4;
    case 828u: goto L_08A032CC;
    case 829u: goto L_08A032D0;
    case 830u: goto L_08A032E8;
    case 831u: goto L_08A0330C;
    case 832u: goto L_08A03320;
    case 833u: goto L_08A0332C;
    case 834u: goto L_08A03334;
    case 835u: goto L_08A03348;
    case 836u: goto L_08A03350;
    case 837u: goto L_08A03358;
    case 838u: goto L_08A03360;
    case 839u: goto L_08A03368;
    case 840u: goto L_08A03370;
    case 841u: goto L_08A03378;
    case 842u: goto L_08A03380;
    case 843u: goto L_08A03388;
    case 844u: goto L_08A03390;
    case 845u: goto L_08A033A0;
    case 846u: goto L_08A033A8;
    case 847u: goto L_08A033B8;
    case 848u: goto L_08A033C0;
    case 849u: goto L_08A033D0;
    case 850u: goto L_08A033D8;
    case 851u: goto L_08A033E8;
    case 852u: goto L_08A033F0;
    case 853u: goto L_08A03400;
    case 854u: goto L_08A03408;
    case 855u: goto L_08A03418;
    case 856u: goto L_08A03420;
    case 857u: goto L_08A03424;
    case 858u: goto L_08A0343C;
    case 859u: goto L_08A03460;
    case 860u: goto L_08A03474;
    case 861u: goto L_08A03480;
    case 862u: goto L_08A03488;
    case 863u: goto L_08A0349C;
    case 864u: goto L_08A034A4;
    case 865u: goto L_08A034AC;
    case 866u: goto L_08A034B4;
    case 867u: goto L_08A034BC;
    case 868u: goto L_08A034C4;
    case 869u: goto L_08A034CC;
    case 870u: goto L_08A034D4;
    case 871u: goto L_08A034DC;
    case 872u: goto L_08A034E4;
    case 873u: goto L_08A034F4;
    case 874u: goto L_08A034FC;
    case 875u: goto L_08A0350C;
    case 876u: goto L_08A03514;
    case 877u: goto L_08A03524;
    case 878u: goto L_08A0352C;
    case 879u: goto L_08A0353C;
    case 880u: goto L_08A03544;
    case 881u: goto L_08A03554;
    case 882u: goto L_08A0355C;
    case 883u: goto L_08A0356C;
    case 884u: goto L_08A03574;
    case 885u: goto L_08A03578;
    case 886u: goto L_08A03590;
    case 887u: goto L_08A035A4;
    case 888u: goto L_08A035B4;
    case 889u: goto L_08A035C4;
    case 890u: goto L_08A035CC;
    case 891u: goto L_08A035D4;
    case 892u: goto L_08A035DC;
    case 893u: goto L_08A035E4;
    case 894u: goto L_08A035EC;
    case 895u: goto L_08A035F4;
    case 896u: goto L_08A035FC;
    case 897u: goto L_08A03604;
    case 898u: goto L_08A03614;
    case 899u: goto L_08A0361C;
    case 900u: goto L_08A0362C;
    case 901u: goto L_08A03634;
    case 902u: goto L_08A03644;
    case 903u: goto L_08A0364C;
    case 904u: goto L_08A0365C;
    case 905u: goto L_08A03664;
    case 906u: goto L_08A03674;
    case 907u: goto L_08A0367C;
    case 908u: goto L_08A0368C;
    case 909u: goto L_08A03694;
    case 910u: goto L_08A0369C;
    case 911u: goto L_08A036A4;
    case 912u: goto L_08A036AC;
    case 913u: goto L_08A036B4;
    case 914u: goto L_08A036C4;
    case 915u: goto L_08A036F8;
    case 916u: goto L_08A03704;
    case 917u: goto L_08A0374C;
    case 918u: goto L_08A03794;
    case 919u: goto L_08A037C8;
    case 920u: goto L_08A037DC;
    case 921u: goto L_08A037F0;
    case 922u: goto L_08A03814;
    case 923u: goto L_08A0381C;
    case 924u: goto L_08A03830;
    case 925u: goto L_08A0385C;
    case 926u: goto L_08A03864;
    case 927u: goto L_08A03870;
    case 928u: goto L_08A03880;
    case 929u: goto L_08A038A4;
    case 930u: goto L_08A038D8;
    case 931u: goto L_08A0393C;
    case 932u: goto L_08A03954;
    case 933u: goto L_08A0395C;
    case 934u: goto L_08A03964;
    case 935u: goto L_08A03968;
    case 936u: goto L_08A03988;
    case 937u: goto L_08A039E8;
    case 938u: goto L_08A039F4;
    case 939u: goto L_08A03A00;
    case 940u: goto L_08A03A08;
    case 941u: goto L_08A03A1C;
    case 942u: goto L_08A03A28;
    case 943u: goto L_08A03A30;
    case 944u: goto L_08A03A34;
    case 945u: goto L_08A03A44;
    case 946u: goto L_08A03A50;
    case 947u: goto L_08A03A58;
    case 948u: goto L_08A03A5C;
    case 949u: goto L_08A03A64;
    case 950u: goto L_08A03A74;
    case 951u: goto L_08A03A80;
    case 952u: goto L_08A03A88;
    case 953u: goto L_08A03A94;
    case 954u: goto L_08A03AA4;
    case 955u: goto L_08A03AB0;
    case 956u: goto L_08A03AB8;
    case 957u: goto L_08A03ABC;
    case 958u: goto L_08A03AC4;
    case 959u: goto L_08A03AC8;
    case 960u: goto L_08A03AD0;
    case 961u: goto L_08A03ADC;
    case 962u: goto L_08A03AE8;
    case 963u: goto L_08A03AF0;
    case 964u: goto L_08A03AF4;
    case 965u: goto L_08A03AFC;
    case 966u: goto L_08A03B00;
    case 967u: goto L_08A03B14;
    case 968u: goto L_08A03B18;
    case 969u: goto L_08A03B20;
    case 970u: goto L_08A03B2C;
    case 971u: goto L_08A03B30;
    case 972u: goto L_08A03B38;
    case 973u: goto L_08A03B40;
    case 974u: goto L_08A03B88;
    case 975u: goto L_08A03BD0;
    case 976u: goto L_08A03BD4;
    case 977u: goto L_08A03BE4;
    case 978u: goto L_08A03BF0;
    case 979u: goto L_08A03BF8;
    case 980u: goto L_08A03C08;
    case 981u: goto L_08A03C14;
    case 982u: goto L_08A03C20;
    case 983u: goto L_08A03C30;
    case 984u: goto L_08A03C3C;
    case 985u: goto L_08A03C48;
    case 986u: goto L_08A03C50;
    case 987u: goto L_08A03C58;
    case 988u: goto L_08A03C78;
    case 989u: goto L_08A03C84;
    case 990u: goto L_08A03C88;
    case 991u: goto L_08A03C9C;
    case 992u: goto L_08A03CC4;
    case 993u: goto L_08A03CC8;
    case 994u: goto L_08A03CD8;
    case 995u: goto L_08A03CE0;
    case 996u: goto L_08A03CE8;
    case 997u: goto L_08A03CF0;
    case 998u: goto L_08A03CF8;
    case 999u: goto L_08A03D08;
    case 1000u: goto L_08A03D0C;
    case 1001u: goto L_08A03D14;
    case 1002u: goto L_08A03D44;
    case 1003u: goto L_08A03D50;
    case 1004u: goto L_08A03D60;
    case 1005u: goto L_08A03D68;
    case 1006u: goto L_08A03D70;
    case 1007u: goto L_08A03D74;
    case 1008u: goto L_08A03D84;
    case 1009u: goto L_08A03DA0;
    case 1010u: goto L_08A03DB0;
    case 1011u: goto L_08A03DB4;
    case 1012u: goto L_08A03DCC;
    case 1013u: goto L_08A03DDC;
    case 1014u: goto L_08A03DE0;
    case 1015u: goto L_08A03DF8;
    case 1016u: goto L_08A03E08;
    case 1017u: goto L_08A03E0C;
    case 1018u: goto L_08A03E20;
    case 1019u: goto L_08A03E30;
    case 1020u: goto L_08A03E34;
    case 1021u: goto L_08A03E3C;
    case 1022u: goto L_08A03E44;
    case 1023u: goto L_08A03E60;
    case 1024u: goto L_08A03E6C;
    case 1025u: goto L_08A03E7C;
    case 1026u: goto L_08A03E80;
    case 1027u: goto L_08A03E90;
    case 1028u: goto L_08A03E98;
    case 1029u: goto L_08A03E9C;
    case 1030u: goto L_08A03EA4;
    case 1031u: goto L_08A03EA8;
    case 1032u: goto L_08A03EB0;
    case 1033u: goto L_08A03EDC;
    case 1034u: goto L_08A03EFC;
    case 1035u: goto L_08A03F08;
    case 1036u: goto L_08A03F18;
    case 1037u: goto L_08A03F24;
    case 1038u: goto L_08A03F34;
    case 1039u: goto L_08A03F40;
    case 1040u: goto L_08A03F50;
    case 1041u: goto L_08A03F5C;
    case 1042u: goto L_08A03F6C;
    case 1043u: goto L_08A03F78;
    case 1044u: goto L_08A03F80;
    case 1045u: goto L_08A03F88;
    case 1046u: goto L_08A03F90;
    case 1047u: goto L_08A03F98;
    case 1048u: goto L_08A03FA0;
    case 1049u: goto L_08A03FA8;
    case 1050u: goto L_08A03FB0;
    case 1051u: goto L_08A03FB8;
    case 1052u: goto L_08A03FBC;
    case 1053u: goto L_08A03FC8;
    case 1054u: goto L_08A03FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A00000:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08A00008;
L_08A00008:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A00010:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A00038;
      }
      goto L_08A00030;
    }
L_08A00030:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0003C;
      }
      goto L_08A00038;
    }
L_08A00038:
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A0003C;
L_08A0003C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A00044:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A0006C;
      }
      goto L_08A00064;
    }
L_08A00064:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A0006C;
      }
      goto L_08A0006C;
    }
L_08A0006C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A00074:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) & 0x7FFFFFFFu);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[0] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08A0009C;
      }
      goto L_08A00094;
    }
L_08A00094:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08A0009C;
      }
      goto L_08A0009C;
    }
L_08A0009C:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[0])) && ctx.fpr[12] == ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A000BC;
      }
      goto L_08A000AC;
    }
L_08A000AC:
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[0] / ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A000BC;
      }
      goto L_08A000BC;
    }
L_08A000BC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A000C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A000D8u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A00010;
L_08A000D8:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[20]) || std::isnan(ctx.fpr[0])) && ctx.fpr[20] == ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A000F0;
      }
      goto L_08A000E8;
    }
L_08A000E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A000F4;
      }
      goto L_08A000F0;
    }
L_08A000F0:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A000F4;
L_08A000F4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A00104:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.gpr[31] = (0x08A0012Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem) && ctx.pc == 0x08A0012Cu) goto L_08A0012C;
    return;
L_08A0012C:
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A0013Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A00044;
L_08A0013C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]) & 0x7FFFFFFFu);
    ctx.gpr[31] = (0x08A00148u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem) && ctx.pc == 0x08A00148u) goto L_08A00148;
    return;
L_08A00148:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9244)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9248)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08A0015Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 395u, 0x08B61F5Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0015Cu) goto L_08A0015C;
    return;
L_08A0015C:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08A00170u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem) && ctx.pc == 0x08A00170u) goto L_08A00170;
    return;
L_08A00170:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A00180;
      }
      goto L_08A00178;
    }
L_08A00178:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A00184;
      }
      goto L_08A00180;
    }
L_08A00180:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A00184;
L_08A00184:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0019C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-384));
    ctx.gpr[7] = (15948u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 52429u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[7] = (16025u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 39322u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(852)));
    ctx.gpr[7] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), ctx.gpr[20]);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[20] = (0u | 1u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(364), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[20];
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A00234;
      }
      goto L_08A0020C;
    }
L_08A0020C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (49024u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0024C;
      }
      goto L_08A00234;
    }
L_08A00234:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
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
    goto L_08A0024C;
L_08A0024C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(144));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
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
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(320));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
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
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(128));
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
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A002E8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 912u, 0x0885F828u>(ctx, &aot_mem) && ctx.pc == 0x08A002E8u) goto L_08A002E8;
    return;
L_08A002E8:
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<8u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 4u, 3u);
      ctx.read_vfpu_vector_ct<8u, 3u>(vfpu_target_raw);
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
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(41)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_08A00324;
      }
      goto L_08A00314;
    }
L_08A00314:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A0038C;
      }
      goto L_08A0031C;
    }
L_08A0031C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A00360;
      }
      goto L_08A00324;
    }
L_08A00324:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A0038C;
      }
      goto L_08A0032C;
    }
L_08A0032C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0034C;
      }
      goto L_08A00338;
    }
L_08A00338:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_08A00358;
      }
      goto L_08A0034C;
    }
L_08A0034C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    goto L_08A00358;
L_08A00358:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0038C;
      }
      goto L_08A00360;
    }
L_08A00360:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0037C;
      }
      goto L_08A0036C;
    }
L_08A0036C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
      if (branch_taken) {
          goto L_08A0038C;
      }
      goto L_08A0037C;
    }
L_08A0037C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    goto L_08A0038C;
L_08A0038C:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A003A4;
      }
      goto L_08A0039C;
    }
L_08A0039C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_08A003C4;
      }
      goto L_08A003A4;
    }
L_08A003A4:
    ctx.gpr[4] = (48716u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A003C4;
      }
      goto L_08A003C0;
    }
L_08A003C0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08A003C4;
L_08A003C4:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9256)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A003E8;
      }
      goto L_08A003DC;
    }
L_08A003DC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A003E8;
L_08A003E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    ctx.gpr[4] = (16241u << 16u);
      if (branch_taken) {
          goto L_08A00410;
      }
      goto L_08A003F4;
    }
L_08A003F4:
    ctx.gpr[4] = (16250u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 57672u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A00424;
      }
      goto L_08A00410;
    }
L_08A00410:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 60293u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A00424;
L_08A00424:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A00440;
      }
      goto L_08A00438;
    }
L_08A00438:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08A00464;
      }
      goto L_08A00440;
    }
L_08A00440:
    ctx.gpr[4] = (48793u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08A00468;
    }
    goto L_08A00460;
L_08A00460:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A00464;
L_08A00464:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08A00468;
L_08A00468:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(0u));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A004B0;
      }
      goto L_08A00488;
    }
L_08A00488:
    ctx.gpr[4] = (48972u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A004B0;
L_08A004B0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (48972u << 16u);
      if (branch_taken) {
          goto L_08A004EC;
      }
      goto L_08A004C8;
    }
L_08A004C8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A004EC;
L_08A004EC:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A00518;
      }
      goto L_08A00504;
    }
L_08A00504:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A00518;
      }
      goto L_08A00510;
    }
L_08A00510:
    ctx.gpr[31] = (0x08A00518u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem) && ctx.pc == 0x08A00518u) goto L_08A00518;
    return;
L_08A00518:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(364)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A00548:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28280));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A0057Cu);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 143u, 0x08B6CC70u>(ctx, &aot_mem) && ctx.pc == 0x08A0057Cu) goto L_08A0057C;
    return;
L_08A0057C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08A00588u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 143u, 0x08B6CC70u>(ctx, &aot_mem) && ctx.pc == 0x08A00588u) goto L_08A00588;
    return;
L_08A00588:
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
L_08A005A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A00628;
      }
      goto L_08A005C0;
    }
L_08A005C0:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28280));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A005F4;
      }
      goto L_08A005D8;
    }
L_08A005D8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08A005F4;
      }
      goto L_08A005E4;
    }
L_08A005E4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A005F4;
      }
      goto L_08A005EC;
    }
L_08A005EC:
    ctx.gpr[31] = (0x08A005F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08A005F4u) goto L_08A005F4;
    return;
L_08A005F4:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08A00618;
      }
      goto L_08A005FC;
    }
L_08A005FC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A00614;
      }
      goto L_08A00604;
    }
L_08A00604:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_08A00618;
    }
    goto L_08A0060C;
L_08A0060C:
    ctx.gpr[31] = (0x08A00614u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08A00614u) goto L_08A00614;
    return;
L_08A00614:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_08A00618;
L_08A00618:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A00628;
      }
      goto L_08A00620;
    }
L_08A00620:
    ctx.gpr[31] = (0x08A00628u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08A00628u) goto L_08A00628;
    return;
L_08A00628:
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
L_08A00640:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(20) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A007B0;
      }
      goto L_08A00658;
    }
L_08A00658:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[5]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-992)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A00670:
    ctx.gpr[31] = (0x08A00678u);
    // nop
    goto L_08A007E4;
L_08A00678:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A007B4;
      }
      goto L_08A00680;
    }
L_08A00680:
    ctx.gpr[31] = (0x08A00688u);
    // nop
    goto L_08A0088C;
L_08A00688:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A007B4;
      }
      goto L_08A00690;
    }
L_08A00690:
    ctx.gpr[31] = (0x08A00698u);
    // nop
    goto L_08A0098C;
L_08A00698:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A007B4;
      }
      goto L_08A006A0;
    }
L_08A006A0:
    ctx.gpr[31] = (0x08A006A8u);
    // nop
    goto L_08A00A8C;
L_08A006A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A007B4;
      }
      goto L_08A006B0;
    }
L_08A006B0:
    ctx.gpr[31] = (0x08A006B8u);
    // nop
    goto L_08A00AEC;
L_08A006B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A007B4;
      }
      goto L_08A006C0;
    }
L_08A006C0:
    ctx.gpr[31] = (0x08A006C8u);
    // nop
    goto L_08A00B3C;
L_08A006C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A007B4;
      }
      goto L_08A006D0;
    }
L_08A006D0:
    ctx.gpr[31] = (0x08A006D8u);
    // nop
    goto L_08A00D24;
L_08A006D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A007B4;
      }
      goto L_08A006E0;
    }
L_08A006E0:
    ctx.gpr[31] = (0x08A006E8u);
    // nop
    goto L_08A00E68;
L_08A006E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A007B4;
      }
      goto L_08A006F0;
    }
L_08A006F0:
    ctx.gpr[31] = (0x08A006F8u);
    // nop
    goto L_08A00F58;
L_08A006F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A007B4;
      }
      goto L_08A00700;
    }
L_08A00700:
    ctx.gpr[31] = (0x08A00708u);
    // nop
    goto L_08A00FE0;
L_08A00708:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A007B4;
      }
      goto L_08A00710;
    }
L_08A00710:
    ctx.gpr[31] = (0x08A00718u);
    // nop
    goto L_08A01030;
L_08A00718:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A007B4;
      }
      goto L_08A00720;
    }
L_08A00720:
    ctx.gpr[31] = (0x08A00728u);
    // nop
    goto L_08A010B8;
L_08A00728:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A007B4;
      }
      goto L_08A00730;
    }
L_08A00730:
    ctx.gpr[31] = (0x08A00738u);
    // nop
    goto L_08A01110;
L_08A00738:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A007B4;
      }
      goto L_08A00740;
    }
L_08A00740:
    ctx.gpr[31] = (0x08A00748u);
    // nop
    goto L_08A01130;
L_08A00748:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A007B4;
      }
      goto L_08A00750;
    }
L_08A00750:
    ctx.gpr[31] = (0x08A00758u);
    // nop
    goto L_08A011C0;
L_08A00758:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A007B4;
      }
      goto L_08A00760;
    }
L_08A00760:
    ctx.gpr[31] = (0x08A00768u);
    // nop
    goto L_08A0120C;
L_08A00768:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A007B4;
      }
      goto L_08A00770;
    }
L_08A00770:
    ctx.gpr[31] = (0x08A00778u);
    // nop
    goto L_08A0129C;
L_08A00778:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A007B4;
      }
      goto L_08A00780;
    }
L_08A00780:
    ctx.gpr[31] = (0x08A00788u);
    // nop
    goto L_08A012E8;
L_08A00788:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A007B4;
      }
      goto L_08A00790;
    }
L_08A00790:
    ctx.gpr[31] = (0x08A00798u);
    // nop
    goto L_08A012F4;
L_08A00798:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A007B4;
      }
      goto L_08A007A0;
    }
L_08A007A0:
    ctx.gpr[31] = (0x08A007A8u);
    // nop
    goto L_08A01364;
L_08A007A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A007B4;
      }
      goto L_08A007B0;
    }
L_08A007B0:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A007B4;
L_08A007B4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A007C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A007D0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 937u, 0x08B577E8u>(ctx, &aot_mem) && ctx.pc == 0x08A007D0u) goto L_08A007D0;
    return;
L_08A007D0:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[0])));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A007E4:
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
          goto L_08A00820;
      }
      goto L_08A00808;
    }
L_08A00808:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A00818u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x08A00818u) goto L_08A00818;
    return;
L_08A00818:
    ctx.gpr[31] = (0x08A00820u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-9240));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08A00820u) goto L_08A00820;
    return;
L_08A00820:
    ctx.gpr[31] = (0x08A00828u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 601u, 0x0882E950u>(ctx, &aot_mem) && ctx.pc == 0x08A00828u) goto L_08A00828;
    return;
L_08A00828:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08A00838u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 612u, 0x08AE23A0u>(ctx, &aot_mem) && ctx.pc == 0x08A00838u) goto L_08A00838;
    return;
L_08A00838:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
        goto L_08A00848;
    }
    goto L_08A00840;
L_08A00840:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A00878;
      }
      goto L_08A00848;
    }
L_08A00848:
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(112));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A00864u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A00864u) goto L_08A00864;
    return;
L_08A00864:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    ctx.gpr[5] = (0u | 197u);
    ctx.gpr[31] = (0x08A00874u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem) && ctx.pc == 0x08A00874u) goto L_08A00874;
    return;
L_08A00874:
    ctx.gpr[2] = (0u | 1u);
    goto L_08A00878;
L_08A00878:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0088C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    ctx.gpr[17] = (2237u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28416));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A008CC;
      }
      goto L_08A008B4;
    }
L_08A008B4:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A008C4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x08A008C4u) goto L_08A008C4;
    return;
L_08A008C4:
    ctx.gpr[31] = (0x08A008CCu);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-9240));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08A008CCu) goto L_08A008CC;
    return;
L_08A008CC:
    ctx.gpr[31] = (0x08A008D4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 601u, 0x0882E950u>(ctx, &aot_mem) && ctx.pc == 0x08A008D4u) goto L_08A008D4;
    return;
L_08A008D4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08A008E0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 603u, 0x08AE22DCu>(ctx, &aot_mem) && ctx.pc == 0x08A008E0u) goto L_08A008E0;
    return;
L_08A008E0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A008FC;
      }
      goto L_08A008EC;
    }
L_08A008EC:
    if (ctx.gpr[16] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
        goto L_08A00904;
    }
    goto L_08A008F4;
L_08A008F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0092C;
      }
      goto L_08A008FC;
    }
L_08A008FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A00974;
      }
      goto L_08A00904;
    }
L_08A00904:
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[31] = (0x08A00914u);
    ctx.gpr[18] = (ctx.gpr[16] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 463u, 0x08AC5950u>(ctx, &aot_mem) && ctx.pc == 0x08A00914u) goto L_08A00914;
    return;
L_08A00914:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A00924u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A00924u) goto L_08A00924;
    return;
L_08A00924:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A00934;
      }
      goto L_08A0092C;
    }
L_08A0092C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08A00934;
      }
      goto L_08A00934;
    }
L_08A00934:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A00948;
      }
      goto L_08A00940;
    }
L_08A00940:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A00974;
      }
      goto L_08A00948;
    }
L_08A00948:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    ctx.gpr[5] = (0u | 198u);
    ctx.gpr[31] = (0x08A00958u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem) && ctx.pc == 0x08A00958u) goto L_08A00958;
    return;
L_08A00958:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(88));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A00970u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A00970u) goto L_08A00970;
    return;
L_08A00970:
    ctx.gpr[2] = (0u | 1u);
    goto L_08A00974;
L_08A00974:
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
L_08A0098C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    ctx.gpr[17] = (2237u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28416));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A009CC;
      }
      goto L_08A009B4;
    }
L_08A009B4:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A009C4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x08A009C4u) goto L_08A009C4;
    return;
L_08A009C4:
    ctx.gpr[31] = (0x08A009CCu);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-9240));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08A009CCu) goto L_08A009CC;
    return;
L_08A009CC:
    ctx.gpr[31] = (0x08A009D4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 601u, 0x0882E950u>(ctx, &aot_mem) && ctx.pc == 0x08A009D4u) goto L_08A009D4;
    return;
L_08A009D4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08A009E0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 603u, 0x08AE22DCu>(ctx, &aot_mem) && ctx.pc == 0x08A009E0u) goto L_08A009E0;
    return;
L_08A009E0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A009FC;
      }
      goto L_08A009EC;
    }
L_08A009EC:
    if (ctx.gpr[16] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
        goto L_08A00A04;
    }
    goto L_08A009F4;
L_08A009F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A00A2C;
      }
      goto L_08A009FC;
    }
L_08A009FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A00A74;
      }
      goto L_08A00A04;
    }
L_08A00A04:
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[31] = (0x08A00A14u);
    ctx.gpr[18] = (ctx.gpr[16] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 463u, 0x08AC5950u>(ctx, &aot_mem) && ctx.pc == 0x08A00A14u) goto L_08A00A14;
    return;
L_08A00A14:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A00A24u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A00A24u) goto L_08A00A24;
    return;
L_08A00A24:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A00A34;
      }
      goto L_08A00A2C;
    }
L_08A00A2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08A00A34;
      }
      goto L_08A00A34;
    }
L_08A00A34:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A00A48;
      }
      goto L_08A00A40;
    }
L_08A00A40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A00A74;
      }
      goto L_08A00A48;
    }
L_08A00A48:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    ctx.gpr[5] = (0u | 198u);
    ctx.gpr[31] = (0x08A00A58u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem) && ctx.pc == 0x08A00A58u) goto L_08A00A58;
    return;
L_08A00A58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(96));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A00A70u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A00A70u) goto L_08A00A70;
    return;
L_08A00A70:
    ctx.gpr[2] = (0u | 1u);
    goto L_08A00A74;
L_08A00A74:
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
L_08A00A8C:
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
          goto L_08A00AC8;
      }
      goto L_08A00AB0;
    }
L_08A00AB0:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A00AC0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x08A00AC0u) goto L_08A00AC0;
    return;
L_08A00AC0:
    ctx.gpr[31] = (0x08A00AC8u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-9240));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08A00AC8u) goto L_08A00AC8;
    return;
L_08A00AC8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08A00AD4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 832u, 0x0882F6E8u>(ctx, &aot_mem) && ctx.pc == 0x08A00AD4u) goto L_08A00AD4;
    return;
L_08A00AD4:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A00AEC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2237u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-28416));
      if (branch_taken) {
          goto L_08A00B20;
      }
      goto L_08A00B08;
    }
L_08A00B08:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A00B18u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x08A00B18u) goto L_08A00B18;
    return;
L_08A00B18:
    ctx.gpr[31] = (0x08A00B20u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-9240));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08A00B20u) goto L_08A00B20;
    return;
L_08A00B20:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A00B3C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    ctx.gpr[5] = (0u | 196u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A00B64u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem) && ctx.pc == 0x08A00B64u) goto L_08A00B64;
    return;
L_08A00B64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    ctx.gpr[17] = (2237u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28416));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-9228));
      if (branch_taken) {
          goto L_08A00B90;
      }
      goto L_08A00B78;
    }
L_08A00B78:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A00B88u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x08A00B88u) goto L_08A00B88;
    return;
L_08A00B88:
    ctx.gpr[31] = (0x08A00B90u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-9240));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08A00B90u) goto L_08A00B90;
    return;
L_08A00B90:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(28))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A00BB0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 56u, 0x08B582CCu>(ctx, &aot_mem) && ctx.pc == 0x08A00BB0u) goto L_08A00BB0;
    return;
L_08A00BB0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A00BC8;
      }
      goto L_08A00BB8;
    }
L_08A00BB8:
    ctx.gpr[31] = (0x08A00BC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0205_entry, 205u, 734u, 0x08B3AAF0u>(ctx, &aot_mem) && ctx.pc == 0x08A00BC0u) goto L_08A00BC0;
    return;
L_08A00BC0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A00BDC;
      }
      goto L_08A00BC8;
    }
L_08A00BC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08A00BE4;
      }
      goto L_08A00BD4;
    }
L_08A00BD4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(28))))));
      if (branch_taken) {
          goto L_08A00BFC;
      }
      goto L_08A00BDC;
    }
L_08A00BDC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A00D0C;
      }
      goto L_08A00BE4;
    }
L_08A00BE4:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A00BF0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x08A00BF0u) goto L_08A00BF0;
    return;
L_08A00BF0:
    ctx.gpr[31] = (0x08A00BF8u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-9240));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08A00BF8u) goto L_08A00BF8;
    return;
L_08A00BF8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(28))))));
    goto L_08A00BFC;
L_08A00BFC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A00C18u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 56u, 0x08B582CCu>(ctx, &aot_mem) && ctx.pc == 0x08A00C18u) goto L_08A00C18;
    return;
L_08A00C18:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A00C74;
      }
      goto L_08A00C20;
    }
L_08A00C20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08A00C40;
      }
      goto L_08A00C2C;
    }
L_08A00C2C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A00C38u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x08A00C38u) goto L_08A00C38;
    return;
L_08A00C38:
    ctx.gpr[31] = (0x08A00C40u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-9240));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08A00C40u) goto L_08A00C40;
    return;
L_08A00C40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A00C74;
      }
      goto L_08A00C50;
    }
L_08A00C50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A00C64;
      }
      goto L_08A00C5C;
    }
L_08A00C5C:
    ctx.gpr[31] = (0x08A00C64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A00C64u) goto L_08A00C64;
    return;
L_08A00C64:
    ctx.gpr[31] = (0x08A00C6Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 237u, 0x08A54ED4u>(ctx, &aot_mem) && ctx.pc == 0x08A00C6Cu) goto L_08A00C6C;
    return;
L_08A00C6C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A00C88;
      }
      goto L_08A00C74;
    }
L_08A00C74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08A00C98;
      }
      goto L_08A00C80;
    }
L_08A00C80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A00CAC;
      }
      goto L_08A00C88;
    }
L_08A00C88:
    ctx.gpr[31] = (0x08A00C90u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A00D24;
L_08A00C90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A00D0C;
      }
      goto L_08A00C98;
    }
L_08A00C98:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A00CA4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x08A00CA4u) goto L_08A00CA4;
    return;
L_08A00CA4:
    ctx.gpr[31] = (0x08A00CACu);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-9240));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08A00CACu) goto L_08A00CAC;
    return;
L_08A00CAC:
    ctx.gpr[31] = (0x08A00CB4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 606u, 0x0882E98Cu>(ctx, &aot_mem) && ctx.pc == 0x08A00CB4u) goto L_08A00CB4;
    return;
L_08A00CB4:
    ctx.gpr[31] = (0x08A00CBCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08A00CBCu) goto L_08A00CBC;
    return;
L_08A00CBC:
    ctx.gpr[17] = (ctx.gpr[2] + static_cast<std::uint32_t>(52));
    ctx.gpr[31] = (0x08A00CC8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08A00CC8u) goto L_08A00CC8;
    return;
L_08A00CC8:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2));
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 12u);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    goto L_08A00CE0;
L_08A00CE0:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[9] = (ctx.gpr[17] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A00CE0;
      }
      goto L_08A00D04;
    }
L_08A00D04:
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.gpr[2] = (0u | 1u);
    goto L_08A00D0C;
L_08A00D0C:
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
L_08A00D24:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    ctx.gpr[5] = (0u | 198u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A00D40u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem) && ctx.pc == 0x08A00D40u) goto L_08A00D40;
    return;
L_08A00D40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    ctx.gpr[16] = (2237u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-28416));
      if (branch_taken) {
          goto L_08A00D68;
      }
      goto L_08A00D50;
    }
L_08A00D50:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A00D60u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x08A00D60u) goto L_08A00D60;
    return;
L_08A00D60:
    ctx.gpr[31] = (0x08A00D68u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-9240));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08A00D68u) goto L_08A00D68;
    return;
L_08A00D68:
    ctx.gpr[31] = (0x08A00D70u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 605u, 0x0882E980u>(ctx, &aot_mem) && ctx.pc == 0x08A00D70u) goto L_08A00D70;
    return;
L_08A00D70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08A00D90;
      }
      goto L_08A00D7C;
    }
L_08A00D7C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A00D88u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x08A00D88u) goto L_08A00D88;
    return;
L_08A00D88:
    ctx.gpr[31] = (0x08A00D90u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-9240));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08A00D90u) goto L_08A00D90;
    return;
L_08A00D90:
    ctx.gpr[31] = (0x08A00D98u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 609u, 0x0882E9A4u>(ctx, &aot_mem) && ctx.pc == 0x08A00D98u) goto L_08A00D98;
    return;
L_08A00D98:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
      if (branch_taken) {
          goto L_08A00DD4;
      }
      goto L_08A00DA0;
    }
L_08A00DA0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A00DC4;
      }
      goto L_08A00DA8;
    }
L_08A00DA8:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A00DB8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x08A00DB8u) goto L_08A00DB8;
    return;
L_08A00DB8:
    ctx.gpr[31] = (0x08A00DC0u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-9240));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08A00DC0u) goto L_08A00DC0;
    return;
L_08A00DC0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A00DC4;
L_08A00DC4:
    ctx.gpr[31] = (0x08A00DCCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 686u, 0x0882EE08u>(ctx, &aot_mem) && ctx.pc == 0x08A00DCCu) goto L_08A00DCC;
    return;
L_08A00DCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A00E00;
      }
      goto L_08A00DD4;
    }
L_08A00DD4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A00DF8;
      }
      goto L_08A00DDC;
    }
L_08A00DDC:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A00DECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x08A00DECu) goto L_08A00DEC;
    return;
L_08A00DEC:
    ctx.gpr[31] = (0x08A00DF4u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-9240));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08A00DF4u) goto L_08A00DF4;
    return;
L_08A00DF4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A00DF8;
L_08A00DF8:
    ctx.gpr[31] = (0x08A00E00u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 686u, 0x0882EE08u>(ctx, &aot_mem) && ctx.pc == 0x08A00E00u) goto L_08A00E00;
    return;
L_08A00E00:
    ctx.gpr[31] = (0x08A00E08u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08A00E08u) goto L_08A00E08;
    return;
L_08A00E08:
    ctx.gpr[16] = (ctx.gpr[2] + static_cast<std::uint32_t>(52));
    ctx.gpr[31] = (0x08A00E14u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08A00E14u) goto L_08A00E14;
    return;
L_08A00E14:
    ctx.gpr[9] = (ctx.gpr[2] + static_cast<std::uint32_t>(2));
    ctx.gpr[6] = (ctx.gpr[9] | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (0u | 12u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A00E2C;
L_08A00E2C:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (ctx.gpr[9] + ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_08A00E2C;
      }
      goto L_08A00E50;
    }
L_08A00E50:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A00E68:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    ctx.gpr[17] = (2237u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28416));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A00EA8;
      }
      goto L_08A00E90;
    }
L_08A00E90:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A00EA0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x08A00EA0u) goto L_08A00EA0;
    return;
L_08A00EA0:
    ctx.gpr[31] = (0x08A00EA8u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-9240));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08A00EA8u) goto L_08A00EA8;
    return;
L_08A00EA8:
    ctx.gpr[31] = (0x08A00EB0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 601u, 0x0882E950u>(ctx, &aot_mem) && ctx.pc == 0x08A00EB0u) goto L_08A00EB0;
    return;
L_08A00EB0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08A00EBCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 603u, 0x08AE22DCu>(ctx, &aot_mem) && ctx.pc == 0x08A00EBCu) goto L_08A00EBC;
    return;
L_08A00EBC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A00ED8;
      }
      goto L_08A00EC8;
    }
L_08A00EC8:
    if (ctx.gpr[16] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
        goto L_08A00EE0;
    }
    goto L_08A00ED0;
L_08A00ED0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A00F08;
      }
      goto L_08A00ED8;
    }
L_08A00ED8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A00F40;
      }
      goto L_08A00EE0;
    }
L_08A00EE0:
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[31] = (0x08A00EF0u);
    ctx.gpr[18] = (ctx.gpr[16] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 482u, 0x0884E958u>(ctx, &aot_mem) && ctx.pc == 0x08A00EF0u) goto L_08A00EF0;
    return;
L_08A00EF0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A00F00u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A00F00u) goto L_08A00F00;
    return;
L_08A00F00:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A00F10;
      }
      goto L_08A00F08;
    }
L_08A00F08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08A00F10;
      }
      goto L_08A00F10;
    }
L_08A00F10:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A00F24;
      }
      goto L_08A00F1C;
    }
L_08A00F1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A00F40;
      }
      goto L_08A00F24;
    }
L_08A00F24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A00F3Cu);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A00F3Cu) goto L_08A00F3C;
    return;
L_08A00F3C:
    ctx.gpr[2] = (0u | 1u);
    goto L_08A00F40;
L_08A00F40:
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
L_08A00F58:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2237u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-28416));
      if (branch_taken) {
          goto L_08A00F8C;
      }
      goto L_08A00F74;
    }
L_08A00F74:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A00F84u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x08A00F84u) goto L_08A00F84;
    return;
L_08A00F84:
    ctx.gpr[31] = (0x08A00F8Cu);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-9240));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08A00F8Cu) goto L_08A00F8C;
    return;
L_08A00F8C:
    ctx.gpr[31] = (0x08A00F94u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 620u, 0x0882EA20u>(ctx, &aot_mem) && ctx.pc == 0x08A00F94u) goto L_08A00F94;
    return;
L_08A00F94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A00FBC;
      }
      goto L_08A00FA0;
    }
L_08A00FA0:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A00FB0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x08A00FB0u) goto L_08A00FB0;
    return;
L_08A00FB0:
    ctx.gpr[31] = (0x08A00FB8u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-9240));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08A00FB8u) goto L_08A00FB8;
    return;
L_08A00FB8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A00FBC;
L_08A00FBC:
    ctx.gpr[31] = (0x08A00FC4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 424u, 0x0882DFD0u>(ctx, &aot_mem) && ctx.pc == 0x08A00FC4u) goto L_08A00FC4;
    return;
L_08A00FC4:
    ctx.gpr[31] = (0x08A00FCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 493u, 0x08AB5CF0u>(ctx, &aot_mem) && ctx.pc == 0x08A00FCCu) goto L_08A00FCC;
    return;
L_08A00FCC:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A00FE0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
        goto L_08A01004;
    }
    goto L_08A00FF8;
L_08A00FF8:
    ctx.gpr[31] = (0x08A01000u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x08A01000u) goto L_08A01000;
    return;
L_08A01000:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_08A01004;
L_08A01004:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[31] = (0x08A01010u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 639u, 0x089C6DC4u>(ctx, &aot_mem) && ctx.pc == 0x08A01010u) goto L_08A01010;
    return;
L_08A01010:
    ctx.gpr[31] = (0x08A01018u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0175_entry, 175u, 1005u, 0x08AC3C94u>(ctx, &aot_mem) && ctx.pc == 0x08A01018u) goto L_08A01018;
    return;
L_08A01018:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-19683), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A01030:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2237u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-28416));
      if (branch_taken) {
          goto L_08A01064;
      }
      goto L_08A0104C;
    }
L_08A0104C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A0105Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x08A0105Cu) goto L_08A0105C;
    return;
L_08A0105C:
    ctx.gpr[31] = (0x08A01064u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-9240));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08A01064u) goto L_08A01064;
    return;
L_08A01064:
    ctx.gpr[31] = (0x08A0106Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 620u, 0x0882EA20u>(ctx, &aot_mem) && ctx.pc == 0x08A0106Cu) goto L_08A0106C;
    return;
L_08A0106C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A01094;
      }
      goto L_08A01078;
    }
L_08A01078:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A01088u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x08A01088u) goto L_08A01088;
    return;
L_08A01088:
    ctx.gpr[31] = (0x08A01090u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-9240));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08A01090u) goto L_08A01090;
    return;
L_08A01090:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A01094;
L_08A01094:
    ctx.gpr[31] = (0x08A0109Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 424u, 0x0882DFD0u>(ctx, &aot_mem) && ctx.pc == 0x08A0109Cu) goto L_08A0109C;
    return;
L_08A0109C:
    ctx.gpr[31] = (0x08A010A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 495u, 0x08AB5D1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A010A4u) goto L_08A010A4;
    return;
L_08A010A4:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A010B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2237u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-28416));
      if (branch_taken) {
          goto L_08A010EC;
      }
      goto L_08A010D4;
    }
L_08A010D4:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A010E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x08A010E4u) goto L_08A010E4;
    return;
L_08A010E4:
    ctx.gpr[31] = (0x08A010ECu);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-9240));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08A010ECu) goto L_08A010EC;
    return;
L_08A010EC:
    ctx.gpr[31] = (0x08A010F4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 601u, 0x0882E950u>(ctx, &aot_mem) && ctx.pc == 0x08A010F4u) goto L_08A010F4;
    return;
L_08A010F4:
    ctx.gpr[31] = (0x08A010FCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 623u, 0x08AE2438u>(ctx, &aot_mem) && ctx.pc == 0x08A010FCu) goto L_08A010FC;
    return;
L_08A010FC:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A01110:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A01120u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0197_entry, 197u, 766u, 0x08B1B3B4u>(ctx, &aot_mem) && ctx.pc == 0x08A01120u) goto L_08A01120;
    return;
L_08A01120:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A01130:
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
          goto L_08A0116C;
      }
      goto L_08A01154;
    }
L_08A01154:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A01164u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x08A01164u) goto L_08A01164;
    return;
L_08A01164:
    ctx.gpr[31] = (0x08A0116Cu);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-9240));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08A0116Cu) goto L_08A0116C;
    return;
L_08A0116C:
    ctx.gpr[31] = (0x08A01174u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 601u, 0x0882E950u>(ctx, &aot_mem) && ctx.pc == 0x08A01174u) goto L_08A01174;
    return;
L_08A01174:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08A01180u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 603u, 0x08AE22DCu>(ctx, &aot_mem) && ctx.pc == 0x08A01180u) goto L_08A01180;
    return;
L_08A01180:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A01194;
      }
      goto L_08A0118C;
    }
L_08A0118C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A011AC;
      }
      goto L_08A01194;
    }
L_08A01194:
    ctx.gpr[31] = (0x08A0119Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 937u, 0x08B577E8u>(ctx, &aot_mem) && ctx.pc == 0x08A0119Cu) goto L_08A0119C;
    return;
L_08A0119C:
    ctx.gpr[4] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[2] = (0u | 1u);
    goto L_08A011AC;
L_08A011AC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A011C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2237u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-28416));
      if (branch_taken) {
          goto L_08A011F4;
      }
      goto L_08A011DC;
    }
L_08A011DC:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A011ECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x08A011ECu) goto L_08A011EC;
    return;
L_08A011EC:
    ctx.gpr[31] = (0x08A011F4u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-9240));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08A011F4u) goto L_08A011F4;
    return;
L_08A011F4:
    ctx.gpr[2] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0120C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A01220u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 212u, 0x08AB50BCu>(ctx, &aot_mem) && ctx.pc == 0x08A01220u) goto L_08A01220;
    return;
L_08A01220:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    ctx.gpr[16] = (2237u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-28416));
      if (branch_taken) {
          goto L_08A01248;
      }
      goto L_08A01230;
    }
L_08A01230:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A01240u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x08A01240u) goto L_08A01240;
    return;
L_08A01240:
    ctx.gpr[31] = (0x08A01248u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-9240));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08A01248u) goto L_08A01248;
    return;
L_08A01248:
    ctx.gpr[31] = (0x08A01250u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 620u, 0x0882EA20u>(ctx, &aot_mem) && ctx.pc == 0x08A01250u) goto L_08A01250;
    return;
L_08A01250:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A01278;
      }
      goto L_08A0125C;
    }
L_08A0125C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A0126Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x08A0126Cu) goto L_08A0126C;
    return;
L_08A0126C:
    ctx.gpr[31] = (0x08A01274u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-9240));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08A01274u) goto L_08A01274;
    return;
L_08A01274:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A01278;
L_08A01278:
    ctx.gpr[31] = (0x08A01280u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 424u, 0x0882DFD0u>(ctx, &aot_mem) && ctx.pc == 0x08A01280u) goto L_08A01280;
    return;
L_08A01280:
    ctx.gpr[31] = (0x08A01288u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 807u, 0x08AB6E88u>(ctx, &aot_mem) && ctx.pc == 0x08A01288u) goto L_08A01288;
    return;
L_08A01288:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0129C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2237u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-28416));
      if (branch_taken) {
          goto L_08A012D0;
      }
      goto L_08A012B8;
    }
L_08A012B8:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A012C8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x08A012C8u) goto L_08A012C8;
    return;
L_08A012C8:
    ctx.gpr[31] = (0x08A012D0u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-9240));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08A012D0u) goto L_08A012D0;
    return;
L_08A012D0:
    ctx.gpr[2] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A012E8:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(4211), static_cast<std::uint8_t>(0u));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A012F4:
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
          goto L_08A01330;
      }
      goto L_08A01318;
    }
L_08A01318:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A01328u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x08A01328u) goto L_08A01328;
    return;
L_08A01328:
    ctx.gpr[31] = (0x08A01330u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-9240));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08A01330u) goto L_08A01330;
    return;
L_08A01330:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08A0133Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A007C0;
L_08A0133C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A0134Cu);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 686u, 0x0882EE08u>(ctx, &aot_mem) && ctx.pc == 0x08A0134Cu) goto L_08A0134C;
    return;
L_08A0134C:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A01364:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08A0138C;
      }
      goto L_08A01384;
    }
L_08A01384:
    ctx.gpr[31] = (0x08A0138Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x08A0138Cu) goto L_08A0138C;
    return;
L_08A0138C:
    ctx.gpr[31] = (0x08A01394u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 628u, 0x089C6D00u>(ctx, &aot_mem) && ctx.pc == 0x08A01394u) goto L_08A01394;
    return;
L_08A01394:
    ctx.gpr[16] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A013A4u);
    ctx.gpr[5] = (0u | 112u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 520u, 0x08A060BCu>(ctx, &aot_mem) && ctx.pc == 0x08A013A4u) goto L_08A013A4;
    return;
L_08A013A4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A013B0u);
    ctx.gpr[5] = (0u | 96u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 512u, 0x08A0605Cu>(ctx, &aot_mem) && ctx.pc == 0x08A013B0u) goto L_08A013B0;
    return;
L_08A013B0:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (0u | 2u);
    goto L_08A013B8;
L_08A013B8:
    ctx.gpr[31] = (0x08A013C0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08A013C0u) goto L_08A013C0;
    return;
L_08A013C0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A013CCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 941u, 0x0898BA34u>(ctx, &aot_mem) && ctx.pc == 0x08A013CCu) goto L_08A013CC;
    return;
L_08A013CC:
    ctx.gpr[31] = (0x08A013D4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08A013D4u) goto L_08A013D4;
    return;
L_08A013D4:
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(150), static_cast<std::uint16_t>(ctx.gpr[16]));
    ctx.gpr[31] = (0x08A013E0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08A013E0u) goto L_08A013E0;
    return;
L_08A013E0:
    ctx.gpr[31] = (0x08A013E8u);
    ctx.gpr[4] = (0u | 0u);
    goto L_08A01418;
L_08A013E8:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A013B8;
      }
      goto L_08A013F8;
    }
L_08A013F8:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-16129), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
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
L_08A01418:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-16128), static_cast<std::uint8_t>(ctx.gpr[4]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A01420:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(416));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-416), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(416), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A01434:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6900)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-12464));
      if (branch_taken) {
          goto L_08A01460;
      }
      goto L_08A01450;
    }
L_08A01450:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6900), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A01460u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A01420;
L_08A01460:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A01474:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(416)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(416), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A01484:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8284)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-9200)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08A014A8;
      }
      goto L_08A014A4;
    }
L_08A014A4:
    ctx.gpr[16] = (0u | 1u);
    goto L_08A014A8;
L_08A014A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8288)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-9199)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A014C0;
      }
      goto L_08A014BC;
    }
L_08A014BC:
    ctx.gpr[16] = (0u | 2u);
    goto L_08A014C0;
L_08A014C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8292)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-9198)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A014D8;
      }
      goto L_08A014D4;
    }
L_08A014D4:
    ctx.gpr[16] = (0u | 3u);
    goto L_08A014D8;
L_08A014D8:
    ctx.gpr[31] = (0x08A014E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 223u, 0x0899103Cu>(ctx, &aot_mem) && ctx.pc == 0x08A014E0u) goto L_08A014E0;
    return;
L_08A014E0:
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A01510;
      }
      goto L_08A014F8;
    }
L_08A014F8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-9197)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A01510;
      }
      goto L_08A01504;
    }
L_08A01504:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4188)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01514;
      }
      goto L_08A01510;
    }
L_08A01510:
    ctx.gpr[16] = (0u | 4u);
    goto L_08A01514;
L_08A01514:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A01528:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8976)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A015B4;
      }
      goto L_08A01540;
    }
L_08A01540:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08A0154Cu);
    ctx.gpr[4] = (0u | 84u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08A0154Cu) goto L_08A0154C;
    return;
L_08A0154C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A015B0;
      }
      goto L_08A01558;
    }
L_08A01558:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(76), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08A015B0;
L_08A015B0:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-8976), ctx.gpr[16]);
    goto L_08A015B4;
L_08A015B4:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8976)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A015C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A015DCu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08A01648;
L_08A015DC:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A015F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01614;
      }
      goto L_08A01600;
    }
L_08A01600:
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08A01614;
      }
      goto L_08A0160C;
    }
L_08A0160C:
    ctx.gpr[31] = (0x08A01614u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08A01614u) goto L_08A01614;
    return;
L_08A01614:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A01620:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A01634u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08A01648;
L_08A01634:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A01648:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(16));
    goto L_08A01660;
L_08A01660:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(17)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(19)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[7]));
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
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(36));
    ctx.gpr[8] = (ctx.gpr[4] + static_cast<std::uint32_t>(36));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(24));
    ctx.gpr[8] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(64));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_08A01660;
      }
      goto L_08A01704;
    }
L_08A01704:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0170C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01768;
      }
      goto L_08A0171C;
    }
L_08A0171C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(48));
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
      const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[6] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A01770;
      }
      goto L_08A01760;
    }
L_08A01760:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A017CC;
      }
      goto L_08A01768;
    }
L_08A01768:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A01828;
      }
      goto L_08A01770;
    }
L_08A01770:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(48));
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A017C4;
      }
      goto L_08A017BC;
    }
L_08A017BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_08A01828;
      }
      goto L_08A017C4;
    }
L_08A017C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(208));
      if (branch_taken) {
          goto L_08A01828;
      }
      goto L_08A017CC;
    }
L_08A017CC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(48));
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A01820;
      }
      goto L_08A01818;
    }
L_08A01818:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A01828;
      }
      goto L_08A01820;
    }
L_08A01820:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(144));
      if (branch_taken) {
          goto L_08A01828;
      }
      goto L_08A01828;
    }
L_08A01828:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A01830:
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A01838:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28296));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(64));
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(80));
    ctx.gpr[20] = (ctx.gpr[18] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A018C0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A036C4;
L_08A018C0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A018D0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    goto L_08A03704;
L_08A018D0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A018E0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    goto L_08A0374C;
L_08A018E0:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A01904:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A019A4;
      }
      goto L_08A01924;
    }
L_08A01924:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28296));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A01964;
      }
      goto L_08A0193C;
    }
L_08A0193C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A01964;
      }
      goto L_08A0194C;
    }
L_08A0194C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01964;
      }
      goto L_08A01954;
    }
L_08A01954:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01964;
      }
      goto L_08A0195C;
    }
L_08A0195C:
    ctx.gpr[31] = (0x08A01964u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08A01964u) goto L_08A01964;
    return;
L_08A01964:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08A01994;
      }
      goto L_08A0196C;
    }
L_08A0196C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A01990;
      }
      goto L_08A01978;
    }
L_08A01978:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_08A01994;
    }
    goto L_08A01980;
L_08A01980:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_08A01994;
    }
    goto L_08A01988;
L_08A01988:
    ctx.gpr[31] = (0x08A01990u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08A01990u) goto L_08A01990;
    return;
L_08A01990:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_08A01994;
L_08A01994:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A019A4;
      }
      goto L_08A0199C;
    }
L_08A0199C:
    ctx.gpr[31] = (0x08A019A4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08A019A4u) goto L_08A019A4;
    return;
L_08A019A4:
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
L_08A019BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[4] ^ ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A019D0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01A20;
      }
      goto L_08A019FC;
    }
L_08A019FC:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A01A10;
      }
      goto L_08A01A08;
    }
L_08A01A08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A01A24;
      }
      goto L_08A01A10;
    }
L_08A01A10:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A019FC;
      }
      goto L_08A01A20;
    }
L_08A01A20:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A01A24;
L_08A01A24:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A01A2C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[4] = (ctx.gpr[7] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[6] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A01A6C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 2u));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A01A8C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A01B38;
      }
      goto L_08A01AAC;
    }
L_08A01AAC:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(80));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[7]);
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[7]);
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01B38;
      }
      goto L_08A01B10;
    }
L_08A01B10:
    ctx.gpr[31] = (0x08A01B18u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A01C08;
L_08A01B18:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[0];
    ctx.gpr[31] = (0x08A01B2Cu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A01C08;
L_08A01B2C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[0];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A01B38;
L_08A01B38:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A01B4C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A01BC8;
      }
      goto L_08A01B74;
    }
L_08A01B74:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A01B90;
      }
      goto L_08A01B7C;
    }
L_08A01B7C:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(96));
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01B9C;
      }
      goto L_08A01B90;
    }
L_08A01B90:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(80));
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
    goto L_08A01B9C;
L_08A01B9C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08A01BACu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem) && ctx.pc == 0x08A01BACu) goto L_08A01BAC;
    return;
L_08A01BAC:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08A01BC8;
      }
      goto L_08A01BB4;
    }
L_08A01BB4:
    ctx.gpr[31] = (0x08A01BBCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08A01C44;
L_08A01BBC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[0];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A01BC8;
L_08A01BC8:
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
L_08A01BE0:
    ctx.gpr[5] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01BF8;
      }
      goto L_08A01BEC;
    }
L_08A01BEC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A01C00;
      }
      goto L_08A01BF8;
    }
L_08A01BF8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A01C00;
L_08A01C00:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A01C08:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A01C24u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x08A01C24u) goto L_08A01C24;
    return;
L_08A01C24:
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[22];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[22] + ctx.fpr[0];
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A01C44:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A01C60u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x08A01C60u) goto L_08A01C60;
    return;
L_08A01C60:
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[22];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[22] + ctx.fpr[0];
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A01C80:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A01D1C;
      }
      goto L_08A01CBC;
    }
L_08A01CBC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A01D0C;
      }
      goto L_08A01CC8;
    }
L_08A01CC8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A01CF8;
      }
      goto L_08A01CD8;
    }
L_08A01CD8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A01CF8;
      }
      goto L_08A01CE8;
    }
L_08A01CE8:
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[5] - ctx.gpr[7]);
    ctx.gpr[31] = (0x08A01CF8u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x08A01CF8u) goto L_08A01CF8;
    return;
L_08A01CF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A01F00;
      }
      goto L_08A01D0C;
    }
L_08A01D0C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A01CBC;
      }
      goto L_08A01D1C;
    }
L_08A01D1C:
    ctx.gpr[31] = (0x08A01D24u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A01A2C;
L_08A01D24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A01EFC;
      }
      goto L_08A01D34;
    }
L_08A01D34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_08A01D60;
    }
    goto L_08A01D44;
L_08A01D44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    if (ctx.gpr[4] != 0u) {
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
        goto L_08A01D50;
    }
    goto L_08A01D50;
L_08A01D50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A01E74;
      }
      goto L_08A01D60;
    }
L_08A01D60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[18] - ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_08A01D9C;
      }
      goto L_08A01D94;
    }
L_08A01D94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_08A01DA0;
      }
      goto L_08A01D9C;
    }
L_08A01D9C:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    goto L_08A01DA0;
L_08A01DA0:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[20] = (ctx.gpr[4] + ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08A01DD8;
      }
      goto L_08A01DB4;
    }
L_08A01DB4:
    ctx.gpr[4] = (ctx.gpr[20] << 2u);
    ctx.gpr[31] = (0x08A01DC0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem) && ctx.pc == 0x08A01DC0u) goto L_08A01DC0;
    return;
L_08A01DC0:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
      if (branch_taken) {
          goto L_08A01DD8;
      }
      goto L_08A01DCC;
    }
L_08A01DCC:
    ctx.gpr[31] = (0x08A01DD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem) && ctx.pc == 0x08A01DD4u) goto L_08A01DD4;
    return;
L_08A01DD4:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    goto L_08A01DD8;
L_08A01DD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A01DEC;
      }
      goto L_08A01DE4;
    }
L_08A01DE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_08A01E00;
      }
      goto L_08A01DEC;
    }
L_08A01DEC:
    ctx.gpr[22] = (ctx.gpr[18] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A01DFCu);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x08A01DFCu) goto L_08A01DFC;
    return;
L_08A01DFC:
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[22]);
    goto L_08A01E00;
L_08A01E00:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
        goto L_08A01E20;
    }
    goto L_08A01E0C;
L_08A01E0C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A01E0C;
      }
      goto L_08A01E1C;
    }
L_08A01E1C:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08A01E20;
L_08A01E20:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A01E4C;
      }
      goto L_08A01E28;
    }
L_08A01E28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    ctx.gpr[22] = (ctx.gpr[4] - ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A01E4C;
      }
      goto L_08A01E34;
    }
L_08A01E34:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A01E44u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x08A01E44u) goto L_08A01E44;
    return;
L_08A01E44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[2] + ctx.gpr[22]);
      if (branch_taken) {
          goto L_08A01E4C;
      }
      goto L_08A01E4C;
    }
L_08A01E4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A01E60;
      }
      goto L_08A01E58;
    }
L_08A01E58:
    ctx.gpr[31] = (0x08A01E60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08A01E60u) goto L_08A01E60;
    return;
L_08A01E60:
    ctx.gpr[4] = (ctx.gpr[20] << 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    goto L_08A01E74;
L_08A01E74:
    ctx.gpr[31] = (0x08A01E7Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A01A6C;
L_08A01E7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A01EA4u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A01EA4u) goto L_08A01EA4;
    return;
L_08A01EA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(56));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A01EC4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A01EC4u) goto L_08A01EC4;
    return;
L_08A01EC4:
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A01ED8u);
    ctx.gpr[6] = (0u | 0u);
    goto L_08A01BE0;
L_08A01ED8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A01EF4u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 590u, 0x0890E824u>(ctx, &aot_mem) && ctx.pc == 0x08A01EF4u) goto L_08A01EF4;
    return;
L_08A01EF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A01F00;
      }
      goto L_08A01EFC;
    }
L_08A01EFC:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A01F00;
L_08A01F00:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A01F28:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A01F90;
      }
      goto L_08A01F6C;
    }
L_08A01F6C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A01F80;
      }
      goto L_08A01F78;
    }
L_08A01F78:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A01F88;
      }
      goto L_08A01F80;
    }
L_08A01F80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A021C8;
      }
      goto L_08A01F88;
    }
L_08A01F88:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A01F6C;
      }
      goto L_08A01F90;
    }
L_08A01F90:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08A01FC4;
      }
      goto L_08A01F9C;
    }
L_08A01F9C:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
        goto L_08A01FB4;
    }
    goto L_08A01FA8;
L_08A01FA8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    goto L_08A01FB4;
L_08A01FB4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08A020BC;
      }
      goto L_08A01FC4;
    }
L_08A01FC4:
    ctx.gpr[6] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[7] >> 30u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08A01FFC;
      }
      goto L_08A01FEC;
    }
L_08A01FEC:
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[6] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_08A02008;
      }
      goto L_08A01FFC;
    }
L_08A01FFC:
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[6] + ctx.gpr[19]);
    goto L_08A02008;
L_08A02008:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08A02044;
      }
      goto L_08A02010;
    }
L_08A02010:
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
    ctx.gpr[31] = (0x08A02020u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem) && ctx.pc == 0x08A02020u) goto L_08A02020;
    return;
L_08A02020:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
      if (branch_taken) {
          goto L_08A02040;
      }
      goto L_08A02030;
    }
L_08A02030:
    ctx.gpr[31] = (0x08A02038u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem) && ctx.pc == 0x08A02038u) goto L_08A02038;
    return;
L_08A02038:
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    goto L_08A02040;
L_08A02040:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    goto L_08A02044;
L_08A02044:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    ctx.gpr[20] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A02058;
      }
      goto L_08A02050;
    }
L_08A02050:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_08A02074;
      }
      goto L_08A02058;
    }
L_08A02058:
    ctx.gpr[21] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[31] = (0x08A0206Cu);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x08A0206Cu) goto L_08A0206C;
    return;
L_08A0206C:
    ctx.gpr[6] = (ctx.gpr[2] + ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    goto L_08A02074;
L_08A02074:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A0208C;
      }
      goto L_08A0207C;
    }
L_08A0207C:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A0207C;
      }
      goto L_08A0208C;
    }
L_08A0208C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A020A0;
      }
      goto L_08A02098;
    }
L_08A02098:
    ctx.gpr[31] = (0x08A020A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08A020A0u) goto L_08A020A0;
    return;
L_08A020A0:
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_08A020BC;
L_08A020BC:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A02120;
      }
      goto L_08A020C8;
    }
L_08A020C8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A02114;
      }
      goto L_08A020D4;
    }
L_08A020D4:
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A02108;
      }
      goto L_08A020E0;
    }
L_08A020E0:
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[7];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A02108;
      }
      goto L_08A020EC;
    }
L_08A020EC:
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] - ctx.gpr[7]);
    ctx.gpr[31] = (0x08A02100u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x08A02100u) goto L_08A02100;
    return;
L_08A02100:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_08A02108;
L_08A02108:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A02120;
      }
      goto L_08A02114;
    }
L_08A02114:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A020C8;
      }
      goto L_08A02120;
    }
L_08A02120:
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[5];
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A021C4;
      }
      goto L_08A0212C;
    }
L_08A0212C:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    goto L_08A02134;
L_08A02134:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08A02144u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A01A6C;
L_08A02144:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A02168u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A02168u) goto L_08A02168;
    return;
L_08A02168:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(56));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A02188u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A02188u) goto L_08A02188;
    return;
L_08A02188:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A0219Cu);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    goto L_08A01BE0;
L_08A0219C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A021B8u);
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 590u, 0x0890E824u>(ctx, &aot_mem) && ctx.pc == 0x08A021B8u) goto L_08A021B8;
    return;
L_08A021B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A02134;
      }
      goto L_08A021C4;
    }
L_08A021C4:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_08A021C8;
L_08A021C8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A021F4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
    ctx.gpr[8] = (ctx.gpr[8] >> 30u);
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 2u));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    if (ctx.gpr[9] == 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
        goto L_08A0224C;
    }
    goto L_08A02220;
L_08A02220:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08A02244;
      }
      goto L_08A0222C;
    }
L_08A0222C:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A02220;
      }
      goto L_08A0223C;
    }
L_08A0223C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08A0224C;
      }
      goto L_08A02244;
    }
L_08A02244:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A022A4;
      }
      goto L_08A0224C;
    }
L_08A0224C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A022A0;
      }
      goto L_08A02274;
    }
L_08A02274:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08A02298;
      }
      goto L_08A02280;
    }
L_08A02280:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A02274;
      }
      goto L_08A02290;
    }
L_08A02290:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A022A0;
      }
      goto L_08A02298;
    }
L_08A02298:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A022A4;
      }
      goto L_08A022A0;
    }
L_08A022A0:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A022A4;
L_08A022A4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A022AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A0235C;
      }
      goto L_08A022CC;
    }
L_08A022CC:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28368));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A02348;
      }
      goto L_08A022DC;
    }
L_08A022DC:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28296));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A0231C;
      }
      goto L_08A022F4;
    }
L_08A022F4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A0231C;
      }
      goto L_08A02304;
    }
L_08A02304:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0231C;
      }
      goto L_08A0230C;
    }
L_08A0230C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0231C;
      }
      goto L_08A02314;
    }
L_08A02314:
    ctx.gpr[31] = (0x08A0231Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08A0231Cu) goto L_08A0231C;
    return;
L_08A0231C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08A0234C;
      }
      goto L_08A02324;
    }
L_08A02324:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A02348;
      }
      goto L_08A02330;
    }
L_08A02330:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_08A0234C;
    }
    goto L_08A02338;
L_08A02338:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_08A0234C;
    }
    goto L_08A02340;
L_08A02340:
    ctx.gpr[31] = (0x08A02348u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08A02348u) goto L_08A02348;
    return;
L_08A02348:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_08A0234C;
L_08A0234C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0235C;
      }
      goto L_08A02354;
    }
L_08A02354:
    ctx.gpr[31] = (0x08A0235Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08A0235Cu) goto L_08A0235C;
    return;
L_08A0235C:
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
L_08A02374:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0237C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A02390u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x08A02390u) goto L_08A02390;
    return;
L_08A02390:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8964)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8968)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A023A4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x08A023A4u) goto L_08A023A4;
    return;
L_08A023A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8956)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8960)));
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[6] = (ctx.gpr[2] >> 31u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[6] = (ctx.gpr[1] | ctx.gpr[6]);
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[9] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1918)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1918), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A023FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A024AC;
      }
      goto L_08A0241C;
    }
L_08A0241C:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28440));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A02498;
      }
      goto L_08A0242C;
    }
L_08A0242C:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28296));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A0246C;
      }
      goto L_08A02444;
    }
L_08A02444:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A0246C;
      }
      goto L_08A02454;
    }
L_08A02454:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0246C;
      }
      goto L_08A0245C;
    }
L_08A0245C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0246C;
      }
      goto L_08A02464;
    }
L_08A02464:
    ctx.gpr[31] = (0x08A0246Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08A0246Cu) goto L_08A0246C;
    return;
L_08A0246C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08A0249C;
      }
      goto L_08A02474;
    }
L_08A02474:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A02498;
      }
      goto L_08A02480;
    }
L_08A02480:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_08A0249C;
    }
    goto L_08A02488;
L_08A02488:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_08A0249C;
    }
    goto L_08A02490;
L_08A02490:
    ctx.gpr[31] = (0x08A02498u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08A02498u) goto L_08A02498;
    return;
L_08A02498:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_08A0249C;
L_08A0249C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A024AC;
      }
      goto L_08A024A4;
    }
L_08A024A4:
    ctx.gpr[31] = (0x08A024ACu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08A024ACu) goto L_08A024AC;
    return;
L_08A024AC:
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
L_08A024C4:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A024CC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A024D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A02584;
      }
      goto L_08A024F4;
    }
L_08A024F4:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28512));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A02570;
      }
      goto L_08A02504;
    }
L_08A02504:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28296));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A02544;
      }
      goto L_08A0251C;
    }
L_08A0251C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A02544;
      }
      goto L_08A0252C;
    }
L_08A0252C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A02544;
      }
      goto L_08A02534;
    }
L_08A02534:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A02544;
      }
      goto L_08A0253C;
    }
L_08A0253C:
    ctx.gpr[31] = (0x08A02544u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08A02544u) goto L_08A02544;
    return;
L_08A02544:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08A02574;
      }
      goto L_08A0254C;
    }
L_08A0254C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A02570;
      }
      goto L_08A02558;
    }
L_08A02558:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_08A02574;
    }
    goto L_08A02560;
L_08A02560:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_08A02574;
    }
    goto L_08A02568;
L_08A02568:
    ctx.gpr[31] = (0x08A02570u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08A02570u) goto L_08A02570;
    return;
L_08A02570:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_08A02574;
L_08A02574:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A02584;
      }
      goto L_08A0257C;
    }
L_08A0257C:
    ctx.gpr[31] = (0x08A02584u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08A02584u) goto L_08A02584;
    return;
L_08A02584:
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
L_08A0259C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A025A4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A025AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A0265C;
      }
      goto L_08A025CC;
    }
L_08A025CC:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28584));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A02648;
      }
      goto L_08A025DC;
    }
L_08A025DC:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28296));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A0261C;
      }
      goto L_08A025F4;
    }
L_08A025F4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A0261C;
      }
      goto L_08A02604;
    }
L_08A02604:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0261C;
      }
      goto L_08A0260C;
    }
L_08A0260C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0261C;
      }
      goto L_08A02614;
    }
L_08A02614:
    ctx.gpr[31] = (0x08A0261Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08A0261Cu) goto L_08A0261C;
    return;
L_08A0261C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08A0264C;
      }
      goto L_08A02624;
    }
L_08A02624:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A02648;
      }
      goto L_08A02630;
    }
L_08A02630:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_08A0264C;
    }
    goto L_08A02638;
L_08A02638:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_08A0264C;
    }
    goto L_08A02640;
L_08A02640:
    ctx.gpr[31] = (0x08A02648u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08A02648u) goto L_08A02648;
    return;
L_08A02648:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_08A0264C;
L_08A0264C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0265C;
      }
      goto L_08A02654;
    }
L_08A02654:
    ctx.gpr[31] = (0x08A0265Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08A0265Cu) goto L_08A0265C;
    return;
L_08A0265C:
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
L_08A02674:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 3u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0267C:
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9064)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A02684:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(1918)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A026A0;
      }
      goto L_08A02694;
    }
L_08A02694:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(1918), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A026A4;
      }
      goto L_08A026A0;
    }
L_08A026A0:
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(1918), static_cast<std::uint16_t>(0u));
    goto L_08A026A4;
L_08A026A4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A026AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A0275C;
      }
      goto L_08A026CC;
    }
L_08A026CC:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28656));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A02748;
      }
      goto L_08A026DC;
    }
L_08A026DC:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28296));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A0271C;
      }
      goto L_08A026F4;
    }
L_08A026F4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A0271C;
      }
      goto L_08A02704;
    }
L_08A02704:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0271C;
      }
      goto L_08A0270C;
    }
L_08A0270C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0271C;
      }
      goto L_08A02714;
    }
L_08A02714:
    ctx.gpr[31] = (0x08A0271Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08A0271Cu) goto L_08A0271C;
    return;
L_08A0271C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08A0274C;
      }
      goto L_08A02724;
    }
L_08A02724:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A02748;
      }
      goto L_08A02730;
    }
L_08A02730:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_08A0274C;
    }
    goto L_08A02738;
L_08A02738:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_08A0274C;
    }
    goto L_08A02740;
L_08A02740:
    ctx.gpr[31] = (0x08A02748u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08A02748u) goto L_08A02748;
    return;
L_08A02748:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_08A0274C;
L_08A0274C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0275C;
      }
      goto L_08A02754;
    }
L_08A02754:
    ctx.gpr[31] = (0x08A0275Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08A0275Cu) goto L_08A0275C;
    return;
L_08A0275C:
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
L_08A02774:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 4u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0277C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A027C8;
      }
      goto L_08A027A4;
    }
L_08A027A4:
    ctx.gpr[17] = (ctx.gpr[5] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x08A027B0u);
    // nop
    goto L_08A02A20;
L_08A027B0:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_08A027C8;
L_08A027C8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A027DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (16585u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A02808u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x08A02808u) goto L_08A02808;
    return;
L_08A02808:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A02830:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A02838:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A02840:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[9] & 255u);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[10]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 4u));
    ctx.gpr[9] = (ctx.gpr[9] >> 28u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[9]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 4u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] < ctx.gpr[8] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A02898;
      }
      goto L_08A02890;
    }
L_08A02890:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[29] | 0u);
      if (branch_taken) {
          goto L_08A02898;
      }
      goto L_08A02898;
    }
L_08A02898:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (ctx.gpr[7] + ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08A02900;
      }
      goto L_08A028AC;
    }
L_08A028AC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[17] << 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[31] = (0x08A028C4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem) && ctx.pc == 0x08A028C4u) goto L_08A028C4;
    return;
L_08A028C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08A02900;
      }
      goto L_08A028DC;
    }
L_08A028DC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[31] = (0x08A028F0u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem) && ctx.pc == 0x08A028F0u) goto L_08A028F0;
    return;
L_08A028F0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_08A02900;
L_08A02900:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[5];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A02930;
      }
      goto L_08A02910;
    }
L_08A02910:
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(16));
        goto L_08A02928;
    }
    goto L_08A0291C;
L_08A0291C:
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(16));
    goto L_08A02928;
L_08A02928:
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[5];
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A02910;
      }
      goto L_08A02930;
    }
L_08A02930:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08A0295C;
      }
      goto L_08A02940;
    }
L_08A02940:
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A02954;
      }
      goto L_08A0294C;
    }
L_08A0294C:
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_08A02954;
L_08A02954:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A02988;
      }
      goto L_08A0295C;
    }
L_08A0295C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A02988;
      }
      goto L_08A02968;
    }
L_08A02968:
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
        goto L_08A02980;
    }
    goto L_08A02974;
L_08A02974:
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    goto L_08A02980;
L_08A02980:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A02968;
      }
      goto L_08A02988;
    }
L_08A02988:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A029C0;
      }
      goto L_08A02990;
    }
L_08A02990:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A029C0;
      }
      goto L_08A029A0;
    }
L_08A029A0:
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
        goto L_08A029B8;
    }
    goto L_08A029AC;
L_08A029AC:
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    goto L_08A029B8;
L_08A029B8:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A029A0;
      }
      goto L_08A029C0;
    }
L_08A029C0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A029DC;
      }
      goto L_08A029D0;
    }
L_08A029D0:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    goto L_08A029D4;
L_08A029D4:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A029D4;
      }
      goto L_08A029DC;
    }
L_08A029DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A029F0;
      }
      goto L_08A029E8;
    }
L_08A029E8:
    ctx.gpr[31] = (0x08A029F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08A029F0u) goto L_08A029F0;
    return;
L_08A029F0:
    ctx.gpr[4] = (ctx.gpr[17] << 4u);
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
L_08A02A20:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9732)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9728)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 4u));
    ctx.gpr[6] = (ctx.gpr[6] >> 28u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 4u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A02C30;
      }
      goto L_08A02A80;
    }
L_08A02A80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9060)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (16585u << 16u);
      if (branch_taken) {
          goto L_08A02C30;
      }
      goto L_08A02A94;
    }
L_08A02A94:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (16384u << 16u);
    ctx.gpr[21] = (ctx.gpr[28] + static_cast<std::uint32_t>(9728));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    goto L_08A02AC0;
L_08A02AC0:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08A02ACCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x08A02ACCu) goto L_08A02ACC;
    return;
L_08A02ACC:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
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
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
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
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08A02B18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x08A02B18u) goto L_08A02B18;
    return;
L_08A02B18:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    { const float fs = ctx.fpr[28]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9732)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9728)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 4u));
    ctx.gpr[5] = (ctx.gpr[5] >> 28u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 4u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A02BC0;
      }
      goto L_08A02B6C;
    }
L_08A02B6C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9728)));
    ctx.gpr[7] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[6] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A02BB0;
      }
      goto L_08A02BA8;
    }
L_08A02BA8:
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    goto L_08A02BB0;
L_08A02BB0:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A02B6C;
      }
      goto L_08A02BC0;
    }
L_08A02BC0:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A02AC0;
      }
      goto L_08A02BC8;
    }
L_08A02BC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9732)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9736)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A02BFC;
      }
      goto L_08A02BD8;
    }
L_08A02BD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9732)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9732)));
        goto L_08A02BF0;
    }
    goto L_08A02BE4;
L_08A02BE4:
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9732)));
    goto L_08A02BF0;
L_08A02BF0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9732), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A02C1C;
      }
      goto L_08A02BFC;
    }
L_08A02BFC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9732)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x08A02C1Cu);
    ctx.gpr[9] = (0u | 1u);
    goto L_08A02840;
L_08A02C1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9060)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A02AC0;
      }
      goto L_08A02C30;
    }
L_08A02C30:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9728)));
    ctx.gpr[4] = (ctx.gpr[16] << 4u);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A02C7C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A02D40;
      }
      goto L_08A02C9C;
    }
L_08A02C9C:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28728));
    ctx.gpr[31] = (0x08A02CACu);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    goto L_08A01528;
L_08A02CAC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08A02CB8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08A03D14;
L_08A02CB8:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08A02D30;
      }
      goto L_08A02CC0;
    }
L_08A02CC0:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28296));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A02D00;
      }
      goto L_08A02CD8;
    }
L_08A02CD8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A02D00;
      }
      goto L_08A02CE8;
    }
L_08A02CE8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A02D00;
      }
      goto L_08A02CF0;
    }
L_08A02CF0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A02D00;
      }
      goto L_08A02CF8;
    }
L_08A02CF8:
    ctx.gpr[31] = (0x08A02D00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08A02D00u) goto L_08A02D00;
    return;
L_08A02D00:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08A02D30;
      }
      goto L_08A02D08;
    }
L_08A02D08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A02D2C;
      }
      goto L_08A02D14;
    }
L_08A02D14:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_08A02D30;
    }
    goto L_08A02D1C;
L_08A02D1C:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_08A02D30;
    }
    goto L_08A02D24;
L_08A02D24:
    ctx.gpr[31] = (0x08A02D2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08A02D2Cu) goto L_08A02D2C;
    return;
L_08A02D2C:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_08A02D30;
L_08A02D30:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A02D40;
      }
      goto L_08A02D38;
    }
L_08A02D38:
    ctx.gpr[31] = (0x08A02D40u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08A02D40u) goto L_08A02D40;
    return;
L_08A02D40:
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
L_08A02D58:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 5u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A02D60:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A02D68:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[9] = (0u | 3u);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[9];
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A02DF8;
      }
      goto L_08A02D9C;
    }
L_08A02D9C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A02DA8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08A03EDC;
L_08A02DA8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A02DF0;
      }
      goto L_08A02DB0;
    }
L_08A02DB0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A02EA8;
      }
      goto L_08A02DC0;
    }
L_08A02DC0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A02E1C;
      }
      goto L_08A02DC8;
    }
L_08A02DC8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A02E00;
      }
      goto L_08A02DD0;
    }
L_08A02DD0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08A02E38;
      }
      goto L_08A02DD8;
    }
L_08A02DD8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A02E54;
      }
      goto L_08A02DE0;
    }
L_08A02DE0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08A02E70;
      }
      goto L_08A02DE8;
    }
L_08A02DE8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08A02E8C;
      }
      goto L_08A02DF0;
    }
L_08A02DF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A02EAC;
      }
      goto L_08A02DF8;
    }
L_08A02DF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A02EAC;
      }
      goto L_08A02E00;
    }
L_08A02E00:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A02E14u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 308u, 0x08A053A0u>(ctx, &aot_mem) && ctx.pc == 0x08A02E14u) goto L_08A02E14;
    return;
L_08A02E14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A02EAC;
      }
      goto L_08A02E1C;
    }
L_08A02E1C:
    ctx.gpr[7] = (ctx.gpr[19] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A02E30u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 308u, 0x08A053A0u>(ctx, &aot_mem) && ctx.pc == 0x08A02E30u) goto L_08A02E30;
    return;
L_08A02E30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A02EAC;
      }
      goto L_08A02E38;
    }
L_08A02E38:
    ctx.gpr[7] = (ctx.gpr[19] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A02E4Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 308u, 0x08A053A0u>(ctx, &aot_mem) && ctx.pc == 0x08A02E4Cu) goto L_08A02E4C;
    return;
L_08A02E4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A02EAC;
      }
      goto L_08A02E54;
    }
L_08A02E54:
    ctx.gpr[7] = (ctx.gpr[19] + static_cast<std::uint32_t>(36));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A02E68u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 308u, 0x08A053A0u>(ctx, &aot_mem) && ctx.pc == 0x08A02E68u) goto L_08A02E68;
    return;
L_08A02E68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A02EAC;
      }
      goto L_08A02E70;
    }
L_08A02E70:
    ctx.gpr[7] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A02E84u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 308u, 0x08A053A0u>(ctx, &aot_mem) && ctx.pc == 0x08A02E84u) goto L_08A02E84;
    return;
L_08A02E84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A02EAC;
      }
      goto L_08A02E8C;
    }
L_08A02E8C:
    ctx.gpr[7] = (ctx.gpr[19] + static_cast<std::uint32_t>(60));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A02EA0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 308u, 0x08A053A0u>(ctx, &aot_mem) && ctx.pc == 0x08A02EA0u) goto L_08A02EA0;
    return;
L_08A02EA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A02EAC;
      }
      goto L_08A02EA8;
    }
L_08A02EA8:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A02EAC;
L_08A02EAC:
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
L_08A02EC8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[7] & 255u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A02F70;
      }
      goto L_08A02EF4;
    }
L_08A02EF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A02F68;
      }
      goto L_08A02F08;
    }
L_08A02F08:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A02F14u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A03EDC;
L_08A02F14:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A02F60;
      }
      goto L_08A02F1C;
    }
L_08A02F1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03020;
      }
      goto L_08A02F30;
    }
L_08A02F30:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A02F94;
      }
      goto L_08A02F38;
    }
L_08A02F38:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A02F78;
      }
      goto L_08A02F40;
    }
L_08A02F40:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08A02FB0;
      }
      goto L_08A02F48;
    }
L_08A02F48:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A02FCC;
      }
      goto L_08A02F50;
    }
L_08A02F50:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08A02FE8;
      }
      goto L_08A02F58;
    }
L_08A02F58:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08A03004;
      }
      goto L_08A02F60;
    }
L_08A02F60:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A03024;
      }
      goto L_08A02F68;
    }
L_08A02F68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A03024;
      }
      goto L_08A02F70;
    }
L_08A02F70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A03024;
      }
      goto L_08A02F78;
    }
L_08A02F78:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A02F8Cu);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 13u, 0x08A040D0u>(ctx, &aot_mem) && ctx.pc == 0x08A02F8Cu) goto L_08A02F8C;
    return;
L_08A02F8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03024;
      }
      goto L_08A02F94;
    }
L_08A02F94:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A02FA8u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 13u, 0x08A040D0u>(ctx, &aot_mem) && ctx.pc == 0x08A02FA8u) goto L_08A02FA8;
    return;
L_08A02FA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03024;
      }
      goto L_08A02FB0;
    }
L_08A02FB0:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A02FC4u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 13u, 0x08A040D0u>(ctx, &aot_mem) && ctx.pc == 0x08A02FC4u) goto L_08A02FC4;
    return;
L_08A02FC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03024;
      }
      goto L_08A02FCC;
    }
L_08A02FCC:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(36));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A02FE0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 13u, 0x08A040D0u>(ctx, &aot_mem) && ctx.pc == 0x08A02FE0u) goto L_08A02FE0;
    return;
L_08A02FE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03024;
      }
      goto L_08A02FE8;
    }
L_08A02FE8:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A02FFCu);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 13u, 0x08A040D0u>(ctx, &aot_mem) && ctx.pc == 0x08A02FFCu) goto L_08A02FFC;
    return;
L_08A02FFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03024;
      }
      goto L_08A03004;
    }
L_08A03004:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(60));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A03018u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 13u, 0x08A040D0u>(ctx, &aot_mem) && ctx.pc == 0x08A03018u) goto L_08A03018;
    return;
L_08A03018:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03024;
      }
      goto L_08A03020;
    }
L_08A03020:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A03024;
L_08A03024:
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
L_08A03040:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A030E0;
      }
      goto L_08A03064;
    }
L_08A03064:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A030D8;
      }
      goto L_08A03078;
    }
L_08A03078:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A03084u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A03EDC;
L_08A03084:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A030D0;
      }
      goto L_08A0308C;
    }
L_08A0308C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03178;
      }
      goto L_08A030A0;
    }
L_08A030A0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A03100;
      }
      goto L_08A030A8;
    }
L_08A030A8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A030E8;
      }
      goto L_08A030B0;
    }
L_08A030B0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08A03118;
      }
      goto L_08A030B8;
    }
L_08A030B8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A03130;
      }
      goto L_08A030C0;
    }
L_08A030C0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08A03148;
      }
      goto L_08A030C8;
    }
L_08A030C8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08A03160;
      }
      goto L_08A030D0;
    }
L_08A030D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A0317C;
      }
      goto L_08A030D8;
    }
L_08A030D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A0317C;
      }
      goto L_08A030E0;
    }
L_08A030E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A0317C;
      }
      goto L_08A030E8;
    }
L_08A030E8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A030F8u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 40u, 0x08A04228u>(ctx, &aot_mem) && ctx.pc == 0x08A030F8u) goto L_08A030F8;
    return;
L_08A030F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0317C;
      }
      goto L_08A03100;
    }
L_08A03100:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A03110u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 40u, 0x08A04228u>(ctx, &aot_mem) && ctx.pc == 0x08A03110u) goto L_08A03110;
    return;
L_08A03110:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0317C;
      }
      goto L_08A03118;
    }
L_08A03118:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A03128u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 40u, 0x08A04228u>(ctx, &aot_mem) && ctx.pc == 0x08A03128u) goto L_08A03128;
    return;
L_08A03128:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0317C;
      }
      goto L_08A03130;
    }
L_08A03130:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(36));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A03140u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 40u, 0x08A04228u>(ctx, &aot_mem) && ctx.pc == 0x08A03140u) goto L_08A03140;
    return;
L_08A03140:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0317C;
      }
      goto L_08A03148;
    }
L_08A03148:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A03158u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 40u, 0x08A04228u>(ctx, &aot_mem) && ctx.pc == 0x08A03158u) goto L_08A03158;
    return;
L_08A03158:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0317C;
      }
      goto L_08A03160;
    }
L_08A03160:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(60));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A03170u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 40u, 0x08A04228u>(ctx, &aot_mem) && ctx.pc == 0x08A03170u) goto L_08A03170;
    return;
L_08A03170:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0317C;
      }
      goto L_08A03178;
    }
L_08A03178:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A0317C;
L_08A0317C:
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
L_08A03194:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A03234;
      }
      goto L_08A031B8;
    }
L_08A031B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A0322C;
      }
      goto L_08A031CC;
    }
L_08A031CC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A031D8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A03EDC;
L_08A031D8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03224;
      }
      goto L_08A031E0;
    }
L_08A031E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A032CC;
      }
      goto L_08A031F4;
    }
L_08A031F4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A03254;
      }
      goto L_08A031FC;
    }
L_08A031FC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A0323C;
      }
      goto L_08A03204;
    }
L_08A03204:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08A0326C;
      }
      goto L_08A0320C;
    }
L_08A0320C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A03284;
      }
      goto L_08A03214;
    }
L_08A03214:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08A0329C;
      }
      goto L_08A0321C;
    }
L_08A0321C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08A032B4;
      }
      goto L_08A03224;
    }
L_08A03224:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A032D0;
      }
      goto L_08A0322C;
    }
L_08A0322C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A032D0;
      }
      goto L_08A03234;
    }
L_08A03234:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A032D0;
      }
      goto L_08A0323C;
    }
L_08A0323C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A0324Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 53u, 0x08A042C8u>(ctx, &aot_mem) && ctx.pc == 0x08A0324Cu) goto L_08A0324C;
    return;
L_08A0324C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A032D0;
      }
      goto L_08A03254;
    }
L_08A03254:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A03264u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 53u, 0x08A042C8u>(ctx, &aot_mem) && ctx.pc == 0x08A03264u) goto L_08A03264;
    return;
L_08A03264:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A032D0;
      }
      goto L_08A0326C;
    }
L_08A0326C:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A0327Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 53u, 0x08A042C8u>(ctx, &aot_mem) && ctx.pc == 0x08A0327Cu) goto L_08A0327C;
    return;
L_08A0327C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A032D0;
      }
      goto L_08A03284;
    }
L_08A03284:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(36));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A03294u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 53u, 0x08A042C8u>(ctx, &aot_mem) && ctx.pc == 0x08A03294u) goto L_08A03294;
    return;
L_08A03294:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A032D0;
      }
      goto L_08A0329C;
    }
L_08A0329C:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A032ACu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 53u, 0x08A042C8u>(ctx, &aot_mem) && ctx.pc == 0x08A032ACu) goto L_08A032AC;
    return;
L_08A032AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A032D0;
      }
      goto L_08A032B4;
    }
L_08A032B4:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(60));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A032C4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 53u, 0x08A042C8u>(ctx, &aot_mem) && ctx.pc == 0x08A032C4u) goto L_08A032C4;
    return;
L_08A032C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A032D0;
      }
      goto L_08A032CC;
    }
L_08A032CC:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A032D0;
L_08A032D0:
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
L_08A032E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A03388;
      }
      goto L_08A0330C;
    }
L_08A0330C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A03380;
      }
      goto L_08A03320;
    }
L_08A03320:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A0332Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A03EDC;
L_08A0332C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03378;
      }
      goto L_08A03334;
    }
L_08A03334:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03420;
      }
      goto L_08A03348;
    }
L_08A03348:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A033A8;
      }
      goto L_08A03350;
    }
L_08A03350:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A03390;
      }
      goto L_08A03358;
    }
L_08A03358:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08A033C0;
      }
      goto L_08A03360;
    }
L_08A03360:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A033D8;
      }
      goto L_08A03368;
    }
L_08A03368:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08A033F0;
      }
      goto L_08A03370;
    }
L_08A03370:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08A03408;
      }
      goto L_08A03378;
    }
L_08A03378:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A03424;
      }
      goto L_08A03380;
    }
L_08A03380:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A03424;
      }
      goto L_08A03388;
    }
L_08A03388:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A03424;
      }
      goto L_08A03390;
    }
L_08A03390:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A033A0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 80u, 0x08A0442Cu>(ctx, &aot_mem) && ctx.pc == 0x08A033A0u) goto L_08A033A0;
    return;
L_08A033A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03424;
      }
      goto L_08A033A8;
    }
L_08A033A8:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A033B8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 80u, 0x08A0442Cu>(ctx, &aot_mem) && ctx.pc == 0x08A033B8u) goto L_08A033B8;
    return;
L_08A033B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03424;
      }
      goto L_08A033C0;
    }
L_08A033C0:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A033D0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 80u, 0x08A0442Cu>(ctx, &aot_mem) && ctx.pc == 0x08A033D0u) goto L_08A033D0;
    return;
L_08A033D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03424;
      }
      goto L_08A033D8;
    }
L_08A033D8:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(36));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A033E8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 80u, 0x08A0442Cu>(ctx, &aot_mem) && ctx.pc == 0x08A033E8u) goto L_08A033E8;
    return;
L_08A033E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03424;
      }
      goto L_08A033F0;
    }
L_08A033F0:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A03400u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 80u, 0x08A0442Cu>(ctx, &aot_mem) && ctx.pc == 0x08A03400u) goto L_08A03400;
    return;
L_08A03400:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03424;
      }
      goto L_08A03408;
    }
L_08A03408:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(60));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A03418u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 80u, 0x08A0442Cu>(ctx, &aot_mem) && ctx.pc == 0x08A03418u) goto L_08A03418;
    return;
L_08A03418:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03424;
      }
      goto L_08A03420;
    }
L_08A03420:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A03424;
L_08A03424:
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
L_08A0343C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A034DC;
      }
      goto L_08A03460;
    }
L_08A03460:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A034D4;
      }
      goto L_08A03474;
    }
L_08A03474:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A03480u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A03EDC;
L_08A03480:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A034CC;
      }
      goto L_08A03488;
    }
L_08A03488:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03574;
      }
      goto L_08A0349C;
    }
L_08A0349C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A034FC;
      }
      goto L_08A034A4;
    }
L_08A034A4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A034E4;
      }
      goto L_08A034AC;
    }
L_08A034AC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08A03514;
      }
      goto L_08A034B4;
    }
L_08A034B4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A0352C;
      }
      goto L_08A034BC;
    }
L_08A034BC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08A03544;
      }
      goto L_08A034C4;
    }
L_08A034C4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08A0355C;
      }
      goto L_08A034CC;
    }
L_08A034CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A03578;
      }
      goto L_08A034D4;
    }
L_08A034D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A03578;
      }
      goto L_08A034DC;
    }
L_08A034DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A03578;
      }
      goto L_08A034E4;
    }
L_08A034E4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A034F4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 91u, 0x08A044D4u>(ctx, &aot_mem) && ctx.pc == 0x08A034F4u) goto L_08A034F4;
    return;
L_08A034F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03578;
      }
      goto L_08A034FC;
    }
L_08A034FC:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A0350Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 91u, 0x08A044D4u>(ctx, &aot_mem) && ctx.pc == 0x08A0350Cu) goto L_08A0350C;
    return;
L_08A0350C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03578;
      }
      goto L_08A03514;
    }
L_08A03514:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A03524u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 91u, 0x08A044D4u>(ctx, &aot_mem) && ctx.pc == 0x08A03524u) goto L_08A03524;
    return;
L_08A03524:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03578;
      }
      goto L_08A0352C;
    }
L_08A0352C:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(36));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A0353Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 91u, 0x08A044D4u>(ctx, &aot_mem) && ctx.pc == 0x08A0353Cu) goto L_08A0353C;
    return;
L_08A0353C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03578;
      }
      goto L_08A03544;
    }
L_08A03544:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A03554u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 91u, 0x08A044D4u>(ctx, &aot_mem) && ctx.pc == 0x08A03554u) goto L_08A03554;
    return;
L_08A03554:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03578;
      }
      goto L_08A0355C;
    }
L_08A0355C:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(60));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A0356Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 91u, 0x08A044D4u>(ctx, &aot_mem) && ctx.pc == 0x08A0356Cu) goto L_08A0356C;
    return;
L_08A0356C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03578;
      }
      goto L_08A03574;
    }
L_08A03574:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A03578;
L_08A03578:
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
L_08A03590:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A035FC;
      }
      goto L_08A035A4;
    }
L_08A035A4:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A035F4;
      }
      goto L_08A035B4;
    }
L_08A035B4:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    ctx.gpr[7] = (ctx.gpr[6] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08A03694;
      }
      goto L_08A035C4;
    }
L_08A035C4:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A03604;
      }
      goto L_08A035CC;
    }
L_08A035CC:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A0361C;
      }
      goto L_08A035D4;
    }
L_08A035D4:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08A03634;
      }
      goto L_08A035DC;
    }
L_08A035DC:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A0364C;
      }
      goto L_08A035E4;
    }
L_08A035E4:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08A03664;
      }
      goto L_08A035EC;
    }
L_08A035EC:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08A0367C;
      }
      goto L_08A035F4;
    }
L_08A035F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A036B4;
      }
      goto L_08A035FC;
    }
L_08A035FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A036B4;
      }
      goto L_08A03604;
    }
L_08A03604:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08A03614u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_08A03FC8;
L_08A03614:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A03694;
      }
      goto L_08A0361C;
    }
L_08A0361C:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A0362Cu);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    goto L_08A03FC8;
L_08A0362C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A03694;
      }
      goto L_08A03634;
    }
L_08A03634:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08A03644u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_08A03FC8;
L_08A03644:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A03694;
      }
      goto L_08A0364C;
    }
L_08A0364C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(36));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08A0365Cu);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_08A03FC8;
L_08A0365C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A03694;
      }
      goto L_08A03664;
    }
L_08A03664:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08A03674u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_08A03FC8;
L_08A03674:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A03694;
      }
      goto L_08A0367C;
    }
L_08A0367C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(60));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08A0368Cu);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_08A03FC8;
L_08A0368C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A03694;
      }
      goto L_08A03694;
    }
L_08A03694:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A036A4;
      }
      goto L_08A0369C;
    }
L_08A0369C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A036B4;
      }
      goto L_08A036A4;
    }
L_08A036A4:
    ctx.gpr[31] = (0x08A036ACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A01A2C;
L_08A036AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    goto L_08A036B4;
L_08A036B4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A036C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
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
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08A036F8u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem) && ctx.pc == 0x08A036F8u) goto L_08A036F8;
    return;
L_08A036F8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A03704:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0374C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A03794:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[18]);
    ctx.gpr[8] = (0u | 4u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[8];
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A0381C;
      }
      goto L_08A037C8;
    }
L_08A037C8:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A037DCu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    goto L_08A0374C;
L_08A037DC:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A037F0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    goto L_08A036C4;
L_08A037F0:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03880;
      }
      goto L_08A03814;
    }
L_08A03814:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_08A03864;
      }
      goto L_08A0381C;
    }
L_08A0381C:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A03830u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    goto L_08A036C4;
L_08A03830:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x08A0385Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 527u, 0x088967ACu>(ctx, &aot_mem) && ctx.pc == 0x08A0385Cu) goto L_08A0385C;
    return;
L_08A0385C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03968;
      }
      goto L_08A03864;
    }
L_08A03864:
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A03880;
      }
      goto L_08A03870;
    }
L_08A03870:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A038A4;
      }
      goto L_08A03880;
    }
L_08A03880:
    ctx.gpr[4] = (49024u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    goto L_08A038A4;
L_08A038A4:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A03964;
      }
      goto L_08A038D8;
    }
L_08A038D8:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
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
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; vfpu_value[0u] = 1.0f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 1u, 1u, 3u>();
    ctx.execute_vfpu_vcmp_ct<28u, 32u, 1u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<1u, 1u, 28u, 3u>();
    ctx.execute_vfpu_vcmov_ct<1u, 0u, 3u, 0u, false>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
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
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8988)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A03964;
      }
      goto L_08A0393C;
    }
L_08A0393C:
    ctx.gpr[7] = (16384u << 16u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A03954u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 302u, 0x08891FDCu>(ctx, &aot_mem) && ctx.pc == 0x08A03954u) goto L_08A03954;
    return;
L_08A03954:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03964;
      }
      goto L_08A0395C;
    }
L_08A0395C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A03968;
      }
      goto L_08A03964;
    }
L_08A03964:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A03968;
L_08A03968:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A03988:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (0u | 272u);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[10]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[7]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[11]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[9] & 255u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[20] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[20] < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[20]);
      if (branch_taken) {
          goto L_08A039F4;
      }
      goto L_08A039E8;
    }
L_08A039E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A03A00;
      }
      goto L_08A039F4;
    }
L_08A039F4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[4]);
    goto L_08A03A00;
L_08A03A00:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[22] = (0u | 0u);
      if (branch_taken) {
          goto L_08A03A34;
      }
      goto L_08A03A08;
    }
L_08A03A08:
    ctx.gpr[4] = (ctx.gpr[20] << 8u);
    ctx.gpr[5] = (ctx.gpr[20] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x08A03A1Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem) && ctx.pc == 0x08A03A1Cu) goto L_08A03A1C;
    return;
L_08A03A1C:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08A03A34;
      }
      goto L_08A03A28;
    }
L_08A03A28:
    ctx.gpr[31] = (0x08A03A30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem) && ctx.pc == 0x08A03A30u) goto L_08A03A30;
    return;
L_08A03A30:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    goto L_08A03A34;
L_08A03A34:
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[21] = (ctx.gpr[22] | 0u);
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[17];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A03A64;
      }
      goto L_08A03A44;
    }
L_08A03A44:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(272));
        goto L_08A03A5C;
    }
    goto L_08A03A50;
L_08A03A50:
    ctx.gpr[31] = (0x08A03A58u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    goto L_08A015C8;
L_08A03A58:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(272));
    goto L_08A03A5C;
L_08A03A5C:
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[17];
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(272));
      if (branch_taken) {
          goto L_08A03A44;
      }
      goto L_08A03A64;
    }
L_08A03A64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A03A94;
      }
      goto L_08A03A74;
    }
L_08A03A74:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03A88;
      }
      goto L_08A03A80;
    }
L_08A03A80:
    ctx.gpr[31] = (0x08A03A88u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08A015C8;
L_08A03A88:
    ctx.gpr[23] = (ctx.gpr[22] + static_cast<std::uint32_t>(272));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A03AC8;
      }
      goto L_08A03A94;
    }
L_08A03A94:
    ctx.gpr[23] = (ctx.gpr[22] | 0u);
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A03AC4;
      }
      goto L_08A03AA4;
    }
L_08A03AA4:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-1));
        goto L_08A03ABC;
    }
    goto L_08A03AB0;
L_08A03AB0:
    ctx.gpr[31] = (0x08A03AB8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08A015C8;
L_08A03AB8:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-1));
    goto L_08A03ABC;
L_08A03ABC:
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(272));
      if (branch_taken) {
          goto L_08A03AA4;
      }
      goto L_08A03AC4;
    }
L_08A03AC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08A03AC8;
L_08A03AC8:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A03B00;
      }
      goto L_08A03AD0;
    }
L_08A03AD0:
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[18];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A03B00;
      }
      goto L_08A03ADC;
    }
L_08A03ADC:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(272));
        goto L_08A03AF4;
    }
    goto L_08A03AE8;
L_08A03AE8:
    ctx.gpr[31] = (0x08A03AF0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A015C8;
L_08A03AF0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(272));
    goto L_08A03AF4;
L_08A03AF4:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[18];
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(272));
      if (branch_taken) {
          goto L_08A03ADC;
      }
      goto L_08A03AFC;
    }
L_08A03AFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08A03B00;
L_08A03B00:
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A03B30;
      }
      goto L_08A03B14;
    }
L_08A03B14:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08A03B18;
L_08A03B18:
    ctx.gpr[31] = (0x08A03B20u);
    ctx.gpr[5] = (0u | 2u);
    goto L_08A015F0;
L_08A03B20:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(272));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[17];
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A03B18;
      }
      goto L_08A03B2C;
    }
L_08A03B2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08A03B30;
L_08A03B30:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03B40;
      }
      goto L_08A03B38;
    }
L_08A03B38:
    ctx.gpr[31] = (0x08A03B40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08A03B40u) goto L_08A03B40;
    return;
L_08A03B40:
    ctx.gpr[4] = (ctx.gpr[20] << 8u);
    ctx.gpr[5] = (ctx.gpr[20] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A03B88:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-288));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[9] = (0u | 272u);
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[5]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[8]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[9]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[31]);
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_08A03C08;
      }
      goto L_08A03BD0;
    }
L_08A03BD0:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
    goto L_08A03BD4;
L_08A03BD4:
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A03BF8;
      }
      goto L_08A03BE4;
    }
L_08A03BE4:
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[31] = (0x08A03BF0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A0170C;
L_08A03BF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03C88;
      }
      goto L_08A03BF8;
    }
L_08A03BF8:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(272));
      if (branch_taken) {
          goto L_08A03BD4;
      }
      goto L_08A03C08;
    }
L_08A03C08:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A03C14u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 114u, 0x08A045F0u>(ctx, &aot_mem) && ctx.pc == 0x08A03C14u) goto L_08A03C14;
    return;
L_08A03C14:
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08A03C20u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A0170C;
L_08A03C20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A03C58;
      }
      goto L_08A03C30;
    }
L_08A03C30:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(272));
      if (branch_taken) {
          goto L_08A03C50;
      }
      goto L_08A03C3C;
    }
L_08A03C3C:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08A03C48u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    goto L_08A015C8;
L_08A03C48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(272));
    goto L_08A03C50;
L_08A03C50:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A03C78;
      }
      goto L_08A03C58;
    }
L_08A03C58:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(72));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(272), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x08A03C78u);
    ctx.gpr[9] = (0u | 1u);
    goto L_08A03988;
L_08A03C78:
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08A03C84u);
    ctx.gpr[5] = (0u | 2u);
    goto L_08A015F0;
L_08A03C84:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    goto L_08A03C88;
L_08A03C88:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A03C9C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (0u | 272u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_08A03D08;
      }
      goto L_08A03CC4;
    }
L_08A03CC4:
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    goto L_08A03CC8;
L_08A03CC8:
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[5];
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_08A03CF0;
      }
      goto L_08A03CD8;
    }
L_08A03CD8:
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[5];
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(144));
      if (branch_taken) {
          goto L_08A03CF0;
      }
      goto L_08A03CE0;
    }
L_08A03CE0:
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[5];
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(208));
      if (branch_taken) {
          goto L_08A03CF0;
      }
      goto L_08A03CE8;
    }
L_08A03CE8:
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A03CF8;
      }
      goto L_08A03CF0;
    }
L_08A03CF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A03D0C;
      }
      goto L_08A03CF8;
    }
L_08A03CF8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(272));
      if (branch_taken) {
          goto L_08A03CC8;
      }
      goto L_08A03D08;
    }
L_08A03D08:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A03D0C;
L_08A03D0C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A03D14:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A03D44u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08A03C9C;
L_08A03D44:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03D68;
      }
      goto L_08A03D50;
    }
L_08A03D50:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(60));
      if (branch_taken) {
          goto L_08A03D70;
      }
      goto L_08A03D60;
    }
L_08A03D60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03EB0;
      }
      goto L_08A03D68;
    }
L_08A03D68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03EB0;
      }
      goto L_08A03D70;
    }
L_08A03D70:
    ctx.gpr[22] = (0u | 272u);
    goto L_08A03D74;
L_08A03D74:
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[17];
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(272));
      if (branch_taken) {
          goto L_08A03EA4;
      }
      goto L_08A03D84;
    }
L_08A03D84:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08A03DA0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08A03FC8;
L_08A03DA0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08A03DB4;
      }
      goto L_08A03DB0;
    }
L_08A03DB0:
    ctx.gpr[7] = (0u | 1u);
    goto L_08A03DB4;
L_08A03DB4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x08A03DCCu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08A03FC8;
L_08A03DCC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08A03DE0;
      }
      goto L_08A03DDC;
    }
L_08A03DDC:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_08A03DE0;
L_08A03DE0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(144));
    ctx.gpr[31] = (0x08A03DF8u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08A03FC8;
L_08A03DF8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08A03E0C;
      }
      goto L_08A03E08;
    }
L_08A03E08:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_08A03E0C;
L_08A03E0C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(208));
    ctx.gpr[31] = (0x08A03E20u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08A03FC8;
L_08A03E20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08A03E34;
      }
      goto L_08A03E30;
    }
L_08A03E30:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_08A03E34;
L_08A03E34:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A03E98;
      }
      goto L_08A03E3C;
    }
L_08A03E3C:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[20] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A03E80;
      }
      goto L_08A03E44;
    }
L_08A03E44:
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[20]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[22]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[21] = (ctx.gpr[18] | 0u);
    ctx.gpr[23] = (ctx.lo);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[23]) <= 0;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A03E80;
      }
      goto L_08A03E60;
    }
L_08A03E60:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A03E6Cu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_08A01620;
L_08A03E6C:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(272));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[23]) > 0;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(272));
      if (branch_taken) {
          goto L_08A03E60;
      }
      goto L_08A03E7C;
    }
L_08A03E7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    goto L_08A03E80;
L_08A03E80:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-272));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A03E90u);
    ctx.gpr[5] = (0u | 2u);
    goto L_08A015F0;
L_08A03E90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
      if (branch_taken) {
          goto L_08A03E9C;
      }
      goto L_08A03E98;
    }
L_08A03E98:
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    goto L_08A03E9C;
L_08A03E9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03EA8;
      }
      goto L_08A03EA4;
    }
L_08A03EA4:
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    goto L_08A03EA8;
L_08A03EA8:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A03D74;
      }
      goto L_08A03EB0;
    }
L_08A03EB0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A03EDC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A03EFCu);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 5u, 0x08A04028u>(ctx, &aot_mem) && ctx.pc == 0x08A03EFCu) goto L_08A03EFC;
    return;
L_08A03EFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A03FB0;
      }
      goto L_08A03F08;
    }
L_08A03F08:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A03F18u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 5u, 0x08A04028u>(ctx, &aot_mem) && ctx.pc == 0x08A03F18u) goto L_08A03F18;
    return;
L_08A03F18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A03FA8;
      }
      goto L_08A03F24;
    }
L_08A03F24:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A03F34u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 5u, 0x08A04028u>(ctx, &aot_mem) && ctx.pc == 0x08A03F34u) goto L_08A03F34;
    return;
L_08A03F34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A03FA0;
      }
      goto L_08A03F40;
    }
L_08A03F40:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A03F50u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 5u, 0x08A04028u>(ctx, &aot_mem) && ctx.pc == 0x08A03F50u) goto L_08A03F50;
    return;
L_08A03F50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A03F98;
      }
      goto L_08A03F5C;
    }
L_08A03F5C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A03F6Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 5u, 0x08A04028u>(ctx, &aot_mem) && ctx.pc == 0x08A03F6Cu) goto L_08A03F6C;
    return;
L_08A03F6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A03F90;
      }
      goto L_08A03F78;
    }
L_08A03F78:
    ctx.gpr[31] = (0x08A03F80u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(60));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 5u, 0x08A04028u>(ctx, &aot_mem) && ctx.pc == 0x08A03F80u) goto L_08A03F80;
    return;
L_08A03F80:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A03FB8;
      }
      goto L_08A03F88;
    }
L_08A03F88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A03FBC;
      }
      goto L_08A03F90;
    }
L_08A03F90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A03FBC;
      }
      goto L_08A03F98;
    }
L_08A03F98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A03FBC;
      }
      goto L_08A03FA0;
    }
L_08A03FA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A03FBC;
      }
      goto L_08A03FA8;
    }
L_08A03FA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A03FBC;
      }
      goto L_08A03FB0;
    }
L_08A03FB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A03FBC;
      }
      goto L_08A03FB8;
    }
L_08A03FB8:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A03FBC;
L_08A03FBC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A03FC8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 3u, 0x08A0401Cu>(ctx, &aot_mem); return;
      }
      goto L_08A03FF4;
    }
L_08A03FF4:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 2u, 0x08A0400Cu>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 1u, 0x08A04004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0127(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0127_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_127(Runtime &runtime) {
    runtime.register_generated_unit(127u, 0x08A00000u, 16384u, &recomp_unit_0127, &recomp_unit_0127_entry);
    runtime.register_function(0x08A00000u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00008u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00010u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00030u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00038u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0003Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00044u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00064u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0006Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00074u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00094u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0009Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A000ACu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A000BCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A000C4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A000D8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A000E8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A000F0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A000F4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00104u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0012Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0013Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00148u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0015Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00170u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00178u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00180u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00184u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0019Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0020Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00234u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0024Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A002E8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00314u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0031Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00324u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0032Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00338u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0034Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00358u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00360u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0036Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0037Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0038Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0039Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A003A4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A003C0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A003C4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A003DCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A003E8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A003F4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00410u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00424u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00438u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00440u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00460u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00464u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00468u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00488u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A004B0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A004C8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A004ECu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00504u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00510u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00518u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00548u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0057Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00588u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A005A0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A005C0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A005D8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A005E4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A005ECu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A005F4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A005FCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00604u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0060Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00614u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00618u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00620u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00628u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00640u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00658u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00670u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00678u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00680u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00688u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00690u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00698u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A006A0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A006A8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A006B0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A006B8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A006C0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A006C8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A006D0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A006D8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A006E0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A006E8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A006F0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A006F8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00700u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00708u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00710u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00718u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00720u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00728u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00730u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00738u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00740u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00748u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00750u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00758u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00760u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00768u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00770u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00778u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00780u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00788u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00790u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00798u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A007A0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A007A8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A007B0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A007B4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A007C0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A007D0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A007E4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00808u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00818u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00820u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00828u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00838u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00840u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00848u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00864u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00874u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00878u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0088Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A008B4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A008C4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A008CCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A008D4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A008E0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A008ECu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A008F4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A008FCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00904u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00914u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00924u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0092Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00934u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00940u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00948u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00958u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00970u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00974u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0098Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A009B4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A009C4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A009CCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A009D4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A009E0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A009ECu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A009F4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A009FCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00A04u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00A14u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00A24u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00A2Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00A34u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00A40u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00A48u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00A58u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00A70u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00A74u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00A8Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00AB0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00AC0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00AC8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00AD4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00AECu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00B08u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00B18u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00B20u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00B3Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00B64u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00B78u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00B88u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00B90u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00BB0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00BB8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00BC0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00BC8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00BD4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00BDCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00BE4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00BF0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00BF8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00BFCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00C18u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00C20u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00C2Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00C38u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00C40u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00C50u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00C5Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00C64u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00C6Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00C74u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00C80u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00C88u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00C90u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00C98u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00CA4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00CACu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00CB4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00CBCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00CC8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00CE0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00D04u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00D0Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00D24u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00D40u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00D50u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00D60u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00D68u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00D70u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00D7Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00D88u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00D90u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00D98u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00DA0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00DA8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00DB8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00DC0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00DC4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00DCCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00DD4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00DDCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00DECu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00DF4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00DF8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00E00u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00E08u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00E14u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00E2Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00E50u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00E68u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00E90u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00EA0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00EA8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00EB0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00EBCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00EC8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00ED0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00ED8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00EE0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00EF0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00F00u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00F08u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00F10u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00F1Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00F24u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00F3Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00F40u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00F58u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00F74u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00F84u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00F8Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00F94u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00FA0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00FB0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00FB8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00FBCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00FC4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00FCCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00FE0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A00FF8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01000u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01004u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01010u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01018u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01030u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0104Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0105Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01064u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0106Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01078u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01088u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01090u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01094u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0109Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A010A4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A010B8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A010D4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A010E4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A010ECu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A010F4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A010FCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01110u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01120u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01130u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01154u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01164u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0116Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01174u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01180u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0118Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01194u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0119Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A011ACu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A011C0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A011DCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A011ECu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A011F4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0120Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01220u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01230u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01240u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01248u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01250u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0125Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0126Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01274u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01278u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01280u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01288u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0129Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A012B8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A012C8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A012D0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A012E8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A012F4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01318u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01328u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01330u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0133Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0134Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01364u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01384u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0138Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01394u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A013A4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A013B0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A013B8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A013C0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A013CCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A013D4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A013E0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A013E8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A013F8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01418u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01420u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01434u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01450u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01460u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01474u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01484u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A014A4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A014A8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A014BCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A014C0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A014D4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A014D8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A014E0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A014F8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01504u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01510u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01514u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01528u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01540u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0154Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01558u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A015B0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A015B4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A015C8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A015DCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A015F0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01600u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0160Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01614u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01620u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01634u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01648u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01660u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01704u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0170Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0171Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01760u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01768u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01770u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A017BCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A017C4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A017CCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01818u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01820u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01828u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01830u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01838u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A018C0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A018D0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A018E0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01904u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01924u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0193Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0194Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01954u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0195Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01964u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0196Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01978u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01980u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01988u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01990u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01994u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0199Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A019A4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A019BCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A019D0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A019FCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01A08u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01A10u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01A20u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01A24u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01A2Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01A6Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01A8Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01AACu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01B10u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01B18u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01B2Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01B38u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01B4Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01B74u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01B7Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01B90u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01B9Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01BACu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01BB4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01BBCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01BC8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01BE0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01BECu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01BF8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01C00u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01C08u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01C24u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01C44u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01C60u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01C80u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01CBCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01CC8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01CD8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01CE8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01CF8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01D0Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01D1Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01D24u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01D34u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01D44u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01D50u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01D60u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01D94u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01D9Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01DA0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01DB4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01DC0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01DCCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01DD4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01DD8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01DE4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01DECu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01DFCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01E00u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01E0Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01E1Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01E20u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01E28u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01E34u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01E44u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01E4Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01E58u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01E60u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01E74u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01E7Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01EA4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01EC4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01ED8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01EF4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01EFCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01F00u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01F28u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01F6Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01F78u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01F80u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01F88u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01F90u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01F9Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01FA8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01FB4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01FC4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01FECu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A01FFCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02008u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02010u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02020u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02030u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02038u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02040u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02044u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02050u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02058u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0206Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02074u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0207Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0208Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02098u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A020A0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A020BCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A020C8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A020D4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A020E0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A020ECu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02100u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02108u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02114u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02120u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0212Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02134u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02144u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02168u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02188u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0219Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A021B8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A021C4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A021C8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A021F4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02220u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0222Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0223Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02244u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0224Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02274u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02280u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02290u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02298u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A022A0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A022A4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A022ACu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A022CCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A022DCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A022F4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02304u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0230Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02314u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0231Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02324u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02330u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02338u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02340u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02348u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0234Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02354u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0235Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02374u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0237Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02390u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A023A4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A023FCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0241Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0242Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02444u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02454u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0245Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02464u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0246Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02474u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02480u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02488u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02490u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02498u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0249Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A024A4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A024ACu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A024C4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A024CCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A024D4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A024F4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02504u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0251Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0252Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02534u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0253Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02544u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0254Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02558u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02560u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02568u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02570u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02574u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0257Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02584u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0259Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A025A4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A025ACu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A025CCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A025DCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A025F4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02604u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0260Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02614u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0261Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02624u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02630u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02638u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02640u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02648u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0264Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02654u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0265Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02674u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0267Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02684u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02694u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A026A0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A026A4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A026ACu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A026CCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A026DCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A026F4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02704u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0270Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02714u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0271Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02724u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02730u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02738u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02740u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02748u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0274Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02754u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0275Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02774u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0277Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A027A4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A027B0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A027C8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A027DCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02808u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02830u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02838u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02840u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02890u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02898u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A028ACu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A028C4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A028DCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A028F0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02900u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02910u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0291Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02928u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02930u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02940u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0294Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02954u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0295Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02968u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02974u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02980u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02988u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02990u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A029A0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A029ACu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A029B8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A029C0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A029D0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A029D4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A029DCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A029E8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A029F0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02A20u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02A80u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02A94u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02AC0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02ACCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02B18u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02B6Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02BA8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02BB0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02BC0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02BC8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02BD8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02BE4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02BF0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02BFCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02C1Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02C30u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02C7Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02C9Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02CACu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02CB8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02CC0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02CD8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02CE8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02CF0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02CF8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02D00u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02D08u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02D14u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02D1Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02D24u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02D2Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02D30u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02D38u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02D40u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02D58u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02D60u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02D68u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02D9Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02DA8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02DB0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02DC0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02DC8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02DD0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02DD8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02DE0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02DE8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02DF0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02DF8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02E00u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02E14u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02E1Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02E30u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02E38u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02E4Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02E54u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02E68u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02E70u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02E84u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02E8Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02EA0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02EA8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02EACu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02EC8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02EF4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02F08u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02F14u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02F1Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02F30u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02F38u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02F40u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02F48u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02F50u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02F58u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02F60u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02F68u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02F70u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02F78u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02F8Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02F94u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02FA8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02FB0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02FC4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02FCCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02FE0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02FE8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A02FFCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03004u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03018u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03020u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03024u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03040u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03064u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03078u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03084u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0308Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A030A0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A030A8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A030B0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A030B8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A030C0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A030C8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A030D0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A030D8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A030E0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A030E8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A030F8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03100u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03110u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03118u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03128u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03130u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03140u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03148u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03158u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03160u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03170u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03178u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0317Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03194u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A031B8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A031CCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A031D8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A031E0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A031F4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A031FCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03204u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0320Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03214u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0321Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03224u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0322Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03234u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0323Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0324Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03254u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03264u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0326Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0327Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03284u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03294u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0329Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A032ACu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A032B4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A032C4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A032CCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A032D0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A032E8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0330Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03320u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0332Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03334u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03348u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03350u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03358u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03360u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03368u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03370u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03378u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03380u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03388u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03390u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A033A0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A033A8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A033B8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A033C0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A033D0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A033D8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A033E8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A033F0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03400u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03408u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03418u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03420u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03424u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0343Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03460u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03474u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03480u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03488u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0349Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A034A4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A034ACu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A034B4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A034BCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A034C4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A034CCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A034D4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A034DCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A034E4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A034F4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A034FCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0350Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03514u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03524u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0352Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0353Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03544u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03554u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0355Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0356Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03574u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03578u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03590u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A035A4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A035B4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A035C4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A035CCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A035D4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A035DCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A035E4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A035ECu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A035F4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A035FCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03604u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03614u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0361Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0362Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03634u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03644u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0364Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0365Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03664u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03674u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0367Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0368Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03694u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0369Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A036A4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A036ACu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A036B4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A036C4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A036F8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03704u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0374Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03794u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A037C8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A037DCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A037F0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03814u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0381Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03830u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0385Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03864u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03870u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03880u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A038A4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A038D8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0393Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03954u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A0395Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03964u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03968u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03988u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A039E8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A039F4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03A00u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03A08u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03A1Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03A28u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03A30u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03A34u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03A44u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03A50u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03A58u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03A5Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03A64u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03A74u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03A80u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03A88u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03A94u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03AA4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03AB0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03AB8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03ABCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03AC4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03AC8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03AD0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03ADCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03AE8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03AF0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03AF4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03AFCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03B00u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03B14u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03B18u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03B20u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03B2Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03B30u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03B38u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03B40u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03B88u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03BD0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03BD4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03BE4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03BF0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03BF8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03C08u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03C14u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03C20u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03C30u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03C3Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03C48u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03C50u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03C58u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03C78u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03C84u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03C88u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03C9Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03CC4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03CC8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03CD8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03CE0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03CE8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03CF0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03CF8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03D08u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03D0Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03D14u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03D44u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03D50u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03D60u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03D68u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03D70u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03D74u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03D84u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03DA0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03DB0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03DB4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03DCCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03DDCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03DE0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03DF8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03E08u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03E0Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03E20u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03E30u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03E34u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03E3Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03E44u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03E60u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03E6Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03E7Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03E80u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03E90u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03E98u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03E9Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03EA4u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03EA8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03EB0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03EDCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03EFCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03F08u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03F18u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03F24u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03F34u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03F40u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03F50u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03F5Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03F6Cu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03F78u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03F80u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03F88u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03F90u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03F98u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03FA0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03FA8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03FB0u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03FB8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03FBCu, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03FC8u, &recomp_unit_0127, "recomp_unit_0127");
    runtime.register_function(0x08A03FF4u, &recomp_unit_0127, "recomp_unit_0127");
}
} // namespace psprecomp
