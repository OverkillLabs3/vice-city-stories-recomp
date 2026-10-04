#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0212[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 5,
    0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 9, 0, 0, 0, 0, 10, 0, 11, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 15, 0,
    0, 16, 0, 17, 0, 0, 18, 0, 19, 0, 0, 0, 20, 0, 0, 0, 0, 21, 0, 0, 0, 0, 22, 0, 23, 0, 0, 0, 24, 0, 0, 0,
    0, 25, 0, 0, 0, 0, 26, 0, 0, 27, 0, 28, 0, 0, 29, 0, 30, 0, 0, 31, 32, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0,
    0, 0, 0, 34, 0, 0, 35, 0, 0, 36, 0, 37, 0, 0, 0, 38, 0, 39, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 42, 43, 0, 0,
    0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 46, 0, 0, 0, 47, 0, 48, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0,
    51, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 54, 0, 0, 55, 0, 0, 56, 0, 57, 0, 0, 0, 58, 0, 0, 0,
    0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 61, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 64, 0, 0, 0,
    0, 0, 0, 65, 0, 0, 0, 66, 0, 67, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 70, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 75, 0, 0, 76,
    0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0,
    81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 83, 84, 0, 0, 0, 85, 0, 0, 86, 0, 87, 0, 88, 0, 0, 89, 90, 0, 0, 0,
    91, 0, 0, 0, 0, 0, 0, 0, 92, 0, 93, 0, 0, 94, 0, 0, 0, 0, 0, 95, 0, 96, 0, 0, 97, 0, 98, 0, 0, 0, 99, 0,
    0, 0, 100, 0, 0, 101, 0, 102, 0, 0, 103, 104, 0, 0, 0, 0, 105, 0, 0, 0, 0, 106, 0, 107, 0, 108, 0, 0, 109, 0, 0, 110,
    0, 111, 0, 112, 0, 0, 113, 0, 0, 114, 0, 115, 0, 116, 0, 117, 0, 0, 118, 0, 119, 0, 120, 0, 121, 0, 0, 122, 0, 123, 0, 124,
    0, 0, 125, 0, 0, 126, 0, 127, 0, 128, 0, 129, 0, 0, 130, 0, 131, 0, 132, 0, 133, 0, 0, 134, 0, 135, 0, 136, 0, 137, 0, 0,
    138, 0, 139, 0, 140, 0, 0, 141, 0, 0, 142, 0, 143, 0, 144, 0, 0, 145, 0, 0, 146, 0, 147, 0, 148, 0, 149, 0, 0, 150, 0, 151,
    0, 152, 0, 153, 0, 0, 154, 0, 155, 0, 156, 0, 0, 157, 0, 0, 158, 0, 159, 0, 160, 0, 0, 161, 0, 0, 162, 0, 163, 0, 164, 0,
    165, 0, 0, 166, 0, 167, 0, 168, 0, 169, 0, 0, 170, 0, 171, 0, 172, 0, 0, 173, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 175,
    0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 178, 179, 0, 0, 0, 180, 181, 182, 0, 0, 0, 183, 0, 184, 0, 0, 0, 185, 0, 0, 0, 186,
    0, 0, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 189, 0, 0, 190, 0, 191, 0, 0, 192, 0, 193, 0, 0, 194, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 196, 0, 197, 198, 0, 199, 0, 200, 0, 0, 201, 0, 0, 0, 0, 0, 0, 202, 0, 203, 0, 0,
    0, 0, 0, 204, 0, 205, 0, 0, 206, 0, 0, 207, 0, 208, 0, 0, 0, 209, 0, 210, 0, 0, 0, 211, 0, 0, 212, 213, 0, 214, 0, 215,
    0, 216, 0, 217, 0, 218, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 222,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 226, 0, 0, 0, 0, 227, 0, 0, 228, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 230,
    0, 0, 231, 0, 232, 0, 233, 0, 0, 234, 0, 0, 235, 0, 236, 237, 0, 0, 238, 0, 239, 0, 240, 241, 242, 0, 0, 0, 243, 0, 0, 0,
    0, 0, 244, 0, 245, 0, 246, 0, 247, 0, 248, 0, 249, 0, 250, 0, 251, 0, 252, 0, 253, 0, 254, 0, 255, 0, 256, 0, 257, 0, 258, 0,
    259, 0, 260, 0, 0, 0, 0, 0, 0, 0, 261, 0, 262, 0, 263, 0, 0, 0, 0, 264, 0, 265, 0, 266, 0, 267, 0, 268, 0, 269, 0, 0,
    0, 0, 0, 270, 0, 271, 0, 272, 0, 273, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0,
    0, 277, 0, 0, 278, 0, 0, 279, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 281, 0, 282, 0, 0, 0, 0, 0, 283, 284, 0, 285, 0, 0,
    0, 0, 0, 286, 0, 0, 0, 0, 287, 0, 288, 289, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 292, 0, 293, 294, 0,
    295, 0, 0, 0, 296, 297, 0, 0, 0, 0, 0, 298, 0, 299, 0, 300, 0, 301, 0, 302, 0, 303, 0, 304, 0, 305, 0, 0, 0, 0, 0, 0,
    0, 306, 0, 0, 307, 0, 308, 309, 0, 310, 0, 0, 0, 311, 312, 0, 0, 0, 0, 0, 313, 0, 314, 0, 315, 0, 316, 0, 317, 0, 318, 0,
    319, 0, 320, 0, 0, 0, 321, 0, 0, 322, 0, 323, 324, 0, 325, 0, 326, 327, 0, 0, 0, 328, 0, 329, 0, 330, 0, 331, 0, 332, 0, 333,
    0, 334, 0, 335, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 338, 0, 339, 0, 340, 0, 0, 0, 0, 0, 0, 341, 0, 0,
    342, 0, 343, 0, 0, 344, 345, 0, 346, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 350, 0, 351, 0,
    0, 0, 352, 0, 353, 0, 0, 0, 0, 354, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 357, 0, 0, 358, 0, 0, 0, 0,
    359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 361, 362, 0, 0, 0, 363, 364, 0, 0, 365, 0, 366, 0, 367, 0, 0, 368, 0, 0,
    369, 0, 0, 370, 0, 371, 0, 372, 373, 0, 0, 374, 0, 375, 376, 0, 377, 0, 378, 0, 0, 379, 0, 0, 380, 0, 0, 381, 0, 382, 0, 0,
    0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 384, 0, 0, 385, 0, 386, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 388, 0, 0, 389, 0,
    390, 0, 391, 392, 0, 0, 393, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 395, 0, 396, 0, 0, 0, 0, 397, 0, 0, 398, 0, 399, 0, 0,
    0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 403, 0,
    0, 404, 0, 405, 0, 406, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 410, 0,
    0, 411, 0, 0, 0, 412, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 415, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 417,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 421, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0,
    423, 0, 0, 0, 0, 424, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 427, 0, 0, 0, 0, 0, 428, 0,
    0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 430, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 432, 0, 433, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 435, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 438, 0, 0, 0, 0,
    439, 0, 0, 440, 0, 0, 0, 0, 0, 0, 441, 0, 442, 0, 0, 0, 443, 444, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0,
    0, 0, 449, 0, 0, 450, 0, 451, 0, 452, 453, 0, 0, 0, 454, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 457,
    0, 0, 0, 458, 0, 0, 0, 459, 0, 0, 0, 460, 0, 0, 461, 0, 0, 0, 0, 0, 462, 0, 463, 0, 464, 0, 0, 0, 465, 0, 0, 0,
    466, 0, 0, 467, 0, 0, 468, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 471, 0, 472, 0, 0, 473, 0, 0, 0, 0,
    474, 0, 475, 476, 0, 0, 477, 0, 0, 0, 478, 0, 0, 0, 0, 479, 0, 0, 480, 0, 481, 482, 0, 0, 0, 483, 0, 0, 0, 0, 0, 484,
    485, 0, 0, 0, 0, 486, 0, 487, 0, 488, 0, 0, 0, 0, 489, 0, 490, 0, 0, 491, 0, 0, 492, 0, 493, 494, 495, 0, 0, 0, 0, 0,
    0, 0, 496, 0, 0, 497, 0, 0, 498, 0, 0, 499, 0, 0, 0, 0, 500, 0, 501, 502, 0, 0, 503, 0, 0, 0, 504, 0, 0, 0, 0, 505,
    0, 0, 506, 0, 507, 508, 0, 0, 0, 509, 0, 0, 0, 0, 0, 0, 510, 0, 511, 0, 512, 0, 513, 514, 0, 0, 0, 0, 515, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 516, 0, 517, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 518, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 519, 520, 0, 0, 521, 0, 0, 522, 0, 523, 0, 524, 0, 525, 0, 0, 526, 0, 0, 0, 0, 0, 0, 0, 0, 527, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 528, 0, 0, 529, 0, 530, 0, 0, 0, 0, 0, 0, 0, 0, 531, 0, 532, 0, 533, 534, 0, 0, 0, 535, 0, 0, 0,
    0, 536, 0, 0, 0, 0, 537, 0, 0, 0, 0, 0, 0, 538, 0, 0, 539, 0, 0, 0, 0, 0, 0, 0, 0, 0, 540, 0, 0, 0, 541, 0,
    0, 542, 0, 0, 0, 0, 0, 0, 543, 0, 0, 0, 544, 0, 545, 0, 546, 547, 0, 0, 548, 0, 0, 549, 0, 550, 0, 0, 0, 0, 551, 0,
    552, 0, 553, 0, 0, 554, 0, 0, 0, 0, 555, 0, 556, 0, 557, 0, 0, 0, 0, 0, 0, 0, 558, 0, 0, 0, 0, 559, 0, 560, 0, 0,
    561, 562, 0, 563, 0, 564, 0, 0, 0, 0, 0, 0, 565, 0, 566, 567, 0, 0, 568, 0, 0, 569, 0, 0, 0, 0, 0, 0, 570, 0, 0, 0,
    0, 0, 0, 0, 571, 0, 572, 0, 0, 573, 0, 0, 574, 0, 0, 0, 0, 575, 0, 0, 0, 0, 576, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 577, 0, 0, 0, 0, 578, 0, 579, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 580, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 581, 0, 0, 0, 582, 0, 0, 0, 0, 0,
    0, 0, 0, 583, 0, 584, 0, 0, 0, 585, 0, 0, 586, 0, 0, 0, 587, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 588, 0, 0,
    0, 0, 0, 589, 0, 590, 0, 0, 0, 0, 0, 0, 0, 0, 0, 591, 0, 0, 0, 0, 0, 592, 0, 0, 0, 0, 0, 0, 0, 0, 593, 0,
    0, 594, 0, 0, 0, 595, 0, 0, 596, 0, 0, 0, 597, 0, 0, 0, 0, 598, 0, 0, 599, 0, 0, 0, 0, 0, 0, 0, 0, 600, 0, 0,
    601, 0, 0, 0, 602, 0, 603, 0, 604, 605, 0, 0, 0, 0, 0, 0, 606, 0, 607, 0, 608, 0, 609, 0, 610, 0, 0, 0, 0, 0, 0, 0,
    611, 0, 0, 0, 0, 0, 0, 612, 613, 614, 0, 0, 0, 615, 0, 0, 0, 616, 0, 0, 0, 617, 0, 0, 0, 0, 0, 0, 618, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 619, 0, 0, 620, 0, 0, 621, 0, 0, 622, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623, 624, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 625, 0, 0, 0, 0, 626, 0, 0, 0, 0, 627, 628, 0, 629, 0, 0, 0,
    0, 630, 0, 631, 0, 0, 0, 0, 0, 632, 0, 633, 0, 634, 0, 635, 0, 636, 0, 637, 0, 0, 638, 0, 639, 0, 640, 0, 0, 641, 0, 0,
    642, 0, 0, 643, 0, 0, 0, 0, 0, 644, 0, 645, 0, 646, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 647, 0, 0, 0, 0, 648, 0, 0, 0, 649, 0, 0, 650, 0,
    0, 0, 0, 651, 652, 0, 653, 0, 654, 0, 655, 656, 0, 0, 0, 0, 0, 657, 0, 0, 0, 0, 0, 0, 0, 658, 0, 659, 0, 0, 660, 0,
    0, 0, 661, 0, 0, 662, 0, 0, 0, 0, 0, 663, 664, 0, 0, 665, 0, 0, 666, 0, 667, 0, 668, 669, 0, 0, 0, 670, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 671, 0, 672, 0, 0, 673, 0, 0, 674, 0, 0, 675, 0, 0, 676, 0, 0, 0, 0, 0, 0, 677, 0, 0, 678, 679, 0,
    0, 0, 0, 680, 0, 0, 0, 0, 0, 681, 0, 0, 682, 683, 0, 0, 0, 0, 684, 0, 0, 0, 0, 0, 685, 0, 0, 0, 0, 0, 0, 686,
    0, 0, 687, 0, 0, 688, 0, 0, 689, 0, 0, 0, 0, 690, 0, 0, 0, 691, 0, 0, 0, 0, 0, 0, 692, 0, 0, 693, 0, 0, 0, 694,
    0, 0, 0, 695, 0, 0, 696, 0, 0, 0, 697, 0, 0, 698, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 699, 700, 0, 0, 0, 0,
    701, 0, 0, 0, 702, 0, 703, 0, 704, 0, 705, 0, 0, 706, 0, 0, 0, 0, 0, 0, 707, 708, 0, 0, 0, 709, 0, 0, 710, 0, 711, 0,
    712, 0, 0, 0, 0, 0, 0, 713, 714, 0, 715, 0, 0, 716, 0, 717, 0, 718, 0, 719, 0, 0, 720, 0, 721, 0, 0, 0, 722, 0, 723, 0,
    0, 0, 0, 0, 724, 0, 725, 0, 726, 0, 727, 0, 0, 0, 0, 728, 0, 0, 729, 0, 0, 0, 0, 0, 730, 0, 0, 731, 0, 0, 0, 0,
    732, 0, 0, 0, 0, 0, 0, 733, 0, 734, 0, 735, 736, 0, 0, 0, 0, 0, 0, 737, 0, 0, 738, 0, 739, 0, 740, 0, 741, 0, 742, 743,
    0, 0, 0, 0, 744, 0, 745, 0, 746, 0, 0, 0, 0, 747, 748, 0, 0, 0, 0, 0, 0, 0, 0, 0, 749, 0, 0, 750, 0, 751, 0, 752,
    0, 753, 0, 754, 755, 0, 0, 0, 0, 756, 757, 0, 758, 0, 0, 0, 0, 759, 0, 0, 0, 0, 0, 0, 0, 760, 0, 761, 0, 762, 763, 0,
    0, 0, 0, 0, 0, 764, 0, 0, 765, 0, 766, 0, 767, 768, 0, 0, 0, 0, 0, 769, 0, 770, 0, 0, 0, 0, 771, 772, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 773, 0, 0, 774, 0, 775, 0, 776, 777, 0, 0, 0, 0, 0, 778, 779, 0, 0, 0, 0, 0, 780, 0, 0, 0, 781, 0,
    0, 0, 782, 783, 0, 0, 0, 784, 0, 0, 785, 0, 0, 786, 0, 0, 0, 0, 0, 0, 787, 0, 788, 0, 789, 0, 0, 790, 0, 0, 791, 0,
    792, 793, 0, 794, 0, 795, 0, 796, 0, 797, 0, 0, 798, 0, 0, 799, 0, 800, 0, 0, 0, 0, 0, 801, 0, 0, 0, 0, 0, 802, 0, 0,
    803, 804, 0, 805, 0, 0, 806, 0, 0, 807, 0, 0, 0, 808, 0, 809, 0, 0, 810, 0, 0, 0, 0, 811, 0, 812, 0, 0, 0, 0, 0, 813,
    0, 0, 0, 814, 0, 815, 0, 816, 0, 0, 817, 818, 0, 819, 0, 0, 820, 0, 0, 821, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    822, 0, 0, 0, 823, 0, 0, 824, 0, 0, 825, 826, 0, 0, 827, 0, 0, 0, 0, 0, 828, 0, 0, 0, 0, 829, 0, 0, 0, 830, 0, 0,
    831, 0, 0, 0, 832, 0, 833, 0, 0, 0, 834, 0, 835, 0, 0, 836, 0, 837, 0, 0, 0, 0, 838, 0, 0, 0, 839, 840, 0, 0, 0, 841,
    0, 0, 842, 0, 0, 843, 0, 0, 844, 0, 845, 0, 846, 0, 847, 0, 848, 0, 849, 0, 0, 850, 0, 851, 852, 0, 853, 0, 854, 855, 0, 0,
    856, 0, 0, 857, 0, 0, 858, 0, 0, 859, 0, 0, 0, 860, 0, 0, 861, 0, 0, 0, 0, 862, 0, 863, 0, 0, 0, 0, 0, 864, 0, 0,
    0, 865, 0, 866, 0, 867, 0, 0, 868, 869, 0, 870, 0, 0, 871, 0, 0, 0, 872, 873, 0, 0, 874, 0, 0, 875, 0, 876, 877, 0, 0, 0,
    878, 0, 879, 0, 880, 0, 881, 0, 882, 883, 0, 0, 0, 884, 0, 0, 885, 0, 0, 0, 0, 0, 886, 0, 0, 0, 0, 887, 0, 0, 888, 0,
    0, 0, 0, 889, 0, 890, 891, 0, 0, 892, 893, 0, 0, 0, 894, 895, 0, 0, 896, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 897, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 898, 0, 0, 0, 0, 899, 0, 0, 0, 0, 0, 0, 900, 0, 0, 0, 901, 0, 902,
    0, 903, 904, 0, 0, 905, 0, 906, 0, 907, 0, 908, 0, 0, 0, 0, 909, 0, 0, 0, 0, 0, 0, 910, 911, 0, 0, 912, 0, 913, 914, 0,
    0, 915, 0, 0, 0, 0, 916, 0, 0, 0, 917, 918, 0, 0, 0, 0, 919, 0, 920, 0, 921, 0, 922, 0, 0, 923, 0, 924, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 925, 0, 926, 0, 0, 927, 0, 0, 0, 0, 0, 0, 928, 0, 0, 929, 0, 0, 930, 0, 0, 931, 0, 0, 0, 932, 0,
    0, 0, 0, 0, 0, 933, 0, 0, 0, 0, 0, 0, 0, 0, 0, 934, 0, 0, 0, 935, 0, 0, 0, 936, 0, 0, 937, 0, 0, 0, 0, 938,
    0, 0, 939, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 940, 941, 0, 0, 942, 943, 0, 0, 944, 0, 0, 945, 0, 0, 946, 0, 947,
    0, 948, 0, 949, 0, 950, 0, 0, 0, 0, 0, 0, 0, 951, 0, 0, 952, 0, 953, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 954, 0, 955, 0, 956, 957, 0, 958, 0, 959, 0, 0, 0, 0, 0, 0, 0, 0, 0, 960, 0, 961, 0, 0, 962, 0, 0, 963, 0, 964,
    0, 965, 0, 0, 966, 0, 0, 967, 968, 0, 969, 0, 970, 971, 0, 972, 0, 0, 973, 0, 974, 0, 0, 0, 0, 0, 0, 0, 0, 0, 975, 0,
    976, 977, 0, 978, 0, 979, 980, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 981, 0, 0, 0, 0, 0, 0, 0, 0, 0, 982, 0, 0, 983,
    0, 984, 0, 985, 0, 0, 986, 0, 987, 0, 988, 0, 0, 989, 0, 990, 0, 0, 0, 0, 0, 0, 0, 0, 0, 991, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 992, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 993, 0, 0, 994, 0, 995, 0, 996, 0, 0, 997, 0, 998, 999, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 1000, 0, 1001, 0, 0, 1002, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1003, 0, 0, 0, 0, 1004, 0, 1005, 0,
    1006, 0, 1007, 0, 1008, 0, 1009, 0, 1010, 0, 0, 0, 0, 0, 1011, 0, 0, 0, 1012, 0, 0, 0, 0, 1013, 0, 0, 0, 0, 1014, 0, 0, 0,
    0, 1015, 0, 0, 0, 0, 1016, 0, 0, 0, 0, 0, 1017, 0, 1018, 0, 0, 1019, 1020, 1021, 0, 0, 0, 0, 1022, 0, 0, 1023, 0, 0, 0, 0,
    0, 1024, 0, 1025, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1026, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1027, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1028, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1029, 0,
    0, 1030, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1031, 0, 0, 0, 1032, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1033, 0, 1034, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 1035, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1036, 0, 0, 0, 1037, 0, 0, 0, 0, 1038, 0, 0, 0,
    0, 0, 0, 1039, 0, 0, 1040, 0, 0, 0, 0, 1041, 0, 1042, 0, 0, 1043, 0, 1044, 0, 0, 1045, 1046, 0, 1047, 0, 0, 0, 1048, 0, 1049, 0,
    0, 0, 1050, 0, 0, 1051, 0, 0, 0, 1052, 0, 0, 0, 0, 0, 0, 0, 0, 1053, 0, 1054, 0, 0, 1055, 0, 1056, 0, 0, 0, 1057, 0, 1058,
};
void recomp_unit_0212_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08B54000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0212[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08B54000;
    case 2u: goto L_08B5402C;
    case 3u: goto L_08B54068;
    case 4u: goto L_08B54074;
    case 5u: goto L_08B5407C;
    case 6u: goto L_08B54098;
    case 7u: goto L_08B540A8;
    case 8u: goto L_08B540B4;
    case 9u: goto L_08B5410C;
    case 10u: goto L_08B54120;
    case 11u: goto L_08B54128;
    case 12u: goto L_08B54138;
    case 13u: goto L_08B54148;
    case 14u: goto L_08B5416C;
    case 15u: goto L_08B54178;
    case 16u: goto L_08B54184;
    case 17u: goto L_08B5418C;
    case 18u: goto L_08B54198;
    case 19u: goto L_08B541A0;
    case 20u: goto L_08B541B0;
    case 21u: goto L_08B541C4;
    case 22u: goto L_08B541D8;
    case 23u: goto L_08B541E0;
    case 24u: goto L_08B541F0;
    case 25u: goto L_08B54204;
    case 26u: goto L_08B54218;
    case 27u: goto L_08B54224;
    case 28u: goto L_08B5422C;
    case 29u: goto L_08B54238;
    case 30u: goto L_08B54240;
    case 31u: goto L_08B5424C;
    case 32u: goto L_08B54250;
    case 33u: goto L_08B54268;
    case 34u: goto L_08B5428C;
    case 35u: goto L_08B54298;
    case 36u: goto L_08B542A4;
    case 37u: goto L_08B542AC;
    case 38u: goto L_08B542BC;
    case 39u: goto L_08B542C4;
    case 40u: goto L_08B542D4;
    case 41u: goto L_08B542E4;
    case 42u: goto L_08B542F0;
    case 43u: goto L_08B542F4;
    case 44u: goto L_08B5430C;
    case 45u: goto L_08B54330;
    case 46u: goto L_08B5433C;
    case 47u: goto L_08B5434C;
    case 48u: goto L_08B54354;
    case 49u: goto L_08B54360;
    case 50u: goto L_08B54370;
    case 51u: goto L_08B54380;
    case 52u: goto L_08B54394;
    case 53u: goto L_08B543B0;
    case 54u: goto L_08B543C0;
    case 55u: goto L_08B543CC;
    case 56u: goto L_08B543D8;
    case 57u: goto L_08B543E0;
    case 58u: goto L_08B543F0;
    case 59u: goto L_08B5440C;
    case 60u: goto L_08B5441C;
    case 61u: goto L_08B54428;
    case 62u: goto L_08B54434;
    case 63u: goto L_08B54458;
    case 64u: goto L_08B54470;
    case 65u: goto L_08B5448C;
    case 66u: goto L_08B5449C;
    case 67u: goto L_08B544A4;
    case 68u: goto L_08B544B0;
    case 69u: goto L_08B544E0;
    case 70u: goto L_08B5450C;
    case 71u: goto L_08B54524;
    case 72u: goto L_08B54544;
    case 73u: goto L_08B54554;
    case 74u: goto L_08B54564;
    case 75u: goto L_08B54570;
    case 76u: goto L_08B5457C;
    case 77u: goto L_08B545A0;
    case 78u: goto L_08B545C0;
    case 79u: goto L_08B545DC;
    case 80u: goto L_08B545F4;
    case 81u: goto L_08B54600;
    case 82u: goto L_08B54628;
    case 83u: goto L_08B54630;
    case 84u: goto L_08B54634;
    case 85u: goto L_08B54644;
    case 86u: goto L_08B54650;
    case 87u: goto L_08B54658;
    case 88u: goto L_08B54660;
    case 89u: goto L_08B5466C;
    case 90u: goto L_08B54670;
    case 91u: goto L_08B54680;
    case 92u: goto L_08B546A0;
    case 93u: goto L_08B546A8;
    case 94u: goto L_08B546B4;
    case 95u: goto L_08B546CC;
    case 96u: goto L_08B546D4;
    case 97u: goto L_08B546E0;
    case 98u: goto L_08B546E8;
    case 99u: goto L_08B546F8;
    case 100u: goto L_08B54708;
    case 101u: goto L_08B54714;
    case 102u: goto L_08B5471C;
    case 103u: goto L_08B54728;
    case 104u: goto L_08B5472C;
    case 105u: goto L_08B54740;
    case 106u: goto L_08B54754;
    case 107u: goto L_08B5475C;
    case 108u: goto L_08B54764;
    case 109u: goto L_08B54770;
    case 110u: goto L_08B5477C;
    case 111u: goto L_08B54784;
    case 112u: goto L_08B5478C;
    case 113u: goto L_08B54798;
    case 114u: goto L_08B547A4;
    case 115u: goto L_08B547AC;
    case 116u: goto L_08B547B4;
    case 117u: goto L_08B547BC;
    case 118u: goto L_08B547C8;
    case 119u: goto L_08B547D0;
    case 120u: goto L_08B547D8;
    case 121u: goto L_08B547E0;
    case 122u: goto L_08B547EC;
    case 123u: goto L_08B547F4;
    case 124u: goto L_08B547FC;
    case 125u: goto L_08B54808;
    case 126u: goto L_08B54814;
    case 127u: goto L_08B5481C;
    case 128u: goto L_08B54824;
    case 129u: goto L_08B5482C;
    case 130u: goto L_08B54838;
    case 131u: goto L_08B54840;
    case 132u: goto L_08B54848;
    case 133u: goto L_08B54850;
    case 134u: goto L_08B5485C;
    case 135u: goto L_08B54864;
    case 136u: goto L_08B5486C;
    case 137u: goto L_08B54874;
    case 138u: goto L_08B54880;
    case 139u: goto L_08B54888;
    case 140u: goto L_08B54890;
    case 141u: goto L_08B5489C;
    case 142u: goto L_08B548A8;
    case 143u: goto L_08B548B0;
    case 144u: goto L_08B548B8;
    case 145u: goto L_08B548C4;
    case 146u: goto L_08B548D0;
    case 147u: goto L_08B548D8;
    case 148u: goto L_08B548E0;
    case 149u: goto L_08B548E8;
    case 150u: goto L_08B548F4;
    case 151u: goto L_08B548FC;
    case 152u: goto L_08B54904;
    case 153u: goto L_08B5490C;
    case 154u: goto L_08B54918;
    case 155u: goto L_08B54920;
    case 156u: goto L_08B54928;
    case 157u: goto L_08B54934;
    case 158u: goto L_08B54940;
    case 159u: goto L_08B54948;
    case 160u: goto L_08B54950;
    case 161u: goto L_08B5495C;
    case 162u: goto L_08B54968;
    case 163u: goto L_08B54970;
    case 164u: goto L_08B54978;
    case 165u: goto L_08B54980;
    case 166u: goto L_08B5498C;
    case 167u: goto L_08B54994;
    case 168u: goto L_08B5499C;
    case 169u: goto L_08B549A4;
    case 170u: goto L_08B549B0;
    case 171u: goto L_08B549B8;
    case 172u: goto L_08B549C0;
    case 173u: goto L_08B549CC;
    case 174u: goto L_08B549D8;
    case 175u: goto L_08B549FC;
    case 176u: goto L_08B54A08;
    case 177u: goto L_08B54A18;
    case 178u: goto L_08B54A28;
    case 179u: goto L_08B54A2C;
    case 180u: goto L_08B54A3C;
    case 181u: goto L_08B54A40;
    case 182u: goto L_08B54A44;
    case 183u: goto L_08B54A54;
    case 184u: goto L_08B54A5C;
    case 185u: goto L_08B54A6C;
    case 186u: goto L_08B54A7C;
    case 187u: goto L_08B54A94;
    case 188u: goto L_08B54AA4;
    case 189u: goto L_08B54AB0;
    case 190u: goto L_08B54ABC;
    case 191u: goto L_08B54AC4;
    case 192u: goto L_08B54AD0;
    case 193u: goto L_08B54AD8;
    case 194u: goto L_08B54AE4;
    case 195u: goto L_08B54B1C;
    case 196u: goto L_08B54B28;
    case 197u: goto L_08B54B30;
    case 198u: goto L_08B54B34;
    case 199u: goto L_08B54B3C;
    case 200u: goto L_08B54B44;
    case 201u: goto L_08B54B50;
    case 202u: goto L_08B54B6C;
    case 203u: goto L_08B54B74;
    case 204u: goto L_08B54B8C;
    case 205u: goto L_08B54B94;
    case 206u: goto L_08B54BA0;
    case 207u: goto L_08B54BAC;
    case 208u: goto L_08B54BB4;
    case 209u: goto L_08B54BC4;
    case 210u: goto L_08B54BCC;
    case 211u: goto L_08B54BDC;
    case 212u: goto L_08B54BE8;
    case 213u: goto L_08B54BEC;
    case 214u: goto L_08B54BF4;
    case 215u: goto L_08B54BFC;
    case 216u: goto L_08B54C04;
    case 217u: goto L_08B54C0C;
    case 218u: goto L_08B54C14;
    case 219u: goto L_08B54C1C;
    case 220u: goto L_08B54C44;
    case 221u: goto L_08B54C6C;
    case 222u: goto L_08B54C7C;
    case 223u: goto L_08B54CC0;
    case 224u: goto L_08B54CD4;
    case 225u: goto L_08B54DA0;
    case 226u: goto L_08B54DA8;
    case 227u: goto L_08B54DBC;
    case 228u: goto L_08B54DC8;
    case 229u: goto L_08B54DD8;
    case 230u: goto L_08B54DFC;
    case 231u: goto L_08B54E08;
    case 232u: goto L_08B54E10;
    case 233u: goto L_08B54E18;
    case 234u: goto L_08B54E24;
    case 235u: goto L_08B54E30;
    case 236u: goto L_08B54E38;
    case 237u: goto L_08B54E3C;
    case 238u: goto L_08B54E48;
    case 239u: goto L_08B54E50;
    case 240u: goto L_08B54E58;
    case 241u: goto L_08B54E5C;
    case 242u: goto L_08B54E60;
    case 243u: goto L_08B54E70;
    case 244u: goto L_08B54E88;
    case 245u: goto L_08B54E90;
    case 246u: goto L_08B54E98;
    case 247u: goto L_08B54EA0;
    case 248u: goto L_08B54EA8;
    case 249u: goto L_08B54EB0;
    case 250u: goto L_08B54EB8;
    case 251u: goto L_08B54EC0;
    case 252u: goto L_08B54EC8;
    case 253u: goto L_08B54ED0;
    case 254u: goto L_08B54ED8;
    case 255u: goto L_08B54EE0;
    case 256u: goto L_08B54EE8;
    case 257u: goto L_08B54EF0;
    case 258u: goto L_08B54EF8;
    case 259u: goto L_08B54F00;
    case 260u: goto L_08B54F08;
    case 261u: goto L_08B54F28;
    case 262u: goto L_08B54F30;
    case 263u: goto L_08B54F38;
    case 264u: goto L_08B54F4C;
    case 265u: goto L_08B54F54;
    case 266u: goto L_08B54F5C;
    case 267u: goto L_08B54F64;
    case 268u: goto L_08B54F6C;
    case 269u: goto L_08B54F74;
    case 270u: goto L_08B54F8C;
    case 271u: goto L_08B54F94;
    case 272u: goto L_08B54F9C;
    case 273u: goto L_08B54FA4;
    case 274u: goto L_08B54FBC;
    case 275u: goto L_08B54FD0;
    case 276u: goto L_08B54FF4;
    case 277u: goto L_08B55004;
    case 278u: goto L_08B55010;
    case 279u: goto L_08B5501C;
    case 280u: goto L_08B55038;
    case 281u: goto L_08B55048;
    case 282u: goto L_08B55050;
    case 283u: goto L_08B55068;
    case 284u: goto L_08B5506C;
    case 285u: goto L_08B55074;
    case 286u: goto L_08B5508C;
    case 287u: goto L_08B550A0;
    case 288u: goto L_08B550A8;
    case 289u: goto L_08B550AC;
    case 290u: goto L_08B550C0;
    case 291u: goto L_08B550E0;
    case 292u: goto L_08B550EC;
    case 293u: goto L_08B550F4;
    case 294u: goto L_08B550F8;
    case 295u: goto L_08B55100;
    case 296u: goto L_08B55110;
    case 297u: goto L_08B55114;
    case 298u: goto L_08B5512C;
    case 299u: goto L_08B55134;
    case 300u: goto L_08B5513C;
    case 301u: goto L_08B55144;
    case 302u: goto L_08B5514C;
    case 303u: goto L_08B55154;
    case 304u: goto L_08B5515C;
    case 305u: goto L_08B55164;
    case 306u: goto L_08B55184;
    case 307u: goto L_08B55190;
    case 308u: goto L_08B55198;
    case 309u: goto L_08B5519C;
    case 310u: goto L_08B551A4;
    case 311u: goto L_08B551B4;
    case 312u: goto L_08B551B8;
    case 313u: goto L_08B551D0;
    case 314u: goto L_08B551D8;
    case 315u: goto L_08B551E0;
    case 316u: goto L_08B551E8;
    case 317u: goto L_08B551F0;
    case 318u: goto L_08B551F8;
    case 319u: goto L_08B55200;
    case 320u: goto L_08B55208;
    case 321u: goto L_08B55218;
    case 322u: goto L_08B55224;
    case 323u: goto L_08B5522C;
    case 324u: goto L_08B55230;
    case 325u: goto L_08B55238;
    case 326u: goto L_08B55240;
    case 327u: goto L_08B55244;
    case 328u: goto L_08B55254;
    case 329u: goto L_08B5525C;
    case 330u: goto L_08B55264;
    case 331u: goto L_08B5526C;
    case 332u: goto L_08B55274;
    case 333u: goto L_08B5527C;
    case 334u: goto L_08B55284;
    case 335u: goto L_08B5528C;
    case 336u: goto L_08B5529C;
    case 337u: goto L_08B552B8;
    case 338u: goto L_08B552C8;
    case 339u: goto L_08B552D0;
    case 340u: goto L_08B552D8;
    case 341u: goto L_08B552F4;
    case 342u: goto L_08B55300;
    case 343u: goto L_08B55308;
    case 344u: goto L_08B55314;
    case 345u: goto L_08B55318;
    case 346u: goto L_08B55320;
    case 347u: goto L_08B55328;
    case 348u: goto L_08B5538C;
    case 349u: goto L_08B553EC;
    case 350u: goto L_08B553F0;
    case 351u: goto L_08B553F8;
    case 352u: goto L_08B55408;
    case 353u: goto L_08B55410;
    case 354u: goto L_08B55424;
    case 355u: goto L_08B55434;
    case 356u: goto L_08B55454;
    case 357u: goto L_08B55460;
    case 358u: goto L_08B5546C;
    case 359u: goto L_08B55480;
    case 360u: goto L_08B554A8;
    case 361u: goto L_08B554B4;
    case 362u: goto L_08B554B8;
    case 363u: goto L_08B554C8;
    case 364u: goto L_08B554CC;
    case 365u: goto L_08B554D8;
    case 366u: goto L_08B554E0;
    case 367u: goto L_08B554E8;
    case 368u: goto L_08B554F4;
    case 369u: goto L_08B55500;
    case 370u: goto L_08B5550C;
    case 371u: goto L_08B55514;
    case 372u: goto L_08B5551C;
    case 373u: goto L_08B55520;
    case 374u: goto L_08B5552C;
    case 375u: goto L_08B55534;
    case 376u: goto L_08B55538;
    case 377u: goto L_08B55540;
    case 378u: goto L_08B55548;
    case 379u: goto L_08B55554;
    case 380u: goto L_08B55560;
    case 381u: goto L_08B5556C;
    case 382u: goto L_08B55574;
    case 383u: goto L_08B55590;
    case 384u: goto L_08B555AC;
    case 385u: goto L_08B555B8;
    case 386u: goto L_08B555C0;
    case 387u: goto L_08B555D4;
    case 388u: goto L_08B555EC;
    case 389u: goto L_08B555F8;
    case 390u: goto L_08B55600;
    case 391u: goto L_08B55608;
    case 392u: goto L_08B5560C;
    case 393u: goto L_08B55618;
    case 394u: goto L_08B55624;
    case 395u: goto L_08B55644;
    case 396u: goto L_08B5564C;
    case 397u: goto L_08B55660;
    case 398u: goto L_08B5566C;
    case 399u: goto L_08B55674;
    case 400u: goto L_08B55690;
    case 401u: goto L_08B556B8;
    case 402u: goto L_08B556EC;
    case 403u: goto L_08B556F8;
    case 404u: goto L_08B55704;
    case 405u: goto L_08B5570C;
    case 406u: goto L_08B55714;
    case 407u: goto L_08B5571C;
    case 408u: goto L_08B55748;
    case 409u: goto L_08B55770;
    case 410u: goto L_08B55778;
    case 411u: goto L_08B55784;
    case 412u: goto L_08B55794;
    case 413u: goto L_08B557A0;
    case 414u: goto L_08B557C4;
    case 415u: goto L_08B557D0;
    case 416u: goto L_08B557D8;
    case 417u: goto L_08B557FC;
    case 418u: goto L_08B5582C;
    case 419u: goto L_08B55884;
    case 420u: goto L_08B558BC;
    case 421u: goto L_08B558D0;
    case 422u: goto L_08B558E4;
    case 423u: goto L_08B55900;
    case 424u: goto L_08B55914;
    case 425u: goto L_08B55920;
    case 426u: goto L_08B55954;
    case 427u: goto L_08B55960;
    case 428u: goto L_08B55978;
    case 429u: goto L_08B5599C;
    case 430u: goto L_08B559AC;
    case 431u: goto L_08B559C0;
    case 432u: goto L_08B559E0;
    case 433u: goto L_08B559E8;
    case 434u: goto L_08B55A24;
    case 435u: goto L_08B55A30;
    case 436u: goto L_08B55A38;
    case 437u: goto L_08B55A64;
    case 438u: goto L_08B55A6C;
    case 439u: goto L_08B55A80;
    case 440u: goto L_08B55A8C;
    case 441u: goto L_08B55AA8;
    case 442u: goto L_08B55AB0;
    case 443u: goto L_08B55AC0;
    case 444u: goto L_08B55AC4;
    case 445u: goto L_08B55ACC;
    case 446u: goto L_08B55B10;
    case 447u: goto L_08B55B40;
    case 448u: goto L_08B55B78;
    case 449u: goto L_08B55B88;
    case 450u: goto L_08B55B94;
    case 451u: goto L_08B55B9C;
    case 452u: goto L_08B55BA4;
    case 453u: goto L_08B55BA8;
    case 454u: goto L_08B55BB8;
    case 455u: goto L_08B55BC0;
    case 456u: goto L_08B55BF0;
    case 457u: goto L_08B55BFC;
    case 458u: goto L_08B55C0C;
    case 459u: goto L_08B55C1C;
    case 460u: goto L_08B55C2C;
    case 461u: goto L_08B55C38;
    case 462u: goto L_08B55C50;
    case 463u: goto L_08B55C58;
    case 464u: goto L_08B55C60;
    case 465u: goto L_08B55C70;
    case 466u: goto L_08B55C80;
    case 467u: goto L_08B55C8C;
    case 468u: goto L_08B55C98;
    case 469u: goto L_08B55CA8;
    case 470u: goto L_08B55CC8;
    case 471u: goto L_08B55CD8;
    case 472u: goto L_08B55CE0;
    case 473u: goto L_08B55CEC;
    case 474u: goto L_08B55D00;
    case 475u: goto L_08B55D08;
    case 476u: goto L_08B55D0C;
    case 477u: goto L_08B55D18;
    case 478u: goto L_08B55D28;
    case 479u: goto L_08B55D3C;
    case 480u: goto L_08B55D48;
    case 481u: goto L_08B55D50;
    case 482u: goto L_08B55D54;
    case 483u: goto L_08B55D64;
    case 484u: goto L_08B55D7C;
    case 485u: goto L_08B55D80;
    case 486u: goto L_08B55D94;
    case 487u: goto L_08B55D9C;
    case 488u: goto L_08B55DA4;
    case 489u: goto L_08B55DB8;
    case 490u: goto L_08B55DC0;
    case 491u: goto L_08B55DCC;
    case 492u: goto L_08B55DD8;
    case 493u: goto L_08B55DE0;
    case 494u: goto L_08B55DE4;
    case 495u: goto L_08B55DE8;
    case 496u: goto L_08B55E08;
    case 497u: goto L_08B55E14;
    case 498u: goto L_08B55E20;
    case 499u: goto L_08B55E2C;
    case 500u: goto L_08B55E40;
    case 501u: goto L_08B55E48;
    case 502u: goto L_08B55E4C;
    case 503u: goto L_08B55E58;
    case 504u: goto L_08B55E68;
    case 505u: goto L_08B55E7C;
    case 506u: goto L_08B55E88;
    case 507u: goto L_08B55E90;
    case 508u: goto L_08B55E94;
    case 509u: goto L_08B55EA4;
    case 510u: goto L_08B55EC0;
    case 511u: goto L_08B55EC8;
    case 512u: goto L_08B55ED0;
    case 513u: goto L_08B55ED8;
    case 514u: goto L_08B55EDC;
    case 515u: goto L_08B55EF0;
    case 516u: goto L_08B55F20;
    case 517u: goto L_08B55F28;
    case 518u: goto L_08B55F58;
    case 519u: goto L_08B55F84;
    case 520u: goto L_08B55F88;
    case 521u: goto L_08B55F94;
    case 522u: goto L_08B55FA0;
    case 523u: goto L_08B55FA8;
    case 524u: goto L_08B55FB0;
    case 525u: goto L_08B55FB8;
    case 526u: goto L_08B55FC4;
    case 527u: goto L_08B55FE8;
    case 528u: goto L_08B56014;
    case 529u: goto L_08B56020;
    case 530u: goto L_08B56028;
    case 531u: goto L_08B5604C;
    case 532u: goto L_08B56054;
    case 533u: goto L_08B5605C;
    case 534u: goto L_08B56060;
    case 535u: goto L_08B56070;
    case 536u: goto L_08B56084;
    case 537u: goto L_08B56098;
    case 538u: goto L_08B560B4;
    case 539u: goto L_08B560C0;
    case 540u: goto L_08B560E8;
    case 541u: goto L_08B560F8;
    case 542u: goto L_08B56104;
    case 543u: goto L_08B56120;
    case 544u: goto L_08B56130;
    case 545u: goto L_08B56138;
    case 546u: goto L_08B56140;
    case 547u: goto L_08B56144;
    case 548u: goto L_08B56150;
    case 549u: goto L_08B5615C;
    case 550u: goto L_08B56164;
    case 551u: goto L_08B56178;
    case 552u: goto L_08B56180;
    case 553u: goto L_08B56188;
    case 554u: goto L_08B56194;
    case 555u: goto L_08B561A8;
    case 556u: goto L_08B561B0;
    case 557u: goto L_08B561B8;
    case 558u: goto L_08B561D8;
    case 559u: goto L_08B561EC;
    case 560u: goto L_08B561F4;
    case 561u: goto L_08B56200;
    case 562u: goto L_08B56204;
    case 563u: goto L_08B5620C;
    case 564u: goto L_08B56214;
    case 565u: goto L_08B56230;
    case 566u: goto L_08B56238;
    case 567u: goto L_08B5623C;
    case 568u: goto L_08B56248;
    case 569u: goto L_08B56254;
    case 570u: goto L_08B56270;
    case 571u: goto L_08B56290;
    case 572u: goto L_08B56298;
    case 573u: goto L_08B562A4;
    case 574u: goto L_08B562B0;
    case 575u: goto L_08B562C4;
    case 576u: goto L_08B562D8;
    case 577u: goto L_08B5633C;
    case 578u: goto L_08B56350;
    case 579u: goto L_08B56358;
    case 580u: goto L_08B56394;
    case 581u: goto L_08B563D8;
    case 582u: goto L_08B563E8;
    case 583u: goto L_08B5640C;
    case 584u: goto L_08B56414;
    case 585u: goto L_08B56424;
    case 586u: goto L_08B56430;
    case 587u: goto L_08B56440;
    case 588u: goto L_08B56474;
    case 589u: goto L_08B5648C;
    case 590u: goto L_08B56494;
    case 591u: goto L_08B564BC;
    case 592u: goto L_08B564D4;
    case 593u: goto L_08B564F8;
    case 594u: goto L_08B56504;
    case 595u: goto L_08B56514;
    case 596u: goto L_08B56520;
    case 597u: goto L_08B56530;
    case 598u: goto L_08B56544;
    case 599u: goto L_08B56550;
    case 600u: goto L_08B56574;
    case 601u: goto L_08B56580;
    case 602u: goto L_08B56590;
    case 603u: goto L_08B56598;
    case 604u: goto L_08B565A0;
    case 605u: goto L_08B565A4;
    case 606u: goto L_08B565C0;
    case 607u: goto L_08B565C8;
    case 608u: goto L_08B565D0;
    case 609u: goto L_08B565D8;
    case 610u: goto L_08B565E0;
    case 611u: goto L_08B56600;
    case 612u: goto L_08B5661C;
    case 613u: goto L_08B56620;
    case 614u: goto L_08B56624;
    case 615u: goto L_08B56634;
    case 616u: goto L_08B56644;
    case 617u: goto L_08B56654;
    case 618u: goto L_08B56670;
    case 619u: goto L_08B566A8;
    case 620u: goto L_08B566B4;
    case 621u: goto L_08B566C0;
    case 622u: goto L_08B566CC;
    case 623u: goto L_08B566F4;
    case 624u: goto L_08B566F8;
    case 625u: goto L_08B5673C;
    case 626u: goto L_08B56750;
    case 627u: goto L_08B56764;
    case 628u: goto L_08B56768;
    case 629u: goto L_08B56770;
    case 630u: goto L_08B56784;
    case 631u: goto L_08B5678C;
    case 632u: goto L_08B567A4;
    case 633u: goto L_08B567AC;
    case 634u: goto L_08B567B4;
    case 635u: goto L_08B567BC;
    case 636u: goto L_08B567C4;
    case 637u: goto L_08B567CC;
    case 638u: goto L_08B567D8;
    case 639u: goto L_08B567E0;
    case 640u: goto L_08B567E8;
    case 641u: goto L_08B567F4;
    case 642u: goto L_08B56800;
    case 643u: goto L_08B5680C;
    case 644u: goto L_08B56824;
    case 645u: goto L_08B5682C;
    case 646u: goto L_08B56834;
    case 647u: goto L_08B568C8;
    case 648u: goto L_08B568DC;
    case 649u: goto L_08B568EC;
    case 650u: goto L_08B568F8;
    case 651u: goto L_08B5690C;
    case 652u: goto L_08B56910;
    case 653u: goto L_08B56918;
    case 654u: goto L_08B56920;
    case 655u: goto L_08B56928;
    case 656u: goto L_08B5692C;
    case 657u: goto L_08B56944;
    case 658u: goto L_08B56964;
    case 659u: goto L_08B5696C;
    case 660u: goto L_08B56978;
    case 661u: goto L_08B56988;
    case 662u: goto L_08B56994;
    case 663u: goto L_08B569AC;
    case 664u: goto L_08B569B0;
    case 665u: goto L_08B569BC;
    case 666u: goto L_08B569C8;
    case 667u: goto L_08B569D0;
    case 668u: goto L_08B569D8;
    case 669u: goto L_08B569DC;
    case 670u: goto L_08B569EC;
    case 671u: goto L_08B56A14;
    case 672u: goto L_08B56A1C;
    case 673u: goto L_08B56A28;
    case 674u: goto L_08B56A34;
    case 675u: goto L_08B56A40;
    case 676u: goto L_08B56A4C;
    case 677u: goto L_08B56A68;
    case 678u: goto L_08B56A74;
    case 679u: goto L_08B56A78;
    case 680u: goto L_08B56A8C;
    case 681u: goto L_08B56AA4;
    case 682u: goto L_08B56AB0;
    case 683u: goto L_08B56AB4;
    case 684u: goto L_08B56AC8;
    case 685u: goto L_08B56AE0;
    case 686u: goto L_08B56AFC;
    case 687u: goto L_08B56B08;
    case 688u: goto L_08B56B14;
    case 689u: goto L_08B56B20;
    case 690u: goto L_08B56B34;
    case 691u: goto L_08B56B44;
    case 692u: goto L_08B56B60;
    case 693u: goto L_08B56B6C;
    case 694u: goto L_08B56B7C;
    case 695u: goto L_08B56B8C;
    case 696u: goto L_08B56B98;
    case 697u: goto L_08B56BA8;
    case 698u: goto L_08B56BB4;
    case 699u: goto L_08B56BE8;
    case 700u: goto L_08B56BEC;
    case 701u: goto L_08B56C00;
    case 702u: goto L_08B56C10;
    case 703u: goto L_08B56C18;
    case 704u: goto L_08B56C20;
    case 705u: goto L_08B56C28;
    case 706u: goto L_08B56C34;
    case 707u: goto L_08B56C50;
    case 708u: goto L_08B56C54;
    case 709u: goto L_08B56C64;
    case 710u: goto L_08B56C70;
    case 711u: goto L_08B56C78;
    case 712u: goto L_08B56C80;
    case 713u: goto L_08B56C9C;
    case 714u: goto L_08B56CA0;
    case 715u: goto L_08B56CA8;
    case 716u: goto L_08B56CB4;
    case 717u: goto L_08B56CBC;
    case 718u: goto L_08B56CC4;
    case 719u: goto L_08B56CCC;
    case 720u: goto L_08B56CD8;
    case 721u: goto L_08B56CE0;
    case 722u: goto L_08B56CF0;
    case 723u: goto L_08B56CF8;
    case 724u: goto L_08B56D10;
    case 725u: goto L_08B56D18;
    case 726u: goto L_08B56D20;
    case 727u: goto L_08B56D28;
    case 728u: goto L_08B56D3C;
    case 729u: goto L_08B56D48;
    case 730u: goto L_08B56D60;
    case 731u: goto L_08B56D6C;
    case 732u: goto L_08B56D80;
    case 733u: goto L_08B56D9C;
    case 734u: goto L_08B56DA4;
    case 735u: goto L_08B56DAC;
    case 736u: goto L_08B56DB0;
    case 737u: goto L_08B56DCC;
    case 738u: goto L_08B56DD8;
    case 739u: goto L_08B56DE0;
    case 740u: goto L_08B56DE8;
    case 741u: goto L_08B56DF0;
    case 742u: goto L_08B56DF8;
    case 743u: goto L_08B56DFC;
    case 744u: goto L_08B56E10;
    case 745u: goto L_08B56E18;
    case 746u: goto L_08B56E20;
    case 747u: goto L_08B56E34;
    case 748u: goto L_08B56E38;
    case 749u: goto L_08B56E60;
    case 750u: goto L_08B56E6C;
    case 751u: goto L_08B56E74;
    case 752u: goto L_08B56E7C;
    case 753u: goto L_08B56E84;
    case 754u: goto L_08B56E8C;
    case 755u: goto L_08B56E90;
    case 756u: goto L_08B56EA4;
    case 757u: goto L_08B56EA8;
    case 758u: goto L_08B56EB0;
    case 759u: goto L_08B56EC4;
    case 760u: goto L_08B56EE4;
    case 761u: goto L_08B56EEC;
    case 762u: goto L_08B56EF4;
    case 763u: goto L_08B56EF8;
    case 764u: goto L_08B56F14;
    case 765u: goto L_08B56F20;
    case 766u: goto L_08B56F28;
    case 767u: goto L_08B56F30;
    case 768u: goto L_08B56F34;
    case 769u: goto L_08B56F4C;
    case 770u: goto L_08B56F54;
    case 771u: goto L_08B56F68;
    case 772u: goto L_08B56F6C;
    case 773u: goto L_08B56F94;
    case 774u: goto L_08B56FA0;
    case 775u: goto L_08B56FA8;
    case 776u: goto L_08B56FB0;
    case 777u: goto L_08B56FB4;
    case 778u: goto L_08B56FCC;
    case 779u: goto L_08B56FD0;
    case 780u: goto L_08B56FE8;
    case 781u: goto L_08B56FF8;
    case 782u: goto L_08B57008;
    case 783u: goto L_08B5700C;
    case 784u: goto L_08B5701C;
    case 785u: goto L_08B57028;
    case 786u: goto L_08B57034;
    case 787u: goto L_08B57050;
    case 788u: goto L_08B57058;
    case 789u: goto L_08B57060;
    case 790u: goto L_08B5706C;
    case 791u: goto L_08B57078;
    case 792u: goto L_08B57080;
    case 793u: goto L_08B57084;
    case 794u: goto L_08B5708C;
    case 795u: goto L_08B57094;
    case 796u: goto L_08B5709C;
    case 797u: goto L_08B570A4;
    case 798u: goto L_08B570B0;
    case 799u: goto L_08B570BC;
    case 800u: goto L_08B570C4;
    case 801u: goto L_08B570DC;
    case 802u: goto L_08B570F4;
    case 803u: goto L_08B57100;
    case 804u: goto L_08B57104;
    case 805u: goto L_08B5710C;
    case 806u: goto L_08B57118;
    case 807u: goto L_08B57124;
    case 808u: goto L_08B57134;
    case 809u: goto L_08B5713C;
    case 810u: goto L_08B57148;
    case 811u: goto L_08B5715C;
    case 812u: goto L_08B57164;
    case 813u: goto L_08B5717C;
    case 814u: goto L_08B5718C;
    case 815u: goto L_08B57194;
    case 816u: goto L_08B5719C;
    case 817u: goto L_08B571A8;
    case 818u: goto L_08B571AC;
    case 819u: goto L_08B571B4;
    case 820u: goto L_08B571C0;
    case 821u: goto L_08B571CC;
    case 822u: goto L_08B57200;
    case 823u: goto L_08B57210;
    case 824u: goto L_08B5721C;
    case 825u: goto L_08B57228;
    case 826u: goto L_08B5722C;
    case 827u: goto L_08B57238;
    case 828u: goto L_08B57250;
    case 829u: goto L_08B57264;
    case 830u: goto L_08B57274;
    case 831u: goto L_08B57280;
    case 832u: goto L_08B57290;
    case 833u: goto L_08B57298;
    case 834u: goto L_08B572A8;
    case 835u: goto L_08B572B0;
    case 836u: goto L_08B572BC;
    case 837u: goto L_08B572C4;
    case 838u: goto L_08B572D8;
    case 839u: goto L_08B572E8;
    case 840u: goto L_08B572EC;
    case 841u: goto L_08B572FC;
    case 842u: goto L_08B57308;
    case 843u: goto L_08B57314;
    case 844u: goto L_08B57320;
    case 845u: goto L_08B57328;
    case 846u: goto L_08B57330;
    case 847u: goto L_08B57338;
    case 848u: goto L_08B57340;
    case 849u: goto L_08B57348;
    case 850u: goto L_08B57354;
    case 851u: goto L_08B5735C;
    case 852u: goto L_08B57360;
    case 853u: goto L_08B57368;
    case 854u: goto L_08B57370;
    case 855u: goto L_08B57374;
    case 856u: goto L_08B57380;
    case 857u: goto L_08B5738C;
    case 858u: goto L_08B57398;
    case 859u: goto L_08B573A4;
    case 860u: goto L_08B573B4;
    case 861u: goto L_08B573C0;
    case 862u: goto L_08B573D4;
    case 863u: goto L_08B573DC;
    case 864u: goto L_08B573F4;
    case 865u: goto L_08B57404;
    case 866u: goto L_08B5740C;
    case 867u: goto L_08B57414;
    case 868u: goto L_08B57420;
    case 869u: goto L_08B57424;
    case 870u: goto L_08B5742C;
    case 871u: goto L_08B57438;
    case 872u: goto L_08B57448;
    case 873u: goto L_08B5744C;
    case 874u: goto L_08B57458;
    case 875u: goto L_08B57464;
    case 876u: goto L_08B5746C;
    case 877u: goto L_08B57470;
    case 878u: goto L_08B57480;
    case 879u: goto L_08B57488;
    case 880u: goto L_08B57490;
    case 881u: goto L_08B57498;
    case 882u: goto L_08B574A0;
    case 883u: goto L_08B574A4;
    case 884u: goto L_08B574B4;
    case 885u: goto L_08B574C0;
    case 886u: goto L_08B574D8;
    case 887u: goto L_08B574EC;
    case 888u: goto L_08B574F8;
    case 889u: goto L_08B5750C;
    case 890u: goto L_08B57514;
    case 891u: goto L_08B57518;
    case 892u: goto L_08B57524;
    case 893u: goto L_08B57528;
    case 894u: goto L_08B57538;
    case 895u: goto L_08B5753C;
    case 896u: goto L_08B57548;
    case 897u: goto L_08B57578;
    case 898u: goto L_08B575B4;
    case 899u: goto L_08B575C8;
    case 900u: goto L_08B575E4;
    case 901u: goto L_08B575F4;
    case 902u: goto L_08B575FC;
    case 903u: goto L_08B57604;
    case 904u: goto L_08B57608;
    case 905u: goto L_08B57614;
    case 906u: goto L_08B5761C;
    case 907u: goto L_08B57624;
    case 908u: goto L_08B5762C;
    case 909u: goto L_08B57640;
    case 910u: goto L_08B5765C;
    case 911u: goto L_08B57660;
    case 912u: goto L_08B5766C;
    case 913u: goto L_08B57674;
    case 914u: goto L_08B57678;
    case 915u: goto L_08B57684;
    case 916u: goto L_08B57698;
    case 917u: goto L_08B576A8;
    case 918u: goto L_08B576AC;
    case 919u: goto L_08B576C0;
    case 920u: goto L_08B576C8;
    case 921u: goto L_08B576D0;
    case 922u: goto L_08B576D8;
    case 923u: goto L_08B576E4;
    case 924u: goto L_08B576EC;
    case 925u: goto L_08B57714;
    case 926u: goto L_08B5771C;
    case 927u: goto L_08B57728;
    case 928u: goto L_08B57744;
    case 929u: goto L_08B57750;
    case 930u: goto L_08B5775C;
    case 931u: goto L_08B57768;
    case 932u: goto L_08B57778;
    case 933u: goto L_08B57794;
    case 934u: goto L_08B577BC;
    case 935u: goto L_08B577CC;
    case 936u: goto L_08B577DC;
    case 937u: goto L_08B577E8;
    case 938u: goto L_08B577FC;
    case 939u: goto L_08B57808;
    case 940u: goto L_08B5783C;
    case 941u: goto L_08B57840;
    case 942u: goto L_08B5784C;
    case 943u: goto L_08B57850;
    case 944u: goto L_08B5785C;
    case 945u: goto L_08B57868;
    case 946u: goto L_08B57874;
    case 947u: goto L_08B5787C;
    case 948u: goto L_08B57884;
    case 949u: goto L_08B5788C;
    case 950u: goto L_08B57894;
    case 951u: goto L_08B578B4;
    case 952u: goto L_08B578C0;
    case 953u: goto L_08B578C8;
    case 954u: goto L_08B57908;
    case 955u: goto L_08B57910;
    case 956u: goto L_08B57918;
    case 957u: goto L_08B5791C;
    case 958u: goto L_08B57924;
    case 959u: goto L_08B5792C;
    case 960u: goto L_08B57954;
    case 961u: goto L_08B5795C;
    case 962u: goto L_08B57968;
    case 963u: goto L_08B57974;
    case 964u: goto L_08B5797C;
    case 965u: goto L_08B57984;
    case 966u: goto L_08B57990;
    case 967u: goto L_08B5799C;
    case 968u: goto L_08B579A0;
    case 969u: goto L_08B579A8;
    case 970u: goto L_08B579B0;
    case 971u: goto L_08B579B4;
    case 972u: goto L_08B579BC;
    case 973u: goto L_08B579C8;
    case 974u: goto L_08B579D0;
    case 975u: goto L_08B579F8;
    case 976u: goto L_08B57A00;
    case 977u: goto L_08B57A04;
    case 978u: goto L_08B57A0C;
    case 979u: goto L_08B57A14;
    case 980u: goto L_08B57A18;
    case 981u: goto L_08B57A48;
    case 982u: goto L_08B57A70;
    case 983u: goto L_08B57A7C;
    case 984u: goto L_08B57A84;
    case 985u: goto L_08B57A8C;
    case 986u: goto L_08B57A98;
    case 987u: goto L_08B57AA0;
    case 988u: goto L_08B57AA8;
    case 989u: goto L_08B57AB4;
    case 990u: goto L_08B57ABC;
    case 991u: goto L_08B57AE4;
    case 992u: goto L_08B57B0C;
    case 993u: goto L_08B57B3C;
    case 994u: goto L_08B57B48;
    case 995u: goto L_08B57B50;
    case 996u: goto L_08B57B58;
    case 997u: goto L_08B57B64;
    case 998u: goto L_08B57B6C;
    case 999u: goto L_08B57B70;
    case 1000u: goto L_08B57B98;
    case 1001u: goto L_08B57BA0;
    case 1002u: goto L_08B57BAC;
    case 1003u: goto L_08B57BDC;
    case 1004u: goto L_08B57BF0;
    case 1005u: goto L_08B57BF8;
    case 1006u: goto L_08B57C00;
    case 1007u: goto L_08B57C08;
    case 1008u: goto L_08B57C10;
    case 1009u: goto L_08B57C18;
    case 1010u: goto L_08B57C20;
    case 1011u: goto L_08B57C38;
    case 1012u: goto L_08B57C48;
    case 1013u: goto L_08B57C5C;
    case 1014u: goto L_08B57C70;
    case 1015u: goto L_08B57C84;
    case 1016u: goto L_08B57C98;
    case 1017u: goto L_08B57CB0;
    case 1018u: goto L_08B57CB8;
    case 1019u: goto L_08B57CC4;
    case 1020u: goto L_08B57CC8;
    case 1021u: goto L_08B57CCC;
    case 1022u: goto L_08B57CE0;
    case 1023u: goto L_08B57CEC;
    case 1024u: goto L_08B57D04;
    case 1025u: goto L_08B57D0C;
    case 1026u: goto L_08B57D38;
    case 1027u: goto L_08B57D70;
    case 1028u: goto L_08B57DB0;
    case 1029u: goto L_08B57DF8;
    case 1030u: goto L_08B57E04;
    case 1031u: goto L_08B57E2C;
    case 1032u: goto L_08B57E3C;
    case 1033u: goto L_08B57E64;
    case 1034u: goto L_08B57E6C;
    case 1035u: goto L_08B57EA4;
    case 1036u: goto L_08B57ECC;
    case 1037u: goto L_08B57EDC;
    case 1038u: goto L_08B57EF0;
    case 1039u: goto L_08B57F0C;
    case 1040u: goto L_08B57F18;
    case 1041u: goto L_08B57F2C;
    case 1042u: goto L_08B57F34;
    case 1043u: goto L_08B57F40;
    case 1044u: goto L_08B57F48;
    case 1045u: goto L_08B57F54;
    case 1046u: goto L_08B57F58;
    case 1047u: goto L_08B57F60;
    case 1048u: goto L_08B57F70;
    case 1049u: goto L_08B57F78;
    case 1050u: goto L_08B57F88;
    case 1051u: goto L_08B57F94;
    case 1052u: goto L_08B57FA4;
    case 1053u: goto L_08B57FC8;
    case 1054u: goto L_08B57FD0;
    case 1055u: goto L_08B57FDC;
    case 1056u: goto L_08B57FE4;
    case 1057u: goto L_08B57FF4;
    case 1058u: goto L_08B57FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08B54000:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(384));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08B5402Cu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x08B5402Cu) goto L_08B5402C;
    return;
