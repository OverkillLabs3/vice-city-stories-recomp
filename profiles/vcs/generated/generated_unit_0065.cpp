#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0065[4095] = {
    1, 0, 2, 0, 3, 0, 0, 4, 0, 5, 6, 0, 7, 0, 8, 0, 9, 0, 10, 0, 0, 11, 0, 12, 0, 13, 14, 0, 0, 0, 0, 0,
    15, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 18, 0, 0, 19, 0, 20, 0, 0, 21, 0, 22, 0,
    23, 0, 24, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 27, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0,
    29, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 35, 0, 0, 36,
    0, 0, 37, 0, 38, 0, 39, 0, 0, 0, 40, 0, 41, 0, 0, 0, 42, 0, 43, 0, 44, 0, 45, 0, 46, 0, 47, 0, 48, 0, 0, 0,
    0, 49, 50, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 55,
    0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 57, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 59, 0, 60, 0, 0, 0, 0, 0, 0, 61, 62,
    0, 0, 0, 63, 0, 0, 64, 65, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 0, 0,
    0, 0, 69, 0, 70, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 72, 0, 73, 0, 0, 0, 0, 0, 0, 74, 75, 0, 0, 0, 76, 0, 0,
    77, 78, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 82, 0, 0, 83, 0,
    0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 85, 0, 86, 0, 87, 0, 0, 88, 0, 89, 0, 0, 90, 91, 0, 92, 0, 93, 0, 0, 94, 95,
    0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 97, 0, 98, 0, 99, 0, 100, 0, 0, 0, 101, 0, 0, 102, 0, 103, 0, 0, 0, 0, 0,
    0, 104, 0, 0, 105, 0, 0, 106, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0,
    111, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 113, 0, 0, 114, 0, 0, 115, 116, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0,
    118, 0, 119, 0, 0, 120, 0, 0, 0, 0, 121, 0, 0, 122, 0, 123, 0, 124, 0, 0, 125, 0, 126, 0, 127, 0, 128, 0, 129, 0, 0, 130,
    0, 0, 0, 0, 0, 131, 0, 0, 132, 133, 0, 134, 0, 135, 0, 0, 0, 0, 136, 0, 137, 0, 138, 0, 139, 0, 0, 0, 140, 0, 141, 0,
    0, 142, 143, 0, 0, 144, 145, 0, 0, 0, 0, 146, 147, 0, 148, 0, 149, 0, 150, 0, 151, 0, 0, 0, 0, 0, 152, 0, 0, 0, 153, 0,
    154, 0, 155, 0, 0, 156, 0, 0, 157, 0, 0, 158, 0, 159, 0, 0, 0, 160, 0, 161, 0, 162, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 166, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 170, 0, 0,
    171, 0, 172, 173, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 177, 0, 0, 178,
    0, 179, 180, 0, 0, 0, 181, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 184, 0, 0, 0, 0, 185,
    0, 0, 0, 0, 186, 0, 0, 187, 0, 188, 0, 0, 189, 0, 190, 0, 191, 0, 192, 0, 0, 193, 0, 194, 0, 0, 195, 0, 196, 0, 0, 197,
    0, 198, 0, 199, 0, 200, 0, 0, 201, 0, 0, 0, 0, 0, 202, 0, 203, 0, 204, 0, 0, 0, 205, 0, 206, 0, 0, 0, 0, 0, 207, 0,
    208, 0, 209, 0, 0, 0, 210, 0, 211, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 213, 0, 0, 0, 214, 0, 215, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 218, 0, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 221, 0, 222, 0,
    0, 0, 223, 0, 224, 0, 0, 225, 0, 226, 0, 227, 0, 0, 0, 228, 0, 0, 229, 0, 0, 230, 0, 231, 0, 232, 233, 0, 234, 0, 0, 0,
    0, 0, 235, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 238, 239, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0,
    0, 241, 0, 0, 242, 0, 0, 243, 0, 244, 0, 245, 0, 0, 246, 0, 247, 0, 248, 0, 0, 249, 0, 250, 0, 251, 252, 0, 253, 0, 254, 0,
    0, 255, 0, 0, 256, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 258, 259, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 261, 0,
    262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0,
    0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 266, 0, 267, 268, 0, 0, 269, 270, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 273, 0, 274, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 276, 0, 277,
    0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 279, 280, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 283, 0, 0, 284, 0, 285, 0, 286, 0, 0, 287, 0, 288, 0, 289, 0, 290, 0, 291, 0, 0, 292, 0, 293, 0, 0, 294, 0, 0, 295, 0,
    0, 296, 0, 0, 297, 0, 298, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0,
    301, 0, 0, 0, 0, 0, 0, 302, 0, 303, 0, 0, 0, 0, 304, 0, 305, 0, 306, 307, 0, 0, 0, 308, 309, 0, 310, 0, 0, 311, 312, 0,
    0, 313, 0, 0, 0, 0, 0, 314, 0, 0, 315, 0, 316, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 319, 0, 0, 0,
    0, 0, 0, 320, 0, 321, 0, 322, 0, 323, 0, 0, 324, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 326, 0, 0, 0, 0, 327, 0, 328, 0,
    329, 0, 0, 0, 0, 330, 0, 331, 0, 0, 0, 332, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 334, 0, 335, 0, 336, 0, 337, 0, 338, 0,
    0, 0, 339, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 342, 343,
    0, 344, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 346, 0, 0, 0, 0, 347, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 349, 0,
    0, 0, 0, 0, 0, 350, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 354, 0, 0,
    0, 355, 0, 356, 0, 357, 0, 0, 358, 0, 359, 0, 360, 0, 0, 0, 361, 0, 0, 0, 362, 0, 363, 0, 364, 0, 365, 0, 0, 0, 0, 0,
    0, 366, 0, 367, 0, 0, 0, 368, 0, 369, 0, 370, 0, 0, 371, 0, 372, 0, 373, 0, 0, 374, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0,
    0, 376, 0, 377, 0, 378, 0, 0, 0, 0, 0, 379, 0, 380, 0, 381, 0, 382, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0,
    385, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 388, 0, 389, 0, 390, 0, 391, 0, 392, 0, 393, 0,
    0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 395, 0, 396, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 398, 0, 0, 0, 399, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 402, 0, 0, 403, 0, 0, 404, 0, 0,
    0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 407, 0, 0, 0, 408, 0, 0, 409, 0, 0, 0, 0, 0, 0,
    410, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 413, 0, 414, 0, 415, 0, 0, 0, 416, 0, 0, 0, 417,
    0, 418, 0, 419, 0, 0, 0, 420, 0, 0, 0, 421, 0, 422, 0, 423, 0, 424, 425, 0, 426, 0, 0, 0, 0, 0, 427, 0, 428, 0, 0, 0,
    429, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 432, 0, 0, 0, 433, 0, 0, 0, 0, 434, 0, 435, 0, 436, 0, 437,
    438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 440, 0, 0, 0, 441, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 443, 0, 444, 0, 0, 0, 445, 0, 0, 0, 0, 446, 0, 447, 0, 448, 0, 449, 0, 0, 0, 0, 0, 0, 0, 450,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 451, 0, 452, 0, 0, 0, 453, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0,
    455, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 458, 0, 0, 0, 459, 0, 460, 0, 461, 0, 0, 0, 462, 0, 0, 463, 0, 0,
    464, 0, 465, 0, 466, 0, 0, 0, 467, 0, 468, 0, 0, 0, 0, 0, 469, 0, 470, 0, 471, 0, 0, 0, 472, 0, 473, 0, 474, 0, 475, 0,
    476, 0, 477, 0, 478, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 480, 0, 481, 0, 482, 0, 483, 0, 0, 484, 0, 0, 0, 485, 0, 0, 0,
    486, 0, 487, 0, 488, 0, 489, 0, 0, 0, 0, 490, 0, 0, 0, 491, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 492, 0, 493, 0, 494, 0, 0, 495, 0, 496, 0, 497, 0, 498, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 499, 0, 0,
    500, 0, 0, 0, 501, 0, 0, 0, 502, 0, 503, 0, 504, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 505, 0, 506, 507, 0, 508, 0, 0, 0, 0, 0, 509, 0, 0, 0, 0, 0, 0, 0, 510, 0, 0, 0, 0, 0, 0, 511, 0,
    512, 0, 0, 513, 0, 514, 515, 0, 0, 516, 0, 0, 0, 0, 0, 0, 0, 0, 517, 0, 0, 0, 518, 0, 519, 0, 520, 0, 0, 0, 521, 0,
    0, 522, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 523, 0, 0, 0, 0, 524, 0, 0, 0, 525, 0, 526,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 527, 0, 528, 0, 0, 0, 529, 0, 0, 0, 0, 0, 530, 0, 531, 0, 532, 0,
    0, 0, 0, 0, 533, 0, 0, 0, 534, 0, 0, 535, 0, 536, 0, 537, 0, 0, 538, 0, 539, 540, 0, 0, 541, 0, 0, 0, 0, 0, 0, 0,
    0, 542, 0, 543, 0, 0, 0, 0, 0, 0, 544, 0, 0, 545, 0, 546, 0, 0, 0, 0, 0, 0, 0, 0, 547, 0, 0, 0, 548, 0, 0, 0,
    0, 0, 549, 0, 550, 0, 0, 0, 551, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 552, 0, 553, 0, 0, 554, 0, 555, 0, 556, 0, 557, 0,
    0, 0, 558, 0, 0, 559, 0, 0, 0, 0, 0, 560, 0, 0, 0, 0, 0, 561, 0, 0, 0, 0, 0, 0, 0, 0, 562, 0, 563, 0, 564, 0,
    0, 565, 0, 566, 567, 0, 0, 568, 0, 0, 0, 0, 0, 0, 0, 569, 0, 0, 0, 0, 0, 0, 570, 0, 571, 0, 0, 0, 0, 572, 573, 0,
    574, 0, 575, 0, 0, 576, 0, 0, 0, 0, 0, 577, 0, 578, 0, 0, 579, 0, 0, 580, 0, 0, 0, 581, 0, 0, 0, 0, 582, 0, 0, 0,
    0, 0, 0, 583, 0, 584, 0, 585, 0, 0, 586, 0, 0, 587, 0, 0, 0, 588, 0, 0, 0, 589, 0, 0, 0, 590, 0, 591, 0, 0, 0, 0,
    592, 0, 0, 0, 0, 0, 0, 593, 0, 0, 0, 0, 0, 0, 0, 0, 594, 0, 0, 0, 0, 595, 0, 596, 0, 0, 597, 0, 0, 0, 0, 0,
    0, 598, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 599, 0, 0, 0, 600, 0, 0, 601, 0, 0, 0, 0, 0, 0, 0, 602, 0, 0, 0, 0,
    603, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 604, 0, 0, 0, 605, 0, 0, 606, 0, 607, 0, 608, 0, 0, 0, 0, 609, 0,
    0, 0, 610, 0, 0, 611, 0, 612, 0, 0, 0, 0, 0, 0, 0, 613, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 614, 0, 0, 0, 615, 0,
    0, 616, 0, 0, 0, 0, 0, 0, 0, 617, 0, 0, 0, 0, 618, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 619, 0, 620, 0,
    621, 0, 0, 0, 0, 622, 0, 0, 0, 623, 0, 0, 0, 0, 624, 0, 0, 625, 0, 0, 0, 0, 0, 0, 626, 0, 0, 627, 0, 0, 0, 628,
    629, 0, 630, 0, 0, 0, 0, 0, 0, 0, 631, 0, 0, 0, 0, 0, 0, 0, 0, 0, 632, 0, 633, 0, 634, 0, 635, 0, 636, 0, 0, 0,
    637, 0, 638, 0, 0, 0, 0, 0, 0, 639, 0, 640, 0, 641, 0, 0, 0, 642, 0, 0, 0, 643, 0, 0, 0, 644, 0, 0, 0, 0, 645, 0,
    646, 0, 647, 0, 648, 0, 649, 0, 650, 0, 651, 0, 0, 0, 0, 652, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 653, 0, 0,
    0, 0, 0, 0, 654, 0, 0, 0, 655, 0, 0, 0, 0, 0, 0, 656, 0, 657, 0, 658, 0, 659, 0, 660, 0, 661, 0, 662, 0, 0, 0, 0,
    0, 663, 0, 0, 0, 664, 0, 0, 0, 665, 0, 0, 0, 0, 0, 0, 666, 0, 667, 0, 668, 0, 669, 0, 670, 0, 0, 0, 0, 671, 0, 0,
    0, 0, 0, 672, 0, 673, 0, 674, 0, 675, 0, 676, 0, 0, 0, 0, 677, 0, 0, 0, 678, 0, 0, 0, 679, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 680, 0, 681, 0, 682, 0, 0, 0, 0, 683, 0, 0, 684, 0, 0, 0, 0, 685, 0, 0, 0,
    0, 686, 0, 0, 0, 0, 0, 0, 0, 0, 0, 687, 0, 688, 0, 0, 0, 0, 0, 689, 0, 0, 0, 0, 0, 690, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 691, 0, 0, 0, 692, 0, 693, 0, 694, 0, 695, 0, 0, 0, 0, 0, 696, 0, 697, 0, 0, 0, 0, 0, 698, 0, 0, 0, 699,
    0, 700, 0, 701, 0, 702, 0, 703, 0, 704, 0, 705, 0, 0, 706, 0, 707, 0, 0, 0, 0, 0, 708, 0, 0, 0, 0, 0, 0, 0, 0, 709,
    0, 0, 710, 0, 0, 0, 0, 711, 0, 712, 0, 0, 713, 0, 0, 714, 0, 0, 0, 0, 0, 0, 715, 0, 0, 0, 0, 0, 0, 0, 0, 716,
    0, 717, 0, 0, 0, 0, 0, 718, 0, 0, 0, 0, 0, 719, 0, 0, 0, 0, 0, 0, 0, 0, 0, 720, 0, 0, 0, 721, 0, 722, 0, 723,
    0, 724, 0, 725, 0, 726, 0, 727, 0, 728, 0, 0, 0, 0, 0, 729, 0, 0, 0, 0, 0, 0, 0, 0, 730, 0, 0, 731, 0, 0, 732, 0,
    0, 733, 0, 0, 734, 0, 0, 0, 0, 0, 0, 735, 0, 0, 0, 0, 0, 736, 0, 0, 0, 0, 0, 0, 737, 0, 0, 738, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 739, 0, 0, 740, 0, 741, 0, 742, 0, 743, 0, 744, 0, 0, 745, 0, 0, 0, 0, 0, 0, 746,
    747, 0, 0, 0, 0, 748, 0, 0, 0, 0, 0, 749, 0, 0, 0, 0, 0, 0, 750, 0, 0, 0, 751, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    752, 0, 753, 0, 0, 0, 0, 0, 754, 0, 0, 0, 0, 0, 755, 0, 0, 0, 0, 0, 0, 0, 0, 0, 756, 0, 0, 0, 757, 0, 758, 0,
    759, 0, 760, 0, 761, 0, 0, 0, 762, 0, 763, 0, 764, 0, 765, 0, 766, 0, 767, 0, 768, 0, 0, 0, 0, 0, 769, 0, 0, 0, 0, 0,
    0, 0, 0, 770, 0, 0, 0, 771, 0, 772, 0, 0, 0, 0, 773, 0, 0, 774, 0, 0, 775, 0, 0, 776, 0, 0, 0, 0, 0, 0, 777, 0,
    0, 0, 0, 778, 0, 0, 0, 0, 0, 0, 779, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 780, 0, 0, 0, 0, 0, 781,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 782, 0, 0, 0, 0, 783, 0, 784, 0, 785, 0, 0, 0, 786, 0, 0, 0, 0, 0, 787, 0, 788, 0,
    789, 0, 790, 0, 791, 0, 792, 0, 0, 793, 0, 0, 794, 0, 0, 795, 0, 0, 0, 0, 0, 796, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    797, 0, 798, 0, 0, 0, 0, 0, 0, 0, 799, 0, 0, 0, 0, 800, 0, 0, 0, 0, 801, 0, 0, 0, 802, 0, 0, 0, 0, 0, 0, 803,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 804, 0, 0, 0, 0, 0, 805, 0, 0, 0, 0, 0, 0, 0, 0, 0, 806, 0,
    807, 0, 808, 0, 0, 0, 809, 0, 810, 0, 811, 0, 812, 0, 813, 0, 814, 0, 0, 815, 0, 0, 816, 0, 0, 0, 0, 0, 0, 817, 0, 0,
    0, 0, 0, 818, 0, 0, 0, 0, 0, 0, 0, 819, 0, 0, 0, 0, 820, 0, 0, 821, 0, 822, 0, 0, 0, 0, 0, 0, 0, 823, 0, 0,
    0, 0, 824, 0, 0, 0, 0, 825, 0, 0, 0, 826, 0, 0, 0, 0, 0, 0, 827, 0, 0, 0, 0, 828, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 829, 0, 830, 0, 0, 0, 0, 831, 0, 0, 832, 0, 0, 0, 0, 833, 0, 834, 0, 835, 0, 0, 0, 0, 0, 0, 836, 0, 0, 0,
    0, 0, 837, 0, 838, 0, 0, 839, 0, 0, 0, 0, 0, 840, 0, 841, 0, 0, 842, 0, 843, 0, 0, 0, 844, 0, 845, 0, 846, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 847, 0, 848, 0, 0, 849, 0, 850, 0, 0, 851, 0, 852, 0, 853, 0,
    0, 0, 854, 0, 0, 0, 0, 0, 0, 0, 0, 0, 855, 0, 0, 856, 0, 857, 0, 858, 0, 859, 0, 860, 0, 0, 0, 0, 861, 0, 0, 0,
    0, 0, 0, 0, 0, 862, 0, 0, 0, 0, 0, 863, 0, 0, 0, 864, 0, 0, 865, 0, 866, 0, 867, 0, 0, 868, 0, 0, 869, 0, 870, 0,
    0, 0, 0, 0, 0, 871, 0, 872, 0, 0, 873, 0, 0, 0, 874, 0, 875, 0, 876, 0, 0, 877, 0, 0, 878, 0, 0, 0, 0, 0, 0, 0,
    0, 879, 0, 0, 880, 0, 0, 0, 0, 0, 881, 0, 882, 0, 883, 0, 0, 0, 0, 884, 0, 0, 0, 0, 885, 0, 886, 0, 887, 0, 888, 0,
    0, 0, 0, 889, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 890, 0, 891, 0, 892, 0, 893, 0, 0, 894, 0, 895, 896,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 897, 0, 0, 898, 0, 0, 0, 0, 0, 0,
    899, 0, 0, 0, 0, 0, 900, 0, 901, 0, 0, 0, 902, 0, 0, 903, 0, 0, 904, 0, 0, 905, 0, 0, 0, 0, 0, 0, 906, 0, 0, 907,
    0, 0, 0, 0, 0, 0, 0, 908, 0, 0, 909, 0, 0, 0, 0, 0, 0, 0, 0, 910, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 911, 0, 0, 0, 0, 912, 0, 0, 0, 0, 0, 0, 0, 913, 0, 914, 0, 915, 0, 0, 916, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 917, 0, 0, 0, 0, 0, 0, 918, 0, 0, 0, 0, 919, 0, 0, 0, 0, 0, 0, 920, 0, 921, 0, 922, 0, 0, 0, 0, 0, 0,
    923, 0, 0, 924, 0, 0, 0, 925, 0, 0, 0, 0, 0, 0, 0, 926, 0, 0, 927, 0, 0, 0, 928, 0, 929, 0, 0, 0, 0, 0, 0, 930,
    0, 0, 0, 0, 931, 0, 932, 0, 0, 933, 934, 0, 935, 0, 936, 0, 0, 937, 0, 938, 0, 0, 939, 0, 0, 0, 0, 940, 0, 0, 0, 0,
    0, 0, 941, 0, 942, 0, 0, 0, 943, 0, 0, 0, 0, 944, 0, 0, 0, 0, 945, 0, 0, 0, 946, 0, 0, 0, 0, 0, 0, 947, 0, 948,
    0, 949, 0, 0, 0, 0, 0, 0, 0, 950, 0, 0, 951, 0, 0, 952, 0, 0, 953, 0, 954, 0, 955, 0, 0, 0, 956, 0, 0, 957, 0, 958,
    0, 959, 0, 0, 0, 0, 0, 0, 960, 0, 0, 0, 0, 0, 961, 0, 0, 962, 0, 0, 963, 0, 964, 0, 965, 0, 0, 0, 966, 0, 0, 967,
    0, 0, 968, 0, 969, 0, 0, 0, 0, 0, 970, 0, 0, 0, 971, 0, 0, 972, 0, 0, 0, 0, 0, 973, 0, 974, 0, 0, 975, 0, 0, 976,
    0, 0, 0, 977, 0, 0, 978, 0, 0, 0, 0, 0, 979, 0, 980, 0, 0, 981, 0, 0, 982, 0, 983, 0, 984, 0, 0, 0, 0, 0, 0, 985,
    0, 986, 0, 0, 0, 987, 0, 988, 0, 0, 0, 989, 0, 990, 0, 0, 0, 991, 0, 0, 0, 992, 0, 0, 0, 993, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 994, 0, 0, 0, 0, 0, 0, 0, 995,
    0, 996, 0, 0, 0, 0, 0, 0, 0, 0, 0, 997, 0, 0, 0, 998, 0, 0, 0, 0, 999, 0, 0, 1000, 0, 0, 0, 0, 0, 0, 1001,
};
void recomp_unit_0065_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08908000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0065[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08908000;
    case 2u: goto L_08908008;
    case 3u: goto L_08908010;
    case 4u: goto L_0890801C;
    case 5u: goto L_08908024;
    case 6u: goto L_08908028;
    case 7u: goto L_08908030;
    case 8u: goto L_08908038;
    case 9u: goto L_08908040;
    case 10u: goto L_08908048;
    case 11u: goto L_08908054;
    case 12u: goto L_0890805C;
    case 13u: goto L_08908064;
    case 14u: goto L_08908068;
    case 15u: goto L_08908080;
    case 16u: goto L_089080A4;
    case 17u: goto L_089080C8;
    case 18u: goto L_089080D0;
    case 19u: goto L_089080DC;
    case 20u: goto L_089080E4;
    case 21u: goto L_089080F0;
    case 22u: goto L_089080F8;
    case 23u: goto L_08908100;
    case 24u: goto L_08908108;
    case 25u: goto L_08908128;
    case 26u: goto L_08908148;
    case 27u: goto L_08908154;
    case 28u: goto L_0890816C;
    case 29u: goto L_08908180;
    case 30u: goto L_0890818C;
    case 31u: goto L_0890819C;
    case 32u: goto L_089081B0;
    case 33u: goto L_089081BC;
    case 34u: goto L_089081E8;
    case 35u: goto L_089081F0;
    case 36u: goto L_089081FC;
    case 37u: goto L_08908208;
    case 38u: goto L_08908210;
    case 39u: goto L_08908218;
    case 40u: goto L_08908228;
    case 41u: goto L_08908230;
    case 42u: goto L_08908240;
    case 43u: goto L_08908248;
    case 44u: goto L_08908250;
    case 45u: goto L_08908258;
    case 46u: goto L_08908260;
    case 47u: goto L_08908268;
    case 48u: goto L_08908270;
    case 49u: goto L_08908284;
    case 50u: goto L_08908288;
    case 51u: goto L_089082A8;
    case 52u: goto L_089082B8;
    case 53u: goto L_089082C8;
    case 54u: goto L_089082EC;
    case 55u: goto L_089082FC;
    case 56u: goto L_08908320;
    case 57u: goto L_08908328;
    case 58u: goto L_08908340;
    case 59u: goto L_08908354;
    case 60u: goto L_0890835C;
    case 61u: goto L_08908378;
    case 62u: goto L_0890837C;
    case 63u: goto L_0890838C;
    case 64u: goto L_08908398;
    case 65u: goto L_0890839C;
    case 66u: goto L_089083B4;
    case 67u: goto L_089083D8;
    case 68u: goto L_089083E8;
    case 69u: goto L_08908408;
    case 70u: goto L_08908410;
    case 71u: goto L_08908428;
    case 72u: goto L_0890843C;
    case 73u: goto L_08908444;
    case 74u: goto L_08908460;
    case 75u: goto L_08908464;
    case 76u: goto L_08908474;
    case 77u: goto L_08908480;
    case 78u: goto L_08908484;
    case 79u: goto L_0890849C;
    case 80u: goto L_089084BC;
    case 81u: goto L_089084D4;
    case 82u: goto L_089084EC;
    case 83u: goto L_089084F8;
    case 84u: goto L_0890850C;
    case 85u: goto L_08908528;
    case 86u: goto L_08908530;
    case 87u: goto L_08908538;
    case 88u: goto L_08908544;
    case 89u: goto L_0890854C;
    case 90u: goto L_08908558;
    case 91u: goto L_0890855C;
    case 92u: goto L_08908564;
    case 93u: goto L_0890856C;
    case 94u: goto L_08908578;
    case 95u: goto L_0890857C;
    case 96u: goto L_0890858C;
    case 97u: goto L_089085AC;
    case 98u: goto L_089085B4;
    case 99u: goto L_089085BC;
    case 100u: goto L_089085C4;
    case 101u: goto L_089085D4;
    case 102u: goto L_089085E0;
    case 103u: goto L_089085E8;
    case 104u: goto L_08908604;
    case 105u: goto L_08908610;
    case 106u: goto L_0890861C;
    case 107u: goto L_08908630;
    case 108u: goto L_08908648;
    case 109u: goto L_08908650;
    case 110u: goto L_08908674;
    case 111u: goto L_08908680;
    case 112u: goto L_089086A0;
    case 113u: goto L_089086AC;
    case 114u: goto L_089086B8;
    case 115u: goto L_089086C4;
    case 116u: goto L_089086C8;
    case 117u: goto L_089086DC;
    case 118u: goto L_08908700;
    case 119u: goto L_08908708;
    case 120u: goto L_08908714;
    case 121u: goto L_08908728;
    case 122u: goto L_08908734;
    case 123u: goto L_0890873C;
    case 124u: goto L_08908744;
    case 125u: goto L_08908750;
    case 126u: goto L_08908758;
    case 127u: goto L_08908760;
    case 128u: goto L_08908768;
    case 129u: goto L_08908770;
    case 130u: goto L_0890877C;
    case 131u: goto L_08908794;
    case 132u: goto L_089087A0;
    case 133u: goto L_089087A4;
    case 134u: goto L_089087AC;
    case 135u: goto L_089087B4;
    case 136u: goto L_089087C8;
    case 137u: goto L_089087D0;
    case 138u: goto L_089087D8;
    case 139u: goto L_089087E0;
    case 140u: goto L_089087F0;
    case 141u: goto L_089087F8;
    case 142u: goto L_08908804;
    case 143u: goto L_08908808;
    case 144u: goto L_08908814;
    case 145u: goto L_08908818;
    case 146u: goto L_0890882C;
    case 147u: goto L_08908830;
    case 148u: goto L_08908838;
    case 149u: goto L_08908840;
    case 150u: goto L_08908848;
    case 151u: goto L_08908850;
    case 152u: goto L_08908868;
    case 153u: goto L_08908878;
    case 154u: goto L_08908880;
    case 155u: goto L_08908888;
    case 156u: goto L_08908894;
    case 157u: goto L_089088A0;
    case 158u: goto L_089088AC;
    case 159u: goto L_089088B4;
    case 160u: goto L_089088C4;
    case 161u: goto L_089088CC;
    case 162u: goto L_089088D4;
    case 163u: goto L_089088F4;
    case 164u: goto L_08908920;
    case 165u: goto L_08908934;
    case 166u: goto L_0890893C;
    case 167u: goto L_08908948;
    case 168u: goto L_08908958;
    case 169u: goto L_08908968;
    case 170u: goto L_08908974;
    case 171u: goto L_08908980;
    case 172u: goto L_08908988;
    case 173u: goto L_0890898C;
    case 174u: goto L_089089A0;
    case 175u: goto L_089089B8;
    case 176u: goto L_089089DC;
    case 177u: goto L_089089F0;
    case 178u: goto L_089089FC;
    case 179u: goto L_08908A04;
    case 180u: goto L_08908A08;
    case 181u: goto L_08908A18;
    case 182u: goto L_08908A2C;
    case 183u: goto L_08908A5C;
    case 184u: goto L_08908A68;
    case 185u: goto L_08908A7C;
    case 186u: goto L_08908A90;
    case 187u: goto L_08908A9C;
    case 188u: goto L_08908AA4;
    case 189u: goto L_08908AB0;
    case 190u: goto L_08908AB8;
    case 191u: goto L_08908AC0;
    case 192u: goto L_08908AC8;
    case 193u: goto L_08908AD4;
    case 194u: goto L_08908ADC;
    case 195u: goto L_08908AE8;
    case 196u: goto L_08908AF0;
    case 197u: goto L_08908AFC;
    case 198u: goto L_08908B04;
    case 199u: goto L_08908B0C;
    case 200u: goto L_08908B14;
    case 201u: goto L_08908B20;
    case 202u: goto L_08908B38;
    case 203u: goto L_08908B40;
    case 204u: goto L_08908B48;
    case 205u: goto L_08908B58;
    case 206u: goto L_08908B60;
    case 207u: goto L_08908B78;
    case 208u: goto L_08908B80;
    case 209u: goto L_08908B88;
    case 210u: goto L_08908B98;
    case 211u: goto L_08908BA0;
    case 212u: goto L_08908BB8;
    case 213u: goto L_08908BD0;
    case 214u: goto L_08908BE0;
    case 215u: goto L_08908BE8;
    case 216u: goto L_08908C10;
    case 217u: goto L_08908C34;
    case 218u: goto L_08908C40;
    case 219u: goto L_08908C50;
    case 220u: goto L_08908C68;
    case 221u: goto L_08908C70;
    case 222u: goto L_08908C78;
    case 223u: goto L_08908C88;
    case 224u: goto L_08908C90;
    case 225u: goto L_08908C9C;
    case 226u: goto L_08908CA4;
    case 227u: goto L_08908CAC;
    case 228u: goto L_08908CBC;
    case 229u: goto L_08908CC8;
    case 230u: goto L_08908CD4;
    case 231u: goto L_08908CDC;
    case 232u: goto L_08908CE4;
    case 233u: goto L_08908CE8;
    case 234u: goto L_08908CF0;
    case 235u: goto L_08908D08;
    case 236u: goto L_08908D20;
    case 237u: goto L_08908D48;
    case 238u: goto L_08908D50;
    case 239u: goto L_08908D54;
    case 240u: goto L_08908D60;
    case 241u: goto L_08908D84;
    case 242u: goto L_08908D90;
    case 243u: goto L_08908D9C;
    case 244u: goto L_08908DA4;
    case 245u: goto L_08908DAC;
    case 246u: goto L_08908DB8;
    case 247u: goto L_08908DC0;
    case 248u: goto L_08908DC8;
    case 249u: goto L_08908DD4;
    case 250u: goto L_08908DDC;
    case 251u: goto L_08908DE4;
    case 252u: goto L_08908DE8;
    case 253u: goto L_08908DF0;
    case 254u: goto L_08908DF8;
    case 255u: goto L_08908E04;
    case 256u: goto L_08908E10;
    case 257u: goto L_08908E24;
    case 258u: goto L_08908E40;
    case 259u: goto L_08908E44;
    case 260u: goto L_08908E60;
    case 261u: goto L_08908E78;
    case 262u: goto L_08908E80;
    case 263u: goto L_08908ED0;
    case 264u: goto L_08908EF8;
    case 265u: goto L_08908F18;
    case 266u: goto L_08908F28;
    case 267u: goto L_08908F30;
    case 268u: goto L_08908F34;
    case 269u: goto L_08908F40;
    case 270u: goto L_08908F44;
    case 271u: goto L_08908F64;
    case 272u: goto L_08908FA0;
    case 273u: goto L_08908FBC;
    case 274u: goto L_08908FC4;
    case 275u: goto L_08908FD8;
    case 276u: goto L_08908FF4;
    case 277u: goto L_08908FFC;
    case 278u: goto L_08909010;
    case 279u: goto L_0890902C;
    case 280u: goto L_08909030;
    case 281u: goto L_08909054;
    case 282u: goto L_0890905C;
    case 283u: goto L_08909084;
    case 284u: goto L_08909090;
    case 285u: goto L_08909098;
    case 286u: goto L_089090A0;
    case 287u: goto L_089090AC;
    case 288u: goto L_089090B4;
    case 289u: goto L_089090BC;
    case 290u: goto L_089090C4;
    case 291u: goto L_089090CC;
    case 292u: goto L_089090D8;
    case 293u: goto L_089090E0;
    case 294u: goto L_089090EC;
    case 295u: goto L_089090F8;
    case 296u: goto L_08909104;
    case 297u: goto L_08909110;
    case 298u: goto L_08909118;
    case 299u: goto L_08909134;
    case 300u: goto L_08909168;
    case 301u: goto L_08909180;
    case 302u: goto L_0890919C;
    case 303u: goto L_089091A4;
    case 304u: goto L_089091B8;
    case 305u: goto L_089091C0;
    case 306u: goto L_089091C8;
    case 307u: goto L_089091CC;
    case 308u: goto L_089091DC;
    case 309u: goto L_089091E0;
    case 310u: goto L_089091E8;
    case 311u: goto L_089091F4;
    case 312u: goto L_089091F8;
    case 313u: goto L_08909204;
    case 314u: goto L_0890921C;
    case 315u: goto L_08909228;
    case 316u: goto L_08909230;
    case 317u: goto L_08909244;
    case 318u: goto L_08909260;
    case 319u: goto L_08909270;
    case 320u: goto L_0890928C;
    case 321u: goto L_08909294;
    case 322u: goto L_0890929C;
    case 323u: goto L_089092A4;
    case 324u: goto L_089092B0;
    case 325u: goto L_089092C8;
    case 326u: goto L_089092DC;
    case 327u: goto L_089092F0;
    case 328u: goto L_089092F8;
    case 329u: goto L_08909300;
    case 330u: goto L_08909314;
    case 331u: goto L_0890931C;
    case 332u: goto L_0890932C;
    case 333u: goto L_08909344;
    case 334u: goto L_08909358;
    case 335u: goto L_08909360;
    case 336u: goto L_08909368;
    case 337u: goto L_08909370;
    case 338u: goto L_08909378;
    case 339u: goto L_08909388;
    case 340u: goto L_08909394;
    case 341u: goto L_089093D8;
    case 342u: goto L_089093F8;
    case 343u: goto L_089093FC;
    case 344u: goto L_08909404;
    case 345u: goto L_08909420;
    case 346u: goto L_08909434;
    case 347u: goto L_08909448;
    case 348u: goto L_08909458;
    case 349u: goto L_08909478;
    case 350u: goto L_08909494;
    case 351u: goto L_089094A0;
    case 352u: goto L_089094C8;
    case 353u: goto L_089094EC;
    case 354u: goto L_089094F4;
    case 355u: goto L_08909504;
    case 356u: goto L_0890950C;
    case 357u: goto L_08909514;
    case 358u: goto L_08909520;
    case 359u: goto L_08909528;
    case 360u: goto L_08909530;
    case 361u: goto L_08909540;
    case 362u: goto L_08909550;
    case 363u: goto L_08909558;
    case 364u: goto L_08909560;
    case 365u: goto L_08909568;
    case 366u: goto L_08909584;
    case 367u: goto L_0890958C;
    case 368u: goto L_0890959C;
    case 369u: goto L_089095A4;
    case 370u: goto L_089095AC;
    case 371u: goto L_089095B8;
    case 372u: goto L_089095C0;
    case 373u: goto L_089095C8;
    case 374u: goto L_089095D4;
    case 375u: goto L_089095E0;
    case 376u: goto L_08909604;
    case 377u: goto L_0890960C;
    case 378u: goto L_08909614;
    case 379u: goto L_0890962C;
    case 380u: goto L_08909634;
    case 381u: goto L_0890963C;
    case 382u: goto L_08909644;
    case 383u: goto L_08909654;
    case 384u: goto L_08909670;
    case 385u: goto L_08909680;
    case 386u: goto L_08909698;
    case 387u: goto L_089096B0;
    case 388u: goto L_089096D0;
    case 389u: goto L_089096D8;
    case 390u: goto L_089096E0;
    case 391u: goto L_089096E8;
    case 392u: goto L_089096F0;
    case 393u: goto L_089096F8;
    case 394u: goto L_0890970C;
    case 395u: goto L_0890972C;
    case 396u: goto L_08909734;
    case 397u: goto L_08909744;
    case 398u: goto L_08909784;
    case 399u: goto L_08909794;
    case 400u: goto L_089097A8;
    case 401u: goto L_089097C4;
    case 402u: goto L_089097DC;
    case 403u: goto L_089097E8;
    case 404u: goto L_089097F4;
    case 405u: goto L_08909804;
    case 406u: goto L_08909840;
    case 407u: goto L_08909848;
    case 408u: goto L_08909858;
    case 409u: goto L_08909864;
    case 410u: goto L_08909880;
    case 411u: goto L_089098A0;
    case 412u: goto L_089098C4;
    case 413u: goto L_089098CC;
    case 414u: goto L_089098D4;
    case 415u: goto L_089098DC;
    case 416u: goto L_089098EC;
    case 417u: goto L_089098FC;
    case 418u: goto L_08909904;
    case 419u: goto L_0890990C;
    case 420u: goto L_0890991C;
    case 421u: goto L_0890992C;
    case 422u: goto L_08909934;
    case 423u: goto L_0890993C;
    case 424u: goto L_08909944;
    case 425u: goto L_08909948;
    case 426u: goto L_08909950;
    case 427u: goto L_08909968;
    case 428u: goto L_08909970;
    case 429u: goto L_08909980;
    case 430u: goto L_08909990;
    case 431u: goto L_089099B8;
    case 432u: goto L_089099C0;
    case 433u: goto L_089099D0;
    case 434u: goto L_089099E4;
    case 435u: goto L_089099EC;
    case 436u: goto L_089099F4;
    case 437u: goto L_089099FC;
    case 438u: goto L_08909A00;
    case 439u: goto L_08909A3C;
    case 440u: goto L_08909A44;
    case 441u: goto L_08909A54;
    case 442u: goto L_08909A64;
    case 443u: goto L_08909A98;
    case 444u: goto L_08909AA0;
    case 445u: goto L_08909AB0;
    case 446u: goto L_08909AC4;
    case 447u: goto L_08909ACC;
    case 448u: goto L_08909AD4;
    case 449u: goto L_08909ADC;
    case 450u: goto L_08909AFC;
    case 451u: goto L_08909B34;
    case 452u: goto L_08909B3C;
    case 453u: goto L_08909B4C;
    case 454u: goto L_08909B60;
    case 455u: goto L_08909B80;
    case 456u: goto L_08909B88;
    case 457u: goto L_08909BB0;
    case 458u: goto L_08909BB8;
    case 459u: goto L_08909BC8;
    case 460u: goto L_08909BD0;
    case 461u: goto L_08909BD8;
    case 462u: goto L_08909BE8;
    case 463u: goto L_08909BF4;
    case 464u: goto L_08909C00;
    case 465u: goto L_08909C08;
    case 466u: goto L_08909C10;
    case 467u: goto L_08909C20;
    case 468u: goto L_08909C28;
    case 469u: goto L_08909C40;
    case 470u: goto L_08909C48;
    case 471u: goto L_08909C50;
    case 472u: goto L_08909C60;
    case 473u: goto L_08909C68;
    case 474u: goto L_08909C70;
    case 475u: goto L_08909C78;
    case 476u: goto L_08909C80;
    case 477u: goto L_08909C88;
    case 478u: goto L_08909C90;
    case 479u: goto L_08909CA4;
    case 480u: goto L_08909CBC;
    case 481u: goto L_08909CC4;
    case 482u: goto L_08909CCC;
    case 483u: goto L_08909CD4;
    case 484u: goto L_08909CE0;
    case 485u: goto L_08909CF0;
    case 486u: goto L_08909D00;
    case 487u: goto L_08909D08;
    case 488u: goto L_08909D10;
    case 489u: goto L_08909D18;
    case 490u: goto L_08909D2C;
    case 491u: goto L_08909D3C;
    case 492u: goto L_08909D8C;
    case 493u: goto L_08909D94;
    case 494u: goto L_08909D9C;
    case 495u: goto L_08909DA8;
    case 496u: goto L_08909DB0;
    case 497u: goto L_08909DB8;
    case 498u: goto L_08909DC0;
    case 499u: goto L_08909DF4;
    case 500u: goto L_08909E00;
    case 501u: goto L_08909E10;
    case 502u: goto L_08909E20;
    case 503u: goto L_08909E28;
    case 504u: goto L_08909E30;
    case 505u: goto L_08909E90;
    case 506u: goto L_08909E98;
    case 507u: goto L_08909E9C;
    case 508u: goto L_08909EA4;
    case 509u: goto L_08909EBC;
    case 510u: goto L_08909EDC;
    case 511u: goto L_08909EF8;
    case 512u: goto L_08909F00;
    case 513u: goto L_08909F0C;
    case 514u: goto L_08909F14;
    case 515u: goto L_08909F18;
    case 516u: goto L_08909F24;
    case 517u: goto L_08909F48;
    case 518u: goto L_08909F58;
    case 519u: goto L_08909F60;
    case 520u: goto L_08909F68;
    case 521u: goto L_08909F78;
    case 522u: goto L_08909F84;
    case 523u: goto L_08909FD0;
    case 524u: goto L_08909FE4;
    case 525u: goto L_08909FF4;
    case 526u: goto L_08909FFC;
    case 527u: goto L_0890A038;
    case 528u: goto L_0890A040;
    case 529u: goto L_0890A050;
    case 530u: goto L_0890A068;
    case 531u: goto L_0890A070;
    case 532u: goto L_0890A078;
    case 533u: goto L_0890A090;
    case 534u: goto L_0890A0A0;
    case 535u: goto L_0890A0AC;
    case 536u: goto L_0890A0B4;
    case 537u: goto L_0890A0BC;
    case 538u: goto L_0890A0C8;
    case 539u: goto L_0890A0D0;
    case 540u: goto L_0890A0D4;
    case 541u: goto L_0890A0E0;
    case 542u: goto L_0890A104;
    case 543u: goto L_0890A10C;
    case 544u: goto L_0890A128;
    case 545u: goto L_0890A134;
    case 546u: goto L_0890A13C;
    case 547u: goto L_0890A160;
    case 548u: goto L_0890A170;
    case 549u: goto L_0890A188;
    case 550u: goto L_0890A190;
    case 551u: goto L_0890A1A0;
    case 552u: goto L_0890A1CC;
    case 553u: goto L_0890A1D4;
    case 554u: goto L_0890A1E0;
    case 555u: goto L_0890A1E8;
    case 556u: goto L_0890A1F0;
    case 557u: goto L_0890A1F8;
    case 558u: goto L_0890A208;
    case 559u: goto L_0890A214;
    case 560u: goto L_0890A22C;
    case 561u: goto L_0890A244;
    case 562u: goto L_0890A268;
    case 563u: goto L_0890A270;
    case 564u: goto L_0890A278;
    case 565u: goto L_0890A284;
    case 566u: goto L_0890A28C;
    case 567u: goto L_0890A290;
    case 568u: goto L_0890A29C;
    case 569u: goto L_0890A2BC;
    case 570u: goto L_0890A2D8;
    case 571u: goto L_0890A2E0;
    case 572u: goto L_0890A2F4;
    case 573u: goto L_0890A2F8;
    case 574u: goto L_0890A300;
    case 575u: goto L_0890A308;
    case 576u: goto L_0890A314;
    case 577u: goto L_0890A32C;
    case 578u: goto L_0890A334;
    case 579u: goto L_0890A340;
    case 580u: goto L_0890A34C;
    case 581u: goto L_0890A35C;
    case 582u: goto L_0890A370;
    case 583u: goto L_0890A38C;
    case 584u: goto L_0890A394;
    case 585u: goto L_0890A39C;
    case 586u: goto L_0890A3A8;
    case 587u: goto L_0890A3B4;
    case 588u: goto L_0890A3C4;
    case 589u: goto L_0890A3D4;
    case 590u: goto L_0890A3E4;
    case 591u: goto L_0890A3EC;
    case 592u: goto L_0890A400;
    case 593u: goto L_0890A41C;
    case 594u: goto L_0890A440;
    case 595u: goto L_0890A454;
    case 596u: goto L_0890A45C;
    case 597u: goto L_0890A468;
    case 598u: goto L_0890A484;
    case 599u: goto L_0890A4B0;
    case 600u: goto L_0890A4C0;
    case 601u: goto L_0890A4CC;
    case 602u: goto L_0890A4EC;
    case 603u: goto L_0890A500;
    case 604u: goto L_0890A538;
    case 605u: goto L_0890A548;
    case 606u: goto L_0890A554;
    case 607u: goto L_0890A55C;
    case 608u: goto L_0890A564;
    case 609u: goto L_0890A578;
    case 610u: goto L_0890A588;
    case 611u: goto L_0890A594;
    case 612u: goto L_0890A59C;
    case 613u: goto L_0890A5BC;
    case 614u: goto L_0890A5E8;
    case 615u: goto L_0890A5F8;
    case 616u: goto L_0890A604;
    case 617u: goto L_0890A624;
    case 618u: goto L_0890A638;
    case 619u: goto L_0890A670;
    case 620u: goto L_0890A678;
    case 621u: goto L_0890A680;
    case 622u: goto L_0890A694;
    case 623u: goto L_0890A6A4;
    case 624u: goto L_0890A6B8;
    case 625u: goto L_0890A6C4;
    case 626u: goto L_0890A6E0;
    case 627u: goto L_0890A6EC;
    case 628u: goto L_0890A6FC;
    case 629u: goto L_0890A700;
    case 630u: goto L_0890A708;
    case 631u: goto L_0890A728;
    case 632u: goto L_0890A750;
    case 633u: goto L_0890A758;
    case 634u: goto L_0890A760;
    case 635u: goto L_0890A768;
    case 636u: goto L_0890A770;
    case 637u: goto L_0890A780;
    case 638u: goto L_0890A788;
    case 639u: goto L_0890A7A4;
    case 640u: goto L_0890A7AC;
    case 641u: goto L_0890A7B4;
    case 642u: goto L_0890A7C4;
    case 643u: goto L_0890A7D4;
    case 644u: goto L_0890A7E4;
    case 645u: goto L_0890A7F8;
    case 646u: goto L_0890A800;
    case 647u: goto L_0890A808;
    case 648u: goto L_0890A810;
    case 649u: goto L_0890A818;
    case 650u: goto L_0890A820;
    case 651u: goto L_0890A828;
    case 652u: goto L_0890A83C;
    case 653u: goto L_0890A874;
    case 654u: goto L_0890A890;
    case 655u: goto L_0890A8A0;
    case 656u: goto L_0890A8BC;
    case 657u: goto L_0890A8C4;
    case 658u: goto L_0890A8CC;
    case 659u: goto L_0890A8D4;
    case 660u: goto L_0890A8DC;
    case 661u: goto L_0890A8E4;
    case 662u: goto L_0890A8EC;
    case 663u: goto L_0890A904;
    case 664u: goto L_0890A914;
    case 665u: goto L_0890A924;
    case 666u: goto L_0890A940;
    case 667u: goto L_0890A948;
    case 668u: goto L_0890A950;
    case 669u: goto L_0890A958;
    case 670u: goto L_0890A960;
    case 671u: goto L_0890A974;
    case 672u: goto L_0890A98C;
    case 673u: goto L_0890A994;
    case 674u: goto L_0890A99C;
    case 675u: goto L_0890A9A4;
    case 676u: goto L_0890A9AC;
    case 677u: goto L_0890A9C0;
    case 678u: goto L_0890A9D0;
    case 679u: goto L_0890A9E0;
    case 680u: goto L_0890AA2C;
    case 681u: goto L_0890AA34;
    case 682u: goto L_0890AA3C;
    case 683u: goto L_0890AA50;
    case 684u: goto L_0890AA5C;
    case 685u: goto L_0890AA70;
    case 686u: goto L_0890AA84;
    case 687u: goto L_0890AAAC;
    case 688u: goto L_0890AAB4;
    case 689u: goto L_0890AACC;
    case 690u: goto L_0890AAE4;
    case 691u: goto L_0890AB0C;
    case 692u: goto L_0890AB1C;
    case 693u: goto L_0890AB24;
    case 694u: goto L_0890AB2C;
    case 695u: goto L_0890AB34;
    case 696u: goto L_0890AB4C;
    case 697u: goto L_0890AB54;
    case 698u: goto L_0890AB6C;
    case 699u: goto L_0890AB7C;
    case 700u: goto L_0890AB84;
    case 701u: goto L_0890AB8C;
    case 702u: goto L_0890AB94;
    case 703u: goto L_0890AB9C;
    case 704u: goto L_0890ABA4;
    case 705u: goto L_0890ABAC;
    case 706u: goto L_0890ABB8;
    case 707u: goto L_0890ABC0;
    case 708u: goto L_0890ABD8;
    case 709u: goto L_0890ABFC;
    case 710u: goto L_0890AC08;
    case 711u: goto L_0890AC1C;
    case 712u: goto L_0890AC24;
    case 713u: goto L_0890AC30;
    case 714u: goto L_0890AC3C;
    case 715u: goto L_0890AC58;
    case 716u: goto L_0890AC7C;
    case 717u: goto L_0890AC84;
    case 718u: goto L_0890AC9C;
    case 719u: goto L_0890ACB4;
    case 720u: goto L_0890ACDC;
    case 721u: goto L_0890ACEC;
    case 722u: goto L_0890ACF4;
    case 723u: goto L_0890ACFC;
    case 724u: goto L_0890AD04;
    case 725u: goto L_0890AD0C;
    case 726u: goto L_0890AD14;
    case 727u: goto L_0890AD1C;
    case 728u: goto L_0890AD24;
    case 729u: goto L_0890AD3C;
    case 730u: goto L_0890AD60;
    case 731u: goto L_0890AD6C;
    case 732u: goto L_0890AD78;
    case 733u: goto L_0890AD84;
    case 734u: goto L_0890AD90;
    case 735u: goto L_0890ADAC;
    case 736u: goto L_0890ADC4;
    case 737u: goto L_0890ADE0;
    case 738u: goto L_0890ADEC;
    case 739u: goto L_0890AE28;
    case 740u: goto L_0890AE34;
    case 741u: goto L_0890AE3C;
    case 742u: goto L_0890AE44;
    case 743u: goto L_0890AE4C;
    case 744u: goto L_0890AE54;
    case 745u: goto L_0890AE60;
    case 746u: goto L_0890AE7C;
    case 747u: goto L_0890AE80;
    case 748u: goto L_0890AE94;
    case 749u: goto L_0890AEAC;
    case 750u: goto L_0890AEC8;
    case 751u: goto L_0890AED8;
    case 752u: goto L_0890AF00;
    case 753u: goto L_0890AF08;
    case 754u: goto L_0890AF20;
    case 755u: goto L_0890AF38;
    case 756u: goto L_0890AF60;
    case 757u: goto L_0890AF70;
    case 758u: goto L_0890AF78;
    case 759u: goto L_0890AF80;
    case 760u: goto L_0890AF88;
    case 761u: goto L_0890AF90;
    case 762u: goto L_0890AFA0;
    case 763u: goto L_0890AFA8;
    case 764u: goto L_0890AFB0;
    case 765u: goto L_0890AFB8;
    case 766u: goto L_0890AFC0;
    case 767u: goto L_0890AFC8;
    case 768u: goto L_0890AFD0;
    case 769u: goto L_0890AFE8;
    case 770u: goto L_0890B00C;
    case 771u: goto L_0890B01C;
    case 772u: goto L_0890B024;
    case 773u: goto L_0890B038;
    case 774u: goto L_0890B044;
    case 775u: goto L_0890B050;
    case 776u: goto L_0890B05C;
    case 777u: goto L_0890B078;
    case 778u: goto L_0890B08C;
    case 779u: goto L_0890B0A8;
    case 780u: goto L_0890B0E4;
    case 781u: goto L_0890B0FC;
    case 782u: goto L_0890B124;
    case 783u: goto L_0890B138;
    case 784u: goto L_0890B140;
    case 785u: goto L_0890B148;
    case 786u: goto L_0890B158;
    case 787u: goto L_0890B170;
    case 788u: goto L_0890B178;
    case 789u: goto L_0890B180;
    case 790u: goto L_0890B188;
    case 791u: goto L_0890B190;
    case 792u: goto L_0890B198;
    case 793u: goto L_0890B1A4;
    case 794u: goto L_0890B1B0;
    case 795u: goto L_0890B1BC;
    case 796u: goto L_0890B1D4;
    case 797u: goto L_0890B200;
    case 798u: goto L_0890B208;
    case 799u: goto L_0890B228;
    case 800u: goto L_0890B23C;
    case 801u: goto L_0890B250;
    case 802u: goto L_0890B260;
    case 803u: goto L_0890B27C;
    case 804u: goto L_0890B2B8;
    case 805u: goto L_0890B2D0;
    case 806u: goto L_0890B2F8;
    case 807u: goto L_0890B300;
    case 808u: goto L_0890B308;
    case 809u: goto L_0890B318;
    case 810u: goto L_0890B320;
    case 811u: goto L_0890B328;
    case 812u: goto L_0890B330;
    case 813u: goto L_0890B338;
    case 814u: goto L_0890B340;
    case 815u: goto L_0890B34C;
    case 816u: goto L_0890B358;
    case 817u: goto L_0890B374;
    case 818u: goto L_0890B38C;
    case 819u: goto L_0890B3AC;
    case 820u: goto L_0890B3C0;
    case 821u: goto L_0890B3CC;
    case 822u: goto L_0890B3D4;
    case 823u: goto L_0890B3F4;
    case 824u: goto L_0890B408;
    case 825u: goto L_0890B41C;
    case 826u: goto L_0890B42C;
    case 827u: goto L_0890B448;
    case 828u: goto L_0890B45C;
    case 829u: goto L_0890B488;
    case 830u: goto L_0890B490;
    case 831u: goto L_0890B4A4;
    case 832u: goto L_0890B4B0;
    case 833u: goto L_0890B4C4;
    case 834u: goto L_0890B4CC;
    case 835u: goto L_0890B4D4;
    case 836u: goto L_0890B4F0;
    case 837u: goto L_0890B508;
    case 838u: goto L_0890B510;
    case 839u: goto L_0890B51C;
    case 840u: goto L_0890B534;
    case 841u: goto L_0890B53C;
    case 842u: goto L_0890B548;
    case 843u: goto L_0890B550;
    case 844u: goto L_0890B560;
    case 845u: goto L_0890B568;
    case 846u: goto L_0890B570;
    case 847u: goto L_0890B5C0;
    case 848u: goto L_0890B5C8;
    case 849u: goto L_0890B5D4;
    case 850u: goto L_0890B5DC;
    case 851u: goto L_0890B5E8;
    case 852u: goto L_0890B5F0;
    case 853u: goto L_0890B5F8;
    case 854u: goto L_0890B608;
    case 855u: goto L_0890B630;
    case 856u: goto L_0890B63C;
    case 857u: goto L_0890B644;
    case 858u: goto L_0890B64C;
    case 859u: goto L_0890B654;
    case 860u: goto L_0890B65C;
    case 861u: goto L_0890B670;
    case 862u: goto L_0890B694;
    case 863u: goto L_0890B6AC;
    case 864u: goto L_0890B6BC;
    case 865u: goto L_0890B6C8;
    case 866u: goto L_0890B6D0;
    case 867u: goto L_0890B6D8;
    case 868u: goto L_0890B6E4;
    case 869u: goto L_0890B6F0;
    case 870u: goto L_0890B6F8;
    case 871u: goto L_0890B714;
    case 872u: goto L_0890B71C;
    case 873u: goto L_0890B728;
    case 874u: goto L_0890B738;
    case 875u: goto L_0890B740;
    case 876u: goto L_0890B748;
    case 877u: goto L_0890B754;
    case 878u: goto L_0890B760;
    case 879u: goto L_0890B784;
    case 880u: goto L_0890B790;
    case 881u: goto L_0890B7A8;
    case 882u: goto L_0890B7B0;
    case 883u: goto L_0890B7B8;
    case 884u: goto L_0890B7CC;
    case 885u: goto L_0890B7E0;
    case 886u: goto L_0890B7E8;
    case 887u: goto L_0890B7F0;
    case 888u: goto L_0890B7F8;
    case 889u: goto L_0890B80C;
    case 890u: goto L_0890B84C;
    case 891u: goto L_0890B854;
    case 892u: goto L_0890B85C;
    case 893u: goto L_0890B864;
    case 894u: goto L_0890B870;
    case 895u: goto L_0890B878;
    case 896u: goto L_0890B87C;
    case 897u: goto L_0890B8D8;
    case 898u: goto L_0890B8E4;
    case 899u: goto L_0890B900;
    case 900u: goto L_0890B918;
    case 901u: goto L_0890B920;
    case 902u: goto L_0890B930;
    case 903u: goto L_0890B93C;
    case 904u: goto L_0890B948;
    case 905u: goto L_0890B954;
    case 906u: goto L_0890B970;
    case 907u: goto L_0890B97C;
    case 908u: goto L_0890B99C;
    case 909u: goto L_0890B9A8;
    case 910u: goto L_0890B9CC;
    case 911u: goto L_0890BA0C;
    case 912u: goto L_0890BA20;
    case 913u: goto L_0890BA40;
    case 914u: goto L_0890BA48;
    case 915u: goto L_0890BA50;
    case 916u: goto L_0890BA5C;
    case 917u: goto L_0890BA88;
    case 918u: goto L_0890BAA4;
    case 919u: goto L_0890BAB8;
    case 920u: goto L_0890BAD4;
    case 921u: goto L_0890BADC;
    case 922u: goto L_0890BAE4;
    case 923u: goto L_0890BB00;
    case 924u: goto L_0890BB0C;
    case 925u: goto L_0890BB1C;
    case 926u: goto L_0890BB3C;
    case 927u: goto L_0890BB48;
    case 928u: goto L_0890BB58;
    case 929u: goto L_0890BB60;
    case 930u: goto L_0890BB7C;
    case 931u: goto L_0890BB90;
    case 932u: goto L_0890BB98;
    case 933u: goto L_0890BBA4;
    case 934u: goto L_0890BBA8;
    case 935u: goto L_0890BBB0;
    case 936u: goto L_0890BBB8;
    case 937u: goto L_0890BBC4;
    case 938u: goto L_0890BBCC;
    case 939u: goto L_0890BBD8;
    case 940u: goto L_0890BBEC;
    case 941u: goto L_0890BC08;
    case 942u: goto L_0890BC10;
    case 943u: goto L_0890BC20;
    case 944u: goto L_0890BC34;
    case 945u: goto L_0890BC48;
    case 946u: goto L_0890BC58;
    case 947u: goto L_0890BC74;
    case 948u: goto L_0890BC7C;
    case 949u: goto L_0890BC84;
    case 950u: goto L_0890BCA4;
    case 951u: goto L_0890BCB0;
    case 952u: goto L_0890BCBC;
    case 953u: goto L_0890BCC8;
    case 954u: goto L_0890BCD0;
    case 955u: goto L_0890BCD8;
    case 956u: goto L_0890BCE8;
    case 957u: goto L_0890BCF4;
    case 958u: goto L_0890BCFC;
    case 959u: goto L_0890BD04;
    case 960u: goto L_0890BD20;
    case 961u: goto L_0890BD38;
    case 962u: goto L_0890BD44;
    case 963u: goto L_0890BD50;
    case 964u: goto L_0890BD58;
    case 965u: goto L_0890BD60;
    case 966u: goto L_0890BD70;
    case 967u: goto L_0890BD7C;
    case 968u: goto L_0890BD88;
    case 969u: goto L_0890BD90;
    case 970u: goto L_0890BDA8;
    case 971u: goto L_0890BDB8;
    case 972u: goto L_0890BDC4;
    case 973u: goto L_0890BDDC;
    case 974u: goto L_0890BDE4;
    case 975u: goto L_0890BDF0;
    case 976u: goto L_0890BDFC;
    case 977u: goto L_0890BE0C;
    case 978u: goto L_0890BE18;
    case 979u: goto L_0890BE30;
    case 980u: goto L_0890BE38;
    case 981u: goto L_0890BE44;
    case 982u: goto L_0890BE50;
    case 983u: goto L_0890BE58;
    case 984u: goto L_0890BE60;
    case 985u: goto L_0890BE7C;
    case 986u: goto L_0890BE84;
    case 987u: goto L_0890BE94;
    case 988u: goto L_0890BE9C;
    case 989u: goto L_0890BEAC;
    case 990u: goto L_0890BEB4;
    case 991u: goto L_0890BEC4;
    case 992u: goto L_0890BED4;
    case 993u: goto L_0890BEE4;
    case 994u: goto L_0890BF5C;
    case 995u: goto L_0890BF7C;
    case 996u: goto L_0890BF84;
    case 997u: goto L_0890BFAC;
    case 998u: goto L_0890BFBC;
    case 999u: goto L_0890BFD0;
    case 1000u: goto L_0890BFDC;
    case 1001u: goto L_0890BFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08908000:
    ctx.gpr[31] = (0x08908008u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(772)));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 180u, 0x08945288u>(ctx, &aot_mem) && ctx.pc == 0x08908008u) goto L_08908008;
    return;
L_08908008:
    ctx.gpr[31] = (0x08908010u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 460u, 0x088DF770u>(ctx, &aot_mem) && ctx.pc == 0x08908010u) goto L_08908010;
    return;
L_08908010:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(772)));
    ctx.gpr[31] = (0x0890801Cu);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 518u, 0x0895B97Cu>(ctx, &aot_mem) && ctx.pc == 0x0890801Cu) goto L_0890801C;
    return;
L_0890801C:
    ctx.gpr[31] = (0x08908024u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 658u, 0x089730ACu>(ctx, &aot_mem) && ctx.pc == 0x08908024u) goto L_08908024;
    return;
L_08908024:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(772), 0u);
    goto L_08908028;
L_08908028:
    ctx.gpr[31] = (0x08908030u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08908030u) goto L_08908030;
    return;
L_08908030:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08908068;
      }
      goto L_08908038;
    }
L_08908038:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 362u);
      if (branch_taken) {
          goto L_08908048;
      }
      goto L_08908040;
    }
L_08908040:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08908068;
      }
      goto L_08908048;
    }
L_08908048:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3240)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08908068;
      }
      goto L_08908054;
    }
L_08908054:
    ctx.gpr[31] = (0x0890805Cu);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 518u, 0x0895B97Cu>(ctx, &aot_mem) && ctx.pc == 0x0890805Cu) goto L_0890805C;
    return;