L_08B5402C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(2)));
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(3)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08B54074;
      }
      goto L_08B54068;
    }
L_08B54068:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08B54074;
L_08B54074:
    ctx.gpr[31] = (0x08B5407Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x08B5407Cu) goto L_08B5407C;
    return;
L_08B5407C:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
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
L_08B54098:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B540A8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0195_entry, 195u, 200u, 0x08B10D5Cu>(ctx, &aot_mem) && ctx.pc == 0x08B540A8u) goto L_08B540A8;
    return;
L_08B540A8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B54138;
      }
      goto L_08B540B4;
    }
L_08B540B4:
    ctx.gpr[5] = (0u | 11u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8724)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3))))));
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(19), ctx.gpr[5]);
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(22), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(23), ctx.gpr[5]);
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(26), ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (ctx.gpr[5] ^ ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(19), ctx.gpr[5]));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(22), ctx.gpr[5]));
      if (branch_taken) {
          goto L_08B54128;
      }
      goto L_08B5410C;
    }
L_08B5410C:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(28))))));
    ctx.gpr[31] = (0x08B54120u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 795u, 0x08A3716Cu>(ctx, &aot_mem) && ctx.pc == 0x08B54120u) goto L_08B54120;
    return;
L_08B54120:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B54138;
      }
      goto L_08B54128;
    }
L_08B54128:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08B54138u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 189u, 0x08ADCA34u>(ctx, &aot_mem) && ctx.pc == 0x08B54138u) goto L_08B54138;
    return;
L_08B54138:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B54148:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[31] = (0x08B5416Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0195_entry, 195u, 200u, 0x08B10D5Cu>(ctx, &aot_mem) && ctx.pc == 0x08B5416Cu) goto L_08B5416C;
    return;
L_08B5416C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B5418C;
      }
      goto L_08B54178;
    }
L_08B54178:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B541A0;
      }
      goto L_08B54184;
    }
L_08B54184:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(194)));
      if (branch_taken) {
          goto L_08B541C4;
      }
      goto L_08B5418C;
    }
L_08B5418C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B54198u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem) && ctx.pc == 0x08B54198u) goto L_08B54198;
    return;
L_08B54198:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08B54250;
      }
      goto L_08B541A0;
    }
L_08B541A0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08B541B0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x08B541B0u) goto L_08B541B0;
    return;
L_08B541B0:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(194)));
    goto L_08B541C4;
L_08B541C4:
    ctx.gpr[5] = (ctx.gpr[5] ^ 5u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B54240;
      }
      goto L_08B541D8;
    }
L_08B541D8:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(204))))));
        goto L_08B54204;
    }
    goto L_08B541E0;
L_08B541E0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(17));
    ctx.gpr[31] = (0x08B541F0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x08B541F0u) goto L_08B541F0;
    return;
L_08B541F0:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(204))))));
    goto L_08B54204;
L_08B54204:
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B5422C;
      }
      goto L_08B54218;
    }
L_08B54218:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B54224u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem) && ctx.pc == 0x08B54224u) goto L_08B54224;
    return;
L_08B54224:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B54238;
      }
      goto L_08B5422C;
    }
L_08B5422C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B54238u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem) && ctx.pc == 0x08B54238u) goto L_08B54238;
    return;
L_08B54238:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08B54250;
      }
      goto L_08B54240;
    }
L_08B54240:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B5424Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem) && ctx.pc == 0x08B5424Cu) goto L_08B5424C;
    return;
L_08B5424C:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_08B54250;
L_08B54250:
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
L_08B54268:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[31] = (0x08B5428Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0195_entry, 195u, 200u, 0x08B10D5Cu>(ctx, &aot_mem) && ctx.pc == 0x08B5428Cu) goto L_08B5428C;
    return;
L_08B5428C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B542AC;
      }
      goto L_08B54298;
    }
L_08B54298:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B542C4;
      }
      goto L_08B542A4;
    }
L_08B542A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
      if (branch_taken) {
          goto L_08B542E4;
      }
      goto L_08B542AC;
    }
L_08B542AC:
    ctx.gpr[4] = (49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08B542BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x08B542BCu) goto L_08B542BC;
    return;
L_08B542BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08B542F4;
      }
      goto L_08B542C4;
    }
L_08B542C4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08B542D4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x08B542D4u) goto L_08B542D4;
    return;
L_08B542D4:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    goto L_08B542E4;
L_08B542E4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(460)));
    ctx.gpr[31] = (0x08B542F0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x08B542F0u) goto L_08B542F0;
    return;
L_08B542F0:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_08B542F4;
L_08B542F4:
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
L_08B5430C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[31] = (0x08B54330u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0195_entry, 195u, 200u, 0x08B10D5Cu>(ctx, &aot_mem) && ctx.pc == 0x08B54330u) goto L_08B54330;
    return;
L_08B54330:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B54354;
      }
      goto L_08B5433C;
    }
L_08B5433C:
    ctx.gpr[4] = (49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08B5434Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x08B5434Cu) goto L_08B5434C;
    return;
L_08B5434C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B54394;
      }
      goto L_08B54354;
    }
L_08B54354:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
        goto L_08B54380;
    }
    goto L_08B54360;
L_08B54360:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08B54370u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x08B54370u) goto L_08B54370;
    return;
L_08B54370:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    goto L_08B54380;
L_08B54380:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(464))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[31] = (0x08B54394u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x08B54394u) goto L_08B54394;
    return;
L_08B54394:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
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
L_08B543B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B543C0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0195_entry, 195u, 200u, 0x08B10D5Cu>(ctx, &aot_mem) && ctx.pc == 0x08B543C0u) goto L_08B543C0;
    return;
L_08B543C0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B543E0;
      }
      goto L_08B543CC;
    }
L_08B543CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B543E0;
      }
      goto L_08B543D8;
    }
L_08B543D8:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(694), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08B543E0;
L_08B543E0:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B543F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08B5440Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0195_entry, 195u, 200u, 0x08B10D5Cu>(ctx, &aot_mem) && ctx.pc == 0x08B5440Cu) goto L_08B5440C;
    return;
L_08B5440C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B5441Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem) && ctx.pc == 0x08B5441Cu) goto L_08B5441C;
    return;
L_08B5441C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B54458;
      }
      goto L_08B54428;
    }
L_08B54428:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B54458;
      }
      goto L_08B54434;
    }
L_08B54434:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B54458u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem) && ctx.pc == 0x08B54458u) goto L_08B54458;
    return;
L_08B54458:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B54470:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08B5448Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0195_entry, 195u, 200u, 0x08B10D5Cu>(ctx, &aot_mem) && ctx.pc == 0x08B5448Cu) goto L_08B5448C;
    return;
L_08B5448C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B5449Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem) && ctx.pc == 0x08B5449Cu) goto L_08B5449C;
    return;
L_08B5449C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B5450C;
      }
      goto L_08B544A4;
    }
L_08B544A4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B5450C;
      }
      goto L_08B544B0;
    }
L_08B544B0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16051u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 13107u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B5450C;
      }
      goto L_08B544E0;
    }
L_08B544E0:
    ctx.gpr[5] = (16236u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B5450Cu);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem) && ctx.pc == 0x08B5450Cu) goto L_08B5450C;
    return;
L_08B5450C:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B54524:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08B54544u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0195_entry, 195u, 200u, 0x08B10D5Cu>(ctx, &aot_mem) && ctx.pc == 0x08B54544u) goto L_08B54544;
    return;
L_08B54544:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B54554u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem) && ctx.pc == 0x08B54554u) goto L_08B54554;
    return;
L_08B54554:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B54564u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem) && ctx.pc == 0x08B54564u) goto L_08B54564;
    return;
L_08B54564:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B545C0;
      }
      goto L_08B54570;
    }
L_08B54570:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B545C0;
      }
      goto L_08B5457C;
    }
L_08B5457C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B545C0;
      }
      goto L_08B545A0;
    }
L_08B545A0:
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B545C0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem) && ctx.pc == 0x08B545C0u) goto L_08B545C0;
    return;
L_08B545C0:
    ctx.gpr[2] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B545DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08B545F4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0195_entry, 195u, 200u, 0x08B10D5Cu>(ctx, &aot_mem) && ctx.pc == 0x08B545F4u) goto L_08B545F4;
    return;
L_08B545F4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B54660;
      }
      goto L_08B54600;
    }
L_08B54600:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[6] = (2237u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(100)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (ctx.gpr[5] ^ ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B54630;
      }
      goto L_08B54628;
    }
L_08B54628:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
      if (branch_taken) {
          goto L_08B54634;
      }
      goto L_08B54630;
    }
L_08B54630:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    goto L_08B54634;
L_08B54634:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(86))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08B54650;
      }
      goto L_08B54644;
    }
L_08B54644:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08B54650;
L_08B54650:
    ctx.gpr[31] = (0x08B54658u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x08B54658u) goto L_08B54658;
    return;
L_08B54658:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08B54670;
      }
      goto L_08B54660;
    }
L_08B54660:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x08B5466Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x08B5466Cu) goto L_08B5466C;
    return;
L_08B5466C:
    ctx.gpr[2] = (0u | 1u);
    goto L_08B54670;
L_08B54670:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B54680:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[31] = (0x08B546A0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 337u, 0x0880692Cu>(ctx, &aot_mem) && ctx.pc == 0x08B546A0u) goto L_08B546A0;
    return;
L_08B546A0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B546D4;
      }
      goto L_08B546A8;
    }
L_08B546A8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B546B4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem) && ctx.pc == 0x08B546B4u) goto L_08B546B4;
    return;
L_08B546B4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08B546E8;
      }
      goto L_08B546CC;
    }
L_08B546CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B546F8;
      }
      goto L_08B546D4;
    }
L_08B546D4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B546E0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem) && ctx.pc == 0x08B546E0u) goto L_08B546E0;
    return;
L_08B546E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08B5472C;
      }
      goto L_08B546E8;
    }
L_08B546E8:
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08B546F8;
L_08B546F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B5471C;
      }
      goto L_08B54708;
    }
L_08B54708:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B54714u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem) && ctx.pc == 0x08B54714u) goto L_08B54714;
    return;
L_08B54714:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B54728;
      }
      goto L_08B5471C;
    }
L_08B5471C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B54728u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem) && ctx.pc == 0x08B54728u) goto L_08B54728;
    return;
L_08B54728:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    goto L_08B5472C;
L_08B5472C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B54740:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_08B54764;
    }
    goto L_08B54754;
L_08B54754:
    ctx.gpr[31] = (0x08B5475Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem) && ctx.pc == 0x08B5475Cu) goto L_08B5475C;
    return;
L_08B5475C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_08B54764;
L_08B54764:
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[31] = (0x08B54770u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x08B54770u) goto L_08B54770;
    return;
L_08B54770:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_08B5478C;
    }
    goto L_08B5477C;
L_08B5477C:
    ctx.gpr[31] = (0x08B54784u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem) && ctx.pc == 0x08B54784u) goto L_08B54784;
    return;
L_08B54784:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_08B5478C;
L_08B5478C:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[31] = (0x08B54798u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-29748));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem) && ctx.pc == 0x08B54798u) goto L_08B54798;
    return;