L_0890805C:
    ctx.gpr[31] = (0x08908064u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 658u, 0x089730ACu>(ctx, &aot_mem) && ctx.pc == 0x08908064u) goto L_08908064;
    return;
L_08908064:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3240), 0u);
    goto L_08908068;
L_08908068:
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
L_08908080:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08908154;
      }
      goto L_089080A4;
    }
L_089080A4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089080DC;
      }
      goto L_089080C8;
    }
L_089080C8:
    ctx.gpr[31] = (0x089080D0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem) && ctx.pc == 0x089080D0u) goto L_089080D0;
    return;
L_089080D0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (0x089080DCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 922u, 0x08907F9Cu>(ctx, &aot_mem) && ctx.pc == 0x089080DCu) goto L_089080DC;
    return;
L_089080DC:
    ctx.gpr[31] = (0x089080E4u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1929), static_cast<std::uint8_t>(ctx.gpr[16]));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x089080E4u) goto L_089080E4;
    return;
L_089080E4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08908108;
      }
      goto L_089080F0;
    }
L_089080F0:
    ctx.gpr[31] = (0x089080F8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x089080F8u) goto L_089080F8;
    return;
L_089080F8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08908108;
      }
      goto L_08908100;
    }
L_08908100:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1929))))));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3256), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08908108;
L_08908108:
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
    ctx.gpr[5] = (ctx.gpr[16] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08908154;
      }
      goto L_08908128;
    }
L_08908128:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[31] = (0x08908148u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem) && ctx.pc == 0x08908148u) goto L_08908148;
    return;
L_08908148:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (0x08908154u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 897u, 0x08907E38u>(ctx, &aot_mem) && ctx.pc == 0x08908154u) goto L_08908154;
    return;
L_08908154:
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
L_0890816C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08908180u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_089082A8;
L_08908180:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890818Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_08908080;
L_0890818C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890819C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1680), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x089081B0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1684), ctx.gpr[6]);
    goto L_089081BC;
L_089081B0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089081BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1680)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.gpr[20] = (0u | 48u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[20];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08908210;
      }
      goto L_089081E8;
    }
L_089081E8:
    ctx.gpr[31] = (0x089081F0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem) && ctx.pc == 0x089081F0u) goto L_089081F0;
    return;
L_089081F0:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (0x089081FCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1680)));
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem) && ctx.pc == 0x089081FCu) goto L_089081FC;
    return;
L_089081FC:
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[17];
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(100)));
      if (branch_taken) {
          goto L_08908218;
      }
      goto L_08908208;
    }
L_08908208:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08908228;
      }
      goto L_08908210;
    }
L_08908210:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08908288;
      }
      goto L_08908218;
    }
L_08908218:
    ctx.gpr[6] = (ctx.gpr[28] + static_cast<std::uint32_t>(-20280));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08908228u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08908228u) goto L_08908228;
    return;
L_08908228:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08908240;
      }
      goto L_08908230;
    }
L_08908230:
    ctx.gpr[6] = (ctx.gpr[28] + static_cast<std::uint32_t>(-20280));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08908240u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08908240u) goto L_08908240;
    return;
L_08908240:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08908258;
      }
      goto L_08908248;
    }
L_08908248:
    ctx.gpr[31] = (0x08908250u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 607u, 0x08AD3698u>(ctx, &aot_mem) && ctx.pc == 0x08908250u) goto L_08908250;
    return;
L_08908250:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08908288;
      }
      goto L_08908258;
    }
L_08908258:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08908270;
      }
      goto L_08908260;
    }
L_08908260:
    ctx.gpr[31] = (0x08908268u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 607u, 0x08AD3698u>(ctx, &aot_mem) && ctx.pc == 0x08908268u) goto L_08908268;
    return;
L_08908268:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08908288;
      }
      goto L_08908270;
    }
L_08908270:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1680)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1684)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08908284u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem) && ctx.pc == 0x08908284u) goto L_08908284;
    return;
L_08908284:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1680), ctx.gpr[20]);
    goto L_08908288;
L_08908288:
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
L_089082A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x089082B8u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem) && ctx.pc == 0x089082B8u) goto L_089082B8;
    return;
L_089082B8:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089082C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x089082ECu);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_089082A8;
L_089082EC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
      if (branch_taken) {
          goto L_0890839C;
      }
      goto L_089082FC;
    }
L_089082FC:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1396));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < 40 ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0890835C;
      }
      goto L_08908320;
    }
L_08908320:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    ctx.gpr[5] = (2234u << 16u);
      if (branch_taken) {
          goto L_0890835C;
      }
      goto L_08908328;
    }
L_08908328:
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13440));
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_0890835C;
      }
      goto L_08908340;
    }
L_08908340:
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
        goto L_08908354;
    }
    goto L_08908354;