L_08B54798:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_08B547B4;
    }
    goto L_08B547A4;
L_08B547A4:
    ctx.gpr[31] = (0x08B547ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem) && ctx.pc == 0x08B547ACu) goto L_08B547AC;
    return;
L_08B547AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_08B547B4;
L_08B547B4:
    ctx.gpr[31] = (0x08B547BCu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 315u, 0x0880673Cu>(ctx, &aot_mem) && ctx.pc == 0x08B547BCu) goto L_08B547BC;
    return;
L_08B547BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_08B547D8;
    }
    goto L_08B547C8;
L_08B547C8:
    ctx.gpr[31] = (0x08B547D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem) && ctx.pc == 0x08B547D0u) goto L_08B547D0;
    return;
L_08B547D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_08B547D8;
L_08B547D8:
    ctx.gpr[31] = (0x08B547E0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x08B547E0u) goto L_08B547E0;
    return;
L_08B547E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_08B547FC;
    }
    goto L_08B547EC;
L_08B547EC:
    ctx.gpr[31] = (0x08B547F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem) && ctx.pc == 0x08B547F4u) goto L_08B547F4;
    return;
L_08B547F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_08B547FC;
L_08B547FC:
    ctx.gpr[5] = (16384u << 16u);
    ctx.gpr[31] = (0x08B54808u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x08B54808u) goto L_08B54808;
    return;
L_08B54808:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_08B54824;
    }
    goto L_08B54814;
L_08B54814:
    ctx.gpr[31] = (0x08B5481Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem) && ctx.pc == 0x08B5481Cu) goto L_08B5481C;
    return;
L_08B5481C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_08B54824;
L_08B54824:
    ctx.gpr[31] = (0x08B5482Cu);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(5804));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem) && ctx.pc == 0x08B5482Cu) goto L_08B5482C;
    return;
L_08B5482C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_08B54848;
    }
    goto L_08B54838;
L_08B54838:
    ctx.gpr[31] = (0x08B54840u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem) && ctx.pc == 0x08B54840u) goto L_08B54840;
    return;
L_08B54840:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_08B54848;
L_08B54848:
    ctx.gpr[31] = (0x08B54850u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 315u, 0x0880673Cu>(ctx, &aot_mem) && ctx.pc == 0x08B54850u) goto L_08B54850;
    return;
L_08B54850:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_08B5486C;
    }
    goto L_08B5485C;
L_08B5485C:
    ctx.gpr[31] = (0x08B54864u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem) && ctx.pc == 0x08B54864u) goto L_08B54864;
    return;
L_08B54864:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_08B5486C;
L_08B5486C:
    ctx.gpr[31] = (0x08B54874u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x08B54874u) goto L_08B54874;
    return;
L_08B54874:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_08B54890;
    }
    goto L_08B54880;
L_08B54880:
    ctx.gpr[31] = (0x08B54888u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem) && ctx.pc == 0x08B54888u) goto L_08B54888;
    return;
L_08B54888:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_08B54890;
L_08B54890:
    ctx.gpr[5] = (16608u << 16u);
    ctx.gpr[31] = (0x08B5489Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x08B5489Cu) goto L_08B5489C;
    return;
L_08B5489C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_08B548B8;
    }
    goto L_08B548A8;
L_08B548A8:
    ctx.gpr[31] = (0x08B548B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem) && ctx.pc == 0x08B548B0u) goto L_08B548B0;
    return;
L_08B548B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_08B548B8;
L_08B548B8:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[31] = (0x08B548C4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-29728));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem) && ctx.pc == 0x08B548C4u) goto L_08B548C4;
    return;
L_08B548C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_08B548E0;
    }
    goto L_08B548D0;
L_08B548D0:
    ctx.gpr[31] = (0x08B548D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem) && ctx.pc == 0x08B548D8u) goto L_08B548D8;
    return;
L_08B548D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_08B548E0;
L_08B548E0:
    ctx.gpr[31] = (0x08B548E8u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 315u, 0x0880673Cu>(ctx, &aot_mem) && ctx.pc == 0x08B548E8u) goto L_08B548E8;
    return;
L_08B548E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_08B54904;
    }
    goto L_08B548F4;
L_08B548F4:
    ctx.gpr[31] = (0x08B548FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem) && ctx.pc == 0x08B548FCu) goto L_08B548FC;
    return;
L_08B548FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_08B54904;
L_08B54904:
    ctx.gpr[31] = (0x08B5490Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x08B5490Cu) goto L_08B5490C;
    return;
L_08B5490C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_08B54928;
    }
    goto L_08B54918;
L_08B54918:
    ctx.gpr[31] = (0x08B54920u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem) && ctx.pc == 0x08B54920u) goto L_08B54920;
    return;
L_08B54920:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_08B54928;
L_08B54928:
    ctx.gpr[5] = (16640u << 16u);
    ctx.gpr[31] = (0x08B54934u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x08B54934u) goto L_08B54934;
    return;
L_08B54934:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_08B54950;
    }
    goto L_08B54940;
L_08B54940:
    ctx.gpr[31] = (0x08B54948u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem) && ctx.pc == 0x08B54948u) goto L_08B54948;
    return;
L_08B54948:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_08B54950;
L_08B54950:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[31] = (0x08B5495Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-29704));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem) && ctx.pc == 0x08B5495Cu) goto L_08B5495C;
    return;
L_08B5495C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_08B54978;
    }
    goto L_08B54968;
L_08B54968:
    ctx.gpr[31] = (0x08B54970u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem) && ctx.pc == 0x08B54970u) goto L_08B54970;
    return;
L_08B54970:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_08B54978;
L_08B54978:
    ctx.gpr[31] = (0x08B54980u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 315u, 0x0880673Cu>(ctx, &aot_mem) && ctx.pc == 0x08B54980u) goto L_08B54980;
    return;
L_08B54980:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_08B5499C;
    }
    goto L_08B5498C;
L_08B5498C:
    ctx.gpr[31] = (0x08B54994u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem) && ctx.pc == 0x08B54994u) goto L_08B54994;
    return;
L_08B54994:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_08B5499C;
L_08B5499C:
    ctx.gpr[31] = (0x08B549A4u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x08B549A4u) goto L_08B549A4;
    return;
L_08B549A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2233u << 16u);
      if (branch_taken) {
          goto L_08B549C0;
      }
      goto L_08B549B0;
    }
L_08B549B0:
    ctx.gpr[31] = (0x08B549B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem) && ctx.pc == 0x08B549B8u) goto L_08B549B8;
    return;
L_08B549B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    ctx.gpr[5] = (2233u << 16u);
    goto L_08B549C0;
L_08B549C0:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-30004));
    ctx.gpr[31] = (0x08B549CCu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 266u, 0x08885220u>(ctx, &aot_mem) && ctx.pc == 0x08B549CCu) goto L_08B549CC;
    return;
L_08B549CC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B549D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[3] = (519u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] + 0u);
    ctx.gpr[4] = (ctx.gpr[3] | 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[31] = (0x08B549FCu);
    ctx.gpr[16] = (ctx.gpr[5] + 0u);
    ctx.pc = 0x08B73554u;
    return;
L_08B549FC:
    ctx.gpr[2] = (3u << 16u);
    ctx.gpr[31] = (0x08B54A08u);
    ctx.gpr[4] = (ctx.gpr[2] | 774u);
    ctx.pc = 0x08B73574u;
    return;
L_08B54A08:
    ctx.gpr[4] = (0u << 16u);
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(0));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_08B54AD8;
      }
      goto L_08B54A18;
    }
L_08B54A18:
    ctx.gpr[6] = (0u << 16u);
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(0));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[3] = (2235u << 16u);
      if (branch_taken) {
          goto L_08B54AC4;
      }
      goto L_08B54A28;
    }
L_08B54A28:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08B54A2C;
L_08B54A2C:
    ctx.gpr[3] = (0u << 16u);
    ctx.gpr[9] = (ctx.gpr[3] + static_cast<std::uint32_t>(0));
    if (ctx.gpr[9] == 0u) {
    ctx.gpr[3] = (2235u << 16u);
        goto L_08B54AB0;
    }
    goto L_08B54A3C;
L_08B54A3C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    goto L_08B54A40;
L_08B54A40:
    ctx.gpr[7] = (ctx.gpr[2] << 10u);
    goto L_08B54A44;
L_08B54A44:
    ctx.gpr[3] = (0u << 16u);
    ctx.gpr[11] = (ctx.gpr[3] + static_cast<std::uint32_t>(0));
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.gpr[12] = (32768u << 16u);
      if (branch_taken) {
          goto L_08B54A94;
      }
      goto L_08B54A54;
    }
L_08B54A54:
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[13] | ctx.gpr[12]);
    goto L_08B54A5C;
L_08B54A5C:
    ctx.gpr[24] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[24] + static_cast<std::uint32_t>(19172));
    ctx.gpr[31] = (0x08B54A6Cu);
    ctx.gpr[9] = (0u + 0u);
    ctx.pc = 0x08B734B4u;
    return;
L_08B54A6C:
    ctx.gpr[4] = (ctx.gpr[2] + 0u);
    ctx.gpr[5] = (ctx.gpr[17] + 0u);
    ctx.gpr[31] = (0x08B54A7Cu);
    ctx.gpr[6] = (ctx.gpr[16] + 0u);
    ctx.pc = 0x08B73464u;
    return;
L_08B54A7C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (0u + 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B54A94:
    ctx.gpr[3] = (0u << 16u);
    ctx.gpr[14] = (ctx.gpr[3] + static_cast<std::uint32_t>(0));
    { const bool branch_taken = ctx.gpr[14] == 0u;
    ctx.gpr[8] = (32768u << 16u);
      if (branch_taken) {
          goto L_08B54A5C;
      }
      goto L_08B54AA4;
    }
L_08B54AA4:
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[15] | ctx.gpr[8]);
    goto L_08B54A5C;
L_08B54AB0:
    ctx.gpr[10] = (ctx.gpr[3] + static_cast<std::uint32_t>(-12172));
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[7] = (4u << 16u);
      if (branch_taken) {
          goto L_08B54A44;
      }
      goto L_08B54ABC;
    }
L_08B54ABC:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-12172)));
    goto L_08B54A40;
L_08B54AC4:
    ctx.gpr[8] = (ctx.gpr[3] + static_cast<std::uint32_t>(-12168));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08B54A2C;
      }
      goto L_08B54AD0;
    }
L_08B54AD0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-12168)));
    goto L_08B54A2C;
L_08B54AD8:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-29624));
    goto L_08B54A18;
L_08B54AE4:
    ctx.gpr[3] = (0u << 16u);
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1008));
    ctx.gpr[6] = (ctx.gpr[3] + static_cast<std::uint32_t>(0));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(996), ctx.gpr[21]);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(988), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[4] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(984), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1000), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(992), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(980), ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(976), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08B54B28;
      }
      goto L_08B54B1C;
    }
L_08B54B1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (0u + 0u);
      if (branch_taken) {
          goto L_08B54B34;
      }
      goto L_08B54B28;
    }
L_08B54B28:
    ctx.gpr[31] = (0x08B54B30u);
    ctx.gpr[4] = (0u + 0u);
    goto L_08B54FD0;
L_08B54B30:
    ctx.gpr[20] = (0u + 0u);
    goto L_08B54B34;
L_08B54B34:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) <= 0;
    ctx.gpr[16] = (ctx.gpr[18] + 0u);
      if (branch_taken) {
          goto L_08B54B74;
      }
      goto L_08B54B3C;
    }
L_08B54B3C:
    ctx.gpr[17] = (ctx.gpr[29] + 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_08B54B44;
L_08B54B44:
    ctx.gpr[4] = (ctx.gpr[16] + 0u);
    ctx.gpr[31] = (0x08B54B50u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x08B54B50u) goto L_08B54B50;
    return;
L_08B54B50:
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[2]);
    ctx.gpr[16] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[3] = (ctx.gpr[16] - ctx.gpr[18]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[20]) < 20 ? 1u : 0u);
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B54B74;
      }
      goto L_08B54B6C;
    }
L_08B54B6C:
    if (ctx.gpr[2] != 0u) {
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
        goto L_08B54B44;
    }
    goto L_08B54B74;
L_08B54B74:
    ctx.gpr[9] = (ctx.gpr[20] << 2u);
    ctx.gpr[7] = (0u << 16u);
    ctx.gpr[8] = (ctx.gpr[9] + ctx.gpr[29]);
    ctx.gpr[2] = (ctx.gpr[7] + static_cast<std::uint32_t>(0));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08B54C44;
      }
      goto L_08B54B8C;
    }
L_08B54B8C:
    ctx.gpr[31] = (0x08B54B94u);
    ctx.gpr[4] = (ctx.gpr[21] + 0u);
    ctx.pc = 0x00000000u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B54B94u) goto L_08B54B94;
    return;
L_08B54B94:
    ctx.gpr[10] = (2229u << 16u);
    ctx.gpr[31] = (0x08B54BA0u);
    ctx.gpr[4] = (ctx.gpr[10] + static_cast<std::uint32_t>(18904));
    ctx.pc = 0x08B735C4u;
    return;
L_08B54BA0:
    ctx.gpr[4] = (ctx.gpr[2] + 0u);
    ctx.gpr[31] = (0x08B54BACu);
    ctx.gpr[5] = (ctx.gpr[21] + 0u);
    ctx.pc = 0x00000000u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B54BACu) goto L_08B54BAC;
    return;
L_08B54BAC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08B54C14;
      }
      goto L_08B54BB4;
    }
L_08B54BB4:
    aot_mem.aot_store32(ctx.gpr[26] + static_cast<std::uint32_t>(4), ctx.gpr[21]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[31] = (0x08B54BC4u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1584));
    goto L_08B57728;
L_08B54BC4:
    ctx.gpr[31] = (0x08B54BCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 61u, 0x08B60628u>(ctx, &aot_mem) && ctx.pc == 0x08B54BCCu) goto L_08B54BCC;
    return;
L_08B54BCC:
    ctx.gpr[4] = (0u << 16u);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(0));
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.gpr[6] = (0u << 16u);
      if (branch_taken) {
          goto L_08B54BE8;
      }
      goto L_08B54BDC;
    }
L_08B54BDC:
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(0));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B54BFC;
      }
      goto L_08B54BE8;
    }
L_08B54BE8:
    ctx.gpr[4] = (ctx.gpr[20] + 0u);
    goto L_08B54BEC;
L_08B54BEC:
    ctx.gpr[31] = (0x08B54BF4u);
    ctx.gpr[5] = (ctx.gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 116u, 0x08934794u>(ctx, &aot_mem) && ctx.pc == 0x08B54BF4u) goto L_08B54BF4;
    return;
L_08B54BF4:
    ctx.gpr[31] = (0x08B54BFCu);
    ctx.gpr[4] = (ctx.gpr[2] + 0u);
    goto L_08B57808;
L_08B54BFC:
    ctx.gpr[31] = (0x08B54C04u);
    // nop
    goto L_08B57728;
L_08B54C04:
    ctx.gpr[31] = (0x08B54C0Cu);
    // nop
    ctx.pc = 0x00000000u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B54C0Cu) goto L_08B54C0C;
    return;
L_08B54C0C:
    ctx.gpr[4] = (ctx.gpr[20] + 0u);
    goto L_08B54BEC;
L_08B54C14:
    ctx.gpr[31] = (0x08B54C1Cu);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(1));
    ctx.pc = 0x08B73524u;
    return;
L_08B54C1C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1000)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(996)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(992)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(988)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(984)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(980)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(976)));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B54C44:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(616));
    ctx.gpr[12] = (ctx.gpr[21] + static_cast<std::uint32_t>(708));
    ctx.gpr[11] = (ctx.gpr[21] + static_cast<std::uint32_t>(800));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(8), ctx.gpr[12]);
    ctx.gpr[2] = (ctx.gpr[21] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(24));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(12), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(16), 0u);
    goto L_08B54C6C;
L_08B54C6C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B54C6C;
      }
      goto L_08B54C7C;
    }
L_08B54C7C:
    ctx.gpr[14] = (2233u << 16u);
    ctx.gpr[13] = (ctx.gpr[14] + static_cast<std::uint32_t>(-29612));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(52), ctx.gpr[13]);
    ctx.gpr[6] = (ctx.gpr[21] + static_cast<std::uint32_t>(124));
    ctx.gpr[5] = (0u + 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(56), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(60), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(68), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(72), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(76), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(80), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(84), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(88), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(92), 0u);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(0u));
    goto L_08B54CC0;
L_08B54CC0:
    ctx.gpr[16] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[15] = (ctx.gpr[5] < static_cast<std::uint32_t>(36) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[15] != 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B54CC0;
      }
      goto L_08B54CD4;
    }
L_08B54CD4:
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(0));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(1));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(13070));
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(-21555));
    ctx.gpr[25] = (0u + static_cast<std::uint32_t>(4660));
    ctx.gpr[24] = (0u + static_cast<std::uint32_t>(-6547));
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-8468));
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(5));
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(11));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(168), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(172), ctx.gpr[9]);
    ctx.gpr[5] = (0u + 0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(276));
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(176), static_cast<std::uint16_t>(ctx.gpr[2]));
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(178), static_cast<std::uint16_t>(ctx.gpr[3]));
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(180), static_cast<std::uint16_t>(ctx.gpr[25]));
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(182), static_cast<std::uint16_t>(ctx.gpr[24]));
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(184), static_cast<std::uint16_t>(ctx.gpr[19]));
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(186), static_cast<std::uint16_t>(ctx.gpr[18]));
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(188), static_cast<std::uint16_t>(ctx.gpr[17]));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(160), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(192), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(196), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(200), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(204), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(208), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(212), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(252), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(256), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(260), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(264), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(268), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(272), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(276), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(280), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(284), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(288), 0u);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(216), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(224), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(248), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(328), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(332), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(336), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(340), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(596), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(468), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(600), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(604), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(608), 0u);
    ctx.gpr[31] = (0x08B54DA0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(612), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem) && ctx.pc == 0x08B54DA0u) goto L_08B54DA0;
    return;
L_08B54DA0:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(892), 0u);
    goto L_08B54BB4;
L_08B54DA8:
    ctx.gpr[3] = (2233u << 16u);
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (ctx.gpr[3] + static_cast<std::uint32_t>(-29556));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
      if (branch_taken) {
          goto L_08B54DC8;
      }
      goto L_08B54DBC;
    }
L_08B54DBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-29556)));
    jump_target = ctx.gpr[4];
    ctx.gpr[31] = (0x08B54DC8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B54DC8u) goto L_08B54DC8;
    return;
L_08B54DC8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (0u + 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B54DD8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[6] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08B54EF8;
      }
      goto L_08B54DFC;
    }
L_08B54DFC:
    ctx.gpr[3] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08B54EE0;
      }
      goto L_08B54E08;
    }
L_08B54E08:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B54ED0;
      }
      goto L_08B54E10;
    }
L_08B54E10:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-9));
      if (branch_taken) {
          goto L_08B54E70;
      }
      goto L_08B54E18;
    }
L_08B54E18:
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[6];
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B54E3C;
      }
      goto L_08B54E24;
    }
L_08B54E24:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08B54EC0;
      }
      goto L_08B54E30;
    }
L_08B54E30:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[8];
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08B54E3C;
      }
      goto L_08B54E38;
    }
L_08B54E38:
    ctx.gpr[17] = (ctx.gpr[16] + 0u);
    goto L_08B54E3C;
L_08B54E3C:
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[9];
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B54EB0;
      }
      goto L_08B54E48;
    }
L_08B54E48:
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[11] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08B54E98;
      }
      goto L_08B54E50;
    }
L_08B54E50:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_08B54E88;
      }
      goto L_08B54E58;
    }
L_08B54E58:
    ctx.gpr[2] = (ctx.gpr[4] + 0u);
    goto L_08B54E5C;
L_08B54E5C:
    ctx.gpr[6] = (ctx.gpr[18] + 0u);
    goto L_08B54E60;
L_08B54E60:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] + 0u);
    ctx.gpr[31] = (0x08B54E70u);
    ctx.gpr[8] = (ctx.gpr[17] + 0u);
    ctx.pc = 0x08B7369Cu;
    return;
L_08B54E70:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B54E88:
    ctx.gpr[31] = (0x08B54E90u);
    // nop
    ctx.pc = 0x08B7358Cu;
    return;
L_08B54E90:
    ctx.gpr[6] = (ctx.gpr[18] + 0u);
    goto L_08B54E60;
L_08B54E98:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[2] = (ctx.gpr[4] + 0u);
        goto L_08B54E5C;
    }
    goto L_08B54EA0;
L_08B54EA0:
    ctx.gpr[31] = (0x08B54EA8u);
    // nop
    ctx.pc = 0x08B7357Cu;
    return;
L_08B54EA8:
    ctx.gpr[6] = (ctx.gpr[18] + 0u);
    goto L_08B54E60;
L_08B54EB0:
    ctx.gpr[31] = (0x08B54EB8u);
    // nop
    ctx.pc = 0x08B73584u;
    return;
L_08B54EB8:
    ctx.gpr[6] = (ctx.gpr[18] + 0u);
    goto L_08B54E60;
L_08B54EC0:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[17] = (0u + 0u);
      if (branch_taken) {
          goto L_08B54E3C;
      }
      goto L_08B54EC8;
    }
L_08B54EC8:
    ctx.gpr[17] = (ctx.gpr[16] + 0u);
    goto L_08B54E3C;
L_08B54ED0:
    ctx.gpr[31] = (0x08B54ED8u);
    // nop
    ctx.pc = 0x08B7358Cu;
    return;
L_08B54ED8:
    ctx.gpr[4] = (ctx.gpr[2] + 0u);
    goto L_08B54E10;
L_08B54EE0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B54E10;
      }
      goto L_08B54EE8;
    }
L_08B54EE8:
    ctx.gpr[31] = (0x08B54EF0u);
    // nop
    ctx.pc = 0x08B7357Cu;
    return;
L_08B54EF0:
    ctx.gpr[4] = (ctx.gpr[2] + 0u);
    goto L_08B54E10;
L_08B54EF8:
    ctx.gpr[31] = (0x08B54F00u);
    // nop
    ctx.pc = 0x08B73584u;
    return;
L_08B54F00:
    ctx.gpr[4] = (ctx.gpr[2] + 0u);
    goto L_08B54E10;
L_08B54F08:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] + 0u);
    ctx.gpr[4] = (0u << 16u);
    ctx.gpr[3] = (ctx.gpr[4] + static_cast<std::uint32_t>(0));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08B54FA4;
      }
      goto L_08B54F28;
    }
L_08B54F28:
    ctx.gpr[31] = (0x08B54F30u);
    // nop
    ctx.pc = 0x00000000u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B54F30u) goto L_08B54F30;
    return;
L_08B54F30:
    ctx.gpr[31] = (0x08B54F38u);
    ctx.gpr[16] = (ctx.gpr[2] + 0u);
    goto L_08B55300;
L_08B54F38:
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[3] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(-29608));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    ctx.gpr[4] = (ctx.gpr[3] + static_cast<std::uint32_t>(-29600));
      if (branch_taken) {
          goto L_08B54F5C;
      }
      goto L_08B54F4C;
    }
L_08B54F4C:
    ctx.gpr[31] = (0x08B54F54u);
    // nop
    ctx.pc = 0x08B73544u;
    return;
L_08B54F54:
    ctx.gpr[31] = (0x08B54F5Cu);
    ctx.gpr[4] = (ctx.gpr[17] + 0u);
    ctx.pc = 0x08B73524u;
    return;
L_08B54F5C:
    ctx.gpr[31] = (0x08B54F64u);
    ctx.gpr[4] = (ctx.gpr[16] + 0u);
    goto L_08B55480;
L_08B54F64:
    ctx.gpr[31] = (0x08B54F6Cu);
    ctx.gpr[4] = (ctx.gpr[16] + 0u);
    ctx.pc = 0x00000000u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B54F6Cu) goto L_08B54F6C;
    return;
L_08B54F6C:
    ctx.gpr[31] = (0x08B54F74u);
    ctx.gpr[16] = (ctx.gpr[2] + 0u);
    ctx.pc = 0x08B735CCu;
    return;
L_08B54F74:
    ctx.gpr[5] = (0u + 0u);
    ctx.gpr[6] = (0u + 0u);
    ctx.gpr[7] = (ctx.gpr[29] + 0u);
    ctx.gpr[8] = (0u + 0u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[16];
    ctx.gpr[4] = (ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_08B54FA4;
      }
      goto L_08B54F8C;
    }
L_08B54F8C:
    ctx.gpr[31] = (0x08B54F94u);
    // nop
    ctx.pc = 0x08B735BCu;
    return;
L_08B54F94:
    ctx.gpr[31] = (0x08B54F9Cu);
    ctx.gpr[4] = (ctx.gpr[16] + 0u);
    ctx.pc = 0x08B735D4u;
    return;
L_08B54F9C:
    ctx.gpr[31] = (0x08B54FA4u);
    ctx.gpr[4] = (ctx.gpr[17] + 0u);
    ctx.pc = 0x08B73524u;
    return;
L_08B54FA4:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (0u + 0u);
    ctx.gpr[6] = (0u + 0u);
    ctx.gpr[7] = (0u + 0u);
    ctx.gpr[31] = (0x08B54FBCu);
    ctx.gpr[8] = (0u + 0u);
    ctx.pc = 0x08B735E4u;
    return;
L_08B54FBC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B54FD0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16628)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08B55068;
      }
      goto L_08B54FF4;
    }
L_08B54FF4:
    ctx.gpr[3] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[3] + static_cast<std::uint32_t>(-12176));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (1u << 16u);
      if (branch_taken) {
          goto L_08B5501C;
      }
      goto L_08B55004;
    }
L_08B55004:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-12176)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B550A8;
      }
      goto L_08B55010;
    }
L_08B55010:
    ctx.gpr[17] = (ctx.gpr[7] << 10u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16628)));
      if (branch_taken) {
          goto L_08B5506C;
      }
      goto L_08B5501C;
    }
L_08B5501C:
    ctx.gpr[2] = (2233u << 16u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(2));
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(-29552));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(3));
    ctx.gpr[7] = (ctx.gpr[17] + 0u);
    ctx.gpr[31] = (0x08B55038u);
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(4096));
    ctx.pc = 0x08B7354Cu;
    return;
L_08B55038:
    ctx.gpr[3] = (2236u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(16636), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08B55068;
      }
      goto L_08B55048;
    }
L_08B55048:
    ctx.gpr[31] = (0x08B55050u);
    // nop
    ctx.pc = 0x08B7355Cu;
    return;
L_08B55050:
    ctx.gpr[7] = (ctx.gpr[2] + ctx.gpr[17]);
    ctx.gpr[6] = (2236u << 16u);
    ctx.gpr[5] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(16632), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16624), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16628), ctx.gpr[2]);
    goto L_08B55068;
L_08B55068:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16628)));
    goto L_08B5506C;
L_08B5506C:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
        goto L_08B550A8;
    }
    goto L_08B55074;
L_08B55074:
    ctx.gpr[6] = (2236u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16624)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[8] = (ctx.gpr[4] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B550A8;
      }
      goto L_08B5508C;
    }
L_08B5508C:
    ctx.gpr[11] = (2236u << 16u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(16632)));
    ctx.gpr[9] = (ctx.gpr[10] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08B550AC;
      }
      goto L_08B550A0;
    }
L_08B550A0:
    ctx.gpr[2] = (ctx.gpr[5] + 0u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(16624), ctx.gpr[4]);
    goto L_08B550A8;
L_08B550A8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08B550AC;
L_08B550AC:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B550C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[6] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
      if (branch_taken) {
          goto L_08B55154;
      }
      goto L_08B550E0;
    }
L_08B550E0:
    ctx.gpr[3] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08B5513C;
      }
      goto L_08B550EC;
    }
L_08B550EC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B5512C;
      }
      goto L_08B550F4;
    }
L_08B550F4:
    ctx.gpr[2] = (ctx.gpr[4] + 0u);
    goto L_08B550F8;
L_08B550F8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(-9));
      if (branch_taken) {
          goto L_08B55114;
      }
      goto L_08B55100;
    }
L_08B55100:
    ctx.gpr[4] = (ctx.gpr[2] + 0u);
    ctx.gpr[5] = (ctx.gpr[16] + 0u);
    ctx.gpr[31] = (0x08B55110u);
    ctx.gpr[6] = (ctx.gpr[17] + 0u);
    ctx.pc = 0x08B73624u;
    return;
L_08B55110:
    ctx.gpr[3] = (ctx.gpr[2] + 0u);
    goto L_08B55114;
L_08B55114:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[3] + 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5512C:
    ctx.gpr[31] = (0x08B55134u);
    // nop
    ctx.pc = 0x08B7358Cu;
    return;
L_08B55134:
    // nop
    goto L_08B550F8;
L_08B5513C:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[2] = (ctx.gpr[4] + 0u);
        goto L_08B550F8;
    }
    goto L_08B55144;
L_08B55144:
    ctx.gpr[31] = (0x08B5514Cu);
    // nop
    ctx.pc = 0x08B7357Cu;
    return;
L_08B5514C:
    // nop
    goto L_08B550F8;
L_08B55154:
    ctx.gpr[31] = (0x08B5515Cu);
    // nop
    ctx.pc = 0x08B73584u;
    return;
L_08B5515C:
    // nop
    goto L_08B550F8;
L_08B55164:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[6] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
      if (branch_taken) {
          goto L_08B551F8;
      }
      goto L_08B55184;
    }
L_08B55184:
    ctx.gpr[3] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08B551E0;
      }
      goto L_08B55190;
    }
L_08B55190:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B551D0;
      }
      goto L_08B55198;
    }
L_08B55198:
    ctx.gpr[2] = (ctx.gpr[4] + 0u);
    goto L_08B5519C;
L_08B5519C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(-9));
      if (branch_taken) {
          goto L_08B551B8;
      }
      goto L_08B551A4;
    }
L_08B551A4:
    ctx.gpr[4] = (ctx.gpr[2] + 0u);
    ctx.gpr[5] = (ctx.gpr[16] + 0u);
    ctx.gpr[31] = (0x08B551B4u);
    ctx.gpr[6] = (ctx.gpr[17] + 0u);
    ctx.pc = 0x08B73614u;
    return;
L_08B551B4:
    ctx.gpr[3] = (ctx.gpr[2] + 0u);
    goto L_08B551B8;
L_08B551B8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[3] + 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B551D0:
    ctx.gpr[31] = (0x08B551D8u);
    // nop
    ctx.pc = 0x08B7358Cu;
    return;
L_08B551D8:
    // nop
    goto L_08B5519C;
L_08B551E0:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[2] = (ctx.gpr[4] + 0u);
        goto L_08B5519C;
    }
    goto L_08B551E8;
L_08B551E8:
    ctx.gpr[31] = (0x08B551F0u);
    // nop
    ctx.pc = 0x08B7357Cu;
    return;
L_08B551F0:
    // nop
    goto L_08B5519C;
L_08B551F8:
    ctx.gpr[31] = (0x08B55200u);
    // nop
    ctx.pc = 0x08B73584u;
    return;
L_08B55200:
    // nop
    goto L_08B5519C;
L_08B55208:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
      if (branch_taken) {
          goto L_08B5527C;
      }
      goto L_08B55218;
    }
L_08B55218:
    ctx.gpr[3] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08B55264;
      }
      goto L_08B55224;
    }
L_08B55224:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B55254;
      }
      goto L_08B5522C;
    }
L_08B5522C:
    ctx.gpr[2] = (ctx.gpr[4] + 0u);
    goto L_08B55230;
L_08B55230:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(-9));
      if (branch_taken) {
          goto L_08B55244;
      }
      goto L_08B55238;
    }
L_08B55238:
    ctx.gpr[31] = (0x08B55240u);
    ctx.gpr[4] = (ctx.gpr[2] + 0u);
    ctx.pc = 0x08B7363Cu;
    return;
L_08B55240:
    ctx.gpr[3] = (ctx.gpr[2] + 0u);
    goto L_08B55244;
L_08B55244:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[3] + 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B55254:
    ctx.gpr[31] = (0x08B5525Cu);
    // nop
    ctx.pc = 0x08B7358Cu;
    return;
L_08B5525C:
    // nop
    goto L_08B55230;
L_08B55264:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[2] = (ctx.gpr[4] + 0u);
        goto L_08B55230;
    }
    goto L_08B5526C;
L_08B5526C:
    ctx.gpr[31] = (0x08B55274u);
    // nop
    ctx.pc = 0x08B7357Cu;
    return;
L_08B55274:
    // nop
    goto L_08B55230;
L_08B5527C:
    ctx.gpr[31] = (0x08B55284u);
    // nop
    ctx.pc = 0x08B73584u;
    return;
L_08B55284:
    // nop
    goto L_08B55230;
L_08B5528C:
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(8192));
    ctx.gpr[2] = (0u + 0u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5529C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16636)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.gpr[4] = (ctx.gpr[3] + 0u);
      if (branch_taken) {
          goto L_08B552C8;
      }
      goto L_08B552B8;
    }
L_08B552B8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B552C8:
    ctx.gpr[31] = (0x08B552D0u);
    // nop
    ctx.pc = 0x08B7356Cu;
    return;
L_08B552D0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16636), 0u);
    goto L_08B552B8;
L_08B552D8:
    ctx.gpr[5] = (2234u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(14520));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] & 2u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B552F4:
    ctx.gpr[4] = (2234u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(15532)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B55300:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (2234u << 16u);
      if (branch_taken) {
          goto L_08B55318;
      }
      goto L_08B55308;
    }
L_08B55308:
    ctx.gpr[2] = (aot_mem.aot_load32(0u + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B55320;
      }
      goto L_08B55314;
    }
L_08B55314:
    ctx.gpr[4] = (2234u << 16u);
    goto L_08B55318;
L_08B55318:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(15532)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B55320:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B55328:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[29]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[25]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[27]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[29]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[31]));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u + 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5538C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[29] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.fpr[21] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.fpr[23] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.fpr[25] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.fpr[27] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.fpr[29] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.fpr[31] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
      if (branch_taken) {
          goto L_08B553F0;
      }
      goto L_08B553EC;
    }
L_08B553EC:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(1));
    goto L_08B553F0;
L_08B553F0:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[5] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B553F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B55408u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 482u, 0x08B625C8u>(ctx, &aot_mem) && ctx.pc == 0x08B55408u) goto L_08B55408;
    return;
L_08B55408:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08B55424;
      }
      goto L_08B55410;
    }
L_08B55410:
    ctx.gpr[5] = (ctx.gpr[3] + 0u);
    ctx.gpr[6] = (0u + 0u);
    ctx.gpr[7] = (0u | 61505u);
    ctx.gpr[31] = (0x08B55424u);
    ctx.gpr[4] = (ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 390u, 0x08B61EF4u>(ctx, &aot_mem) && ctx.pc == 0x08B55424u) goto L_08B55424;
    return;
L_08B55424:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B55434:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B55460;
      }
      goto L_08B55454;
    }
L_08B55454:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08B55460u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08B55434;
L_08B55460:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B5546Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 367u, 0x08B5D908u>(ctx, &aot_mem) && ctx.pc == 0x08B5546Cu) goto L_08B5546C;
    return;
L_08B5546C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B55480:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (2234u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(15532)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B55574;
      }
      goto L_08B554A8;
    }
L_08B554A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08B55500;
      }
      goto L_08B554B4;
    }
L_08B554B4:
    ctx.gpr[18] = (0u | 0u);
    goto L_08B554B8;
L_08B554B8:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[19] == 0u) {
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_08B554E8;
    }
    goto L_08B554C8;
L_08B554C8:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08B554CC;
L_08B554CC:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08B554D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 367u, 0x08B5D908u>(ctx, &aot_mem) && ctx.pc == 0x08B554D8u) goto L_08B554D8;
    return;
L_08B554D8:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08B554CC;
      }
      goto L_08B554E0;
    }
L_08B554E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08B554E8;
L_08B554E8:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < 15 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B554B8;
      }
      goto L_08B554F4;
    }
L_08B554F4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08B55500u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 367u, 0x08B5D908u>(ctx, &aot_mem) && ctx.pc == 0x08B55500u) goto L_08B55500;
    return;
L_08B55500:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(328)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(332));
      if (branch_taken) {
          goto L_08B55534;
      }
      goto L_08B5550C;
    }
L_08B5550C:
    if (ctx.gpr[18] == ctx.gpr[17]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
        goto L_08B55538;
    }
    goto L_08B55514;
L_08B55514:
    if (ctx.gpr[18] == ctx.gpr[17]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
        goto L_08B55538;
    }
    goto L_08B5551C;
L_08B5551C:
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08B55520;
L_08B55520:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08B5552Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 367u, 0x08B5D908u>(ctx, &aot_mem) && ctx.pc == 0x08B5552Cu) goto L_08B5552C;
    return;
L_08B5552C:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[17];
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08B55520;
      }
      goto L_08B55534;
    }
L_08B55534:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    goto L_08B55538;
L_08B55538:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B55548;
      }
      goto L_08B55540;
    }
L_08B55540:
    ctx.gpr[31] = (0x08B55548u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 367u, 0x08B5D908u>(ctx, &aot_mem) && ctx.pc == 0x08B55548u) goto L_08B55548;
    return;
L_08B55548:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B55574;
      }
      goto L_08B55554;
    }
L_08B55554:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08B55560u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B55560u) goto L_08B55560;
    return;
L_08B55560:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(472)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B55574;
      }
      goto L_08B5556C;
    }
L_08B5556C:
    ctx.gpr[31] = (0x08B55574u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08B55434;
L_08B55574:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B55590:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B555C0;
      }
      goto L_08B555AC;
    }
L_08B555AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (2234u << 16u);
        goto L_08B555EC;
    }
    goto L_08B555B8;
L_08B555B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
      if (branch_taken) {
          goto L_08B555F8;
      }
      goto L_08B555C0;
    }
L_08B555C0:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(15532)));
    ctx.gpr[31] = (0x08B555D4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21904));
    goto L_08B55F58;
L_08B555D4:
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
L_08B555EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(15532)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    goto L_08B555F8;
L_08B555F8:
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
        goto L_08B5560C;
    }
    goto L_08B55600;
L_08B55600:
    ctx.gpr[31] = (0x08B55608u);
    // nop
    goto L_08B55884;
L_08B55608:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
    goto L_08B5560C;
L_08B5560C:
    ctx.gpr[5] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B55674;
      }
      goto L_08B55618;
    }
L_08B55618:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B55674;
      }
      goto L_08B55624;
    }
L_08B55624:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[17] - ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 3u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
        goto L_08B55644;
    }
    goto L_08B55644;
L_08B55644:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) <= 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B55674;
      }
      goto L_08B5564C;
    }
L_08B5564C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08B55660u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B55660u) goto L_08B55660;
    return;
L_08B55660:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[17] = (ctx.gpr[17] - ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B55690;
      }
      goto L_08B5566C;
    }
L_08B5566C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) > 0;
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B5564C;
      }
      goto L_08B55674;
    }
L_08B55674:
    ctx.gpr[2] = (0u | 0u);
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
L_08B55690:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[4]));
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
L_08B556B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08B55748;
      }
      goto L_08B556EC;
    }
L_08B556EC:
    ctx.gpr[21] = (ctx.gpr[18] | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08B556F8;
L_08B556F8:
    ctx.gpr[20] = (ctx.gpr[5] | 0u);
    if (ctx.gpr[20] != 0u) {
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08B55778;
    }
    goto L_08B55704;
L_08B55704:
    ctx.gpr[31] = (0x08B5570Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08B56104;
L_08B5570C:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_08B55770;
    }
    goto L_08B55714;
L_08B55714:
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08B55748;
      }
      goto L_08B5571C;
    }
L_08B5571C:
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B55748:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B55770:
    ctx.gpr[20] = (ctx.gpr[5] | 0u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08B55778;
L_08B55778:
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[20] = (ctx.gpr[17] | 0u);
        goto L_08B55784;
    }
    goto L_08B55784;
L_08B55784:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 10u);
    ctx.gpr[31] = (0x08B55794u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 18u, 0x08B580BCu>(ctx, &aot_mem) && ctx.pc == 0x08B55794u) goto L_08B55794;
    return;
L_08B55794:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08B557D8;
      }
      goto L_08B557A0;
    }
L_08B557A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08B557C4u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08B557C4u) goto L_08B557C4;
    return;
L_08B557C4:
    ctx.gpr[17] = (ctx.gpr[17] - ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_08B5571C;
      }
      goto L_08B557D0;
    }
L_08B557D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08B556F8;
      }
      goto L_08B557D8;
    }
L_08B557D8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[4] - ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08B557FCu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08B557FCu) goto L_08B557FC;
    return;
L_08B557FC:
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5582C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(25576));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(25664));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(25812));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(25904));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(84), ctx.gpr[7]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B55884:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(22784));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(484));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[9] | 0u);
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B558BCu);
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    goto L_08B5582C;
L_08B558BC:
    ctx.gpr[4] = (ctx.gpr[8] + static_cast<std::uint32_t>(572));
    ctx.gpr[5] = (0u | 9u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08B558D0u);
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    goto L_08B5582C;
L_08B558D0:
    ctx.gpr[4] = (ctx.gpr[8] + static_cast<std::uint32_t>(660));
    ctx.gpr[5] = (0u | 10u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08B558E4u);
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    goto L_08B5582C;
L_08B558E4:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(472), 0u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(476), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(480), ctx.gpr[9]);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B55900:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B55914u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21904));
    goto L_08B55F58;
L_08B55914:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B55920:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[8]);
    ctx.gpr[6] = (0u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[9]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[10]);
    ctx.gpr[6] = (ctx.gpr[29] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B55954u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 694u, 0x08B5A974u>(ctx, &aot_mem) && ctx.pc == 0x08B55954u) goto L_08B55954;
    return;
L_08B55954:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B55960:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B55978u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x08B55978u) goto L_08B55978;
    return;
L_08B55978:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08B5599Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08B55B40;
L_08B5599C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B559AC:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B559E0;
      }
      goto L_08B559C0;
    }
L_08B559C0:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B559C0;
      }
      goto L_08B559E0;
    }
L_08B559E0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B559E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[22] = (ctx.lo);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08B55A38;
      }
      goto L_08B55A24;
    }
L_08B55A24:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B55A64;
      }
      goto L_08B55A30;
    }
L_08B55A30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08B55A6C;
      }
      goto L_08B55A38;
    }
L_08B55A38:
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
L_08B55A64:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08B55A6C;
L_08B55A6C:
    ctx.gpr[21] = (ctx.gpr[22] | 0u);
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] < ctx.gpr[21] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08B55AC4;
      }
      goto L_08B55A80;
    }
L_08B55A80:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08B55A8Cu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    goto L_08B559AC;
L_08B55A8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[22] - ctx.gpr[19]);
    ctx.gpr[31] = (0x08B55AA8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08B56104;
L_08B55AA8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[21] - ctx.gpr[22]);
      if (branch_taken) {
          goto L_08B55B10;
      }
      goto L_08B55AB0;
    }
L_08B55AB0:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[19] < ctx.gpr[22] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B55A80;
      }
      goto L_08B55AC0;
    }
L_08B55AC0:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_08B55AC4;
L_08B55AC4:
    ctx.gpr[31] = (0x08B55ACCu);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    goto L_08B559AC;
L_08B55ACC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
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
L_08B55B10:
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[18]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[2] = (ctx.lo);
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
L_08B55B40:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B55EF0;
      }
      goto L_08B55B78;
    }
L_08B55B78:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B55B94;
      }
      goto L_08B55B88;
    }
L_08B55B88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08B55BA8;
    }
    goto L_08B55B94;
L_08B55B94:
    ctx.gpr[31] = (0x08B55B9Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08B575C8;
L_08B55B9C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B55BC0;
      }
      goto L_08B55BA4;
    }
L_08B55BA4:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08B55BA8;
L_08B55BA8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[5] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08B55BF0;
      }
      goto L_08B55BB8;
    }
L_08B55BB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
      if (branch_taken) {
          goto L_08B55C58;
      }
      goto L_08B55BC0;
    }
L_08B55BC0:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
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
L_08B55BF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08B55C0C;
      }
      goto L_08B55BFC;
    }
L_08B55BFC:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08B55BFC;
      }
      goto L_08B55C0C;
    }
L_08B55C0C:
    ctx.gpr[5] = (0u | 1024u);
    ctx.gpr[7] = (ctx.gpr[18] < static_cast<std::uint32_t>(1024) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
        goto L_08B55C1C;
    }
    goto L_08B55C1C;
L_08B55C1C:
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08B55C2Cu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B55C2Cu) goto L_08B55C2C;
    return;
L_08B55C2C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (static_cast<std::int32_t>(ctx.gpr[4]) <= 0) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
        goto L_08B55F20;
    }
    goto L_08B55C38;
L_08B55C38:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[18] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B55BF0;
      }
      goto L_08B55C50;
    }
L_08B55C50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B55EF0;
      }
      goto L_08B55C58;
    }
L_08B55C58:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (0u | 0u);
      if (branch_taken) {
          goto L_08B55D9C;
      }
      goto L_08B55C60;
    }
L_08B55C60:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B55C80;
      }
      goto L_08B55C70;
    }
L_08B55C70:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08B55C70;
      }
      goto L_08B55C80;
    }
L_08B55C80:
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08B55CC8;
      }
      goto L_08B55C8C;
    }
L_08B55C8C:
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[6] ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[20] = (ctx.gpr[18] | 0u);
        goto L_08B55C98;
    }
    goto L_08B55C98;
L_08B55C98:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08B55CA8u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x08B55CA8u) goto L_08B55CA8;
    return;
L_08B55CA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08B55D7C;
      }
      goto L_08B55CC8;
    }
L_08B55CC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[6] < ctx.gpr[18] ? 1u : 0u);
      if (branch_taken) {
          goto L_08B55D18;
      }
      goto L_08B55CD8;
    }
L_08B55CD8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B55D18;
      }
      goto L_08B55CE0;
    }
L_08B55CE0:
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08B55CECu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x08B55CECu) goto L_08B55CEC;
    return;
L_08B55CEC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[20]);
    ctx.gpr[31] = (0x08B55D00u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08B55590;
L_08B55D00:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
        goto L_08B55D80;
    }
    goto L_08B55D08;
L_08B55D08:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
    goto L_08B55D0C;
L_08B55D0C:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
      if (branch_taken) {
          goto L_08B55F28;
      }
      goto L_08B55D18;
    }
L_08B55D18:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[20] ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[20] = (ctx.gpr[18] | 0u);
        goto L_08B55D54;
    }
    goto L_08B55D28;
L_08B55D28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08B55D3Cu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B55D3Cu) goto L_08B55D3C;
    return;
L_08B55D3C:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    if (static_cast<std::int32_t>(ctx.gpr[20]) <= 0) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
        goto L_08B55D0C;
    }
    goto L_08B55D48;
L_08B55D48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08B55D80;
      }
      goto L_08B55D50;
    }
L_08B55D50:
    ctx.gpr[20] = (ctx.gpr[18] | 0u);
    goto L_08B55D54;
L_08B55D54:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08B55D64u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x08B55D64u) goto L_08B55D64;
    return;
L_08B55D64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08B55D7C;
L_08B55D7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    goto L_08B55D80;
L_08B55D80:
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[20]);
    ctx.gpr[18] = (ctx.gpr[18] - ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B55C60;
      }
      goto L_08B55D94;
    }
L_08B55D94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B55EF0;
      }
      goto L_08B55D9C;
    }
L_08B55D9C:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B55DB8;
      }
      goto L_08B55DA4;
    }
L_08B55DA4:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[22] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08B55DA4;
      }
      goto L_08B55DB8;
    }
L_08B55DB8:
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08B55DE8;
      }
      goto L_08B55DC0;
    }
L_08B55DC0:
    ctx.gpr[5] = (0u | 10u);
    ctx.gpr[31] = (0x08B55DCCu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 18u, 0x08B580BCu>(ctx, &aot_mem) && ctx.pc == 0x08B55DCCu) goto L_08B55DCC;
    return;
L_08B55DCC:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[23] == 0u;
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B55DE0;
      }
      goto L_08B55DD8;
    }
L_08B55DD8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (ctx.gpr[23] - ctx.gpr[20]);
      if (branch_taken) {
          goto L_08B55DE4;
      }
      goto L_08B55DE0;
    }
L_08B55DE0:
    ctx.gpr[23] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08B55DE4;
L_08B55DE4:
    ctx.gpr[22] = (0u | 1u);
    goto L_08B55DE8;
L_08B55DE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] < ctx.gpr[23] ? 1u : 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
        goto L_08B55E08;
    }
    goto L_08B55E08;
L_08B55E08:
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_08B55E58;
      }
      goto L_08B55E14;
    }
L_08B55E14:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B55E58;
      }
      goto L_08B55E20;
    }
L_08B55E20:
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08B55E2Cu);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x08B55E2Cu) goto L_08B55E2C;
    return;
L_08B55E2C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[21]);
    ctx.gpr[31] = (0x08B55E40u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08B55590;
L_08B55E40:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[23] = (ctx.gpr[23] - ctx.gpr[21]);
      if (branch_taken) {
          goto L_08B55EC0;
      }
      goto L_08B55E48;
    }
L_08B55E48:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
    goto L_08B55E4C;
L_08B55E4C:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
      if (branch_taken) {
          goto L_08B55F28;
      }
      goto L_08B55E58;
    }
L_08B55E58:
    ctx.gpr[21] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[21] = (ctx.gpr[7] | 0u);
        goto L_08B55E94;
    }
    goto L_08B55E68;
L_08B55E68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08B55E7Cu);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B55E7Cu) goto L_08B55E7C;
    return;
L_08B55E7C:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    if (static_cast<std::int32_t>(ctx.gpr[21]) <= 0) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
        goto L_08B55E4C;
    }
    goto L_08B55E88;
L_08B55E88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (ctx.gpr[23] - ctx.gpr[21]);
      if (branch_taken) {
          goto L_08B55EC0;
      }
      goto L_08B55E90;
    }
L_08B55E90:
    ctx.gpr[21] = (ctx.gpr[7] | 0u);
    goto L_08B55E94;
L_08B55E94:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08B55EA4u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x08B55EA4u) goto L_08B55EA4;
    return;