L_08908354:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
      if (branch_taken) {
          goto L_0890837C;
      }
      goto L_0890835C;
    }
L_0890835C:
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-31073));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
        goto L_08908378;
    }
    goto L_08908378;
L_08908378:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    goto L_0890837C;
L_0890837C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0890839C;
      }
      goto L_0890838C;
    }
L_0890838C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0890839C;
      }
      goto L_08908398;
    }
L_08908398:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    goto L_0890839C;
L_0890839C:
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
L_089083B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x089083D8u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_089082A8;
L_089083D8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08908484;
      }
      goto L_089083E8;
    }
L_089083E8:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1396));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 40 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08908444;
      }
      goto L_08908408;
    }
L_08908408:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    ctx.gpr[5] = (2234u << 16u);
      if (branch_taken) {
          goto L_08908444;
      }
      goto L_08908410;
    }
L_08908410:
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13440));
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08908444;
      }
      goto L_08908428;
    }
L_08908428:
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
        goto L_0890843C;
    }
    goto L_0890843C;
L_0890843C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08908464;
      }
      goto L_08908444;
    }
L_08908444:
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-31073));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
        goto L_08908460;
    }
    goto L_08908460;
L_08908460:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    goto L_08908464;
L_08908464:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08908484;
      }
      goto L_08908474;
    }
L_08908474:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08908484;
      }
      goto L_08908480;
    }
L_08908480:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    goto L_08908484;
L_08908484:
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
L_0890849C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x089084BCu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 922u, 0x08907F9Cu>(ctx, &aot_mem) && ctx.pc == 0x089084BCu) goto L_089084BC;
    return;
L_089084BC:
    ctx.gpr[4] = (ctx.gpr[17] << 5u);
    ctx.gpr[5] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[31] = (0x089084D4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 148u, 0x08A40C70u>(ctx, &aot_mem) && ctx.pc == 0x089084D4u) goto L_089084D4;
    return;
L_089084D4:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[4] << 16u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089084BC;
      }
      goto L_089084EC;
    }
L_089084EC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089084F8u);
    ctx.gpr[5] = (0u | 0u);
    goto L_0890816C;
L_089084F8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890850C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08908528u);
    ctx.gpr[17] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08908528u) goto L_08908528;
    return;
L_08908528:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1540)));
      if (branch_taken) {
          goto L_08908564;
      }
      goto L_08908530;
    }
L_08908530:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890857C;
      }
      goto L_08908538;
    }
L_08908538:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1552)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0890857C;
      }
      goto L_08908544;
    }
L_08908544:
    ctx.gpr[31] = (0x0890854Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 661u, 0x089474C4u>(ctx, &aot_mem) && ctx.pc == 0x0890854Cu) goto L_0890854C;
    return;
L_0890854C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(340)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890855C;
      }
      goto L_08908558;
    }
L_08908558:
    ctx.gpr[17] = (0u | 1u);
    goto L_0890855C;
L_0890855C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890857C;
      }
      goto L_08908564;
    }
L_08908564:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890857C;
      }
      goto L_0890856C;
    }
L_0890856C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1552)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0890857C;
      }
      goto L_08908578;
    }
L_08908578:
    ctx.gpr[17] = (0u | 1u);
    goto L_0890857C;
L_0890857C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1676)));
    ctx.gpr[5] = (0u | 48u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089085AC;
      }
      goto L_0890858C;
    }
L_0890858C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1676), ctx.gpr[4]);
    goto L_089085AC;
L_089085AC:
    if (ctx.gpr[17] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
        goto L_089085E8;
    }
    goto L_089085B4;
L_089085B4:
    ctx.gpr[31] = (0x089085BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 562u, 0x08A363C8u>(ctx, &aot_mem) && ctx.pc == 0x089085BCu) goto L_089085BC;
    return;
L_089085BC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089085D4;
      }
      goto L_089085C4;
    }
L_089085C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8876)));
    ctx.gpr[5] = (0u | 45u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
        goto L_089085E8;
    }
    goto L_089085D4;
L_089085D4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1540)));
    ctx.gpr[31] = (0x089085E0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0890816C;
L_089085E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890861C;
      }
      goto L_089085E8;
    }
L_089085E8:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[31] = (0x08908604u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem) && ctx.pc == 0x08908604u) goto L_08908604;
    return;
L_08908604:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (0x08908610u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 922u, 0x08907F9Cu>(ctx, &aot_mem) && ctx.pc == 0x08908610u) goto L_08908610;
    return;
L_08908610:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890861Cu);
    ctx.gpr[5] = (0u | 0u);
    goto L_0890816C;
L_0890861C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08908630:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08908648u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08908648u) goto L_08908648;
    return;
L_08908648:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[17] = (0u | 48u);
      if (branch_taken) {
          goto L_08908680;
      }
      goto L_08908650;
    }
L_08908650:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08908674u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089082A8;
L_08908674:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089086AC;
      }
      goto L_08908680;
    }
L_08908680:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[31] = (0x089086A0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem) && ctx.pc == 0x089086A0u) goto L_089086A0;
    return;
L_089086A0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (0x089086ACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 897u, 0x08907E38u>(ctx, &aot_mem) && ctx.pc == 0x089086ACu) goto L_089086AC;
    return;
L_089086AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1676)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089086C8;
      }
      goto L_089086B8;
    }
L_089086B8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x089086C4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0890816C;
L_089086C4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1676), ctx.gpr[17]);
    goto L_089086C8;
L_089086C8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089086DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08908700u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08908700u) goto L_08908700;
    return;
L_08908700:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089088B4;
      }
      goto L_08908708;
    }
L_08908708:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089088B4;
      }
      goto L_08908714;
    }
L_08908714:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (0u | 63u);
      if (branch_taken) {
          goto L_08908744;
      }
      goto L_08908728;
    }
L_08908728:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
      if (branch_taken) {
          goto L_08908770;
      }
      goto L_08908734;
    }
L_08908734:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08908768;
      }
      goto L_0890873C;
    }
L_0890873C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 4u);
      if (branch_taken) {
          goto L_08908770;
      }
      goto L_08908744;
    }
L_08908744:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 12 ? 1u : 0u);
      if (branch_taken) {
          goto L_08908760;
      }
      goto L_08908750;
    }
L_08908750:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08908770;
      }
      goto L_08908758;
    }
L_08908758:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 2u);
      if (branch_taken) {
          goto L_08908770;
      }
      goto L_08908760;
    }
L_08908760:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08908770;
      }
      goto L_08908768;
    }
L_08908768:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 8u);
      if (branch_taken) {
          goto L_08908770;
      }
      goto L_08908770;
    }
L_08908770:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089087B4;
      }
      goto L_0890877C;
    }
L_0890877C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(900)));
    ctx.gpr[6] = (0u | 55u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2228));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089087A4;
      }
      goto L_08908794;
    }
L_08908794:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(900)));
    ctx.gpr[31] = (0x089087A0u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08908D60;
L_089087A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    goto L_089087A4;
L_089087A4:
    ctx.gpr[31] = (0x089087ACu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 72u, 0x08B00520u>(ctx, &aot_mem) && ctx.pc == 0x089087ACu) goto L_089087AC;
    return;
L_089087AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
      if (branch_taken) {
          goto L_08908830;
      }
      goto L_089087B4;
    }
L_089087B4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(565)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[20] = (0u | 55u);
      if (branch_taken) {
          goto L_0890882C;
      }
      goto L_089087C8;
    }
L_089087C8:
    ctx.gpr[31] = (0x089087D0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x089087D0u) goto L_089087D0;
    return;
L_089087D0:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[16];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
      if (branch_taken) {
          goto L_08908818;
      }
      goto L_089087D8;
    }
L_089087D8:
    ctx.gpr[31] = (0x089087E0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x089087E0u) goto L_089087E0;
    return;
L_089087E0:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2228));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[20];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
      if (branch_taken) {
          goto L_08908808;
      }
      goto L_089087F0;
    }
L_089087F0:
    ctx.gpr[31] = (0x089087F8u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x089087F8u) goto L_089087F8;
    return;
L_089087F8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08908804u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08908D60;
L_08908804:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    goto L_08908808;
L_08908808:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08908814u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 664u, 0x08AFEF90u>(ctx, &aot_mem) && ctx.pc == 0x08908814u) goto L_08908814;
    return;
L_08908814:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    goto L_08908818;
L_08908818:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(565)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089087C8;
      }
      goto L_0890882C;
    }
L_0890882C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    goto L_08908830;
L_08908830:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    ctx.gpr[5] = (0u | 60u);
      if (branch_taken) {
          goto L_08908840;
      }
      goto L_08908838;
    }
L_08908838:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08908868;
      }
      goto L_08908840;
    }
L_08908840:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    ctx.gpr[5] = (0u | 60u);
      if (branch_taken) {
          goto L_08908850;
      }
      goto L_08908848;
    }
L_08908848:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08908868;
      }
      goto L_08908850;
    }
L_08908850:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (~(ctx.gpr[18] | 0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(564));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08908868;
L_08908868:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 18u);
      if (branch_taken) {
          goto L_08908880;
      }
      goto L_08908878;
    }
L_08908878:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08908888;
      }
      goto L_08908880;
    }
L_08908880:
    ctx.gpr[31] = (0x08908888u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 441u, 0x089AA5B8u>(ctx, &aot_mem) && ctx.pc == 0x08908888u) goto L_08908888;
    return;
L_08908888:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08908894u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 209u, 0x08910BDCu>(ctx, &aot_mem) && ctx.pc == 0x08908894u) goto L_08908894;
    return;
L_08908894:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089088A0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 171u, 0x08910A24u>(ctx, &aot_mem) && ctx.pc == 0x089088A0u) goto L_089088A0;
    return;
L_089088A0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089088ACu);
    ctx.gpr[5] = (0u | 0u);
    goto L_08908D60;
L_089088AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089088D4;
      }
      goto L_089088B4;
    }
L_089088B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 61u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 59u);
      if (branch_taken) {
          goto L_089088CC;
      }
      goto L_089088C4;
    }
L_089088C4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089088D4;
      }
      goto L_089088CC;
    }
L_089088CC:
    ctx.gpr[31] = (0x089088D4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 441u, 0x089AA5B8u>(ctx, &aot_mem) && ctx.pc == 0x089088D4u) goto L_089088D4;
    return;
L_089088D4:
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
L_089088F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08908920u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    goto L_08908A2C;
L_08908920:
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08908934u);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 647u, 0x0891BA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08908934u) goto L_08908934;
    return;
L_08908934:
    ctx.gpr[31] = (0x0890893Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x0890893Cu) goto L_0890893C;
    return;
L_0890893C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08908974;
      }
      goto L_08908948;
    }
L_08908948:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08908968;
      }
      goto L_08908958;
    }
L_08908958:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(50))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08908974;
      }
      goto L_08908968;
    }
L_08908968:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08908974u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x08908974u) goto L_08908974;
    return;
L_08908974:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
        goto L_0890898C;
    }
    goto L_08908980;
L_08908980:
    ctx.gpr[31] = (0x08908988u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x08908988u) goto L_08908988;
    return;
L_08908988:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_0890898C;
L_0890898C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x089089A0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 650u, 0x0893EA14u>(ctx, &aot_mem) && ctx.pc == 0x089089A0u) goto L_089089A0;
    return;
L_089089A0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089089B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089089DCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    goto L_08908A2C;
L_089089DC:
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089089F0u);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 647u, 0x0891BA8Cu>(ctx, &aot_mem) && ctx.pc == 0x089089F0u) goto L_089089F0;
    return;
L_089089F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
        goto L_08908A08;
    }
    goto L_089089FC;
L_089089FC:
    ctx.gpr[31] = (0x08908A04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x08908A04u) goto L_08908A04;
    return;
L_08908A04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_08908A08;
L_08908A08:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08908A18u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem) && ctx.pc == 0x08908A18u) goto L_08908A18;
    return;
L_08908A18:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08908A2C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08908A5Cu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 271u, 0x0884D5D4u>(ctx, &aot_mem) && ctx.pc == 0x08908A5Cu) goto L_08908A5C;
    return;
L_08908A5C:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[4] = (49408u << 16u);
      if (branch_taken) {
          goto L_08908BE8;
      }
      goto L_08908A68;
    }
L_08908A68:
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (0u | 152u);
    ctx.gpr[4] = (50298u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (4u << 16u);
    goto L_08908A7C;
L_08908A7C:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08908ADC;
      }
      goto L_08908A90;
    }
L_08908A90:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08908AC8;
      }
      goto L_08908A9C;
    }
L_08908A9C:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
        goto L_08908AB8;
    }
    goto L_08908AA4;
L_08908AA4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08908BA0;
      }
      goto L_08908AB0;
    }
L_08908AB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08908B60;
      }
      goto L_08908AB8;
    }
L_08908AB8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08908BA0;
      }
      goto L_08908AC0;
    }
L_08908AC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08908B60;
      }
      goto L_08908AC8;
    }
L_08908AC8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 28 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08908BA0;
      }
      goto L_08908AD4;
    }
L_08908AD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08908B98;
      }
      goto L_08908ADC;
    }
L_08908ADC:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 250 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 45 ? 1u : 0u);
      if (branch_taken) {
          goto L_08908B14;
      }
      goto L_08908AE8;
    }
L_08908AE8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08908B04;
      }
      goto L_08908AF0;
    }
L_08908AF0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 44 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08908BA0;
      }
      goto L_08908AFC;
    }
L_08908AFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08908B60;
      }
      goto L_08908B04;
    }
L_08908B04:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08908B98;
      }
      goto L_08908B0C;
    }
L_08908B0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08908BA0;
      }
      goto L_08908B14;
    }
L_08908B14:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 261 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08908BA0;
      }
      goto L_08908B20;
    }
L_08908B20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08908B58;
      }
      goto L_08908B38;
    }
L_08908B38:
    ctx.gpr[31] = (0x08908B40u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08908B40u) goto L_08908B40;
    return;
L_08908B40:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08908B58;
      }
      goto L_08908B48;
    }
L_08908B48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_08908B58;
L_08908B58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08908BE0;
      }
      goto L_08908B60;
    }
L_08908B60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08908B98;
      }
      goto L_08908B78;
    }
L_08908B78:
    ctx.gpr[31] = (0x08908B80u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08908B80u) goto L_08908B80;
    return;
L_08908B80:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08908B98;
      }
      goto L_08908B88;
    }
L_08908B88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_08908B98;
L_08908B98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08908BE0;
      }
      goto L_08908BA0;
    }
L_08908BA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08908BE0;
      }
      goto L_08908BB8;
    }
L_08908BB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08908BE0;
      }
      goto L_08908BD0;
    }
L_08908BD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_08908BE0;
L_08908BE0:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_08908A7C;
      }
      goto L_08908BE8;
    }
L_08908BE8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08908C10:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x08908C34u);
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 647u, 0x0891BA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08908C34u) goto L_08908C34;
    return;
L_08908C34:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08908C40u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 206u, 0x0886D4BCu>(ctx, &aot_mem) && ctx.pc == 0x08908C40u) goto L_08908C40;
    return;
L_08908C40:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08908C50:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[6] = (0u | 45u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 46u);
      if (branch_taken) {
          goto L_08908D48;
      }
      goto L_08908C68;
    }
L_08908C68:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 48u);
      if (branch_taken) {
          goto L_08908D48;
      }
      goto L_08908C70;
    }
L_08908C70:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08908D48;
      }
      goto L_08908C78;
    }
L_08908C78:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(456)));
    ctx.gpr[6] = (ctx.gpr[6] & 1u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[7] = (0u | 58u);
      if (branch_taken) {
          goto L_08908CAC;
      }
      goto L_08908C88;
    }
L_08908C88:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[7];
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08908C9C;
      }
      goto L_08908C90;
    }
L_08908C90:
    ctx.gpr[7] = (0u | 57u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_08908CA4;
      }
      goto L_08908C9C;
    }
L_08908C9C:
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    goto L_08908CA4;
L_08908CA4:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08908D48;
      }
      goto L_08908CAC;
    }
L_08908CAC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(464)));
    ctx.gpr[6] = (ctx.gpr[6] & 4096u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (0u | 17u);
      if (branch_taken) {
          goto L_08908CE8;
      }
      goto L_08908CBC;
    }
L_08908CBC:
    ctx.gpr[7] = (0u | 58u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[7];
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08908CD4;
      }
      goto L_08908CC8;
    }
L_08908CC8:
    ctx.gpr[7] = (0u | 57u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_08908CDC;
      }
      goto L_08908CD4;
    }
L_08908CD4:
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    goto L_08908CDC;
L_08908CDC:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08908D48;
      }
      goto L_08908CE4;
    }
L_08908CE4:
    ctx.gpr[6] = (0u | 17u);
    goto L_08908CE8;
L_08908CE8:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08908D50;
      }
      goto L_08908CF0;
    }
L_08908CF0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(216));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08908D08u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08908D08u) goto L_08908D08;
    return;
L_08908D08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08908D20u);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08908D20u) goto L_08908D20;
    return;
L_08908D20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    ctx.gpr[5] = (ctx.gpr[2] << 6u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(44))))));
    ctx.gpr[4] = (ctx.gpr[4] & 61440u);
    ctx.gpr[4] = (ctx.gpr[4] >> 12u);
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08908D50;
      }
      goto L_08908D48;
    }
L_08908D48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08908D54;
      }
      goto L_08908D50;
    }
L_08908D50:
    ctx.gpr[2] = (0u | 0u);
    goto L_08908D54;
L_08908D54:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08908D60:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2228)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08908DA4;
      }
      goto L_08908D84;
    }
L_08908D84:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 12 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (0u | 50u);
      if (branch_taken) {
          goto L_08908DAC;
      }
      goto L_08908D90;
    }
L_08908D90:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08908DF0;
      }
      goto L_08908D9C;
    }
L_08908D9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08908DC8;
      }
      goto L_08908DA4;
    }
L_08908DA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08908E60;
      }
      goto L_08908DAC;
    }
L_08908DAC:
    ctx.gpr[5] = (0u | 44u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08908DF0;
      }
      goto L_08908DB8;
    }
L_08908DB8:
    ctx.gpr[31] = (0x08908DC0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 813u, 0x0890F994u>(ctx, &aot_mem) && ctx.pc == 0x08908DC0u) goto L_08908DC0;
    return;
L_08908DC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08908DF0;
      }
      goto L_08908DC8;
    }
L_08908DC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1136)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08908DE8;
      }
      goto L_08908DD4;
    }
L_08908DD4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08908DE4;
      }
      goto L_08908DDC;
    }
L_08908DDC:
    ctx.gpr[31] = (0x08908DE4u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(1136));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 430u, 0x08A93004u>(ctx, &aot_mem) && ctx.pc == 0x08908DE4u) goto L_08908DE4;
    return;
L_08908DE4:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1136), 0u);
    goto L_08908DE8;
L_08908DE8:
    ctx.gpr[31] = (0x08908DF0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0890B488;
L_08908DF0:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08908E04;
      }
      goto L_08908DF8;
    }
L_08908DF8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08908E04u);
    ctx.gpr[5] = (0u | 50u);
    goto L_08908E78;
L_08908E04:
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[5];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
      if (branch_taken) {
          goto L_08908E44;
      }
      goto L_08908E10;
    }
L_08908E10:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08908E24u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08908E24u) goto L_08908E24;
    return;
L_08908E24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08908E40u);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08908E40u) goto L_08908E40;
    return;
L_08908E40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    goto L_08908E44;
L_08908E44:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2228), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(248));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[5]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08908E60u);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08908E60u) goto L_08908E60;
    return;
L_08908E60:
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
L_08908E78:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2232), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08908E80:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(468)));
    ctx.gpr[6] = (65280u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(468), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1927), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(480), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(468), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 100u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(474), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08908ED0u);
    ctx.gpr[5] = (0u | 67u);
    goto L_08908D60;
L_08908ED0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(512));
    ctx.gpr[31] = (0x08908EF8u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(496), ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 7u, 0x08860358u>(ctx, &aot_mem) && ctx.pc == 0x08908EF8u) goto L_08908EF8;
    return;
L_08908EF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[20])) && ctx.fpr[13] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08908F30;
      }
      goto L_08908F18;
    }
L_08908F18:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08908F34;
    }
    goto L_08908F28;
L_08908F28:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08908F44;
      }
      goto L_08908F30;
    }
L_08908F30:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08908F34;
L_08908F34:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x08908F40u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem) && ctx.pc == 0x08908F40u) goto L_08908F40;
    return;
L_08908F40:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08908F44;
L_08908F44:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(592), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[6] = (0u | 10u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08908F64u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 466u, 0x089B1C20u>(ctx, &aot_mem) && ctx.pc == 0x08908F64u) goto L_08908F64;
    return;
L_08908F64:
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(608));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(624), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(352)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(632), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08908FC4;
      }
      goto L_08908FA0;
    }
L_08908FA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(376));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08908FBCu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08908FBCu) goto L_08908FBC;
    return;
L_08908FBC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(628), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08909030;
      }
      goto L_08908FC4;
    }
L_08908FC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (0u | 9u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08908FFC;
      }
      goto L_08908FD8;
    }
L_08908FD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(376));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08908FF4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08908FF4u) goto L_08908FF4;
    return;
L_08908FF4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(628), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08909030;
      }
      goto L_08908FFC;
    }
L_08908FFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08909030;
      }
      goto L_08909010;
    }
L_08909010:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(376));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0890902Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890902Cu) goto L_0890902C;
    return;
L_0890902C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(628), ctx.gpr[2]);
    goto L_08909030;
L_08909030:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(304))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(304), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08909054:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2236)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890905C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[6] = (0u | 58u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08909090;
      }
      goto L_08909084;
    }
L_08909084:
    ctx.gpr[6] = (0u | 57u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08909098;
      }
      goto L_08909090;
    }
L_08909090:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_08909098;
L_08909098:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089090B4;
      }
      goto L_089090A0;
    }
L_089090A0:
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[5] = (0u | 21u);
      if (branch_taken) {
          goto L_089090BC;
      }
      goto L_089090AC;
    }
L_089090AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08909104;
      }
      goto L_089090B4;
    }
L_089090B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08909168;
      }
      goto L_089090BC;
    }
L_089090BC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 9u);
      if (branch_taken) {
          goto L_08909104;
      }
      goto L_089090C4;
    }
L_089090C4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08909104;
      }
      goto L_089090CC;
    }
L_089090CC:
    ctx.gpr[5] = (0u | 22u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089090E0;
      }
      goto L_089090D8;
    }
L_089090D8:
    ctx.gpr[31] = (0x089090E0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 438u, 0x088E34ECu>(ctx, &aot_mem) && ctx.pc == 0x089090E0u) goto L_089090E0;
    return;
L_089090E0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089090ECu);
    ctx.gpr[5] = (0u | 1u);
    goto L_08908D60;
L_089090EC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089090F8u);
    ctx.gpr[5] = (0u | 1u);
    goto L_0890BE50;
L_089090F8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08909104u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08908E78;
L_08909104:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2236)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08909168;
      }
      goto L_08909110;
    }
L_08909110:
    ctx.gpr[31] = (0x08909118u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x08909118u) goto L_08909118;
    return;
L_08909118:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20268)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20272)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08909134u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x08909134u) goto L_08909134;
    return;
L_08909134:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[18] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2240), ctx.gpr[4]);
    goto L_08909168;
L_08909168:
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
L_08909180:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[6] = (0u | 61u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089091C0;
      }
      goto L_0890919C;
    }
L_0890919C:
    ctx.gpr[31] = (0x089091A4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0890905C;
L_089091A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (50298u << 16u);
        goto L_089091C8;
    }
    goto L_089091B8;
L_089091B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089091E0;
      }
      goto L_089091C0;
    }
L_089091C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08909260;
      }
      goto L_089091C8;
    }
L_089091C8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_089091CC;
L_089091CC:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089091CC;
      }
      goto L_089091DC;
    }
L_089091DC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    goto L_089091E0;
L_089091E0:
    ctx.gpr[31] = (0x089091E8u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 271u, 0x0884D5D4u>(ctx, &aot_mem) && ctx.pc == 0x089091E8u) goto L_089091E8;
    return;
L_089091E8:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08909228;
      }
      goto L_089091F4;
    }
L_089091F4:
    ctx.gpr[6] = (0u | 6u);
    goto L_089091F8;
L_089091F8:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(48))))));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0890921C;
      }
      goto L_08909204;
    }
L_08909204:
    ctx.gpr[6] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08909228;
      }
      goto L_0890921C;
    }
L_0890921C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089091F8;
      }
      goto L_08909228;
    }
L_08909228:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08909244;
      }
      goto L_08909230;
    }
L_08909230:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08909244u);
    ctx.gpr[7] = (0u | 6u);
    goto L_089089B8;
L_08909244:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(468)));
    ctx.gpr[5] = (51200u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (8192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(468), ctx.gpr[4]);
    goto L_08909260;
L_08909260:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08909270:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x0890928Cu);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem) && ctx.pc == 0x0890928Cu) goto L_0890928C;
    return;
L_0890928C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890929C;
      }
      goto L_08909294;
    }
L_08909294:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089092C8;
      }
      goto L_0890929C;
    }
L_0890929C:
    ctx.gpr[31] = (0x089092A4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 36u, 0x08A08730u>(ctx, &aot_mem) && ctx.pc == 0x089092A4u) goto L_089092A4;
    return;
L_089092A4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089092B0u);
    ctx.gpr[5] = (0u | 2u);
    goto L_08908D60;
L_089092B0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x089092C8u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08909A64;
L_089092C8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089092DC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1736)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[7] = (ctx.gpr[7] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_089092F8;
      }
      goto L_089092F0;
    }
L_089092F0:
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1736), ctx.gpr[5]);
    goto L_089092F8;
L_089092F8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08909300:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08909314u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 78u, 0x08A08AE0u>(ctx, &aot_mem) && ctx.pc == 0x08909314u) goto L_08909314;
    return;
L_08909314:
    ctx.gpr[31] = (0x0890931Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08909B60;
L_0890931C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890932C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[6] = (0u | 17u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08909360;
      }
      goto L_08909344;
    }
L_08909344:
    ctx.gpr[6] = (16544u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (0u | 22u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08909370;
      }
      goto L_08909358;
    }
L_08909358:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 16u);
      if (branch_taken) {
          goto L_08909368;
      }
      goto L_08909360;
    }
L_08909360:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08909388;
      }
      goto L_08909368;
    }
L_08909368:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08909378;
      }
      goto L_08909370;
    }
L_08909370:
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_08909378;
L_08909378:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1716)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08909388u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    goto L_08909394;
L_08909388:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08909394:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1716)));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[6] = (ctx.gpr[7] | ctx.gpr[6]);
    ctx.gpr[7] = (16457u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 4059u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089093FC;
      }
      goto L_089093D8;
    }
L_089093D8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[31] = (0x089093F8u);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem) && ctx.pc == 0x089093F8u) goto L_089093F8;
    return;
L_089093F8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1720), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089093FC;
L_089093FC:
    ctx.gpr[31] = (0x08909404u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1720)));
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem) && ctx.pc == 0x08909404u) goto L_08909404;
    return;
L_08909404:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2256)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[14] = ctx.fpr[12] + ctx.fpr[22];
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08909434;
      }
      goto L_08909420;
    }
L_08909420:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
      if (branch_taken) {
          goto L_08909458;
      }
      goto L_08909434;
    }
L_08909434:
    ctx.fpr[14] = ctx.fpr[12] - ctx.fpr[22];
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08909458;
      }
      goto L_08909448;
    }
L_08909448:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_08909458;
L_08909458:
    ctx.fpr[15] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[16] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[16]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]) ^ 0x80000000u);
        goto L_08909478;
    }
    goto L_08909478;
L_08909478:
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089094A0;
      }
      goto L_08909494;
    }
L_08909494:
    ctx.fpr[14] = ctx.fpr[15] / ctx.fpr[20];
    ctx.gpr[17] = (0u | 0u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    goto L_089094A0;
L_089094A0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1720), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089094C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x089094ECu);
    ctx.gpr[6] = (0u | 172u);
    goto L_08908C10;
L_089094EC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08909528;
      }
      goto L_089094F4;
    }
L_089094F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08909504u);
    ctx.gpr[6] = (0u | 218u);
    goto L_08908C10;
L_08909504:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08909528;
      }
      goto L_0890950C;
    }
L_0890950C:
    ctx.gpr[31] = (0x08909514u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08909514u) goto L_08909514;
    return;
L_08909514:
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(816));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1025));
      if (branch_taken) {
          goto L_08909530;
      }
      goto L_08909520;
    }
L_08909520:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08909550;
      }
      goto L_08909528;
    }
L_08909528:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08909698;
      }
      goto L_08909530;
    }
L_08909530:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & 8192u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08909550;
      }
      goto L_08909540;
    }
L_08909540:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(860)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(860), ctx.gpr[4]);
    goto L_08909550;
L_08909550:
    ctx.gpr[31] = (0x08909558u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 3u, 0x08910020u>(ctx, &aot_mem) && ctx.pc == 0x08909558u) goto L_08909558;
    return;
L_08909558:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08909634;
      }
      goto L_08909560;
    }
L_08909560:
    ctx.gpr[31] = (0x08909568u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 3u, 0x08910020u>(ctx, &aot_mem) && ctx.pc == 0x08909568u) goto L_08909568;
    return;
L_08909568:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089095A4;
      }
      goto L_08909584;
    }
L_08909584:
    ctx.gpr[31] = (0x0890958Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 3u, 0x08910020u>(ctx, &aot_mem) && ctx.pc == 0x0890958Cu) goto L_0890958C;
    return;
L_0890958C:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(816));
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x0890959Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 608u, 0x089F3910u>(ctx, &aot_mem) && ctx.pc == 0x0890959Cu) goto L_0890959C;
    return;
L_0890959C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089095B8;
      }
      goto L_089095A4;
    }
L_089095A4:
    ctx.gpr[31] = (0x089095ACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 3u, 0x08910020u>(ctx, &aot_mem) && ctx.pc == 0x089095ACu) goto L_089095AC;
    return;
L_089095AC:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
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
    goto L_089095B8;
L_089095B8:
    ctx.gpr[31] = (0x089095C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x089095C0u) goto L_089095C0;
    return;
L_089095C0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089095D4;
      }
      goto L_089095C8;
    }
L_089095C8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089095D4u);
    ctx.gpr[5] = (0u | 137u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem) && ctx.pc == 0x089095D4u) goto L_089095D4;
    return;
L_089095D4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089095E0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 645u, 0x089F3D2Cu>(ctx, &aot_mem) && ctx.pc == 0x089095E0u) goto L_089095E0;
    return;
L_089095E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (ctx.gpr[2] & 1u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[5] << 10u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1716)));
    ctx.gpr[31] = (0x08909604u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 3u, 0x08910020u>(ctx, &aot_mem) && ctx.pc == 0x08909604u) goto L_08909604;
    return;
L_08909604:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0890962C;
      }
      goto L_0890960C;
    }
L_0890960C:
    ctx.gpr[31] = (0x08909614u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 3u, 0x08910020u>(ctx, &aot_mem) && ctx.pc == 0x08909614u) goto L_08909614;
    return;
L_08909614:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[31] = (0x0890962Cu);
    ctx.gpr[8] = (0u | 0u);
    goto L_08909A64;
L_0890962C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08909698;
      }
      goto L_08909634;
    }
L_08909634:
    ctx.gpr[31] = (0x0890963Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x0890963Cu) goto L_0890963C;
    return;
L_0890963C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08909670;
      }
      goto L_08909644;
    }
L_08909644:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1720)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3228)));
    ctx.gpr[31] = (0x08909654u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 49u, 0x089F44B8u>(ctx, &aot_mem) && ctx.pc == 0x08909654u) goto L_08909654;
    return;
L_08909654:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (ctx.gpr[2] & 1u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[5] << 10u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08909698;
      }
      goto L_08909670;
    }
L_08909670:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1720)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x08909680u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 49u, 0x089F44B8u>(ctx, &aot_mem) && ctx.pc == 0x08909680u) goto L_08909680;
    return;
L_08909680:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (ctx.gpr[2] & 1u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[5] << 10u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    goto L_08909698;
L_08909698:
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
L_089096B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890970C;
      }
      goto L_089096D0;
    }
L_089096D0:
    ctx.gpr[31] = (0x089096D8u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(816));
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 654u, 0x089F3E6Cu>(ctx, &aot_mem) && ctx.pc == 0x089096D8u) goto L_089096D8;
    return;
L_089096D8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089096F8;
      }
      goto L_089096E0;
    }
L_089096E0:
    ctx.gpr[31] = (0x089096E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x089096E8u) goto L_089096E8;
    return;
L_089096E8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890972C;
      }
      goto L_089096F0;
    }
L_089096F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08909734;
      }
      goto L_089096F8;
    }
L_089096F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08909734;
      }
      goto L_0890970C;
    }
L_0890970C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(860)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-513));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(860), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08909734;
      }
      goto L_0890972C;
    }
L_0890972C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3228), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08909734;
L_08909734:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08909744:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[4] = (ctx.gpr[4] | 256u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-513));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1720), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1736), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1716), 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08909784u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 50u, 0x0891034Cu>(ctx, &aot_mem) && ctx.pc == 0x08909784u) goto L_08909784;
    return;
L_08909784:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & 8192u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
        goto L_089097A8;
    }
    goto L_08909794;
L_08909794:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(860)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(860), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    goto L_089097A8;
L_089097A8:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[31] = (0x089097C4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem) && ctx.pc == 0x089097C4u) goto L_089097C4;
    return;
L_089097C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] & 128u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(860)));
      if (branch_taken) {
          goto L_089097E8;
      }
      goto L_089097DC;
    }
L_089097DC:
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(860), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089097F4;
      }
      goto L_089097E8;
    }
L_089097E8:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(860), ctx.gpr[4]);
    goto L_089097F4;
L_089097F4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08909804:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(456)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[4] = (ctx.gpr[4] | 256u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1716)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(1716));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08909848;
      }
      goto L_08909840;
    }
L_08909840:
    ctx.gpr[31] = (0x08909848u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 430u, 0x08A93004u>(ctx, &aot_mem) && ctx.pc == 0x08909848u) goto L_08909848;
    return;
L_08909848:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1716), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08909858u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem) && ctx.pc == 0x08909858u) goto L_08909858;
    return;
L_08909858:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08909864u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 50u, 0x0891034Cu>(ctx, &aot_mem) && ctx.pc == 0x08909864u) goto L_08909864;
    return;
L_08909864:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1736), 0u);
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
L_08909880:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] & 256u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-257));
      if (branch_taken) {
          goto L_089098C4;
      }
      goto L_089098A0;
    }
L_089098A0:
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 512u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(860)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(860), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1736), 0u);
    goto L_089098C4;
L_089098C4:
    ctx.gpr[31] = (0x089098CCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x089098CCu) goto L_089098CC;
    return;
L_089098CC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089098DC;
      }
      goto L_089098D4;
    }
L_089098D4:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3228), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089098DC;
L_089098DC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089098EC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[6] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 60u);
      if (branch_taken) {
          goto L_0890993C;
      }
      goto L_089098FC;
    }
L_089098FC:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 17u);
      if (branch_taken) {
          goto L_0890993C;
      }
      goto L_08909904;
    }
L_08909904:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0890993C;
      }
      goto L_0890990C;
    }
L_0890990C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (ctx.gpr[5] & 8192u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890993C;
      }
      goto L_0890991C;
    }
L_0890991C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(776)));
    ctx.gpr[5] = (0u | 47u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 44u);
      if (branch_taken) {
          goto L_0890993C;
      }
      goto L_0890992C;
    }
L_0890992C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0890993C;
      }
      goto L_08909934;
    }
L_08909934:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08909944;
      }
      goto L_0890993C;
    }
L_0890993C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08909948;
      }
      goto L_08909944;
    }
L_08909944:
    ctx.gpr[2] = (0u | 1u);
    goto L_08909948;
L_08909948:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08909950:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08909968u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(816));
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 633u, 0x089F3C20u>(ctx, &aot_mem) && ctx.pc == 0x08909968u) goto L_08909968;
    return;
L_08909968:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08909980;
      }
      goto L_08909970;
    }
L_08909970:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    goto L_08909980;
L_08909980:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08909990:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] & 255u);
    ctx.gpr[6] = (ctx.gpr[7] & 255u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[8] = (0u | 17u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_089099C0;
      }
      goto L_089099B8;
    }
L_089099B8:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089099EC;
      }
      goto L_089099C0;
    }
L_089099C0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[7] = (ctx.gpr[6] & 64u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_089099EC;
      }
      goto L_089099D0;
    }
L_089099D0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1736)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[7] = (ctx.gpr[7] < ctx.gpr[8] ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[4] = (ctx.gpr[6] | 16u);
        goto L_08909A00;
    }
    goto L_089099E4;
L_089099E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089099F4;
      }
      goto L_089099EC;
    }
L_089099EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08909A54;
      }
      goto L_089099F4;
    }
L_089099F4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08909A54;
      }
      goto L_089099FC;
    }
L_089099FC:
    ctx.gpr[4] = (ctx.gpr[6] | 16u);
    goto L_08909A00;
L_08909A00:
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-129));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1720), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-33));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1716), 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1736), 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[31] = (0x08909A3Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089098EC;
L_08909A3C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08909A54;
      }
      goto L_08909A44;
    }
L_08909A44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(860)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(860), ctx.gpr[4]);
    goto L_08909A54;
L_08909A54:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08909A64:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[9] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[6] & 255u);
    ctx.gpr[5] = (ctx.gpr[7] & 255u);
    ctx.gpr[6] = (ctx.gpr[8] & 255u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2228)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[8] = (0u | 17u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    ctx.gpr[4] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_08909AA0;
      }
      goto L_08909A98;
    }
L_08909A98:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08909ACC;
      }
      goto L_08909AA0;
    }
L_08909AA0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[7] = (ctx.gpr[6] & 64u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08909ACC;
      }
      goto L_08909AB0;
    }
L_08909AB0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1736)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[7] = (ctx.gpr[7] < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08909ADC;
      }
      goto L_08909AC4;
    }
L_08909AC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08909AD4;
      }
      goto L_08909ACC;
    }
L_08909ACC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08909B4C;
      }
      goto L_08909AD4;
    }
L_08909AD4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08909B4C;
      }
      goto L_08909ADC;
    }
L_08909ADC:
    ctx.gpr[5] = (ctx.gpr[6] | 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[5]);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1716), ctx.gpr[4]);
    ctx.gpr[31] = (0x08909AFCu);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1716));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem) && ctx.pc == 0x08909AFCu) goto L_08909AFC;
    return;
L_08909AFC:
    ctx.gpr[4] = (18804u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 9200u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-33));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[6] = (ctx.gpr[17] & 1u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1720), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[6] << 5u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1736), 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[31] = (0x08909B34u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089098EC;
L_08909B34:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08909B4C;
      }
      goto L_08909B3C;
    }
L_08909B3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(860)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(860), ctx.gpr[4]);
    goto L_08909B4C;
L_08909B4C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08909B60:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] & 64u);
      if (branch_taken) {
          goto L_08909C10;
      }
      goto L_08909B80;
    }
L_08909B80:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-17));
      if (branch_taken) {
          goto L_08909C10;
      }
      goto L_08909B88;
    }
L_08909B88:
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 128u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(464)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-257));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(464), ctx.gpr[4]);
    ctx.gpr[31] = (0x08909BB0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089098EC;
L_08909BB0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08909BC8;
      }
      goto L_08909BB8;
    }
L_08909BB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(860)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(860), ctx.gpr[4]);
    goto L_08909BC8;
L_08909BC8:
    ctx.gpr[31] = (0x08909BD0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08909BD0u) goto L_08909BD0;
    return;
L_08909BD0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
      if (branch_taken) {
          goto L_08909BE8;
      }
      goto L_08909BD8;
    }
L_08909BD8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1736), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
      if (branch_taken) {
          goto L_08909BF4;
      }
      goto L_08909BE8;
    }
L_08909BE8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1736), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    goto L_08909BF4;
L_08909BF4:
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_08909C08;
      }
      goto L_08909C00;
    }
L_08909C00:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08909C10;
      }
      goto L_08909C08;
    }
L_08909C08:
    ctx.gpr[31] = (0x08909C10u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08909300;
L_08909C10:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08909C20:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2120)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08909C28:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2120)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08909C70;
      }
      goto L_08909C40;
    }
L_08909C40:
    ctx.gpr[31] = (0x08909C48u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem) && ctx.pc == 0x08909C48u) goto L_08909C48;
    return;
L_08909C48:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08909C68;
      }
      goto L_08909C50;
    }
L_08909C50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[6] = (0u | 58u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08909C80;
      }
      goto L_08909C60;
    }
L_08909C60:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 57u);
      if (branch_taken) {
          goto L_08909C78;
      }
      goto L_08909C68;
    }
L_08909C68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08909D2C;
      }
      goto L_08909C70;
    }
L_08909C70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08909D2C;
      }
      goto L_08909C78;
    }
L_08909C78:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08909C88;
      }
      goto L_08909C80;
    }
L_08909C80:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_08909C88;
L_08909C88:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08909C68;
      }
      goto L_08909C90;
    }
L_08909C90:
    ctx.gpr[4] = (ctx.gpr[4] ^ 68u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08909D10;
      }
      goto L_08909CA4;
    }
L_08909CA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08909D08;
      }
      goto L_08909CBC;
    }
L_08909CBC:
    ctx.gpr[31] = (0x08909CC4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08909B60;
L_08909CC4:
    ctx.gpr[31] = (0x08909CCCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08909880;
L_08909CCC:
    ctx.gpr[31] = (0x08909CD4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 36u, 0x08A08730u>(ctx, &aot_mem) && ctx.pc == 0x08909CD4u) goto L_08909CD4;
    return;
L_08909CD4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08909CE0u);
    ctx.gpr[5] = (0u | 68u);
    goto L_08908D60;
L_08909CE0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08909CF0u);
    ctx.gpr[6] = (0u | 142u);
    goto L_08908C10;
L_08909CF0:
    ctx.gpr[5] = (16512u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_08909D18;
      }
      goto L_08909D00;
    }
L_08909D00:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08909D2C;
      }
      goto L_08909D08;
    }
L_08909D08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08909D2C;
      }
      goto L_08909D10;
    }
L_08909D10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08909D2C;
      }
      goto L_08909D18;
    }
L_08909D18:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08909D2Cu);
    ctx.gpr[7] = (0u | 142u);
    goto L_089088F4;
L_08909D2C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08909D3C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (16325u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 7864u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[12];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(236)));
    ctx.gpr[5] = (ctx.gpr[5] & 256u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08909DB8;
      }
      goto L_08909D8C;
    }
L_08909D8C:
    ctx.gpr[31] = (0x08909D94u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08909D94u) goto L_08909D94;
    return;
L_08909D94:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08909DB0;
      }
      goto L_08909D9C;
    }
L_08909D9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1300)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08909DC0;
      }
      goto L_08909DA8;
    }
L_08909DA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08909EA4;
      }
      goto L_08909DB0;
    }
L_08909DB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08909EA4;
      }
      goto L_08909DB8;
    }
L_08909DB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08909EA4;
      }
      goto L_08909DC0;
    }
L_08909DC0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x08909DF4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 287u, 0x08891DD4u>(ctx, &aot_mem) && ctx.pc == 0x08909DF4u) goto L_08909DF4;
    return;
L_08909DF4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08909E9C;
      }
      goto L_08909E00;
    }
L_08909E00:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[6] = (0u | 43u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08909E20;
      }
      goto L_08909E10;
    }
L_08909E10:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[6] = (0u | 44u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08909E28;
      }
      goto L_08909E20;
    }
L_08909E20:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08909E28;
L_08909E28:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08909E9C;
      }
      goto L_08909E30;
    }
L_08909E30:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (16261u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 7864u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (15897u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[31] = (0x08909E90u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 487u, 0x0889ACD0u>(ctx, &aot_mem) && ctx.pc == 0x08909E90u) goto L_08909E90;
    return;
L_08909E90:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08909E9C;
      }
      goto L_08909E98;
    }
L_08909E98:
    ctx.gpr[17] = (0u | 1u);
    goto L_08909E9C;
L_08909E9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08909EA4;
      }
      goto L_08909EA4;
    }
L_08909EA4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08909EBC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(456)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] & 4096u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08909F68;
      }
      goto L_08909EDC;
    }
L_08909EDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(452), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 4096u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[31] = (0x08909EF8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 321u, 0x08911220u>(ctx, &aot_mem) && ctx.pc == 0x08909EF8u) goto L_08909EF8;
    return;
L_08909EF8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08909F48;
      }
      goto L_08909F00;
    }
L_08909F00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
        goto L_08909F18;
    }
    goto L_08909F0C;
L_08909F0C:
    ctx.gpr[31] = (0x08909F14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x08909F14u) goto L_08909F14;
    return;