L_08B55EA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[23] = (ctx.gpr[23] - ctx.gpr[21]);
    goto L_08B55EC0;
L_08B55EC0:
    if (ctx.gpr[23] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
        goto L_08B55EDC;
    }
    goto L_08B55EC8;
L_08B55EC8:
    ctx.gpr[31] = (0x08B55ED0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08B55590;
L_08B55ED0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[22] = (0u | 0u);
      if (branch_taken) {
          goto L_08B55E48;
      }
      goto L_08B55ED8;
    }
L_08B55ED8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    goto L_08B55EDC;
L_08B55EDC:
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[21]);
    ctx.gpr[18] = (ctx.gpr[18] - ctx.gpr[21]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B55D9C;
      }
      goto L_08B55EF0;
    }
L_08B55EF0:
    ctx.gpr[2] = (0u | 0u);
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
L_08B55F20:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    goto L_08B55F28;
L_08B55F28:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[4]));
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
L_08B55F58:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(472));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B55FC4;
      }
      goto L_08B55F84;
    }
L_08B55F84:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    goto L_08B55F88;
L_08B55F88:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08B55FB8;
      }
      goto L_08B55F94;
    }
L_08B55F94:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
        goto L_08B55FB0;
    }
    goto L_08B55FA0;
L_08B55FA0:
    jump_target = ctx.gpr[16];
    ctx.gpr[31] = (0x08B55FA8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B55FA8u) goto L_08B55FA8;
    return;
L_08B55FA8:
    ctx.gpr[20] = (ctx.gpr[20] | ctx.gpr[2]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    goto L_08B55FB0;
L_08B55FB0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(88));
      if (branch_taken) {
          goto L_08B55F94;
      }
      goto L_08B55FB8;
    }
L_08B55FB8:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[19] != 0u) {
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
        goto L_08B55F88;
    }
    goto L_08B55FC4;
L_08B55FC4:
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B55FE8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(67));
    ctx.gpr[5] = (ctx.gpr[4] & 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08B56028;
      }
      goto L_08B56014;
    }
L_08B56014:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(14))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.gpr[4] = (ctx.gpr[4] | 2048u);
      if (branch_taken) {
          goto L_08B56060;
      }
      goto L_08B56020;
    }
L_08B56020:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
      if (branch_taken) {
          goto L_08B5604C;
      }
      goto L_08B56028;
    }
L_08B56028:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5604C:
    ctx.gpr[31] = (0x08B56054u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 699u, 0x08B5F23Cu>(ctx, &aot_mem) && ctx.pc == 0x08B56054u) goto L_08B56054;
    return;
L_08B56054:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
      if (branch_taken) {
          goto L_08B56070;
      }
      goto L_08B5605C;
    }
L_08B5605C:
    ctx.gpr[4] = (ctx.gpr[4] | 2048u);
    goto L_08B56060;
L_08B56060:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
      if (branch_taken) {
          goto L_08B560C0;
      }
      goto L_08B56070;
    }
L_08B56070:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (0u | 32768u);
    ctx.gpr[5] = (ctx.gpr[5] & 61440u);
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.gpr[4] = (ctx.gpr[4] | 2048u);
        goto L_08B560B4;
    }
    goto L_08B56084;
L_08B56084:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(25812));
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.gpr[4] = (ctx.gpr[4] | 2048u);
        goto L_08B560B4;
    }
    goto L_08B56098;
L_08B56098:
    ctx.gpr[4] = (ctx.gpr[4] | 1024u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 1024u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 2u);
      if (branch_taken) {
          goto L_08B560C0;
      }
      goto L_08B560B4;
    }
L_08B560B4:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    goto L_08B560C0;
L_08B560C0:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B560E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B560F8u);
    // nop
    goto L_08B55590;
L_08B560F8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B56104:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
        goto L_08B56130;
    }
    goto L_08B56120;
L_08B56120:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(15532)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    goto L_08B56130;
L_08B56130:
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
        goto L_08B56144;
    }
    goto L_08B56138;
L_08B56138:
    ctx.gpr[31] = (0x08B56140u);
    // nop
    goto L_08B55884;
L_08B56140:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
    goto L_08B56144;
L_08B56144:
    ctx.gpr[5] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
      if (branch_taken) {
          goto L_08B56164;
      }
      goto L_08B56150;
    }
L_08B56150:
    ctx.gpr[5] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] & 16u);
      if (branch_taken) {
          goto L_08B56178;
      }
      goto L_08B5615C;
    }
L_08B5615C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_08B561EC;
      }
      goto L_08B56164;
    }
L_08B56164:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B56178:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] & 8u);
      if (branch_taken) {
          goto L_08B56194;
      }
      goto L_08B56180;
    }
L_08B56180:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B561A8;
      }
      goto L_08B56188;
    }
L_08B56188:
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08B56200;
      }
      goto L_08B56194;
    }
L_08B56194:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B561A8:
    ctx.gpr[31] = (0x08B561B0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08B55590;
L_08B561B0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B561D8;
      }
      goto L_08B561B8;
    }
L_08B561B8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
      if (branch_taken) {
          goto L_08B56188;
      }
      goto L_08B561D8;
    }
L_08B561D8:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B561EC:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
        goto L_08B56204;
    }
    goto L_08B561F4;
L_08B561F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B56214;
      }
      goto L_08B56200;
    }
L_08B56200:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    goto L_08B56204;
L_08B56204:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B56230;
      }
      goto L_08B5620C;
    }
L_08B5620C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
      if (branch_taken) {
          goto L_08B5623C;
      }
      goto L_08B56214;
    }
L_08B56214:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[2] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B56230:
    ctx.gpr[31] = (0x08B56238u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08B55FE8;
L_08B56238:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
    goto L_08B5623C;
L_08B5623C:
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2229u << 16u);
      if (branch_taken) {
          goto L_08B56254;
      }
      goto L_08B56248;
    }
L_08B56248:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (0x08B56254u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(24808));
    goto L_08B55F58;
L_08B56254:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08B56270u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B56270u) goto L_08B56270;
    return;
L_08B56270:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-8193));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B562C4;
      }
      goto L_08B56290;
    }
L_08B56290:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
      if (branch_taken) {
          goto L_08B562A4;
      }
      goto L_08B56298;
    }
L_08B56298:
    ctx.gpr[4] = (ctx.gpr[4] | 32u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08B562B0;
      }
      goto L_08B562A4;
    }
L_08B562A4:
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08B562B0;
L_08B562B0:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B562C4:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B562D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[11]);
    ctx.gpr[6] = (0u | 520u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (2234u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15532)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (0u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B5633Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 694u, 0x08B5A974u>(ctx, &aot_mem) && ctx.pc == 0x08B5633Cu) goto L_08B5633C;
    return;
L_08B5633C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B56350:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B56358:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[11]);
    ctx.gpr[5] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B56394u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x08B56394u) goto L_08B56394;
    return;
L_08B56394:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25424));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (2234u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(15532)));
    ctx.gpr[5] = (0u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[31] = (0x08B563D8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08B56834;
L_08B563D8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B563E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B5640Cu);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(14))))));
    if (rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 709u, 0x08B5F2F0u>(ctx, &aot_mem) && ctx.pc == 0x08B5640Cu) goto L_08B5640C;
    return;
L_08B5640C:
    if (static_cast<std::int32_t>(ctx.gpr[2]) < 0) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
        goto L_08B56424;
    }
    goto L_08B56414;
L_08B56414:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B56430;
      }
      goto L_08B56424;
    }
L_08B56424:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-4097));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08B56430;
L_08B56430:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B56440:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (ctx.gpr[4] & 256u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08B56494;
      }
      goto L_08B56474;
    }
L_08B56474:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08B5648Cu);
    ctx.gpr[7] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 704u, 0x08B5F294u>(ctx, &aot_mem) && ctx.pc == 0x08B5648Cu) goto L_08B5648C;
    return;
L_08B5648C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    goto L_08B56494;
L_08B56494:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-4097));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[7]);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B564BCu);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 719u, 0x08B5F3A0u>(ctx, &aot_mem) && ctx.pc == 0x08B564BCu) goto L_08B564BC;
    return;
L_08B564BC:
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
L_08B564D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B564F8u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(14))))));
    if (rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 704u, 0x08B5F294u>(ctx, &aot_mem) && ctx.pc == 0x08B564F8u) goto L_08B564F8;
    return;
L_08B564F8:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[5];
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
      if (branch_taken) {
          goto L_08B56514;
      }
      goto L_08B56504;
    }
L_08B56504:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-4097));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08B56520;
      }
      goto L_08B56514;
    }
L_08B56514:
    ctx.gpr[4] = (ctx.gpr[4] | 4096u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
    goto L_08B56520;
L_08B56520:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B56530:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(14))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B56544u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    if (rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 694u, 0x08B5F1E8u>(ctx, &aot_mem) && ctx.pc == 0x08B56544u) goto L_08B56544;
    return;
L_08B56544:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B56550:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B56600;
      }
      goto L_08B56574;
    }
L_08B56574:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
        goto L_08B56590;
    }
    goto L_08B56580;
L_08B56580:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(15532)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    goto L_08B56590;
L_08B56590:
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
        goto L_08B565A4;
    }
    goto L_08B56598;
L_08B56598:
    ctx.gpr[31] = (0x08B565A0u);
    // nop
    goto L_08B55884;
L_08B565A0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
    goto L_08B565A4;
L_08B565A4:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-33));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[5] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] & 16u);
      if (branch_taken) {
          goto L_08B56624;
      }
      goto L_08B565C0;
    }
L_08B565C0:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] & 8u);
      if (branch_taken) {
          goto L_08B56600;
      }
      goto L_08B565C8;
    }
L_08B565C8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
      if (branch_taken) {
          goto L_08B56620;
      }
      goto L_08B565D0;
    }
L_08B565D0:
    ctx.gpr[31] = (0x08B565D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08B55590;
L_08B565D8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B56600;
      }
      goto L_08B565E0;
    }
L_08B565E0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
      if (branch_taken) {
          goto L_08B5661C;
      }
      goto L_08B56600;
    }
L_08B56600:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
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
L_08B5661C:
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    goto L_08B56620;
L_08B56620:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08B56624;
L_08B56624:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08B566A8;
      }
      goto L_08B56634;
    }
L_08B56634:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2233u << 16u);
      if (branch_taken) {
          goto L_08B56670;
      }
      goto L_08B56644;
    }
L_08B56644:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[6] = (0u | 68u);
    ctx.gpr[31] = (0x08B56654u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-29528));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 55u, 0x08B605C0u>(ctx, &aot_mem) && ctx.pc == 0x08B56654u) goto L_08B56654;
    return;
L_08B56654:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
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
L_08B56670:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
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
L_08B566A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B566F4;
      }
      goto L_08B566B4;
    }
L_08B566B4:
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
        goto L_08B566F8;
    }
    goto L_08B566C0;
L_08B566C0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(-1)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B566F4;
      }
      goto L_08B566CC;
    }
L_08B566CC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
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
L_08B566F4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    goto L_08B566F8;
L_08B566F8:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(64));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[6]);
    ctx.gpr[5] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(66));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(66), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
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
L_08B5673C:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[2] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (0u | 94u);
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[6];
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08B56764;
      }
      goto L_08B56750;
    }
L_08B56750:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[2] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08B56768;
      }
      goto L_08B56764;
    }
L_08B56764:
    ctx.gpr[8] = (0u | 0u);
    goto L_08B56768;
L_08B56768:
    ctx.gpr[3] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[3] + ctx.gpr[4]);
    goto L_08B56770;
L_08B56770:
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[3]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (ctx.gpr[3] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B56770;
      }
      goto L_08B56784;
    }
L_08B56784:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_08B567A4;
      }
      goto L_08B5678C;
    }
L_08B5678C:
    ctx.gpr[8] = (ctx.gpr[6] - ctx.gpr[8]);
    ctx.gpr[7] = (0u | 93u);
    ctx.gpr[6] = (0u | 45u);
    ctx.gpr[2] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (ctx.gpr[9] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B567AC;
      }
      goto L_08B567A4;
    }
L_08B567A4:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B567AC:
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    goto L_08B567B4;
L_08B567B4:
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[7];
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08B5682C;
      }
      goto L_08B567BC;
    }
L_08B567BC:
    if (ctx.gpr[10] == ctx.gpr[6]) {
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
        goto L_08B567E0;
    }
    goto L_08B567C4;
L_08B567C4:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[9] = (ctx.gpr[10] | 0u);
      if (branch_taken) {
          goto L_08B567D8;
      }
      goto L_08B567CC;
    }
L_08B567CC:
    ctx.gpr[2] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (ctx.gpr[9] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B567AC;
      }
      goto L_08B567D8;
    }
L_08B567D8:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B567E0:
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[7];
    ctx.gpr[2] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B567F4;
      }
      goto L_08B567E8;
    }
L_08B567E8:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    if (ctx.gpr[10] == 0u) {
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
        goto L_08B56800;
    }
    goto L_08B567F4;
L_08B567F4:
    ctx.gpr[9] = (ctx.gpr[6] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (ctx.gpr[4] + static_cast<std::uint32_t>(45));
      if (branch_taken) {
          goto L_08B567AC;
      }
      goto L_08B56800;
    }
L_08B56800:
    ctx.gpr[11] = (ctx.gpr[9] | 0u);
    ctx.gpr[2] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (ctx.gpr[4] + ctx.gpr[11]);
    goto L_08B5680C;
L_08B5680C:
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[11] | 0u);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.gpr[12] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[12] != 0u;
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
      if (branch_taken) {
          goto L_08B5680C;
      }
      goto L_08B56824;
    }
L_08B56824:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08B567B4;
      }
      goto L_08B5682C;
    }
L_08B5682C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B56834:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-720));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(680), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(644), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(700), ctx.gpr[23]);
    ctx.gpr[23] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(660), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (2234u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(656), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(15536));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(648), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8396));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(668), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-32624));
    ctx.gpr[4] = (2234u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(704), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(664), ctx.gpr[5]);
    ctx.gpr[30] = (ctx.gpr[4] + static_cast<std::uint32_t>(14520));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(652), ctx.gpr[6]);
    ctx.gpr[4] = (2234u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(688), ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(15532)));
    ctx.gpr[20] = (2234u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(692), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(696), ctx.gpr[22]);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16752)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(672), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(676), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(684), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(708), ctx.gpr[31]);
    goto L_08B568C8;
L_08B568C8:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(644));
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08B568DCu);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    goto L_08B578C8;
L_08B568DC:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[23] = (ctx.gpr[23] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_08B571CC;
      }
      goto L_08B568EC;
    }
L_08B568EC:
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[5];
    ctx.gpr[5] = (0u | 37u);
      if (branch_taken) {
          goto L_08B56964;
      }
      goto L_08B568F8;
    }
L_08B568F8:
    ctx.gpr[5] = (ctx.gpr[30] + ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] & 8u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 37u);
      if (branch_taken) {
          goto L_08B56964;
      }
      goto L_08B5690C;
    }
L_08B5690C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    goto L_08B56910;
L_08B56910:
    if (static_cast<std::int32_t>(ctx.gpr[4]) > 0) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08B5692C;
    }
    goto L_08B56918;
L_08B56918:
    ctx.gpr[31] = (0x08B56920u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08B56104;
L_08B56920:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B571CC;
      }
      goto L_08B56928;
    }
L_08B56928:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08B5692C;
L_08B5692C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[30] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] & 8u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (2234u << 16u);
        goto L_08B57528;
    }
    goto L_08B56944;
L_08B56944:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B56910;
      }
      goto L_08B56964;
    }
L_08B56964:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08B569B0;
      }
      goto L_08B5696C;
    }
L_08B5696C:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    goto L_08B56978;
L_08B56978:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[23] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B56BE8;
      }
      goto L_08B56988;
    }
L_08B56988:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 121 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (ctx.gpr[30] + ctx.gpr[4]);
        goto L_08B56BEC;
    }
    goto L_08B56994;
L_08B56994:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2233u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-29456)));
    jump_target = ctx.gpr[1];
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B569AC:
    ctx.gpr[16] = (0u | 0u);
    goto L_08B569B0;
L_08B569B0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[23] - ctx.gpr[20]);
      if (branch_taken) {
          goto L_08B57524;
      }
      goto L_08B569BC;
    }
L_08B569BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (static_cast<std::int32_t>(ctx.gpr[4]) > 0) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08B569DC;
    }
    goto L_08B569C8;
L_08B569C8:
    ctx.gpr[31] = (0x08B569D0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08B56104;
L_08B569D0:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(656)));
        goto L_08B5753C;
    }
    goto L_08B569D8;
L_08B569D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08B569DC;
L_08B569DC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B571CC;
      }
      goto L_08B569EC;
    }
L_08B569EC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B569BC;
      }
      goto L_08B56A14;
    }
L_08B56A14:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (2234u << 16u);
      if (branch_taken) {
          goto L_08B57528;
      }
      goto L_08B56A1C;
    }
L_08B56A1C:
    ctx.gpr[16] = (ctx.gpr[16] | 8u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B56978;
      }
      goto L_08B56A28;
    }
L_08B56A28:
    ctx.gpr[16] = (ctx.gpr[16] | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B56978;
      }
      goto L_08B56A34;
    }
L_08B56A34:
    ctx.gpr[16] = (ctx.gpr[16] | 2u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B56978;
      }
      goto L_08B56A40;
    }
L_08B56A40:
    ctx.gpr[16] = (ctx.gpr[16] | 4u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B56978;
      }
      goto L_08B56A4C;
    }
L_08B56A4C:
    ctx.gpr[5] = (ctx.gpr[19] << 3u);
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[5]);
    ctx.gpr[19] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-48));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B56978;
      }
      goto L_08B56A68;
    }
L_08B56A68:
    ctx.gpr[16] = (ctx.gpr[16] | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08B56A78;
      }
      goto L_08B56A74;
    }
L_08B56A74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    goto L_08B56A78;
L_08B56A78:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(668)));
    ctx.gpr[17] = (0u | 3u);
    ctx.gpr[21] = (0u | 10u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(660), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08B56C10;
      }
      goto L_08B56A8C;
    }
L_08B56A8C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(668)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (0u | 3u);
    ctx.gpr[21] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(660), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08B56C10;
      }
      goto L_08B56AA4;
    }
L_08B56AA4:
    ctx.gpr[16] = (ctx.gpr[16] | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08B56AB4;
      }
      goto L_08B56AB0;
    }
L_08B56AB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    goto L_08B56AB4;
L_08B56AB4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(664)));
    ctx.gpr[17] = (0u | 3u);
    ctx.gpr[21] = (0u | 8u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(660), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08B56C10;
      }
      goto L_08B56AC8;
    }
L_08B56AC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(664)));
    ctx.gpr[17] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(660), ctx.gpr[4]);
    ctx.gpr[21] = (0u | 10u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08B56C10;
      }
      goto L_08B56AE0;
    }
L_08B56AE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(664)));
    ctx.gpr[16] = (ctx.gpr[16] | 256u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(660), ctx.gpr[4]);
    ctx.gpr[17] = (0u | 3u);
    ctx.gpr[21] = (0u | 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08B56C10;
      }
      goto L_08B56AFC;
    }
L_08B56AFC:
    ctx.gpr[17] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08B56C10;
      }
      goto L_08B56B08;
    }
L_08B56B08:
    ctx.gpr[17] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08B56C10;
      }
      goto L_08B56B14;
    }
L_08B56B14:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[31] = (0x08B56B20u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    goto L_08B5673C;
L_08B56B20:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[16] = (ctx.gpr[16] | 32u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08B56C10;
      }
      goto L_08B56B34;
    }
L_08B56B34:
    ctx.gpr[16] = (ctx.gpr[16] | 32u);
    ctx.gpr[17] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08B56C10;
      }
      goto L_08B56B44;
    }
L_08B56B44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(664)));
    ctx.gpr[16] = (ctx.gpr[16] | 272u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(660), ctx.gpr[4]);
    ctx.gpr[17] = (0u | 3u);
    ctx.gpr[21] = (0u | 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08B56C10;
      }
      goto L_08B56B60;
    }
L_08B56B60:
    ctx.gpr[4] = (ctx.gpr[16] & 8u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2234u << 16u);
      if (branch_taken) {
          goto L_08B57528;
      }
      goto L_08B56B6C;
    }
L_08B56B6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(652)));
    ctx.gpr[5] = (ctx.gpr[16] & 4u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B56B8C;
      }
      goto L_08B56B7C;
    }
L_08B56B7C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(652), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[22]));
      if (branch_taken) {
          goto L_08B57524;
      }
      goto L_08B56B8C;
    }
L_08B56B8C:
    ctx.gpr[5] = (ctx.gpr[16] & 1u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
        goto L_08B56BA8;
    }
    goto L_08B56B98;
L_08B56B98:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(652), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[22]);
      if (branch_taken) {
          goto L_08B57524;
      }
      goto L_08B56BA8;
    }
L_08B56BA8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(652), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[22]);
      if (branch_taken) {
          goto L_08B57524;
      }
      goto L_08B56BB4;
    }
L_08B56BB4:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(672)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(676)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(680)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(684)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(688)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(692)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(696)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(700)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(704)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(708)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(720));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B56BE8:
    ctx.gpr[4] = (ctx.gpr[30] + ctx.gpr[4]);
    goto L_08B56BEC;
L_08B56BEC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[16] = (ctx.gpr[16] | 1u);
        goto L_08B56C00;
    }
    goto L_08B56C00;
L_08B56C00:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(668)));
    ctx.gpr[17] = (0u | 3u);
    ctx.gpr[21] = (0u | 10u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(660), ctx.gpr[5]);
    goto L_08B56C10;
L_08B56C10:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-449));
      if (branch_taken) {
          goto L_08B56C28;
      }
      goto L_08B56C18;
    }
L_08B56C18:
    ctx.gpr[31] = (0x08B56C20u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08B56104;
L_08B56C20:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(656)));
        goto L_08B5753C;
    }
    goto L_08B56C28;
L_08B56C28:
    ctx.gpr[4] = (ctx.gpr[16] & 32u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] < static_cast<std::uint32_t>(5) ? 1u : 0u);
      if (branch_taken) {
          goto L_08B56CA0;
      }
      goto L_08B56C34;
    }
L_08B56C34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[30] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] & 8u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (ctx.gpr[17] < static_cast<std::uint32_t>(5) ? 1u : 0u);
        goto L_08B56CA0;
    }
    goto L_08B56C50;
L_08B56C50:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    goto L_08B56C54;
L_08B56C54:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08B56C70;
      }
      goto L_08B56C64;
    }
L_08B56C64:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B56C80;
      }
      goto L_08B56C70;
    }
L_08B56C70:
    ctx.gpr[31] = (0x08B56C78u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08B56104;
L_08B56C78:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(656)));
        goto L_08B5753C;
    }
    goto L_08B56C80;
L_08B56C80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[30] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] & 8u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
        goto L_08B56C54;
    }
    goto L_08B56C9C;
L_08B56C9C:
    ctx.gpr[4] = (ctx.gpr[17] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    goto L_08B56CA0;
L_08B56CA0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2234u << 16u);
      if (branch_taken) {
          goto L_08B57528;
      }
      goto L_08B56CA8;
    }
L_08B56CA8:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08B56D80;
      }
      goto L_08B56CB4;
    }
L_08B56CB4:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08B56EC4;
      }
      goto L_08B56CBC;
    }
L_08B56CBC:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B56FE8;
      }
      goto L_08B56CC4;
    }
L_08B56CC4:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08B572C4;
      }
      goto L_08B56CCC;
    }
L_08B56CCC:
    ctx.gpr[16] = (ctx.gpr[16] & 8u);
    if (ctx.gpr[19] == 0u) {
    ctx.gpr[19] = (0u | 1u);
        goto L_08B56CD8;
    }
    goto L_08B56CD8;
L_08B56CD8:
    if (ctx.gpr[16] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(652)));
        goto L_08B56D48;
    }
    goto L_08B56CE0;
L_08B56CE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[19] ? 1u : 0u);
    goto L_08B56CF0;
L_08B56CF0:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[19]);
        goto L_08B56D28;
    }
    goto L_08B56CF8;
L_08B56CF8:
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[19] - ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[31] = (0x08B56D10u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08B56104;
L_08B56D10:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
        goto L_08B56D3C;
    }
    goto L_08B56D18;
L_08B56D18:
    if (ctx.gpr[16] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(656)));
        goto L_08B5753C;
    }
    goto L_08B56D20;
L_08B56D20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (ctx.gpr[22] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_08B57524;
      }
      goto L_08B56D28;
    }
L_08B56D28:
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08B56D20;
      }
      goto L_08B56D3C;
    }
L_08B56D3C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[19] ? 1u : 0u);
      if (branch_taken) {
          goto L_08B56CF0;
      }
      goto L_08B56D48;
    }
L_08B56D48:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08B56D60u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    goto L_08B559E8;
L_08B56D60:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(652), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08B57538;
      }
      goto L_08B56D6C;
    }
L_08B56D6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(656)));
    ctx.gpr[22] = (ctx.gpr[22] + ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(656), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B57524;
      }
      goto L_08B56D80;
    }
L_08B56D80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (ctx.gpr[16] & 8u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(36))))));
    if (ctx.gpr[19] == 0u) {
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-1));
        goto L_08B56D9C;
    }
    goto L_08B56D9C;