L_08909F14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_08909F18;
L_08909F18:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08909F24u);
    ctx.gpr[6] = (0u | 140u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 633u, 0x0893E8D8u>(ctx, &aot_mem) && ctx.pc == 0x08909F24u) goto L_08909F24;
    return;
L_08909F24:
    ctx.gpr[4] = (0u | 22u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[8] = (16512u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08909F48u);
    ctx.gpr[7] = (0u | 140u);
    goto L_089088F4;
L_08909F48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08909F68;
      }
      goto L_08909F58;
    }
L_08909F58:
    ctx.gpr[31] = (0x08909F60u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 261u, 0x088E29C0u>(ctx, &aot_mem) && ctx.pc == 0x08909F60u) goto L_08909F60;
    return;
L_08909F60:
    ctx.gpr[31] = (0x08909F68u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 438u, 0x088E34ECu>(ctx, &aot_mem) && ctx.pc == 0x08909F68u) goto L_08909F68;
    return;
L_08909F68:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08909F78:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(456)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] & 1u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08909F84:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (16513u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(328)));
    ctx.fpr[15] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (ctx.gpr[5] | 18350u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
      if (branch_taken) {
          goto L_0890A190;
      }
      goto L_08909FD0;
    }
L_08909FD0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[6] = (8192u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890A190;
      }
      goto L_08909FE4;
    }
L_08909FE4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[6] = (0u | 57u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 58u);
      if (branch_taken) {
          goto L_0890A190;
      }
      goto L_08909FF4;
    }
L_08909FF4:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0890A190;
      }
      goto L_08909FFC;
    }
L_08909FFC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(452)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(264)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(452), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x0890A038u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 287u, 0x08891DD4u>(ctx, &aot_mem) && ctx.pc == 0x0890A038u) goto L_0890A038;
    return;
L_0890A038:
    if (ctx.gpr[2] != 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
        goto L_0890A13C;
    }
    goto L_0890A040;
L_0890A040:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 41u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0890A190;
      }
      goto L_0890A050;
    }
L_0890A050:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A078;
      }
      goto L_0890A068;
    }
L_0890A068:
    ctx.gpr[31] = (0x0890A070u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0890A1A0;
L_0890A070:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A190;
      }
      goto L_0890A078;
    }
L_0890A078:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(452)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20380)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0890A190;
      }
      goto L_0890A090;
    }
L_0890A090:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890A0A0u);
    ctx.gpr[6] = (0u | 142u);
    goto L_08908C10;
L_0890A0A0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890A10C;
      }
      goto L_0890A0AC;
    }
L_0890A0AC:
    ctx.gpr[31] = (0x0890A0B4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 321u, 0x08911220u>(ctx, &aot_mem) && ctx.pc == 0x0890A0B4u) goto L_0890A0B4;
    return;
L_0890A0B4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890A134;
      }
      goto L_0890A0BC;
    }
L_0890A0BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
        goto L_0890A0D4;
    }
    goto L_0890A0C8;
L_0890A0C8:
    ctx.gpr[31] = (0x0890A0D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x0890A0D0u) goto L_0890A0D0;
    return;
L_0890A0D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_0890A0D4;
L_0890A0D4:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0890A0E0u);
    ctx.gpr[6] = (0u | 142u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 633u, 0x0893E8D8u>(ctx, &aot_mem) && ctx.pc == 0x0890A0E0u) goto L_0890A0E0;
    return;
L_0890A0E0:
    ctx.gpr[4] = (0u | 86u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[8] = (16512u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0890A104u);
    ctx.gpr[7] = (0u | 142u);
    goto L_089088F4;
L_0890A104:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A134;
      }
      goto L_0890A10C;
    }
L_0890A10C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0890A134;
      }
      goto L_0890A128;
    }
L_0890A128:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20380)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(452), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0890A134;
L_0890A134:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A190;
      }
      goto L_0890A13C;
    }
L_0890A13C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (16294u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0890A188;
      }
      goto L_0890A160;
    }
L_0890A160:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890A188;
      }
      goto L_0890A170;
    }
L_0890A170:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A190;
      }
      goto L_0890A188;
    }
L_0890A188:
    ctx.gpr[31] = (0x0890A190u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0890A1A0;
L_0890A190:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890A1A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 57u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 58u);
      if (branch_taken) {
          goto L_0890A1F0;
      }
      goto L_0890A1CC;
    }
L_0890A1CC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0890A1F0;
      }
      goto L_0890A1D4;
    }
L_0890A1D4:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0890A1E0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 321u, 0x08911220u>(ctx, &aot_mem) && ctx.pc == 0x0890A1E0u) goto L_0890A1E0;
    return;
L_0890A1E0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A1F8;
      }
      goto L_0890A1E8;
    }
L_0890A1E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A41C;
      }
      goto L_0890A1F0;
    }
L_0890A1F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A468;
      }
      goto L_0890A1F8;
    }
L_0890A1F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890A208u);
    ctx.gpr[6] = (0u | 139u);
    goto L_08908C10;
L_0890A208:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A22C;
      }
      goto L_0890A214;
    }
L_0890A214:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 68u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890A270;
      }
      goto L_0890A22C;
    }
L_0890A22C:
    ctx.gpr[6] = (50298u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[31] = (0x0890A244u);
    ctx.gpr[6] = (4u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 187u, 0x0886D3B8u>(ctx, &aot_mem) && ctx.pc == 0x0890A244u) goto L_0890A244;
    return;
L_0890A244:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20380)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(452)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0890A278;
      }
      goto L_0890A268;
    }
L_0890A268:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A334;
      }
      goto L_0890A270;
    }
L_0890A270:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A468;
      }
      goto L_0890A278;
    }
L_0890A278:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
        goto L_0890A290;
    }
    goto L_0890A284;
L_0890A284:
    ctx.gpr[31] = (0x0890A28Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x0890A28Cu) goto L_0890A28C;
    return;
L_0890A28C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_0890A290;
L_0890A290:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0890A29Cu);
    ctx.gpr[6] = (0u | 139u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 633u, 0x0893E8D8u>(ctx, &aot_mem) && ctx.pc == 0x0890A29Cu) goto L_0890A29C;
    return;
L_0890A29C:
    ctx.gpr[4] = (0u | 84u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A2E0;
      }
      goto L_0890A2BC;
    }
L_0890A2BC:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (49608u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890A2D8u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 600u, 0x08A66CD8u>(ctx, &aot_mem) && ctx.pc == 0x0890A2D8u) goto L_0890A2D8;
    return;
L_0890A2D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A2F8;
      }
      goto L_0890A2E0;
    }
L_0890A2E0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0890A2F4u);
    ctx.gpr[7] = (0u | 139u);
    goto L_089089B8;
L_0890A2F4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_0890A2F8;
L_0890A2F8:
    ctx.gpr[31] = (0x0890A300u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x0890A300u) goto L_0890A300;
    return;
L_0890A300:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A41C;
      }
      goto L_0890A308;
    }
L_0890A308:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890A314u);
    ctx.gpr[5] = (0u | 105u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem) && ctx.pc == 0x0890A314u) goto L_0890A314;
    return;
L_0890A314:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0890A32Cu);
    ctx.gpr[6] = (0u | 35u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem) && ctx.pc == 0x0890A32Cu) goto L_0890A32C;
    return;
L_0890A32C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A41C;
      }
      goto L_0890A334;
    }
L_0890A334:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u | 6u);
      if (branch_taken) {
          goto L_0890A35C;
      }
      goto L_0890A340;
    }
L_0890A340:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1360)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0890A3D4;
      }
      goto L_0890A34C;
    }
L_0890A34C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(464)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A3D4;
      }
      goto L_0890A35C;
    }
L_0890A35C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0890A370u);
    ctx.gpr[7] = (0u | 141u);
    goto L_089089B8;
L_0890A370:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    ctx.gpr[31] = (0x0890A38Cu);
    ctx.gpr[6] = (0u | 36u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem) && ctx.pc == 0x0890A38Cu) goto L_0890A38C;
    return;
L_0890A38C:
    ctx.gpr[31] = (0x0890A394u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x0890A394u) goto L_0890A394;
    return;
L_0890A394:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A3A8;
      }
      goto L_0890A39C;
    }
L_0890A39C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890A3A8u);
    ctx.gpr[5] = (0u | 105u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem) && ctx.pc == 0x0890A3A8u) goto L_0890A3A8;
    return;
L_0890A3A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1360)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0890A41C;
      }
      goto L_0890A3B4;
    }
L_0890A3B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(464)));
    ctx.gpr[5] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A41C;
      }
      goto L_0890A3C4;
    }
L_0890A3C4:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(464), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0890A41C;
      }
      goto L_0890A3D4;
    }
L_0890A3D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A3EC;
      }
      goto L_0890A3E4;
    }
L_0890A3E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_0890A41C;
      }
      goto L_0890A3EC;
    }
L_0890A3EC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0890A400u);
    ctx.gpr[7] = (0u | 141u);
    goto L_089089B8;
L_0890A400:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    ctx.gpr[31] = (0x0890A41Cu);
    ctx.gpr[6] = (0u | 35u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem) && ctx.pc == 0x0890A41Cu) goto L_0890A41C;
    return;
L_0890A41C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-4097));
    ctx.gpr[4] = (ctx.gpr[4] | 8192u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(452), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0890A45C;
      }
      goto L_0890A440;
    }
L_0890A440:
    ctx.gpr[5] = (2193u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890A454u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13684));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem) && ctx.pc == 0x0890A454u) goto L_0890A454;
    return;
L_0890A454:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A468;
      }
      goto L_0890A45C;
    }
L_0890A45C:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x0890A468u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 179u, 0x0890CA8Cu>(ctx, &aot_mem) && ctx.pc == 0x0890A468u) goto L_0890A468;
    return;
L_0890A468:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
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
L_0890A484:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1268)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A564;
      }
      goto L_0890A4B0;
    }
L_0890A4B0:
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_0890A4CC;
      }
      goto L_0890A4C0;
    }
L_0890A4C0:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_0890A4CC;
L_0890A4CC:
    ctx.gpr[5] = (16320u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 31u));
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0890A4ECu);
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x0890A4ECu) goto L_0890A4EC;
    return;
L_0890A4EC:
    ctx.gpr[6] = (ctx.gpr[20] - ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0890A500u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 31u));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x0890A500u) goto L_0890A500;
    return;
L_0890A500:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[19]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0890A55C;
      }
      goto L_0890A538;
    }
L_0890A538:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1748)));
    ctx.gpr[5] = (ctx.gpr[17] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A554;
      }
      goto L_0890A548;
    }
L_0890A548:
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1744), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0890A55C;
      }
      goto L_0890A554;
    }
L_0890A554:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1744), ctx.gpr[4]);
    goto L_0890A55C;
L_0890A55C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A59C;
      }
      goto L_0890A564;
    }
L_0890A564:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A59C;
      }
      goto L_0890A578;
    }
L_0890A578:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1748)));
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A594;
      }
      goto L_0890A588;
    }
L_0890A588:
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1744), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0890A59C;
      }
      goto L_0890A594;
    }
L_0890A594:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1744), ctx.gpr[4]);
    goto L_0890A59C;
L_0890A59C:
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
L_0890A5BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1264)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A680;
      }
      goto L_0890A5E8;
    }
L_0890A5E8:
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_0890A604;
      }
      goto L_0890A5F8;
    }
L_0890A5F8:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_0890A604;
L_0890A604:
    ctx.gpr[5] = (16320u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 31u));
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0890A624u);
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x0890A624u) goto L_0890A624;
    return;
L_0890A624:
    ctx.gpr[6] = (ctx.gpr[20] - ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0890A638u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 31u));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x0890A638u) goto L_0890A638;
    return;
L_0890A638:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1748)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[19]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0890A678;
      }
      goto L_0890A670;
    }
L_0890A670:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1748), ctx.gpr[4]);
    goto L_0890A678;
L_0890A678:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A708;
      }
      goto L_0890A680;
    }
L_0890A680:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1748)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A708;
      }
      goto L_0890A694;
    }
L_0890A694:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & 4096u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A700;
      }
      goto L_0890A6A4;
    }
L_0890A6A4:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0890A6C4;
      }
      goto L_0890A6B8;
    }
L_0890A6B8:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_0890A6C4;
L_0890A6C4:
    ctx.gpr[4] = (16320u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
        goto L_0890A6EC;
    }
    goto L_0890A6E0;
L_0890A6E0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0890A6FC;
      }
      goto L_0890A6EC;
    }
L_0890A6EC:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_0890A6FC;
L_0890A6FC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    goto L_0890A700;
L_0890A700:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1748), ctx.gpr[4]);
    goto L_0890A708;
L_0890A708:
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
L_0890A728:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] << 24u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 24u));
    ctx.gpr[6] = (0u | 17u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0890A7AC;
      }
      goto L_0890A750;
    }
L_0890A750:
    ctx.gpr[31] = (0x0890A758u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x0890A758u) goto L_0890A758;
    return;
L_0890A758:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890A7A4;
      }
      goto L_0890A760;
    }
L_0890A760:
    ctx.gpr[31] = (0x0890A768u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem) && ctx.pc == 0x0890A768u) goto L_0890A768;
    return;
L_0890A768:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A788;
      }
      goto L_0890A770;
    }
L_0890A770:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890A7B4;
      }
      goto L_0890A780;
    }
L_0890A780:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A818;
      }
      goto L_0890A788;
    }
L_0890A788:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (2048u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1930), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0890AA70;
      }
      goto L_0890A7A4;
    }
L_0890A7A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0890AA70;
      }
      goto L_0890A7AC;
    }
L_0890A7AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0890AA70;
      }
      goto L_0890A7B4;
    }
L_0890A7B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0890A808;
      }
      goto L_0890A7C4;
    }
L_0890A7C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2276)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0890A808;
      }
      goto L_0890A7D4;
    }
L_0890A7D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0890A7F8;
      }
      goto L_0890A7E4;
    }
L_0890A7E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0890A818;
      }
      goto L_0890A7F8;
    }
L_0890A7F8:
    ctx.gpr[31] = (0x0890A800u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0890905C;
L_0890A800:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0890AA70;
      }
      goto L_0890A808;
    }
L_0890A808:
    ctx.gpr[31] = (0x0890A810u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0890905C;
L_0890A810:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0890AA70;
      }
      goto L_0890A818;
    }
L_0890A818:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1930), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_0890A874;
      }
      goto L_0890A820;
    }
L_0890A820:
    ctx.gpr[31] = (0x0890A828u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x0890A828u) goto L_0890A828;
    return;
L_0890A828:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20260)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20264)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0890A83Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x0890A83Cu) goto L_0890A83C;
    return;
L_0890A83C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20252)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20256)));
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[6] = (ctx.gpr[2] >> 31u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[6] = (ctx.gpr[1] | ctx.gpr[6]);
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[9] + ctx.gpr[7]);
    ctx.gpr[17] = (ctx.gpr[4] << 24u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 24u));
    goto L_0890A874;
L_0890A874:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1930))))));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_0890A8A0;
      }
      goto L_0890A890;
    }
L_0890A890:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_0890A8A0;
L_0890A8A0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] ^ 39u);
    ctx.gpr[7] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[31] = (0x0890A8BCu);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 118u, 0x089106ECu>(ctx, &aot_mem) && ctx.pc == 0x0890A8BCu) goto L_0890A8BC;
    return;
L_0890A8BC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A8CC;
      }
      goto L_0890A8C4;
    }
L_0890A8C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A8DC;
      }
      goto L_0890A8CC;
    }
L_0890A8CC:
    ctx.gpr[31] = (0x0890A8D4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0890905C;
L_0890A8D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0890AA70;
      }
      goto L_0890A8DC;
    }
L_0890A8DC:
    ctx.gpr[31] = (0x0890A8E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 843u, 0x0890FCD8u>(ctx, &aot_mem) && ctx.pc == 0x0890A8E4u) goto L_0890A8E4;
    return;
L_0890A8E4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890A9AC;
      }
      goto L_0890A8EC;
    }
L_0890A8EC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1930))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1930), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1930))))));
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
        goto L_0890A914;
    }
    goto L_0890A904;
L_0890A904:
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u - ctx.gpr[4]);
      if (branch_taken) {
          goto L_0890A914;
      }
      goto L_0890A914;
    }
L_0890A914:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1930), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1930))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0890A948;
      }
      goto L_0890A924;
    }
L_0890A924:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1930))))));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_0890A960;
      }
      goto L_0890A940;
    }
L_0890A940:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(56)));
      if (branch_taken) {
          goto L_0890A974;
      }
      goto L_0890A948;
    }
L_0890A948:
    ctx.gpr[31] = (0x0890A950u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0890B900;
L_0890A950:
    ctx.gpr[31] = (0x0890A958u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0890905C;
L_0890A958:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0890AA70;
      }
      goto L_0890A960;
    }
L_0890A960:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(56)));
    goto L_0890A974;
L_0890A974:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] ^ 39u);
    ctx.gpr[7] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[31] = (0x0890A98Cu);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 118u, 0x089106ECu>(ctx, &aot_mem) && ctx.pc == 0x0890A98Cu) goto L_0890A98C;
    return;
L_0890A98C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A99C;
      }
      goto L_0890A994;
    }
L_0890A994:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890A8DC;
      }
      goto L_0890A99C;
    }
L_0890A99C:
    ctx.gpr[31] = (0x0890A9A4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0890905C;
L_0890A9A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0890AA70;
      }
      goto L_0890A9AC;
    }
L_0890A9AC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0890A9D0;
      }
      goto L_0890A9C0;
    }
L_0890A9C0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_0890A9D0;
L_0890A9D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (0u | 39u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0890AA3C;
      }
      goto L_0890A9E0;
    }
L_0890A9E0:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1032)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(4))))));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x0890AA2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 174u, 0x089C89A0u>(ctx, &aot_mem) && ctx.pc == 0x0890AA2Cu) goto L_0890AA2C;
    return;
L_0890AA2C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890AA3C;
      }
      goto L_0890AA34;
    }
L_0890AA34:
    ctx.gpr[31] = (0x0890AA3Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0890905C;
L_0890AA3C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1930), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x0890AA50u);
    ctx.gpr[5] = (0u | 5u);
    goto L_08908D60;
L_0890AA50:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890AA5Cu);
    ctx.gpr[5] = (0u | 2u);
    goto L_0890BE50;
L_0890AA5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-16385));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[2] = (0u | 1u);
    goto L_0890AA70;
L_0890AA70:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890AA84:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    ctx.gpr[31] = (0x0890AAACu);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem) && ctx.pc == 0x0890AAACu) goto L_0890AAAC;
    return;
L_0890AAAC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890AB24;
      }
      goto L_0890AAB4;
    }
L_0890AAB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0890AACCu);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890AACCu) goto L_0890AACC;
    return;
L_0890AACC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0890AAE4u);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890AAE4u) goto L_0890AAE4;
    return;
L_0890AAE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    ctx.gpr[5] = (ctx.gpr[2] << 6u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(44))))));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890AB24;
      }
      goto L_0890AB0C;
    }
L_0890AB0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[17] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0890AB2C;
      }
      goto L_0890AB1C;
    }
L_0890AB1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890AB6C;
      }
      goto L_0890AB24;
    }
L_0890AB24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890AC3C;
      }
      goto L_0890AB2C;
    }
L_0890AB2C:
    ctx.gpr[31] = (0x0890AB34u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 10u, 0x08910074u>(ctx, &aot_mem) && ctx.pc == 0x0890AB34u) goto L_0890AB34;
    return;
L_0890AB34:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_0890AB6C;
      }
      goto L_0890AB4C;
    }
L_0890AB4C:
    ctx.gpr[31] = (0x0890AB54u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 10u, 0x08910074u>(ctx, &aot_mem) && ctx.pc == 0x0890AB54u) goto L_0890AB54;
    return;
L_0890AB54:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0890AB9C;
      }
      goto L_0890AB6C;
    }
L_0890AB6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0890AB94;
      }
      goto L_0890AB7C;
    }
L_0890AB7C:
    ctx.gpr[31] = (0x0890AB84u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 539u, 0x08906704u>(ctx, &aot_mem) && ctx.pc == 0x0890AB84u) goto L_0890AB84;
    return;
L_0890AB84:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890ABA4;
      }
      goto L_0890AB8C;
    }
L_0890AB8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890ABAC;
      }
      goto L_0890AB94;
    }
L_0890AB94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890AC3C;
      }
      goto L_0890AB9C;
    }
L_0890AB9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890AC3C;
      }
      goto L_0890ABA4;
    }
L_0890ABA4:
    ctx.gpr[31] = (0x0890ABACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 438u, 0x088E34ECu>(ctx, &aot_mem) && ctx.pc == 0x0890ABACu) goto L_0890ABAC;
    return;
L_0890ABAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0890ABC0;
      }
      goto L_0890ABB8;
    }
L_0890ABB8:
    ctx.gpr[31] = (0x0890ABC0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 36u, 0x08A08730u>(ctx, &aot_mem) && ctx.pc == 0x0890ABC0u) goto L_0890ABC0;
    return;
L_0890ABC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0890ABD8u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890ABD8u) goto L_0890ABD8;
    return;
L_0890ABD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(40));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[6]);
    ctx.gpr[6] = (0u | 0u);
    jump_target = ctx.gpr[8];
    ctx.gpr[31] = (0x0890ABFCu);
    ctx.gpr[7] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890ABFCu) goto L_0890ABFC;
    return;
L_0890ABFC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890AC08u);
    ctx.gpr[5] = (0u | 6u);
    goto L_08908D60;
L_0890AC08:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(906), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(904), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          goto L_0890AC24;
      }
      goto L_0890AC1C;
    }
L_0890AC1C:
    ctx.gpr[31] = (0x0890AC24u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0890B488;
L_0890AC24:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890AC30u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 298u, 0x089110BCu>(ctx, &aot_mem) && ctx.pc == 0x0890AC30u) goto L_0890AC30;
    return;
L_0890AC30:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890AC3Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 34u, 0x08910218u>(ctx, &aot_mem) && ctx.pc == 0x0890AC3Cu) goto L_0890AC3C;
    return;
L_0890AC3C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890AC58:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x0890AC7Cu);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem) && ctx.pc == 0x0890AC7Cu) goto L_0890AC7C;
    return;
L_0890AC7C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890ACF4;
      }
      goto L_0890AC84;
    }
L_0890AC84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0890AC9Cu);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890AC9Cu) goto L_0890AC9C;
    return;
L_0890AC9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0890ACB4u);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890ACB4u) goto L_0890ACB4;
    return;
L_0890ACB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    ctx.gpr[5] = (ctx.gpr[2] << 6u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(44))))));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890ACF4;
      }
      goto L_0890ACDC;
    }
L_0890ACDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 39u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0890ACFC;
      }
      goto L_0890ACEC;
    }
L_0890ACEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890AD0C;
      }
      goto L_0890ACF4;
    }
L_0890ACF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890ADAC;
      }
      goto L_0890ACFC;
    }
L_0890ACFC:
    ctx.gpr[31] = (0x0890AD04u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 3u, 0x08910020u>(ctx, &aot_mem) && ctx.pc == 0x0890AD04u) goto L_0890AD04;
    return;
L_0890AD04:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0890AD1C;
      }
      goto L_0890AD0C;
    }
L_0890AD0C:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890AD24;
      }
      goto L_0890AD14;
    }
L_0890AD14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890ADAC;
      }
      goto L_0890AD1C;
    }
L_0890AD1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890ADAC;
      }
      goto L_0890AD24;
    }
L_0890AD24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0890AD3Cu);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890AD3Cu) goto L_0890AD3C;
    return;
L_0890AD3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(40));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[6]);
    ctx.gpr[6] = (0u | 0u);
    jump_target = ctx.gpr[8];
    ctx.gpr[31] = (0x0890AD60u);
    ctx.gpr[7] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890AD60u) goto L_0890AD60;
    return;
L_0890AD60:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0890AD6Cu);
    ctx.gpr[5] = (0u | 39u);
    goto L_08908D60;
L_0890AD6C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0890AD78u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 298u, 0x089110BCu>(ctx, &aot_mem) && ctx.pc == 0x0890AD78u) goto L_0890AD78;
    return;
L_0890AD78:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0890AD84u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 50u, 0x0891034Cu>(ctx, &aot_mem) && ctx.pc == 0x0890AD84u) goto L_0890AD84;
    return;
L_0890AD84:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0890AD90u);
    ctx.gpr[5] = (0u | 6u);
    goto L_0890BE50;
L_0890AD90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(248));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x0890ADACu);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890ADACu) goto L_0890ADAC;
    return;
L_0890ADAC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890ADC4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x0890ADE0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2060)));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 3u, 0x08910020u>(ctx, &aot_mem) && ctx.pc == 0x0890ADE0u) goto L_0890ADE0;
    return;
L_0890ADE0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890AE4C;
      }
      goto L_0890ADEC;
    }
L_0890ADEC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0890AE44;
      }
      goto L_0890AE28;
    }
L_0890AE28:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x0890AE34u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 763u, 0x0890F4BCu>(ctx, &aot_mem) && ctx.pc == 0x0890AE34u) goto L_0890AE34;
    return;
L_0890AE34:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890AE54;
      }
      goto L_0890AE3C;
    }
L_0890AE3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0890AE80;
      }
      goto L_0890AE44;
    }
L_0890AE44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0890AE80;
      }
      goto L_0890AE4C;
    }
L_0890AE4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0890AE80;
      }
      goto L_0890AE54;
    }
L_0890AE54:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890AE60u);
    ctx.gpr[5] = (0u | 6u);
    goto L_0890BE50;
L_0890AE60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(248));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x0890AE7Cu);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890AE7Cu) goto L_0890AE7C;
    return;
L_0890AE7C:
    ctx.gpr[2] = (0u | 0u);
    goto L_0890AE80;
L_0890AE80:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890AE94:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x0890AEACu);
    ctx.gpr[5] = (0u | 1u);
    goto L_0890BE50;
L_0890AEAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(248));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 0u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x0890AEC8u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890AEC8u) goto L_0890AEC8;
    return;
L_0890AEC8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890AED8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0890AF00u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem) && ctx.pc == 0x0890AF00u) goto L_0890AF00;
    return;
L_0890AF00:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890AF78;
      }
      goto L_0890AF08;
    }
L_0890AF08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0890AF20u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890AF20u) goto L_0890AF20;
    return;
L_0890AF20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0890AF38u);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890AF38u) goto L_0890AF38;
    return;
L_0890AF38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    ctx.gpr[5] = (ctx.gpr[2] << 6u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(44))))));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890AF78;
      }
      goto L_0890AF60;
    }
L_0890AF60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[18] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0890AF80;
      }
      goto L_0890AF70;
    }
L_0890AF70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890AF90;
      }
      goto L_0890AF78;
    }
L_0890AF78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890B05C;
      }
      goto L_0890AF80;
    }
L_0890AF80:
    ctx.gpr[31] = (0x0890AF88u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 3u, 0x08910020u>(ctx, &aot_mem) && ctx.pc == 0x0890AF88u) goto L_0890AF88;
    return;
L_0890AF88:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0890AFB8;
      }
      goto L_0890AF90;
    }
L_0890AF90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0890AFB0;
      }
      goto L_0890AFA0;
    }
L_0890AFA0:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890AFC0;
      }
      goto L_0890AFA8;
    }
L_0890AFA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890B05C;
      }
      goto L_0890AFB0;
    }
L_0890AFB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890B05C;
      }
      goto L_0890AFB8;
    }
L_0890AFB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890B05C;
      }
      goto L_0890AFC0;
    }
L_0890AFC0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0890AFD0;
      }
      goto L_0890AFC8;
    }
L_0890AFC8:
    ctx.gpr[31] = (0x0890AFD0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 36u, 0x08A08730u>(ctx, &aot_mem) && ctx.pc == 0x0890AFD0u) goto L_0890AFD0;
    return;
L_0890AFD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0890AFE8u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890AFE8u) goto L_0890AFE8;
    return;
L_0890AFE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(40));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[6]);
    ctx.gpr[6] = (0u | 0u);
    jump_target = ctx.gpr[8];
    ctx.gpr[31] = (0x0890B00Cu);
    ctx.gpr[7] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890B00Cu) goto L_0890B00C;
    return;
L_0890B00C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890B024;
      }
      goto L_0890B01C;
    }
L_0890B01C:
    ctx.gpr[31] = (0x0890B024u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0890B488;
L_0890B024:
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(906), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(904), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0890B038u);
    ctx.gpr[5] = (0u | 7u);
    goto L_08908D60;
L_0890B038:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0890B044u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 298u, 0x089110BCu>(ctx, &aot_mem) && ctx.pc == 0x0890B044u) goto L_0890B044;
    return;
L_0890B044:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0890B050u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 50u, 0x0891034Cu>(ctx, &aot_mem) && ctx.pc == 0x0890B050u) goto L_0890B050;
    return;
L_0890B050:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0890B05Cu);
    ctx.gpr[5] = (0u | 1u);
    goto L_0890BE50;
L_0890B05C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
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
L_0890B078:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x0890B08Cu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_0890905C;
L_0890B08C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(906), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(904), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1936), static_cast<std::uint8_t>(0u));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890B0A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0890B0E4u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890B0E4u) goto L_0890B0E4;
    return;
L_0890B0E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0890B0FCu);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890B0FCu) goto L_0890B0FC;
    return;
L_0890B0FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[2] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(44))))));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890B188;
      }
      goto L_0890B124;
    }
L_0890B124:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2072)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890B180;
      }
      goto L_0890B138;
    }
L_0890B138:
    ctx.gpr[31] = (0x0890B140u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem) && ctx.pc == 0x0890B140u) goto L_0890B140;
    return;
L_0890B140:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890B178;
      }
      goto L_0890B148;
    }
L_0890B148:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890B178;
      }
      goto L_0890B158;
    }
L_0890B158:
    ctx.gpr[6] = (16457u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[6] = (ctx.gpr[6] | 4059u);
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
      if (branch_taken) {
          goto L_0890B190;
      }
      goto L_0890B170;
    }
L_0890B170:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890B1BC;
      }
      goto L_0890B178;
    }
L_0890B178:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890B260;
      }
      goto L_0890B180;
    }
L_0890B180:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890B260;
      }
      goto L_0890B188;
    }
L_0890B188:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890B260;
      }
      goto L_0890B190;
    }
L_0890B190:
    ctx.gpr[31] = (0x0890B198u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 36u, 0x08A08730u>(ctx, &aot_mem) && ctx.pc == 0x0890B198u) goto L_0890B198;
    return;
L_0890B198:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0890B1A4u);
    ctx.gpr[5] = (0u | 8u);
    goto L_08908D60;
L_0890B1A4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0890B1B0u);
    ctx.gpr[5] = (0u | 4u);
    goto L_0890BE50;
L_0890B1B0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0890B1BCu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 44u, 0x089102D4u>(ctx, &aot_mem) && ctx.pc == 0x0890B1BCu) goto L_0890B1BC;
    return;
L_0890B1BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (16384u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[31] = (0x0890B1D4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 887u, 0x0890FF64u>(ctx, &aot_mem) && ctx.pc == 0x0890B1D4u) goto L_0890B1D4;
    return;
L_0890B1D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1368), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[31] = (0x0890B200u);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem) && ctx.pc == 0x0890B200u) goto L_0890B200;
    return;
L_0890B200:
    ctx.gpr[31] = (0x0890B208u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem) && ctx.pc == 0x0890B208u) goto L_0890B208;
    return;
L_0890B208:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2256)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[16] = ctx.fpr[13] + ctx.fpr[20];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2260)));
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16585u << 16u);
      if (branch_taken) {
          goto L_0890B23C;
      }
      goto L_0890B228;
    }
L_0890B228:
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0890B260;
      }
      goto L_0890B23C;
    }
L_0890B23C:
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16585u << 16u);
      if (branch_taken) {
          goto L_0890B260;
      }
      goto L_0890B250;
    }
L_0890B250:
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0890B260;
L_0890B260:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
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
L_0890B27C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0890B2B8u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890B2B8u) goto L_0890B2B8;
    return;
L_0890B2B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0890B2D0u);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890B2D0u) goto L_0890B2D0;
    return;
L_0890B2D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[2] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(44))))));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890B330;
      }
      goto L_0890B2F8;
    }
L_0890B2F8:
    ctx.gpr[31] = (0x0890B300u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem) && ctx.pc == 0x0890B300u) goto L_0890B300;
    return;
L_0890B300:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890B328;
      }
      goto L_0890B308;
    }
L_0890B308:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890B328;
      }
      goto L_0890B318;
    }
L_0890B318:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890B338;
      }
      goto L_0890B320;
    }
L_0890B320:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890B42C;
      }
      goto L_0890B328;
    }
L_0890B328:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890B42C;
      }
      goto L_0890B330;
    }
L_0890B330:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890B42C;
      }
      goto L_0890B338;
    }
L_0890B338:
    ctx.gpr[31] = (0x0890B340u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 36u, 0x08A08730u>(ctx, &aot_mem) && ctx.pc == 0x0890B340u) goto L_0890B340;
    return;
L_0890B340:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890B34Cu);
    ctx.gpr[5] = (0u | 4u);
    goto L_0890BE50;
L_0890B34C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890B358u);
    ctx.gpr[5] = (0u | 9u);
    goto L_08908D60;
L_0890B358:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (16384u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890B374u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 60u, 0x089103CCu>(ctx, &aot_mem) && ctx.pc == 0x0890B374u) goto L_0890B374;
    return;
L_0890B374:
    ctx.gpr[5] = (16457u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 4059u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) <= 0;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_0890B3AC;
      }
      goto L_0890B38C;
    }
L_0890B38C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1368), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0890B3C0;
      }
      goto L_0890B3AC;
    }
L_0890B3AC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1368), 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_0890B3C0;
L_0890B3C0:
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[31] = (0x0890B3CCu);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem) && ctx.pc == 0x0890B3CCu) goto L_0890B3CC;
    return;
L_0890B3CC:
    ctx.gpr[31] = (0x0890B3D4u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem) && ctx.pc == 0x0890B3D4u) goto L_0890B3D4;
    return;
L_0890B3D4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2256)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[16] = ctx.fpr[12] + ctx.fpr[20];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2260)));
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16585u << 16u);
      if (branch_taken) {
          goto L_0890B408;
      }
      goto L_0890B3F4;
    }
L_0890B3F4:
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0890B42C;
      }
      goto L_0890B408;
    }
L_0890B408:
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16585u << 16u);
      if (branch_taken) {
          goto L_0890B42C;
      }
      goto L_0890B41C;
    }
L_0890B41C:
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0890B42C;
L_0890B42C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
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
L_0890B448:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x0890B45Cu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 78u, 0x08A08AE0u>(ctx, &aot_mem) && ctx.pc == 0x0890B45Cu) goto L_0890B45C;
    return;
L_0890B45C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (49152u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1740), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1368), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890B488:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    goto L_0890B490;
L_0890B490:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(908), 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0890B490;
      }
      goto L_0890B4A4;
    }
L_0890B4A4:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(904), static_cast<std::uint16_t>(0u));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(906), static_cast<std::uint16_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890B4B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    ctx.gpr[31] = (0x0890B4C4u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 3u, 0x08910020u>(ctx, &aot_mem) && ctx.pc == 0x0890B4C4u) goto L_0890B4C4;
    return;
L_0890B4C4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890B5F0;
      }
      goto L_0890B4CC;
    }
L_0890B4CC:
    ctx.gpr[31] = (0x0890B4D4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 3u, 0x08910020u>(ctx, &aot_mem) && ctx.pc == 0x0890B4D4u) goto L_0890B4D4;
    return;
L_0890B4D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890B5F0;
      }
      goto L_0890B4F0;
    }
L_0890B4F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2000));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890B568;
      }
      goto L_0890B508;
    }
L_0890B508:
    ctx.gpr[31] = (0x0890B510u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x0890B510u) goto L_0890B510;
    return;
L_0890B510:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
        goto L_0890B534;
    }
    goto L_0890B51C;
L_0890B51C:
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
      if (branch_taken) {
          goto L_0890B53C;
      }
      goto L_0890B534;
    }
L_0890B534:
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
    goto L_0890B53C;
L_0890B53C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x0890B548u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0890A728;
L_0890B548:
    ctx.gpr[31] = (0x0890B550u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 3u, 0x08910020u>(ctx, &aot_mem) && ctx.pc == 0x0890B550u) goto L_0890B550;
    return;
L_0890B550:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0890B560u);
    ctx.gpr[6] = (0u | 20000u);
    goto L_0890B27C;
L_0890B560:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890B5F8;
      }
      goto L_0890B568;
    }
L_0890B568:
    ctx.gpr[31] = (0x0890B570u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 3u, 0x08910020u>(ctx, &aot_mem) && ctx.pc == 0x0890B570u) goto L_0890B570;
    return;
L_0890B570:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0890B5C8;
      }
      goto L_0890B5C0;
    }
L_0890B5C0:
    ctx.gpr[4] = (0u | 50u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1932), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_0890B5C8;
L_0890B5C8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890B5D4u);
    ctx.gpr[5] = (0u | 121u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem) && ctx.pc == 0x0890B5D4u) goto L_0890B5D4;
    return;
L_0890B5D4:
    ctx.gpr[31] = (0x0890B5DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 3u, 0x08910020u>(ctx, &aot_mem) && ctx.pc == 0x0890B5DCu) goto L_0890B5DC;
    return;
L_0890B5DC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0890B5E8u);
    ctx.gpr[5] = (0u | 123u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem) && ctx.pc == 0x0890B5E8u) goto L_0890B5E8;
    return;
L_0890B5E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890B5F8;
      }
      goto L_0890B5F0;
    }
L_0890B5F0:
    ctx.gpr[31] = (0x0890B5F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0890905C;
L_0890B5F8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890B608:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x0890B630u);
    ctx.gpr[6] = (0u | 152u);
    goto L_08908C10;
L_0890B630:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_0890B6BC;
      }
      goto L_0890B63C;
    }
L_0890B63C:
    ctx.gpr[31] = (0x0890B644u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x0890B644u) goto L_0890B644;
    return;
L_0890B644:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0890B6AC;
      }
      goto L_0890B64C;
    }
L_0890B64C:
    ctx.gpr[31] = (0x0890B654u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x0890B654u) goto L_0890B654;
    return;
L_0890B654:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890B6AC;
      }
      goto L_0890B65C;
    }
L_0890B65C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0890B6AC;
      }
      goto L_0890B670;
    }
L_0890B670:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0890B694u);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 155u, 0x08A1CF5Cu>(ctx, &aot_mem) && ctx.pc == 0x0890B694u) goto L_0890B694;
    return;
L_0890B694:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0890B6ACu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 261u, 0x08A1D580u>(ctx, &aot_mem) && ctx.pc == 0x0890B6ACu) goto L_0890B6AC;
    return;
L_0890B6AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    goto L_0890B6BC;
L_0890B6BC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890B6E4;
      }
      goto L_0890B6C8;
    }
L_0890B6C8:
    ctx.gpr[31] = (0x0890B6D0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x0890B6D0u) goto L_0890B6D0;
    return;
L_0890B6D0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890B6E4;
      }
      goto L_0890B6D8;
    }
L_0890B6D8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(304))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(304), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0890B6E4;
L_0890B6E4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0890B6F0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x0890B6F0u) goto L_0890B6F0;
    return;
L_0890B6F0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890B71C;
      }
      goto L_0890B6F8;
    }
L_0890B6F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890B714u);
    ctx.gpr[5] = (0u | 58u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 222u, 0x08910CCCu>(ctx, &aot_mem) && ctx.pc == 0x0890B714u) goto L_0890B714;
    return;
L_0890B714:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890B748;
      }
      goto L_0890B71C;
    }
L_0890B71C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890B748;
      }
      goto L_0890B728;
    }
L_0890B728:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[5] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 17u);
      if (branch_taken) {
          goto L_0890B740;
      }
      goto L_0890B738;
    }
L_0890B738:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0890B748;
      }
      goto L_0890B740;
    }
L_0890B740:
    ctx.gpr[31] = (0x0890B748u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 441u, 0x089AA5B8u>(ctx, &aot_mem) && ctx.pc == 0x0890B748u) goto L_0890B748;
    return;
L_0890B748:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890B754u);
    ctx.gpr[5] = (0u | 58u);
    goto L_08908D60;
L_0890B754:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890B760u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x0890B760u) goto L_0890B760;
    return;
L_0890B760:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2116), 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[31] = (0x0890B784u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem) && ctx.pc == 0x0890B784u) goto L_0890B784;
    return;
L_0890B784:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (0x0890B790u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 922u, 0x08907F9Cu>(ctx, &aot_mem) && ctx.pc == 0x0890B790u) goto L_0890B790;
    return;
L_0890B790:
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0890B7A8u);
    ctx.gpr[8] = (0u | 250u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 24u, 0x0898019Cu>(ctx, &aot_mem) && ctx.pc == 0x0890B7A8u) goto L_0890B7A8;
    return;
L_0890B7A8:
    ctx.gpr[31] = (0x0890B7B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x0890B7B0u) goto L_0890B7B0;
    return;
L_0890B7B0:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0890B864;
      }
      goto L_0890B7B8;
    }
L_0890B7B8:
    ctx.gpr[6] = (50298u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x0890B7CCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 15u, 0x088E4294u>(ctx, &aot_mem) && ctx.pc == 0x0890B7CCu) goto L_0890B7CC;
    return;
L_0890B7CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(468)));
    ctx.gpr[5] = (32u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890B854;
      }
      goto L_0890B7E0;
    }
L_0890B7E0:
    ctx.gpr[31] = (0x0890B7E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 319u, 0x0890D46Cu>(ctx, &aot_mem) && ctx.pc == 0x0890B7E8u) goto L_0890B7E8;
    return;
L_0890B7E8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890B84C;
      }
      goto L_0890B7F0;
    }
L_0890B7F0:
    ctx.gpr[31] = (0x0890B7F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x0890B7F8u) goto L_0890B7F8;
    return;
L_0890B7F8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20244)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20248)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0890B80Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x0890B80Cu) goto L_0890B80C;
    return;
L_0890B80C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[6] = (ctx.gpr[2] >> 31u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[6] = (ctx.gpr[1] | ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (2246u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(30712));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-182)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890B854;
      }
      goto L_0890B84C;
    }
L_0890B84C:
    ctx.gpr[31] = (0x0890B854u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 814u, 0x088F79BCu>(ctx, &aot_mem) && ctx.pc == 0x0890B854u) goto L_0890B854;
    return;
L_0890B854:
    ctx.gpr[31] = (0x0890B85Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 754u, 0x088F3C48u>(ctx, &aot_mem) && ctx.pc == 0x0890B85Cu) goto L_0890B85C;
    return;
L_0890B85C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
      if (branch_taken) {
          goto L_0890B87C;
      }
      goto L_0890B864;
    }
L_0890B864:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
        goto L_0890B87C;
    }
    goto L_0890B870;
L_0890B870:
    ctx.gpr[31] = (0x0890B878u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 814u, 0x088F79BCu>(ctx, &aot_mem) && ctx.pc == 0x0890B878u) goto L_0890B878;
    return;
L_0890B878:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    goto L_0890B87C;
L_0890B87C:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-65));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1929), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1780))))));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1768), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(472)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1780), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-12289));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(464)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(472), ctx.gpr[4]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1025));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(464), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0890B8D8u);
    ctx.gpr[8] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 24u, 0x0898019Cu>(ctx, &aot_mem) && ctx.pc == 0x0890B8D8u) goto L_0890B8D8;
    return;
L_0890B8D8:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    ctx.gpr[31] = (0x0890B8E4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 614u, 0x08A066D4u>(ctx, &aot_mem) && ctx.pc == 0x0890B8E4u) goto L_0890B8E4;
    return;
L_0890B8E4:
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
L_0890B900:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x0890B918u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem) && ctx.pc == 0x0890B918u) goto L_0890B918;
    return;
L_0890B918:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890B930;
      }
      goto L_0890B920;
    }
L_0890B920:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 58u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0890BA0C;
      }
      goto L_0890B930;
    }
L_0890B930:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890B93Cu);
    ctx.gpr[5] = (0u | 0u);
    goto L_08908D60;
L_0890B93C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890B948u);
    ctx.gpr[5] = (0u | 0u);
    goto L_0890BE50;
L_0890B948:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890B954u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 50u, 0x0891034Cu>(ctx, &aot_mem) && ctx.pc == 0x0890B954u) goto L_0890B954;
    return;
L_0890B954:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0890B970u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 34u, 0x08910218u>(ctx, &aot_mem) && ctx.pc == 0x0890B970u) goto L_0890B970;
    return;
L_0890B970:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890B97Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 60u, 0x089103CCu>(ctx, &aot_mem) && ctx.pc == 0x0890B97Cu) goto L_0890B97C;
    return;
L_0890B97C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x0890B99Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 44u, 0x089102D4u>(ctx, &aot_mem) && ctx.pc == 0x0890B99Cu) goto L_0890B99C;
    return;
L_0890B99C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890B9A8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 60u, 0x089103CCu>(ctx, &aot_mem) && ctx.pc == 0x0890B9A8u) goto L_0890B9A8;
    return;