L_08B56D9C:
    if (ctx.gpr[16] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(652)));
        goto L_08B56E20;
    }
    goto L_08B56DA4;
L_08B56DA4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08B56E10;
      }
      goto L_08B56DAC;
    }
L_08B56DAC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    goto L_08B56DB0;
L_08B56DB0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B56E10;
      }
      goto L_08B56DCC;
    }
L_08B56DCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (static_cast<std::int32_t>(ctx.gpr[4]) > 0) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08B56DFC;
    }
    goto L_08B56DD8;
L_08B56DD8:
    ctx.gpr[31] = (0x08B56DE0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08B56104;
L_08B56DE0:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08B56DFC;
    }
    goto L_08B56DE8;
L_08B56DE8:
    if (ctx.gpr[17] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(656)));
        goto L_08B5753C;
    }
    goto L_08B56DF0;
L_08B56DF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B56E18;
      }
      goto L_08B56DF8;
    }
L_08B56DF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08B56DFC;
L_08B56DFC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(36))))));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
        goto L_08B56DB0;
    }
    goto L_08B56E10;
L_08B56E10:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B571CC;
      }
      goto L_08B56E18;
    }
L_08B56E18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (ctx.gpr[17] + ctx.gpr[22]);
      if (branch_taken) {
          goto L_08B57524;
      }
      goto L_08B56E20;
    }
L_08B56E20:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(652), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08B56EA4;
      }
      goto L_08B56E34;
    }
L_08B56E34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    goto L_08B56E38;
L_08B56E38:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B56EA4;
      }
      goto L_08B56E60;
    }
L_08B56E60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (static_cast<std::int32_t>(ctx.gpr[4]) > 0) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08B56E90;
    }
    goto L_08B56E6C;
L_08B56E6C:
    ctx.gpr[31] = (0x08B56E74u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08B56104;
L_08B56E74:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08B56E90;
    }
    goto L_08B56E7C;
L_08B56E7C:
    if (ctx.gpr[16] == ctx.gpr[17]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(656)));
        goto L_08B5753C;
    }
    goto L_08B56E84;
L_08B56E84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[16] - ctx.gpr[17]);
      if (branch_taken) {
          goto L_08B56EA8;
      }
      goto L_08B56E8C;
    }
L_08B56E8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08B56E90;
L_08B56E90:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(36))))));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
        goto L_08B56E38;
    }
    goto L_08B56EA4;
L_08B56EA4:
    ctx.gpr[17] = (ctx.gpr[16] - ctx.gpr[17]);
    goto L_08B56EA8;
L_08B56EA8:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B571CC;
      }
      goto L_08B56EB0;
    }
L_08B56EB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(656)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(656), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B56E18;
      }
      goto L_08B56EC4;
    }
L_08B56EC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (ctx.gpr[16] & 8u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[30] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] & 8u);
    if (ctx.gpr[19] == 0u) {
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-1));
        goto L_08B56EE4;
    }
    goto L_08B56EE4;
L_08B56EE4:
    if (ctx.gpr[16] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(652)));
        goto L_08B56F54;
    }
    goto L_08B56EEC;
L_08B56EEC:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08B56F4C;
      }
      goto L_08B56EF4;
    }
L_08B56EF4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    goto L_08B56EF8;
L_08B56EF8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B56F4C;
      }
      goto L_08B56F14;
    }
L_08B56F14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (static_cast<std::int32_t>(ctx.gpr[4]) > 0) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08B56F34;
    }
    goto L_08B56F20;
L_08B56F20:
    ctx.gpr[31] = (0x08B56F28u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08B56104;
L_08B56F28:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B56F4C;
      }
      goto L_08B56F30;
    }
L_08B56F30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08B56F34;
L_08B56F34:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[30] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] & 8u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
        goto L_08B56EF8;
    }
    goto L_08B56F4C;
L_08B56F4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (ctx.gpr[16] + ctx.gpr[22]);
      if (branch_taken) {
          goto L_08B57524;
      }
      goto L_08B56F54;
    }
L_08B56F54:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(652), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08B56FCC;
      }
      goto L_08B56F68;
    }
L_08B56F68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    goto L_08B56F6C;
L_08B56F6C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B56FCC;
      }
      goto L_08B56F94;
    }
L_08B56F94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (static_cast<std::int32_t>(ctx.gpr[4]) > 0) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08B56FB4;
    }
    goto L_08B56FA0;
L_08B56FA0:
    ctx.gpr[31] = (0x08B56FA8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08B56104;
L_08B56FA8:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(656)));
        goto L_08B56FD0;
    }
    goto L_08B56FB0;
L_08B56FB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08B56FB4;
L_08B56FB4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[30] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
        goto L_08B56F6C;
    }
    goto L_08B56FCC;
L_08B56FCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(656)));
    goto L_08B56FD0;
L_08B56FD0:
    ctx.gpr[5] = (ctx.gpr[16] - ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[22] = (ctx.gpr[22] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(656), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B57524;
      }
      goto L_08B56FE8;
    }
L_08B56FE8:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[19] < static_cast<std::uint32_t>(349) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[19] = (0u | 348u);
        goto L_08B56FF8;
    }
    goto L_08B56FF8;
L_08B56FF8:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(292));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] | 704u);
      if (branch_taken) {
          goto L_08B571A8;
      }
      goto L_08B57008;
    }
L_08B57008:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08B5700C;
L_08B5700C:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 97 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(648)));
      if (branch_taken) {
          goto L_08B57060;
      }
      goto L_08B5701C;
    }
L_08B5701C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 71 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 88u);
      if (branch_taken) {
          goto L_08B57050;
      }
      goto L_08B57028;
    }
L_08B57028:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 43 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 128u);
      if (branch_taken) {
          goto L_08B571AC;
      }
      goto L_08B57034;
    }
L_08B57034:
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(-43));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2233u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-28968)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B57050:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[16] & 256u);
      if (branch_taken) {
          goto L_08B57134;
      }
      goto L_08B57058;
    }
L_08B57058:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 128u);
      if (branch_taken) {
          goto L_08B571AC;
      }
      goto L_08B57060;
    }
L_08B57060:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 120 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 121 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B57084;
      }
      goto L_08B5706C;
    }
L_08B5706C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 103 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 11 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B57104;
      }
      goto L_08B57078;
    }
L_08B57078:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 128u);
      if (branch_taken) {
          goto L_08B571AC;
      }
      goto L_08B57080;
    }
L_08B57080:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 121 ? 1u : 0u);
    goto L_08B57084;
L_08B57084:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 256u);
      if (branch_taken) {
          goto L_08B57134;
      }
      goto L_08B5708C;
    }
L_08B5708C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 128u);
      if (branch_taken) {
          goto L_08B571AC;
      }
      goto L_08B57094;
    }
L_08B57094:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B570A4;
      }
      goto L_08B5709C;
    }
L_08B5709C:
    ctx.gpr[21] = (0u | 8u);
    ctx.gpr[16] = (ctx.gpr[16] | 256u);
    goto L_08B570A4;
L_08B570A4:
    ctx.gpr[4] = (ctx.gpr[16] & 512u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & ctx.gpr[20]);
      if (branch_taken) {
          goto L_08B570BC;
      }
      goto L_08B570B0;
    }
L_08B570B0:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-705));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B570BC;
      }
      goto L_08B570BC;
    }
L_08B570BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B57164;
      }
      goto L_08B570C4;
    }
L_08B570C4:
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[16] = (ctx.gpr[16] & ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B57164;
      }
      goto L_08B570DC;
    }
L_08B570DC:
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 128u);
      if (branch_taken) {
          goto L_08B571AC;
      }
      goto L_08B570F4;
    }
L_08B570F4:
    ctx.gpr[16] = (ctx.gpr[16] & ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B57164;
      }
      goto L_08B57100;
    }
L_08B57100:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 11 ? 1u : 0u);
    goto L_08B57104;
L_08B57104:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 128u);
      if (branch_taken) {
          goto L_08B571AC;
      }
      goto L_08B5710C;
    }
L_08B5710C:
    ctx.gpr[16] = (ctx.gpr[16] & ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B57164;
      }
      goto L_08B57118;
    }
L_08B57118:
    ctx.gpr[4] = (ctx.gpr[16] & 64u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 128u);
      if (branch_taken) {
          goto L_08B571AC;
      }
      goto L_08B57124;
    }
L_08B57124:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-65));
    ctx.gpr[16] = (ctx.gpr[16] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B57164;
      }
      goto L_08B57134;
    }
L_08B57134:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 128u);
      if (branch_taken) {
          goto L_08B571AC;
      }
      goto L_08B5713C;
    }
L_08B5713C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(293));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[16] & 128u);
      if (branch_taken) {
          goto L_08B571AC;
      }
      goto L_08B57148;
    }
L_08B57148:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-257));
    ctx.gpr[21] = (0u | 16u);
    ctx.gpr[16] = (ctx.gpr[16] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B57164;
      }
      goto L_08B5715C;
    }
L_08B5715C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 128u);
      if (branch_taken) {
          goto L_08B571AC;
      }
      goto L_08B57164;
    }
L_08B57164:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B5718C;
      }
      goto L_08B5717C;
    }
L_08B5717C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B5719C;
      }
      goto L_08B5718C;
    }
L_08B5718C:
    ctx.gpr[31] = (0x08B57194u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08B56104;
L_08B57194:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 128u);
      if (branch_taken) {
          goto L_08B571AC;
      }
      goto L_08B5719C;
    }
L_08B5719C:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[19] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08B5700C;
    }
    goto L_08B571A8;
L_08B571A8:
    ctx.gpr[4] = (ctx.gpr[16] & 128u);
    goto L_08B571AC;
L_08B571AC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(292));
      if (branch_taken) {
          goto L_08B57200;
      }
      goto L_08B571B4;
    }
L_08B571B4:
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B571CC;
      }
      goto L_08B571C0;
    }
L_08B571C0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[31] = (0x08B571CCu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08B56550;
L_08B571CC:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(656)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(672)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(676)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(680)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(684)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(688)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(692)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(696)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(700)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(704)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(708)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(720));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B57200:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-1))))));
    ctx.gpr[5] = (0u | 120u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[19] = (ctx.gpr[16] & 8u);
      if (branch_taken) {
          goto L_08B5721C;
      }
      goto L_08B57210;
    }
L_08B57210:
    ctx.gpr[5] = (0u | 88u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(292));
      if (branch_taken) {
          goto L_08B5722C;
      }
      goto L_08B5721C;
    }
L_08B5721C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08B57228u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08B56550;
L_08B57228:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(292));
    goto L_08B5722C;
L_08B5722C:
    ctx.gpr[4] = (ctx.gpr[17] - ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B572BC;
      }
      goto L_08B57238;
    }
L_08B57238:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(660)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (0u | 0u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08B57250u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B57250u) goto L_08B57250;
    return;
L_08B57250:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(652)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] & 16u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B57274;
      }
      goto L_08B57264;
    }
L_08B57264:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(652), ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B572B0;
      }
      goto L_08B57274;
    }
L_08B57274:
    ctx.gpr[5] = (ctx.gpr[16] & 4u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08B57290;
      }
      goto L_08B57280;
    }
L_08B57280:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(652), ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08B572B0;
      }
      goto L_08B57290;
    }
L_08B57290:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4)));
        goto L_08B572A8;
    }
    goto L_08B57298;
L_08B57298:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(652), ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B572B0;
      }
      goto L_08B572A8;
    }
L_08B572A8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(652), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08B572B0;
L_08B572B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(656)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(656), ctx.gpr[4]);
    goto L_08B572BC;
L_08B572BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (2234u << 16u);
      if (branch_taken) {
          goto L_08B57528;
      }
      goto L_08B572C4;
    }
L_08B572C4:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[19] < static_cast<std::uint32_t>(349) ? 1u : 0u);
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-65));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[19] = (0u | 348u);
        goto L_08B572D8;
    }
    goto L_08B572D8;
L_08B572D8:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(292));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] | 960u);
      if (branch_taken) {
          goto L_08B57420;
      }
      goto L_08B572E8;
    }
L_08B572E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08B572EC;
L_08B572EC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 58 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 70 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B57340;
      }
      goto L_08B572FC;
    }
L_08B572FC:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 43 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 128u);
      if (branch_taken) {
          goto L_08B57424;
      }
      goto L_08B57308;
    }
L_08B57308:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 48 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-193));
      if (branch_taken) {
          goto L_08B57374;
      }
      goto L_08B57314;
    }
L_08B57314:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-43));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B57380;
      }
      goto L_08B57320;
    }
L_08B57320:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08B573D4;
      }
      goto L_08B57328;
    }
L_08B57328:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08B57380;
      }
      goto L_08B57330;
    }
L_08B57330:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B57398;
      }
      goto L_08B57338;
    }
L_08B57338:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08B573D4;
      }
      goto L_08B57340;
    }
L_08B57340:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 101u);
      if (branch_taken) {
          goto L_08B57360;
      }
      goto L_08B57348;
    }
L_08B57348:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 69 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 128u);
      if (branch_taken) {
          goto L_08B57424;
      }
      goto L_08B57354;
    }
L_08B57354:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 640u);
      if (branch_taken) {
          goto L_08B573B4;
      }
      goto L_08B5735C;
    }
L_08B5735C:
    ctx.gpr[4] = (0u | 101u);
    goto L_08B57360;
L_08B57360:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[16] & 640u);
      if (branch_taken) {
          goto L_08B573B4;
      }
      goto L_08B57368;
    }
L_08B57368:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 128u);
      if (branch_taken) {
          goto L_08B57424;
      }
      goto L_08B57370;
    }
L_08B57370:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-193));
    goto L_08B57374;
L_08B57374:
    ctx.gpr[16] = (ctx.gpr[16] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B573DC;
      }
      goto L_08B57380;
    }
L_08B57380:
    ctx.gpr[4] = (ctx.gpr[16] & 64u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 128u);
      if (branch_taken) {
          goto L_08B57424;
      }
      goto L_08B5738C;
    }
L_08B5738C:
    ctx.gpr[16] = (ctx.gpr[16] & ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B573DC;
      }
      goto L_08B57398;
    }
L_08B57398:
    ctx.gpr[4] = (ctx.gpr[16] & 256u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 128u);
      if (branch_taken) {
          goto L_08B57424;
      }
      goto L_08B573A4;
    }
L_08B573A4:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-321));
    ctx.gpr[16] = (ctx.gpr[16] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B573DC;
      }
      goto L_08B573B4;
    }
L_08B573B4:
    ctx.gpr[6] = (0u | 512u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[16] & 128u);
      if (branch_taken) {
          goto L_08B57424;
      }
      goto L_08B573C0;
    }
L_08B573C0:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-769));
    ctx.gpr[16] = (ctx.gpr[16] & ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[16] | 192u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B573DC;
      }
      goto L_08B573D4;
    }
L_08B573D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 128u);
      if (branch_taken) {
          goto L_08B57424;
      }
      goto L_08B573DC;
    }
L_08B573DC:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B57404;
      }
      goto L_08B573F4;
    }
L_08B573F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B57414;
      }
      goto L_08B57404;
    }
L_08B57404:
    ctx.gpr[31] = (0x08B5740Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08B56104;
L_08B5740C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 128u);
      if (branch_taken) {
          goto L_08B57424;
      }
      goto L_08B57414;
    }
L_08B57414:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[19] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08B572EC;
    }
    goto L_08B57420;
L_08B57420:
    ctx.gpr[4] = (ctx.gpr[16] & 128u);
    goto L_08B57424;
L_08B57424:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(292));
      if (branch_taken) {
          goto L_08B574A4;
      }
      goto L_08B5742C;
    }
L_08B5742C:
    ctx.gpr[4] = (ctx.gpr[16] & 512u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
        goto L_08B57470;
    }
    goto L_08B57438;
L_08B57438:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(292));
    ctx.gpr[4] = (ctx.gpr[16] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B571CC;
      }
      goto L_08B57448;
    }
L_08B57448:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    goto L_08B5744C;
L_08B5744C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[31] = (0x08B57458u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08B56550;
L_08B57458:
    ctx.gpr[4] = (ctx.gpr[16] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B5744C;
      }
      goto L_08B57464;
    }
L_08B57464:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B571CC;
      }
      goto L_08B5746C;
    }
L_08B5746C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    goto L_08B57470;
L_08B57470:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (0u | 101u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 69u);
      if (branch_taken) {
          goto L_08B57498;
      }
      goto L_08B57480;
    }
L_08B57480:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B57498;
      }
      goto L_08B57488;
    }
L_08B57488:
    ctx.gpr[31] = (0x08B57490u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08B56550;
L_08B57490:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    goto L_08B57498;
L_08B57498:
    ctx.gpr[31] = (0x08B574A0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08B56550;
L_08B574A0:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(292));
    goto L_08B574A4;
L_08B574A4:
    ctx.gpr[4] = (ctx.gpr[17] - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[16] & 8u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B57524;
      }
      goto L_08B574B4;
    }
L_08B574B4:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08B574C0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    goto L_08B577CC;
L_08B574C0:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(652)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B574EC;
      }
      goto L_08B574D8;
    }
L_08B574D8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(652), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B57518;
      }
      goto L_08B574EC;
    }
L_08B574EC:
    ctx.gpr[6] = (ctx.gpr[16] & 2u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4)));
        goto L_08B5750C;
    }
    goto L_08B574F8;
L_08B574F8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(652), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B57518;
      }
      goto L_08B5750C;
    }
L_08B5750C:
    ctx.gpr[31] = (0x08B57514u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(652), ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem) && ctx.pc == 0x08B57514u) goto L_08B57514;
    return;
L_08B57514:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08B57518;
L_08B57518:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(656)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(656), ctx.gpr[4]);
    goto L_08B57524;
L_08B57524:
    ctx.gpr[4] = (2234u << 16u);
    goto L_08B57528;
L_08B57528:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(15532)));
    ctx.gpr[20] = (2234u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16752)));
      if (branch_taken) {
          goto L_08B568C8;
      }
      goto L_08B57538;
    }
L_08B57538:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(656)));
    goto L_08B5753C;
L_08B5753C:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(656)));
        goto L_08B57548;
    }
    goto L_08B57548;
L_08B57548:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(672)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(676)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(680)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(684)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(688)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(692)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(696)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(700)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(704)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(708)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(720));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B57578:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    ctx.gpr[7] = (0u | 520u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (2234u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(15532)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B575B4u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 694u, 0x08B5A974u>(ctx, &aot_mem) && ctx.pc == 0x08B575B4u) goto L_08B575B4;
    return;
L_08B575B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B575C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
        goto L_08B575F4;
    }
    goto L_08B575E4;
L_08B575E4:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(15532)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    goto L_08B575F4;
L_08B575F4:
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
        goto L_08B57608;
    }
    goto L_08B575FC;
L_08B575FC:
    ctx.gpr[31] = (0x08B57604u);
    // nop
    goto L_08B55884;
L_08B57604:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
    goto L_08B57608;
L_08B57608:
    ctx.gpr[5] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] & 16u);
      if (branch_taken) {
          goto L_08B57660;
      }
      goto L_08B57614;
    }
L_08B57614:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] & 4u);
      if (branch_taken) {
          goto L_08B5762C;
      }
      goto L_08B5761C;
    }
L_08B5761C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-37));
      if (branch_taken) {
          goto L_08B57640;
      }
      goto L_08B57624;
    }
L_08B57624:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
      if (branch_taken) {
          goto L_08B5765C;
      }
      goto L_08B5762C;
    }
L_08B5762C:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B57640:
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    goto L_08B5765C;
L_08B5765C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08B57660;
L_08B57660:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
        goto L_08B57678;
    }
    goto L_08B5766C;
L_08B5766C:
    ctx.gpr[31] = (0x08B57674u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08B55FE8;
L_08B57674:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
    goto L_08B57678;
L_08B57678:
    ctx.gpr[5] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B57698;
      }
      goto L_08B57684;
    }
L_08B57684:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B576AC;
      }
      goto L_08B57698;
    }
L_08B57698:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 2u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
        goto L_08B576A8;
    }
    goto L_08B576A8;
L_08B576A8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_08B576AC;
L_08B576AC:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B576C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    goto L_08B576C8;
L_08B576C8:
    ctx.gpr[31] = (0x08B576D0u);
    ctx.gpr[4] = (0u | 1u);
    goto L_08B54F08;
L_08B576D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B576C8;
      }
      goto L_08B576D8;
    }
L_08B576D8:
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    if (static_cast<std::int32_t>(ctx.gpr[4]) < 0) {
    ctx.gpr[2] = (0u - ctx.gpr[4]);
        goto L_08B576E4;
    }
    goto L_08B576E4;
L_08B576E4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B576EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(15532)));
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B57714u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28856));
    if (rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 724u, 0x08B5F3FCu>(ctx, &aot_mem) && ctx.pc == 0x08B57714u) goto L_08B57714;
    return;
L_08B57714:
    ctx.gpr[31] = (0x08B5771Cu);
    // nop
    goto L_08B576C0;
L_08B5771C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B57728:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (2234u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(15532)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(328)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
        goto L_08B57750;
    }
    goto L_08B57744;
L_08B57744:
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(332));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(328), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    goto L_08B57750;
L_08B57750:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B57794;
      }
      goto L_08B5775C;
    }
L_08B5775C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[31] = (0x08B57768u);
    ctx.gpr[4] = (0u | 136u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem) && ctx.pc == 0x08B57768u) goto L_08B57768;
    return;
L_08B57768:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[7] = (2234u << 16u);
      if (branch_taken) {
          goto L_08B577BC;
      }
      goto L_08B57778;
    }
L_08B57778:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(15532)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(328)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(15532)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(328), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    goto L_08B57794;
L_08B57794:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[7] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B577BC:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B577CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B577DCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 521u, 0x08B59DE0u>(ctx, &aot_mem) && ctx.pc == 0x08B577DCu) goto L_08B577DC;
    return;
L_08B577DC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B577E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B577FCu);
    ctx.gpr[6] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0214_entry, 214u, 469u, 0x08B5DF34u>(ctx, &aot_mem) && ctx.pc == 0x08B577FCu) goto L_08B577FC;
    return;
L_08B577FC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B57808:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (2234u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15532)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(328)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    if (ctx.gpr[17] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
        goto L_08B5787C;
    }
    goto L_08B5783C;
L_08B5783C:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_08B57840;
L_08B57840:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) < 0;
    ctx.gpr[19] = (ctx.gpr[20] << 2u);
      if (branch_taken) {
          goto L_08B57868;
      }
      goto L_08B5784C;
    }
L_08B5784C:
    ctx.gpr[19] = (ctx.gpr[17] + ctx.gpr[19]);
    goto L_08B57850;
L_08B57850:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[4];
    ctx.gpr[31] = (0x08B5785Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B5785Cu) goto L_08B5785C;
    return;
L_08B5785C:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) >= 0;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08B57850;
      }
      goto L_08B57868;
    }
L_08B57868:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[17] != 0u) {
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
        goto L_08B57840;
    }
    goto L_08B57874;
L_08B57874:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15532)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    goto L_08B5787C;
L_08B5787C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B5788C;
      }
      goto L_08B57884;
    }
L_08B57884:
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08B5788Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B5788Cu) goto L_08B5788C;
    return;
L_08B5788C:
    ctx.gpr[31] = (0x08B57894u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08B54F08;
L_08B57894:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B578B4:
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    if (static_cast<std::int32_t>(ctx.gpr[4]) < 0) {
    ctx.gpr[2] = (0u - ctx.gpr[4]);
        goto L_08B578C0;
    }
    goto L_08B578C0;
L_08B578C0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B578C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    ctx.gpr[21] = (ctx.gpr[6] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
    ctx.gpr[20] = (ctx.gpr[8] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
        goto L_08B57908;
    }
    goto L_08B57908;
L_08B57908:
    if (ctx.gpr[18] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
        goto L_08B5791C;
    }
    goto L_08B57910;
L_08B57910:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B5792C;
      }
      goto L_08B57918;
    }
L_08B57918:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    goto L_08B5791C;
L_08B5791C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B57E64;
      }
      goto L_08B57924;
    }
L_08B57924:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B57954;
      }
      goto L_08B5792C;
    }
L_08B5792C:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B57954:
    ctx.gpr[31] = (0x08B5795Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x08B5795Cu) goto L_08B5795C;
    return;
L_08B5795C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2233u << 16u);
      if (branch_taken) {
          goto L_08B57E64;
      }
      goto L_08B57968;
    }
L_08B57968:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (0x08B57974u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28808));
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 56u, 0x08B582CCu>(ctx, &aot_mem) && ctx.pc == 0x08B57974u) goto L_08B57974;
    return;
L_08B57974:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[5] = (2233u << 16u);
      if (branch_taken) {
          goto L_08B57A70;
      }
      goto L_08B5797C;
    }
L_08B5797C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B57EA4;
      }
      goto L_08B57984;
    }
L_08B57984:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 129 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 224 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B579A0;
      }
      goto L_08B57990;
    }
L_08B57990:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 160 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[19] < static_cast<std::uint32_t>(2) ? 1u : 0u);
      if (branch_taken) {
          goto L_08B579B4;
      }
      goto L_08B5799C;
    }
L_08B5799C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 224 ? 1u : 0u);
    goto L_08B579A0;