L_0890B9A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-513));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1368), 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1372), 0u);
    ctx.gpr[4] = (ctx.gpr[4] | 512u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[31] = (0x0890B9CCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 438u, 0x088E34ECu>(ctx, &aot_mem) && ctx.pc == 0x0890B9CCu) goto L_0890B9CC;
    return;
L_0890B9CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(464)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(468)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(464), ctx.gpr[4]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1025));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(468), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2116), 0u);
    goto L_0890BA0C;
L_0890BA0C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890BA20:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 36u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 57u);
      if (branch_taken) {
          goto L_0890BADC;
      }
      goto L_0890BA40;
    }
L_0890BA40:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 58u);
      if (branch_taken) {
          goto L_0890BADC;
      }
      goto L_0890BA48;
    }
L_0890BA48:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0890BADC;
      }
      goto L_0890BA50;
    }
L_0890BA50:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890BA5Cu);
    ctx.gpr[5] = (0u | 36u);
    goto L_08908D60;
L_0890BA5C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[6] = (49280u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x0890BA88u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 15u, 0x088E4294u>(ctx, &aot_mem) && ctx.pc == 0x0890BA88u) goto L_0890BA88;
    return;
L_0890BA88:
    ctx.gpr[8] = (16512u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0890BAA4u);
    ctx.gpr[7] = (0u | 159u);
    goto L_089088F4;
L_0890BAA4:
    ctx.gpr[5] = (2192u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890BAB8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(20748));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem) && ctx.pc == 0x0890BAB8u) goto L_0890BAB8;
    return;
L_0890BAB8:
    ctx.gpr[4] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1736), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1676)));
    ctx.gpr[5] = (0u | 48u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
        goto L_0890BAE4;
    }
    goto L_0890BAD4;
L_0890BAD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890BB00;
      }
      goto L_0890BADC;
    }
L_0890BADC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890BB0C;
      }
      goto L_0890BAE4;
    }
L_0890BAE4:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1676), ctx.gpr[4]);
    goto L_0890BB00;
L_0890BB00:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890BB0Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 922u, 0x08907F9Cu>(ctx, &aot_mem) && ctx.pc == 0x0890BB0Cu) goto L_0890BB0C;
    return;
L_0890BB0C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890BB1C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2232)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 36u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0890BB48;
      }
      goto L_0890BB3C;
    }
L_0890BB3C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890BB48u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08908E78;
L_0890BB48:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890BB58u);
    ctx.gpr[6] = (0u | 161u);
    goto L_08908C10;
L_0890BB58:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890BB98;
      }
      goto L_0890BB60;
    }
L_0890BB60:
    ctx.gpr[8] = (16640u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0890BB7Cu);
    ctx.gpr[7] = (0u | 160u);
    goto L_089088F4;
L_0890BB7C:
    ctx.gpr[5] = (2192u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890BB90u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(20812));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem) && ctx.pc == 0x0890BB90u) goto L_0890BB90;
    return;
L_0890BB90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
      if (branch_taken) {
          goto L_0890BBA8;
      }
      goto L_0890BB98;
    }
L_0890BB98:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x0890BBA4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 235u, 0x0890514Cu>(ctx, &aot_mem) && ctx.pc == 0x0890BBA4u) goto L_0890BBA4;
    return;
L_0890BBA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    goto L_0890BBA8;
L_0890BBA8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0890BBB8;
      }
      goto L_0890BBB0;
    }
L_0890BBB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890BBD8;
      }
      goto L_0890BBB8;
    }
L_0890BBB8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890BBC4u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08908D60;
L_0890BBC4:
    ctx.gpr[31] = (0x0890BBCCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 78u, 0x08A08AE0u>(ctx, &aot_mem) && ctx.pc == 0x0890BBCCu) goto L_0890BBCC;
    return;
L_0890BBCC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890BBD8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x0890BBD8u) goto L_0890BBD8;
    return;
L_0890BBD8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890BBEC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x0890BC08u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem) && ctx.pc == 0x0890BC08u) goto L_0890BC08;
    return;
L_0890BC08:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890BD90;
      }
      goto L_0890BC10;
    }
L_0890BC10:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890BC20u);
    ctx.gpr[6] = (0u | 159u);
    goto L_08908C10;
L_0890BC20:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890BC34u);
    ctx.gpr[6] = (0u | 160u);
    goto L_08908C10;
L_0890BC34:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890BC48u);
    ctx.gpr[6] = (0u | 161u);
    goto L_08908C10;
L_0890BC48:
    ctx.gpr[4] = (ctx.gpr[18] | ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890BC7C;
      }
      goto L_0890BC58;
    }
L_0890BC58:
    ctx.gpr[8] = (16512u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0890BC74u);
    ctx.gpr[7] = (0u | 161u);
    goto L_089088F4;
L_0890BC74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890BD90;
      }
      goto L_0890BC7C;
    }
L_0890BC7C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890BCFC;
      }
      goto L_0890BC84;
    }
L_0890BC84:
    ctx.gpr[4] = (16051u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0890BD90;
      }
      goto L_0890BCA4;
    }
L_0890BCA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(772)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890BD90;
      }
      goto L_0890BCB0;
    }
L_0890BCB0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890BCBCu);
    ctx.gpr[5] = (0u | 330u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 897u, 0x08907E38u>(ctx, &aot_mem) && ctx.pc == 0x0890BCBCu) goto L_0890BCBC;
    return;
L_0890BCBC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890BD90;
      }
      goto L_0890BCC8;
    }
L_0890BCC8:
    ctx.gpr[31] = (0x0890BCD0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x0890BCD0u) goto L_0890BCD0;
    return;
L_0890BCD0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890BD90;
      }
      goto L_0890BCD8;
    }
L_0890BCD8:
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x0890BCE8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 16u, 0x08ADC120u>(ctx, &aot_mem) && ctx.pc == 0x0890BCE8u) goto L_0890BCE8;
    return;
L_0890BCE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (0x0890BCF4u);
    ctx.gpr[5] = (0u | 330u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 115u, 0x089D4940u>(ctx, &aot_mem) && ctx.pc == 0x0890BCF4u) goto L_0890BCF4;
    return;
L_0890BCF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890BD90;
      }
      goto L_0890BCFC;
    }
L_0890BCFC:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890BD90;
      }
      goto L_0890BD04;
    }
L_0890BD04:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0890BD90;
      }
      goto L_0890BD20;
    }
L_0890BD20:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0890BD90;
      }
      goto L_0890BD38;
    }
L_0890BD38:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890BD44u);
    ctx.gpr[5] = (0u | 330u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 922u, 0x08907F9Cu>(ctx, &aot_mem) && ctx.pc == 0x0890BD44u) goto L_0890BD44;
    return;
L_0890BD44:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890BD7C;
      }
      goto L_0890BD50;
    }
L_0890BD50:
    ctx.gpr[31] = (0x0890BD58u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x0890BD58u) goto L_0890BD58;
    return;
L_0890BD58:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890BD7C;
      }
      goto L_0890BD60;
    }
L_0890BD60:
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x0890BD70u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 16u, 0x08ADC120u>(ctx, &aot_mem) && ctx.pc == 0x0890BD70u) goto L_0890BD70;
    return;
L_0890BD70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (0x0890BD7Cu);
    ctx.gpr[5] = (0u | 330u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 125u, 0x089D49DCu>(ctx, &aot_mem) && ctx.pc == 0x0890BD7Cu) goto L_0890BD7C;
    return;
L_0890BD7C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1676)));
    ctx.gpr[31] = (0x0890BD88u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0890816C;
L_0890BD88:
    ctx.gpr[4] = (0u | 48u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1676), ctx.gpr[4]);
    goto L_0890BD90;
L_0890BD90:
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
L_0890BDA8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0890BDB8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 271u, 0x0884D5D4u>(ctx, &aot_mem) && ctx.pc == 0x0890BDB8u) goto L_0890BDB8;
    return;
L_0890BDB8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_0890BDF0;
      }
      goto L_0890BDC4;
    }
L_0890BDC4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[6] & 16u);
    ctx.gpr[7] = (0u < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890BDE4;
      }
      goto L_0890BDDC;
    }
L_0890BDDC:
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    goto L_0890BDE4;
L_0890BDE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890BDC4;
      }
      goto L_0890BDF0;
    }
L_0890BDF0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890BDFC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0890BE0Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 271u, 0x0884D5D4u>(ctx, &aot_mem) && ctx.pc == 0x0890BE0Cu) goto L_0890BE0C;
    return;
L_0890BE0C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890BE44;
      }
      goto L_0890BE18;
    }
L_0890BE18:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[5] & 16u);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890BE38;
      }
      goto L_0890BE30;
    }
L_0890BE30:
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    goto L_0890BE38;
L_0890BE38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890BE18;
      }
      goto L_0890BE44;
    }
L_0890BE44:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890BE50:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2244), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890BE58:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2252), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890BE60:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x0890BE7Cu);
    ctx.gpr[6] = (0u | 2u);
    goto L_08908C10;
L_0890BE7C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890BE94;
      }
      goto L_0890BE84;
    }
L_0890BE84:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890BE94u);
    ctx.gpr[6] = (0u | 3u);
    goto L_08908C10;
L_0890BE94:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890BEAC;
      }
      goto L_0890BE9C;
    }
L_0890BE9C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890BEACu);
    ctx.gpr[6] = (0u | 4u);
    goto L_08908C10;
L_0890BEAC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890BEC4;
      }
      goto L_0890BEB4;
    }
L_0890BEB4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890BEC4u);
    ctx.gpr[6] = (0u | 5u);
    goto L_08908C10;
L_0890BEC4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890BED4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(456)));
    ctx.gpr[2] = (ctx.gpr[4] & 2u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890BEE4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (17204u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2256)));
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.fpr[24] = ctx.fpr[24] / ctx.fpr[22];
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1924))))));
    ctx.gpr[6] = (2246u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 6u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(23472));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[31] = (0x0890BF5Cu);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem) && ctx.pc == 0x0890BF5Cu) goto L_0890BF5C;
    return;
L_0890BF5C:
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0890BF7Cu);
    ctx.gpr[7] = (0u | 0u);
    goto L_08909990;
L_0890BF7C:
    ctx.gpr[31] = (0x0890BF84u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 563u, 0x08A8EF4Cu>(ctx, &aot_mem) && ctx.pc == 0x0890BF84u) goto L_0890BF84;
    return;
L_0890BF84:
    ctx.fpr[14] = ctx.fpr[24] + ctx.fpr[20];
    ctx.fpr[13] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1940), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1944), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_0890BFBC;
      }
      goto L_0890BFAC;
    }
L_0890BFAC:
    ctx.gpr[4] = (17332u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
      if (branch_taken) {
          goto L_0890BFDC;
      }
      goto L_0890BFBC;
    }
L_0890BFBC:
    ctx.fpr[14] = ctx.fpr[24] - ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0890BFDC;
      }
      goto L_0890BFD0;
    }
L_0890BFD0:
    ctx.gpr[4] = (17332u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    goto L_0890BFDC;
L_0890BFDC:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[12];
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_0890BFF8;
    }
    goto L_0890BFF8;
L_0890BFF8:
    ctx.gpr[4] = (16192u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.pc = 0x0890C000u; return;
}

void recomp_unit_0065(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0065_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_65(Runtime &runtime) {
    runtime.register_generated_unit(65u, 0x08908000u, 16384u, &recomp_unit_0065, &recomp_unit_0065_entry);
    runtime.register_function(0x08908000u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908008u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908010u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890801Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908024u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908028u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908030u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908038u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908040u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908048u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908054u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890805Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908064u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908068u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908080u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089080A4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089080C8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089080D0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089080DCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089080E4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089080F0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089080F8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908100u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908108u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908128u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908148u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908154u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890816Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908180u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890818Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890819Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089081B0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089081BCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089081E8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089081F0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089081FCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908208u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908210u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908218u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908228u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908230u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908240u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908248u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908250u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908258u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908260u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908268u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908270u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908284u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908288u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089082A8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089082B8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089082C8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089082ECu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089082FCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908320u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908328u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908340u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908354u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890835Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908378u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890837Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890838Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908398u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890839Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089083B4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089083D8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089083E8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908408u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908410u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908428u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890843Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908444u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908460u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908464u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908474u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908480u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908484u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890849Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089084BCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089084D4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089084ECu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089084F8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890850Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908528u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908530u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908538u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908544u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890854Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908558u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890855Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908564u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890856Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908578u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890857Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890858Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089085ACu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089085B4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089085BCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089085C4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089085D4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089085E0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089085E8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908604u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908610u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890861Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908630u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908648u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908650u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908674u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908680u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089086A0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089086ACu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089086B8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089086C4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089086C8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089086DCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908700u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908708u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908714u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908728u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908734u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890873Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908744u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908750u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908758u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908760u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908768u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908770u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890877Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908794u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089087A0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089087A4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089087ACu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089087B4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089087C8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089087D0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089087D8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089087E0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089087F0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089087F8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908804u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908808u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908814u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908818u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890882Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908830u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908838u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908840u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908848u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908850u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908868u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908878u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908880u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908888u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908894u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089088A0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089088ACu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089088B4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089088C4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089088CCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089088D4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089088F4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908920u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908934u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890893Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908948u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908958u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908968u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908974u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908980u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908988u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890898Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089089A0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089089B8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089089DCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089089F0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089089FCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908A04u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908A08u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908A18u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908A2Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908A5Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908A68u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908A7Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908A90u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908A9Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908AA4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908AB0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908AB8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908AC0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908AC8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908AD4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908ADCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908AE8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908AF0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908AFCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908B04u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908B0Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908B14u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908B20u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908B38u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908B40u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908B48u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908B58u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908B60u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908B78u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908B80u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908B88u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908B98u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908BA0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908BB8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908BD0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908BE0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908BE8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908C10u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908C34u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908C40u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908C50u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908C68u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908C70u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908C78u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908C88u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908C90u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908C9Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908CA4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908CACu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908CBCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908CC8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908CD4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908CDCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908CE4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908CE8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908CF0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908D08u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908D20u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908D48u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908D50u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908D54u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908D60u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908D84u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908D90u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908D9Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908DA4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908DACu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908DB8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908DC0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908DC8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908DD4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908DDCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908DE4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908DE8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908DF0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908DF8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908E04u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908E10u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908E24u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908E40u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908E44u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908E60u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908E78u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908E80u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908ED0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908EF8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908F18u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908F28u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908F30u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908F34u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908F40u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908F44u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908F64u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908FA0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908FBCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908FC4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908FD8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908FF4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08908FFCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909010u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890902Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909030u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909054u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890905Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909084u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909090u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909098u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089090A0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089090ACu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089090B4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089090BCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089090C4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089090CCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089090D8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089090E0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089090ECu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089090F8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909104u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909110u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909118u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909134u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909168u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909180u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890919Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089091A4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089091B8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089091C0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089091C8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089091CCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089091DCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089091E0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089091E8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089091F4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089091F8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909204u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890921Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909228u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909230u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909244u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909260u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909270u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890928Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909294u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890929Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089092A4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089092B0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089092C8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089092DCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089092F0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089092F8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909300u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909314u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890931Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890932Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909344u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909358u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909360u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909368u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909370u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909378u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909388u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909394u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089093D8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089093F8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089093FCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909404u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909420u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909434u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909448u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909458u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909478u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909494u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089094A0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089094C8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089094ECu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089094F4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909504u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890950Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909514u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909520u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909528u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909530u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909540u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909550u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909558u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909560u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909568u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909584u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890958Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890959Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089095A4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089095ACu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089095B8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089095C0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089095C8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089095D4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089095E0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909604u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890960Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909614u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890962Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909634u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890963Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909644u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909654u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909670u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909680u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909698u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089096B0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089096D0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089096D8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089096E0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089096E8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089096F0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089096F8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890970Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890972Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909734u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909744u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909784u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909794u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089097A8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089097C4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089097DCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089097E8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089097F4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909804u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909840u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909848u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909858u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909864u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909880u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089098A0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089098C4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089098CCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089098D4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089098DCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089098ECu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089098FCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909904u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890990Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890991Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890992Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909934u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890993Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909944u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909948u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909950u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909968u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909970u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909980u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909990u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089099B8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089099C0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089099D0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089099E4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089099ECu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089099F4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x089099FCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909A00u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909A3Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909A44u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909A54u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909A64u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909A98u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909AA0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909AB0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909AC4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909ACCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909AD4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909ADCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909AFCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909B34u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909B3Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909B4Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909B60u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909B80u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909B88u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909BB0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909BB8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909BC8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909BD0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909BD8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909BE8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909BF4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909C00u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909C08u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909C10u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909C20u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909C28u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909C40u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909C48u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909C50u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909C60u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909C68u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909C70u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909C78u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909C80u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909C88u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909C90u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909CA4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909CBCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909CC4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909CCCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909CD4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909CE0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909CF0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909D00u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909D08u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909D10u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909D18u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909D2Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909D3Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909D8Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909D94u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909D9Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909DA8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909DB0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909DB8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909DC0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909DF4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909E00u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909E10u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909E20u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909E28u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909E30u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909E90u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909E98u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909E9Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909EA4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909EBCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909EDCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909EF8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909F00u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909F0Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909F14u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909F18u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909F24u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909F48u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909F58u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909F60u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909F68u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909F78u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909F84u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909FD0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909FE4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909FF4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x08909FFCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A038u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A040u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A050u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A068u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A070u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A078u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A090u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A0A0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A0ACu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A0B4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A0BCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A0C8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A0D0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A0D4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A0E0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A104u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A10Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A128u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A134u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A13Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A160u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A170u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A188u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A190u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A1A0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A1CCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A1D4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A1E0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A1E8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A1F0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A1F8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A208u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A214u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A22Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A244u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A268u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A270u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A278u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A284u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A28Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A290u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A29Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A2BCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A2D8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A2E0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A2F4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A2F8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A300u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A308u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A314u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A32Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A334u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A340u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A34Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A35Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A370u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A38Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A394u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A39Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A3A8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A3B4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A3C4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A3D4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A3E4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A3ECu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A400u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A41Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A440u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A454u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A45Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A468u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A484u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A4B0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A4C0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A4CCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A4ECu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A500u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A538u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A548u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A554u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A55Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A564u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A578u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A588u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A594u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A59Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A5BCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A5E8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A5F8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A604u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A624u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A638u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A670u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A678u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A680u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A694u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A6A4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A6B8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A6C4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A6E0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A6ECu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A6FCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A700u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A708u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A728u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A750u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A758u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A760u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A768u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A770u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A780u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A788u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A7A4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A7ACu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A7B4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A7C4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A7D4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A7E4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A7F8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A800u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A808u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A810u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A818u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A820u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A828u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A83Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A874u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A890u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A8A0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A8BCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A8C4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A8CCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A8D4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A8DCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A8E4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A8ECu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A904u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A914u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A924u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A940u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A948u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A950u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A958u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A960u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A974u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A98Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A994u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A99Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A9A4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A9ACu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A9C0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A9D0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890A9E0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AA2Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AA34u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AA3Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AA50u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AA5Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AA70u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AA84u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AAACu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AAB4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AACCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AAE4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AB0Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AB1Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AB24u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AB2Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AB34u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AB4Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AB54u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AB6Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AB7Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AB84u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AB8Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AB94u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AB9Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890ABA4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890ABACu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890ABB8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890ABC0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890ABD8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890ABFCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AC08u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AC1Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AC24u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AC30u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AC3Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AC58u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AC7Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AC84u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AC9Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890ACB4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890ACDCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890ACECu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890ACF4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890ACFCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AD04u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AD0Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AD14u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AD1Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AD24u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AD3Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AD60u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AD6Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AD78u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AD84u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AD90u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890ADACu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890ADC4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890ADE0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890ADECu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AE28u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AE34u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AE3Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AE44u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AE4Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AE54u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AE60u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AE7Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AE80u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AE94u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AEACu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AEC8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AED8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AF00u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AF08u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AF20u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AF38u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AF60u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AF70u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AF78u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AF80u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AF88u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AF90u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AFA0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AFA8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AFB0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AFB8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AFC0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AFC8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AFD0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890AFE8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B00Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B01Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B024u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B038u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B044u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B050u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B05Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B078u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B08Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B0A8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B0E4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B0FCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B124u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B138u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B140u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B148u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B158u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B170u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B178u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B180u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B188u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B190u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B198u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B1A4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B1B0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B1BCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B1D4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B200u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B208u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B228u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B23Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B250u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B260u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B27Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B2B8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B2D0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B2F8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B300u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B308u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B318u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B320u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B328u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B330u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B338u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B340u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B34Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B358u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B374u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B38Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B3ACu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B3C0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B3CCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B3D4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B3F4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B408u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B41Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B42Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B448u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B45Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B488u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B490u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B4A4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B4B0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B4C4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B4CCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B4D4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B4F0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B508u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B510u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B51Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B534u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B53Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B548u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B550u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B560u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B568u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B570u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B5C0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B5C8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B5D4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B5DCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B5E8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B5F0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B5F8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B608u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B630u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B63Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B644u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B64Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B654u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B65Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B670u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B694u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B6ACu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B6BCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B6C8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B6D0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B6D8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B6E4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B6F0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B6F8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B714u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B71Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B728u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B738u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B740u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B748u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B754u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B760u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B784u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B790u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B7A8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B7B0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B7B8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B7CCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B7E0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B7E8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B7F0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B7F8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B80Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B84Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B854u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B85Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B864u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B870u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B878u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B87Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B8D8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B8E4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B900u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B918u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B920u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B930u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B93Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B948u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B954u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B970u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B97Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B99Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B9A8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890B9CCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BA0Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BA20u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BA40u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BA48u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BA50u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BA5Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BA88u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BAA4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BAB8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BAD4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BADCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BAE4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BB00u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BB0Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BB1Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BB3Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BB48u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BB58u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BB60u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BB7Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BB90u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BB98u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BBA4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BBA8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BBB0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BBB8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BBC4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BBCCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BBD8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BBECu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BC08u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BC10u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BC20u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BC34u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BC48u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BC58u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BC74u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BC7Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BC84u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BCA4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BCB0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BCBCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BCC8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BCD0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BCD8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BCE8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BCF4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BCFCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BD04u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BD20u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BD38u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BD44u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BD50u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BD58u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BD60u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BD70u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BD7Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BD88u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BD90u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BDA8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BDB8u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BDC4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BDDCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BDE4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BDF0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BDFCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BE0Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BE18u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BE30u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BE38u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BE44u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BE50u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BE58u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BE60u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BE7Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BE84u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BE94u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BE9Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BEACu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BEB4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BEC4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BED4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BEE4u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BF5Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BF7Cu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BF84u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BFACu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BFBCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BFD0u, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BFDCu, &recomp_unit_0065, "recomp_unit_0065");
    runtime.register_function(0x0890BFF8u, &recomp_unit_0065, "recomp_unit_0065");
}
} // namespace psprecomp