L_08B579A0:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 240 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B57E64;
      }
      goto L_08B579A8;
    }
L_08B579A8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B57E64;
      }
      goto L_08B579B0;
    }
L_08B579B0:
    ctx.gpr[5] = (ctx.gpr[19] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    goto L_08B579B4;
L_08B579B4:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[21] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(1)));
      if (branch_taken) {
          goto L_08B579D0;
      }
      goto L_08B579BC;
    }
L_08B579BC:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[21]) < 64 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[21]) < 127 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B579F8;
      }
      goto L_08B579C8;
    }
L_08B579C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[21]) < 128 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B57A04;
      }
      goto L_08B579D0;
    }
L_08B579D0:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B579F8:
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[4] << 8u);
        goto L_08B57A18;
    }
    goto L_08B57A00;
L_08B57A00:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[21]) < 128 ? 1u : 0u);
    goto L_08B57A04;
L_08B57A04:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[21]) < 253 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B57A48;
      }
      goto L_08B57A0C;
    }
L_08B57A0C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B57A48;
      }
      goto L_08B57A14;
    }
L_08B57A14:
    ctx.gpr[4] = (ctx.gpr[4] << 8u);
    goto L_08B57A18;
L_08B57A18:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[2] = (0u | 2u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B57A48:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B57A70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (0x08B57A7Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28800));
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 56u, 0x08B582CCu>(ctx, &aot_mem) && ctx.pc == 0x08B57A7Cu) goto L_08B57A7C;
    return;
L_08B57A7C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[5] = (2233u << 16u);
      if (branch_taken) {
          goto L_08B57B3C;
      }
      goto L_08B57A84;
    }
L_08B57A84:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B57EA4;
      }
      goto L_08B57A8C;
    }
L_08B57A8C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 161 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 255 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B57E64;
      }
      goto L_08B57A98;
    }
L_08B57A98:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[19] < static_cast<std::uint32_t>(2) ? 1u : 0u);
      if (branch_taken) {
          goto L_08B57E64;
      }
      goto L_08B57AA0;
    }
L_08B57AA0:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[21] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(1)));
      if (branch_taken) {
          goto L_08B57AE4;
      }
      goto L_08B57AA8;
    }
L_08B57AA8:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[21]) < 161 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[21]) < 255 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B57ABC;
      }
      goto L_08B57AB4;
    }
L_08B57AB4:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] << 8u);
      if (branch_taken) {
          goto L_08B57B0C;
      }
      goto L_08B57ABC;
    }
L_08B57ABC:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B57AE4:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B57B0C:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[2] = (0u | 2u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B57B3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (0x08B57B48u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28792));
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 56u, 0x08B582CCu>(ctx, &aot_mem) && ctx.pc == 0x08B57B48u) goto L_08B57B48;
    return;
L_08B57B48:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B57E64;
      }
      goto L_08B57B50;
    }
L_08B57B50:
    if (ctx.gpr[18] == 0u) {
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), 0u);
        goto L_08B57B70;
    }
    goto L_08B57B58;
L_08B57B58:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_08B57B98;
      }
      goto L_08B57B64;
    }
L_08B57B64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B57BA0;
      }
      goto L_08B57B6C;
    }
L_08B57B6C:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), 0u);
    goto L_08B57B70;
L_08B57B70:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B57B98:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[2] = (0u | 0u);
    goto L_08B57BA0;
L_08B57BA0:
    ctx.gpr[6] = (ctx.gpr[2] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_08B57E3C;
      }
      goto L_08B57BAC;
    }
L_08B57BAC:
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[12] = (2234u << 16u);
    ctx.gpr[14] = (2234u << 16u);
    ctx.gpr[7] = (0u | 74u);
    ctx.gpr[8] = (0u | 66u);
    ctx.gpr[9] = (0u | 64u);
    ctx.gpr[10] = (0u | 40u);
    ctx.gpr[11] = (0u | 36u);
    ctx.gpr[3] = (0u | 27u);
    ctx.gpr[15] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(16008));
    ctx.gpr[14] = (ctx.gpr[14] + static_cast<std::uint32_t>(15576));
    goto L_08B57BDC;
L_08B57BDC:
    ctx.gpr[13] = (ctx.gpr[4] << 5u);
    ctx.gpr[24] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    { const bool branch_taken = ctx.gpr[24] == ctx.gpr[7];
    ctx.gpr[4] = (ctx.gpr[13] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B57C98;
      }
      goto L_08B57BF0;
    }
L_08B57BF0:
    if (ctx.gpr[24] == ctx.gpr[8]) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
        goto L_08B57C84;
    }
    goto L_08B57BF8;
L_08B57BF8:
    if (ctx.gpr[24] == ctx.gpr[9]) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
        goto L_08B57C5C;
    }
    goto L_08B57C00;
L_08B57C00:
    if (ctx.gpr[24] == ctx.gpr[10]) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
        goto L_08B57C70;
    }
    goto L_08B57C08;
L_08B57C08:
    if (ctx.gpr[24] == ctx.gpr[11]) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
        goto L_08B57C48;
    }
    goto L_08B57C10;
L_08B57C10:
    { const bool branch_taken = ctx.gpr[24] == ctx.gpr[3];
    ctx.gpr[13] = (ctx.gpr[4] + ctx.gpr[12]);
      if (branch_taken) {
          goto L_08B57C38;
      }
      goto L_08B57C18;
    }
L_08B57C18:
    { const bool branch_taken = ctx.gpr[24] != 0u;
    ctx.gpr[25] = (static_cast<std::int32_t>(ctx.gpr[24]) < 33 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B57CB0;
      }
      goto L_08B57C20;
    }
L_08B57C20:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[13] = (ctx.gpr[4] + ctx.gpr[12]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[14]);
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B57CE0;
      }
      goto L_08B57C38;
    }
L_08B57C38:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[14]);
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B57CE0;
      }
      goto L_08B57C48;
    }
L_08B57C48:
    ctx.gpr[13] = (ctx.gpr[4] + ctx.gpr[12]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[14]);
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B57CE0;
      }
      goto L_08B57C5C;
    }
L_08B57C5C:
    ctx.gpr[13] = (ctx.gpr[4] + ctx.gpr[12]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[14]);
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B57CE0;
      }
      goto L_08B57C70;
    }
L_08B57C70:
    ctx.gpr[13] = (ctx.gpr[4] + ctx.gpr[12]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[14]);
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B57CE0;
      }
      goto L_08B57C84;
    }
L_08B57C84:
    ctx.gpr[13] = (ctx.gpr[4] + ctx.gpr[12]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[14]);
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B57CE0;
      }
      goto L_08B57C98;
    }
L_08B57C98:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[13] = (ctx.gpr[4] + ctx.gpr[12]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[14]);
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B57CE0;
      }
      goto L_08B57CB0;
    }
L_08B57CB0:
    { const bool branch_taken = ctx.gpr[25] != 0u;
    ctx.gpr[13] = (0u | 8u);
      if (branch_taken) {
          goto L_08B57CC8;
      }
      goto L_08B57CB8;
    }
L_08B57CB8:
    ctx.gpr[24] = (static_cast<std::int32_t>(ctx.gpr[24]) < 127 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[24] == 0u;
    ctx.gpr[13] = (ctx.gpr[13] << 2u);
      if (branch_taken) {
          goto L_08B57CCC;
      }
      goto L_08B57CC4;
    }
L_08B57CC4:
    ctx.gpr[13] = (0u | 7u);
    goto L_08B57CC8;
L_08B57CC8:
    ctx.gpr[13] = (ctx.gpr[13] << 2u);
    goto L_08B57CCC;
L_08B57CCC:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[13]);
    ctx.gpr[13] = (ctx.gpr[4] + ctx.gpr[12]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[14]);
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08B57CE0;
L_08B57CE0:
    ctx.gpr[24] = (ctx.gpr[13] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[24] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B57E04;
      }
      goto L_08B57CEC;
    }
L_08B57CEC:
    ctx.gpr[13] = (ctx.gpr[13] << 2u);
    ctx.gpr[1] = (2233u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[13]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-28784)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B57D04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B57E2C;
      }
      goto L_08B57D0C;
    }
L_08B57D0C:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B57D38:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B57D70:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    ctx.gpr[4] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B57DB0:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    ctx.gpr[4] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[2] = (ctx.gpr[5] - ctx.gpr[21]);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(2));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B57DF8:
    ctx.gpr[5] = (ctx.gpr[15] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B57E2C;
      }
      goto L_08B57E04;
    }
L_08B57E04:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B57E2C:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[13] = (ctx.gpr[2] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[13] != 0u;
    ctx.gpr[15] = (ctx.gpr[15] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B57BDC;
      }
      goto L_08B57E3C;
    }
L_08B57E3C:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B57E64:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B57EA4;
      }
      goto L_08B57E6C;
    }
L_08B57E6C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B57EA4:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B57ECC:
    ctx.gpr[5] = (2234u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(15532)));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B57EDC:
    ctx.gpr[9] = (2234u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(14520));
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    goto L_08B57EF0;
L_08B57EF0:
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[3] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[2] = (ctx.gpr[9] + ctx.gpr[10]);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[2] = (ctx.gpr[2] & 8u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[8] = (ctx.gpr[3] | 0u);
      if (branch_taken) {
          goto L_08B57EF0;
      }
      goto L_08B57F0C;
    }
L_08B57F0C:
    ctx.gpr[2] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[2];
    ctx.gpr[2] = (0u | 43u);
      if (branch_taken) {
          goto L_08B57F2C;
      }
      goto L_08B57F18;
    }
L_08B57F18:
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[3] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[3] | 0u);
      if (branch_taken) {
          goto L_08B57F40;
      }
      goto L_08B57F2C;
    }
L_08B57F2C:
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08B57F40;
      }
      goto L_08B57F34;
    }
L_08B57F34:
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[3] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[3] | 0u);
    goto L_08B57F40;
L_08B57F40:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[2] = (0u | 48u);
      if (branch_taken) {
          goto L_08B57F58;
      }
      goto L_08B57F48;
    }
L_08B57F48:
    ctx.gpr[2] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[2];
    ctx.gpr[14] = (ctx.gpr[9] + ctx.gpr[10]);
      if (branch_taken) {
          goto L_08B57F88;
      }
      goto L_08B57F54;
    }
L_08B57F54:
    ctx.gpr[2] = (0u | 48u);
    goto L_08B57F58;
L_08B57F58:
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[2];
    ctx.gpr[14] = (ctx.gpr[9] + ctx.gpr[10]);
      if (branch_taken) {
          goto L_08B57F88;
      }
      goto L_08B57F60;
    }
L_08B57F60:
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[12] = (0u | 120u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[12];
    ctx.gpr[12] = (0u | 88u);
      if (branch_taken) {
          goto L_08B57F78;
      }
      goto L_08B57F70;
    }
L_08B57F70:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[12];
    ctx.gpr[14] = (ctx.gpr[9] + ctx.gpr[10]);
      if (branch_taken) {
          goto L_08B57F88;
      }
      goto L_08B57F78;
    }
L_08B57F78:
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[8] = (ctx.gpr[3] + static_cast<std::uint32_t>(2));
    ctx.gpr[7] = (0u | 16u);
    ctx.gpr[14] = (ctx.gpr[9] + ctx.gpr[10]);
    goto L_08B57F88;
L_08B57F88:
    ctx.gpr[14] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[14] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[15] = (ctx.gpr[14] & 4u);
      if (branch_taken) {
          goto L_08B57FA4;
      }
      goto L_08B57F94;
    }
L_08B57F94:
    ctx.gpr[7] = (0u | 10u);
    ctx.gpr[2] = (0u | 48u);
    if (ctx.gpr[10] == ctx.gpr[2]) {
    ctx.gpr[7] = (0u | 8u);
        goto L_08B57FA4;
    }
    goto L_08B57FA4;
L_08B57FA4:
    ctx.gpr[12] = (0u + static_cast<std::uint32_t>(-1));
    { const std::uint32_t dividend = ctx.gpr[12]; const std::uint32_t divisor = ctx.gpr[7]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[3] = (0u | 0u);
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[13] = (ctx.lo);
    // nop
    // nop
    { const std::uint32_t dividend = ctx.gpr[12]; const std::uint32_t divisor = ctx.gpr[7]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[12] = (ctx.hi);
    goto L_08B57FC8;
L_08B57FC8:
    { const bool branch_taken = ctx.gpr[15] == 0u;
    ctx.gpr[15] = (ctx.gpr[14] & 3u);
      if (branch_taken) {
          goto L_08B57FDC;
      }
      goto L_08B57FD0;
    }
L_08B57FD0:
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(-48));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[14] = (static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08B57FFC;
      }
      goto L_08B57FDC;
    }
L_08B57FDC:
    { const bool branch_taken = ctx.gpr[15] == 0u;
    ctx.gpr[15] = (ctx.gpr[14] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 8u, 0x08B58054u>(ctx, &aot_mem); return;
      }
      goto L_08B57FE4;
    }
L_08B57FE4:
    ctx.gpr[14] = (0u | 87u);
    ctx.gpr[15] = (ctx.gpr[15] & 1u);
    if (ctx.gpr[15] != 0u) {
    ctx.gpr[14] = (0u | 55u);
        goto L_08B57FF4;
    }
    goto L_08B57FF4;
L_08B57FF4:
    ctx.gpr[10] = (ctx.gpr[10] - ctx.gpr[14]);
    ctx.gpr[14] = (static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    goto L_08B57FFC;
L_08B57FFC:
    { const bool branch_taken = ctx.gpr[14] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 8u, 0x08B58054u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 1u, 0x08B58004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0212(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0212_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_212(Runtime &runtime) {
    runtime.register_generated_unit(212u, 0x08B54000u, 16384u, &recomp_unit_0212, &recomp_unit_0212_entry);
    runtime.register_function(0x08B54000u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5402Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54068u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54074u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5407Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54098u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B540A8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B540B4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5410Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54120u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54128u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54138u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54148u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5416Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54178u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54184u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5418Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54198u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B541A0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B541B0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B541C4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B541D8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B541E0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B541F0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54204u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54218u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54224u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5422Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54238u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54240u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5424Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54250u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54268u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5428Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54298u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B542A4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B542ACu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B542BCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B542C4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B542D4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B542E4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B542F0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B542F4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5430Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54330u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5433Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5434Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54354u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54360u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54370u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54380u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54394u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B543B0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B543C0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B543CCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B543D8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B543E0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B543F0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5440Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5441Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54428u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54434u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54458u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54470u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5448Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5449Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B544A4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B544B0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B544E0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5450Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54524u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54544u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54554u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54564u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54570u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5457Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B545A0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B545C0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B545DCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B545F4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54600u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54628u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54630u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54634u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54644u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54650u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54658u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54660u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5466Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54670u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54680u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B546A0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B546A8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B546B4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B546CCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B546D4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B546E0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B546E8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B546F8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54708u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54714u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5471Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54728u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5472Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54740u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54754u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5475Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54764u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54770u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5477Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54784u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5478Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54798u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B547A4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B547ACu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B547B4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B547BCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B547C8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B547D0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B547D8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B547E0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B547ECu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B547F4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B547FCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54808u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54814u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5481Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54824u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5482Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54838u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54840u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54848u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54850u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5485Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54864u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5486Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54874u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54880u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54888u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54890u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5489Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B548A8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B548B0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B548B8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B548C4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B548D0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B548D8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B548E0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B548E8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B548F4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B548FCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54904u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5490Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54918u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54920u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54928u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54934u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54940u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54948u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54950u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5495Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54968u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54970u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54978u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54980u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5498Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54994u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5499Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B549A4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B549B0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B549B8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B549C0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B549CCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B549D8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B549FCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54A08u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54A18u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54A28u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54A2Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54A3Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54A40u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54A44u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54A54u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54A5Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54A6Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54A7Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54A94u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54AA4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54AB0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54ABCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54AC4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54AD0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54AD8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54AE4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54B1Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54B28u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54B30u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54B34u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54B3Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54B44u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54B50u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54B6Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54B74u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54B8Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54B94u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54BA0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54BACu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54BB4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54BC4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54BCCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54BDCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54BE8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54BECu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54BF4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54BFCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54C04u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54C0Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54C14u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54C1Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54C44u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54C6Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54C7Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54CC0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54CD4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54DA0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54DA8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54DBCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54DC8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54DD8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54DFCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54E08u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54E10u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54E18u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54E24u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54E30u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54E38u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54E3Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54E48u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54E50u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54E58u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54E5Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54E60u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54E70u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54E88u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54E90u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54E98u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54EA0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54EA8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54EB0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54EB8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54EC0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54EC8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54ED0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54ED8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54EE0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54EE8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54EF0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54EF8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54F00u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54F08u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54F28u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54F30u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54F38u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54F4Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54F54u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54F5Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54F64u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54F6Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54F74u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54F8Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54F94u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54F9Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54FA4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54FBCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54FD0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B54FF4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55004u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55010u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5501Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55038u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55048u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55050u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55068u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5506Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55074u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5508Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B550A0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B550A8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B550ACu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B550C0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B550E0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B550ECu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B550F4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B550F8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55100u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55110u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55114u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5512Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55134u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5513Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55144u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5514Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55154u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5515Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55164u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55184u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55190u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55198u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5519Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B551A4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B551B4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B551B8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B551D0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B551D8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B551E0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B551E8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B551F0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B551F8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55200u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55208u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55218u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55224u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5522Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55230u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55238u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55240u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55244u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55254u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5525Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55264u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5526Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55274u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5527Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55284u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5528Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5529Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B552B8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B552C8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B552D0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B552D8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B552F4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55300u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55308u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55314u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55318u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55320u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55328u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5538Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B553ECu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B553F0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B553F8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55408u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55410u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55424u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55434u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55454u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55460u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5546Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55480u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B554A8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B554B4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B554B8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B554C8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B554CCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B554D8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B554E0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B554E8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B554F4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55500u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5550Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55514u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5551Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55520u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5552Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55534u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55538u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55540u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55548u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55554u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55560u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5556Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55574u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55590u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B555ACu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B555B8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B555C0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B555D4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B555ECu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B555F8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55600u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55608u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5560Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55618u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55624u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55644u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5564Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55660u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5566Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55674u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55690u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B556B8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B556ECu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B556F8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55704u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5570Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55714u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5571Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55748u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55770u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55778u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55784u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55794u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B557A0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B557C4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B557D0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B557D8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B557FCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5582Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55884u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B558BCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B558D0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B558E4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55900u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55914u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55920u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55954u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55960u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55978u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5599Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B559ACu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B559C0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B559E0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B559E8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55A24u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55A30u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55A38u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55A64u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55A6Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55A80u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55A8Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55AA8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55AB0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55AC0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55AC4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55ACCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55B10u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55B40u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55B78u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55B88u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55B94u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55B9Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55BA4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55BA8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55BB8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55BC0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55BF0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55BFCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55C0Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55C1Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55C2Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55C38u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55C50u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55C58u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55C60u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55C70u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55C80u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55C8Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55C98u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55CA8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55CC8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55CD8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55CE0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55CECu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55D00u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55D08u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55D0Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55D18u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55D28u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55D3Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55D48u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55D50u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55D54u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55D64u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55D7Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55D80u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55D94u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55D9Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55DA4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55DB8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55DC0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55DCCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55DD8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55DE0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55DE4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55DE8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55E08u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55E14u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55E20u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55E2Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55E40u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55E48u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55E4Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55E58u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55E68u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55E7Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55E88u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55E90u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55E94u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55EA4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55EC0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55EC8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55ED0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55ED8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55EDCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55EF0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55F20u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55F28u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55F58u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55F84u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55F88u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55F94u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55FA0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55FA8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55FB0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55FB8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55FC4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55FE8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56014u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56020u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56028u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5604Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56054u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5605Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56060u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56070u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56084u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56098u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B560B4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B560C0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B560E8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B560F8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56104u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56120u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56130u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56138u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56140u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56144u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56150u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5615Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56164u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56178u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56180u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56188u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56194u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B561A8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B561B0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B561B8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B561D8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B561ECu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B561F4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56200u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56204u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5620Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56214u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56230u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56238u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5623Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56248u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56254u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56270u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56290u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56298u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B562A4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B562B0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B562C4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B562D8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5633Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56350u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56358u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56394u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B563D8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B563E8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5640Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56414u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56424u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56430u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56440u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56474u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5648Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56494u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B564BCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B564D4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B564F8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56504u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56514u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56520u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56530u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56544u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56550u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56574u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56580u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56590u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56598u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B565A0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B565A4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B565C0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B565C8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B565D0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B565D8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B565E0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56600u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5661Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56620u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56624u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56634u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56644u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56654u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56670u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B566A8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B566B4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B566C0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B566CCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B566F4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B566F8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5673Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56750u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56764u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56768u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56770u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56784u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5678Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B567A4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B567ACu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B567B4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B567BCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B567C4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B567CCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B567D8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B567E0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B567E8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B567F4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56800u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5680Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56824u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5682Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56834u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B568C8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B568DCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B568ECu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B568F8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5690Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56910u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56918u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56920u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56928u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5692Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56944u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56964u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5696Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56978u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56988u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56994u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B569ACu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B569B0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B569BCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B569C8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B569D0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B569D8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B569DCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B569ECu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56A14u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56A1Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56A28u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56A34u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56A40u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56A4Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56A68u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56A74u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56A78u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56A8Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56AA4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56AB0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56AB4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56AC8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56AE0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56AFCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56B08u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56B14u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56B20u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56B34u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56B44u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56B60u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56B6Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56B7Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56B8Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56B98u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56BA8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56BB4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56BE8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56BECu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56C00u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56C10u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56C18u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56C20u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56C28u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56C34u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56C50u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56C54u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56C64u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56C70u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56C78u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56C80u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56C9Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56CA0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56CA8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56CB4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56CBCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56CC4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56CCCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56CD8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56CE0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56CF0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56CF8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56D10u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56D18u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56D20u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56D28u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56D3Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56D48u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56D60u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56D6Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56D80u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56D9Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56DA4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56DACu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56DB0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56DCCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56DD8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56DE0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56DE8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56DF0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56DF8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56DFCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56E10u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56E18u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56E20u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56E34u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56E38u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56E60u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56E6Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56E74u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56E7Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56E84u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56E8Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56E90u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56EA4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56EA8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56EB0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56EC4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56EE4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56EECu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56EF4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56EF8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56F14u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56F20u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56F28u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56F30u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56F34u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56F4Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56F54u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56F68u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56F6Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56F94u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56FA0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56FA8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56FB0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56FB4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56FCCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56FD0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56FE8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56FF8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57008u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5700Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5701Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57028u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57034u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57050u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57058u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57060u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5706Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57078u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57080u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57084u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5708Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57094u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5709Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B570A4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B570B0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B570BCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B570C4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B570DCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B570F4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57100u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57104u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5710Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57118u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57124u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57134u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5713Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57148u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5715Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57164u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5717Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5718Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57194u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5719Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B571A8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B571ACu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B571B4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B571C0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B571CCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57200u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57210u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5721Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57228u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5722Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57238u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57250u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57264u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57274u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57280u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57290u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57298u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B572A8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B572B0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B572BCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B572C4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B572D8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B572E8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B572ECu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B572FCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57308u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57314u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57320u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57328u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57330u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57338u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57340u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57348u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57354u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5735Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57360u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57368u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57370u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57374u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57380u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5738Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57398u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B573A4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B573B4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B573C0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B573D4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B573DCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B573F4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57404u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5740Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57414u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57420u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57424u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5742Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57438u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57448u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5744Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57458u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57464u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5746Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57470u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57480u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57488u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57490u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57498u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B574A0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B574A4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B574B4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B574C0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B574D8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B574ECu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B574F8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5750Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57514u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57518u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57524u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57528u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57538u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5753Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57548u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57578u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B575B4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B575C8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B575E4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B575F4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B575FCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57604u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57608u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57614u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5761Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57624u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5762Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57640u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5765Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57660u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5766Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57674u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57678u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57684u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57698u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B576A8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B576ACu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B576C0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B576C8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B576D0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B576D8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B576E4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B576ECu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57714u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5771Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57728u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57744u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57750u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5775Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57768u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57778u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57794u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B577BCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B577CCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B577DCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B577E8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B577FCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57808u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5783Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57840u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5784Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57850u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5785Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57868u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57874u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5787Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57884u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5788Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57894u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B578B4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B578C0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B578C8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57908u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57910u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57918u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5791Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57924u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5792Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57954u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5795Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57968u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57974u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5797Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57984u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57990u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5799Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B579A0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B579A8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B579B0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B579B4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B579BCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B579C8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B579D0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B579F8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57A00u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57A04u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57A0Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57A14u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57A18u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57A48u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57A70u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57A7Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57A84u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57A8Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57A98u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57AA0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57AA8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57AB4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57ABCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57AE4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57B0Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57B3Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57B48u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57B50u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57B58u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57B64u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57B6Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57B70u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57B98u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57BA0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57BACu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57BDCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57BF0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57BF8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57C00u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57C08u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57C10u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57C18u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57C20u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57C38u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57C48u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57C5Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57C70u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57C84u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57C98u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57CB0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57CB8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57CC4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57CC8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57CCCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57CE0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57CECu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57D04u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57D0Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57D38u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57D70u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57DB0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57DF8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57E04u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57E2Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57E3Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57E64u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57E6Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57EA4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57ECCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57EDCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57EF0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57F0Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57F18u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57F2Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57F34u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57F40u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57F48u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57F54u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57F58u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57F60u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57F70u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57F78u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57F88u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57F94u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57FA4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57FC8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57FD0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57FDCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57FE4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57FF4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57FFCu, &recomp_unit_0212, "recomp_unit_0212");
}
} // namespace psprecomp
