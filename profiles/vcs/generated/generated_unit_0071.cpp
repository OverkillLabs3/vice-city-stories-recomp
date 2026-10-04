#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0071[4090] = {
    1, 2, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0,
    0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 11, 0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0,
    24, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 26, 0, 0, 0, 0, 0, 27, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0,
    0, 0, 30, 0, 0, 31, 0, 0, 0, 0, 0, 0, 32, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 35, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 37, 0, 0, 38, 0, 39, 0, 40, 0, 41, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 43, 0, 44, 0, 45, 0, 46, 0, 0, 47, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 50, 0, 51, 0, 52, 0, 0, 53, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 56, 0, 0, 57, 0, 58, 0, 59, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 61, 0, 0, 62, 0, 0, 63, 0, 0, 0, 0, 0, 0, 64, 0, 65, 0, 66, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68,
    0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 75, 76,
    0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 81, 0, 0, 82, 0, 83, 0,
    84, 0, 0, 0, 85, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 88, 0, 0, 0, 0, 0, 89, 0, 90, 0, 91,
    0, 0, 0, 0, 0, 92, 93, 0, 0, 94, 0, 95, 0, 0, 0, 96, 0, 97, 0, 0, 0, 98, 0, 99, 0, 100, 0, 0, 0, 0, 0, 101,
    0, 102, 0, 103, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 0, 107, 0, 108, 0, 109, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 111, 0, 0, 0, 112, 0, 113, 0, 114, 0, 0, 0, 0, 0, 115, 0, 0, 0,
    0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0,
    120, 0, 0, 0, 0, 0, 0, 121, 0, 0, 122, 0, 123, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 126, 127, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 129, 0, 130, 0,
    131, 0, 0, 0, 0, 0, 132, 0, 133, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 135, 0, 0, 136, 0, 137, 138, 0, 0, 0, 0, 0,
    0, 139, 0, 0, 0, 0, 140, 0, 141, 142, 0, 143, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 146, 0, 147, 0, 148, 149, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0,
    0, 0, 0, 152, 0, 153, 0, 154, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 157, 0,
    0, 0, 0, 0, 0, 0, 158, 0, 0, 159, 0, 160, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 162, 0, 0, 163, 0, 0, 0, 0, 0,
    0, 164, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 167, 0, 0, 0, 0, 168, 0, 0, 0, 169, 0,
    170, 0, 0, 171, 0, 0, 172, 0, 0, 173, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 175, 0, 176, 0, 0, 177, 0, 0, 178,
    0, 0, 0, 0, 179, 0, 180, 0, 0, 181, 0, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 184, 0, 185, 0, 0, 0, 0, 0, 186, 187, 0,
    0, 0, 0, 0, 188, 0, 0, 189, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 0, 192, 0, 0, 193, 0, 0, 0, 0, 0, 194, 0, 195, 0,
    0, 196, 0, 0, 197, 0, 198, 0, 0, 199, 0, 200, 0, 0, 0, 0, 0, 0, 201, 0, 202, 0, 0, 0, 0, 0, 203, 0, 204, 0, 0, 205,
    0, 206, 0, 0, 207, 0, 208, 0, 209, 0, 0, 0, 210, 0, 0, 0, 0, 0, 211, 0, 0, 212, 0, 213, 0, 214, 0, 0, 0, 215, 0, 216,
    0, 217, 0, 0, 218, 0, 219, 0, 220, 0, 221, 0, 222, 0, 223, 0, 224, 0, 0, 225, 0, 226, 0, 0, 227, 0, 228, 0, 0, 229, 0, 230,
    0, 0, 231, 0, 232, 0, 0, 233, 0, 234, 0, 0, 235, 0, 236, 0, 0, 237, 0, 238, 0, 0, 239, 0, 240, 0, 0, 241, 0, 242, 0, 0,
    243, 0, 0, 244, 0, 245, 0, 246, 0, 247, 0, 0, 248, 0, 249, 0, 0, 0, 0, 0, 0, 250, 0, 0, 251, 0, 252, 0, 253, 0, 254, 0,
    0, 0, 0, 255, 0, 256, 0, 0, 0, 257, 0, 258, 0, 259, 0, 260, 0, 0, 261, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 263, 0, 264, 0, 0, 0, 265, 0, 266, 0, 267, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 269, 0, 270, 0, 271, 0, 0, 0, 272,
    0, 0, 273, 0, 274, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 277, 0, 0, 0, 278, 0, 0, 279, 0, 280, 0,
    0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 283, 0, 284, 0, 0, 0, 285, 0, 0, 286, 0, 287, 0, 288, 0, 289, 0,
    290, 0, 291, 0, 292, 0, 293, 294, 0, 295, 0, 296, 0, 0, 0, 0, 0, 297, 0, 0, 0, 298, 0, 299, 0, 0, 0, 300, 0, 301, 0, 0,
    302, 0, 0, 0, 0, 0, 303, 0, 0, 304, 0, 305, 0, 306, 0, 307, 0, 308, 0, 309, 0, 0, 310, 0, 0, 311, 0, 312, 0, 313, 0, 0,
    314, 0, 0, 315, 0, 316, 0, 317, 0, 0, 318, 0, 0, 319, 0, 0, 0, 320, 0, 0, 0, 0, 0, 321, 0, 0, 322, 323, 0, 0, 0, 0,
    324, 0, 325, 0, 0, 326, 0, 327, 0, 0, 328, 0, 329, 0, 330, 0, 0, 331, 0, 332, 0, 0, 333, 0, 334, 0, 335, 0, 0, 0, 0, 0,
    0, 336, 0, 0, 0, 337, 0, 338, 0, 0, 0, 339, 0, 0, 340, 0, 0, 0, 0, 0, 341, 0, 0, 342, 0, 343, 0, 344, 0, 345, 0, 346,
    0, 347, 0, 0, 348, 0, 0, 349, 0, 350, 0, 351, 0, 0, 352, 0, 0, 353, 0, 354, 0, 355, 0, 0, 356, 0, 0, 357, 0, 0, 358, 0,
    359, 0, 360, 0, 361, 0, 362, 0, 0, 363, 0, 364, 0, 365, 0, 366, 0, 0, 0, 0, 0, 0, 367, 0, 368, 0, 369, 0, 370, 0, 0, 0,
    0, 0, 0, 371, 0, 372, 0, 373, 0, 0, 374, 0, 375, 0, 376, 0, 377, 0, 378, 0, 0, 379, 0, 0, 380, 0, 0, 0, 0, 381, 0, 0,
    0, 0, 0, 0, 382, 0, 0, 383, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 386, 0, 387, 0, 388, 0, 0, 389, 0,
    0, 0, 390, 0, 391, 0, 392, 0, 393, 0, 0, 394, 0, 395, 0, 0, 396, 0, 397, 0, 398, 0, 399, 0, 0, 0, 0, 0, 400, 0, 0, 0,
    401, 0, 0, 0, 402, 0, 403, 0, 404, 0, 405, 0, 0, 0, 0, 0, 0, 406, 0, 407, 0, 0, 408, 0, 0, 0, 0, 0, 409, 0, 0, 410,
    0, 411, 0, 0, 0, 0, 0, 412, 0, 0, 413, 0, 0, 414, 0, 415, 0, 416, 0, 0, 417, 0, 418, 0, 0, 419, 0, 0, 420, 0, 0, 0,
    0, 0, 421, 0, 422, 0, 0, 423, 0, 0, 424, 0, 425, 0, 426, 0, 0, 427, 0, 428, 0, 429, 0, 430, 0, 0, 431, 0, 0, 0, 0, 0,
    432, 0, 433, 0, 434, 0, 435, 0, 0, 436, 0, 437, 0, 0, 438, 439, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 441, 0, 0, 442, 0, 0,
    0, 443, 444, 0, 445, 0, 446, 0, 0, 0, 0, 0, 0, 447, 0, 448, 0, 449, 0, 0, 0, 0, 0, 450, 0, 451, 0, 0, 0, 452, 0, 0,
    453, 0, 0, 454, 0, 0, 0, 455, 0, 0, 456, 0, 0, 0, 0, 457, 0, 0, 458, 0, 459, 0, 460, 0, 461, 0, 462, 0, 0, 0, 463, 0,
    0, 0, 0, 0, 464, 0, 0, 0, 465, 0, 466, 0, 0, 0, 0, 0, 467, 0, 468, 0, 0, 469, 0, 0, 0, 0, 0, 470, 0, 471, 0, 0,
    0, 472, 0, 473, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 475, 0, 0, 476, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 0, 0,
    478, 0, 0, 0, 479, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 482, 0, 0, 483, 0, 484, 0, 0, 485, 0,
    0, 0, 0, 486, 0, 0, 487, 0, 0, 0, 488, 0, 0, 0, 489, 0, 490, 0, 0, 0, 0, 0, 0, 0, 491, 0, 492, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 494, 0, 495, 0, 496, 0, 0, 0, 0, 0, 497, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 498, 0, 499, 0, 0, 0, 500, 0, 0, 501, 0, 502, 0, 503, 0, 504, 0, 505, 0, 0,
    506, 0, 507, 0, 0, 508, 0, 0, 509, 0, 0, 0, 0, 510, 0, 511, 0, 0, 512, 0, 0, 0, 0, 513, 0, 0, 0, 514, 0, 0, 0, 0,
    0, 0, 0, 515, 0, 0, 0, 0, 0, 516, 0, 517, 0, 518, 0, 519, 0, 0, 0, 520, 0, 521, 0, 0, 0, 522, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 523, 0, 0, 524, 0, 0, 0, 0, 0, 0, 0, 0, 0, 525, 0, 0, 0, 526, 0, 0, 527, 0, 0, 0, 0, 528, 0, 0, 0,
    529, 0, 0, 530, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0, 0, 0, 532, 0, 0, 0, 0, 533, 0, 534, 0,
    0, 0, 535, 0, 0, 536, 0, 0, 0, 0, 0, 0, 0, 0, 537, 0, 0, 538, 0, 0, 0, 0, 539, 0, 540, 0, 0, 541, 0, 542, 0, 543,
    0, 544, 0, 0, 0, 545, 0, 0, 0, 0, 0, 0, 0, 546, 0, 0, 0, 547, 0, 0, 548, 0, 0, 0, 0, 0, 0, 0, 0, 549, 0, 0,
    0, 550, 0, 0, 551, 0, 0, 0, 0, 552, 0, 553, 0, 554, 0, 0, 0, 555, 0, 0, 556, 0, 0, 0, 0, 0, 0, 0, 0, 557, 0, 0,
    0, 558, 0, 0, 559, 0, 0, 0, 0, 560, 0, 561, 0, 0, 0, 0, 0, 0, 0, 0, 562, 0, 0, 563, 0, 564, 0, 0, 565, 0, 566, 0,
    0, 0, 567, 0, 0, 0, 0, 0, 0, 568, 0, 0, 0, 569, 0, 570, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 571, 0, 0, 0, 0, 0,
    0, 0, 0, 572, 0, 0, 0, 573, 0, 0, 574, 0, 0, 0, 575, 0, 0, 576, 0, 0, 0, 0, 577, 0, 0, 578, 0, 0, 0, 579, 0, 580,
    0, 581, 0, 582, 0, 0, 583, 0, 584, 0, 0, 0, 0, 0, 585, 0, 0, 0, 586, 0, 587, 0, 0, 0, 0, 0, 588, 0, 589, 0, 590, 0,
    0, 0, 0, 0, 591, 0, 0, 0, 592, 0, 593, 0, 0, 0, 0, 0, 594, 0, 595, 0, 0, 0, 596, 0, 597, 0, 0, 0, 598, 0, 599, 0,
    0, 0, 600, 0, 0, 0, 0, 0, 601, 0, 602, 0, 0, 0, 603, 0, 604, 0, 0, 0, 605, 0, 606, 0, 607, 0, 0, 608, 0, 0, 609, 0,
    0, 0, 0, 0, 0, 610, 0, 0, 0, 611, 0, 612, 0, 613, 0, 0, 0, 614, 0, 0, 0, 615, 0, 616, 0, 617, 0, 618, 0, 0, 0, 0,
    619, 0, 0, 620, 0, 0, 0, 621, 0, 622, 0, 0, 0, 623, 0, 624, 0, 0, 0, 625, 0, 0, 626, 0, 0, 0, 627, 0, 628, 0, 0, 0,
    629, 0, 630, 0, 0, 0, 631, 0, 632, 0, 633, 0, 634, 0, 635, 0, 636, 0, 0, 0, 637, 0, 0, 0, 638, 0, 0, 639, 0, 0, 0, 640,
    0, 0, 641, 0, 0, 0, 0, 642, 0, 0, 643, 0, 644, 0, 0, 645, 0, 0, 0, 646, 0, 0, 647, 0, 0, 0, 0, 0, 648, 0, 0, 649,
    0, 0, 0, 650, 0, 0, 0, 651, 0, 0, 0, 0, 0, 0, 0, 0, 0, 652, 0, 653, 0, 0, 0, 0, 654, 0, 0, 655, 0, 0, 0, 0,
    0, 0, 0, 656, 657, 0, 0, 658, 0, 0, 0, 659, 0, 0, 660, 0, 0, 0, 661, 0, 0, 0, 662, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    663, 0, 664, 0, 0, 0, 0, 665, 0, 0, 666, 0, 0, 0, 0, 0, 0, 0, 667, 0, 0, 0, 0, 0, 0, 0, 0, 0, 668, 0, 0, 0,
    0, 0, 0, 0, 0, 669, 0, 0, 670, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 671, 0, 672, 0, 0, 0, 0,
    673, 0, 674, 0, 0, 0, 0, 0, 0, 0, 0, 0, 675, 0, 676, 0, 0, 0, 0, 0, 0, 0, 677, 0, 0, 0, 0, 678, 0, 0, 0, 0,
    679, 0, 680, 0, 0, 681, 0, 682, 0, 683, 0, 684, 0, 685, 0, 686, 0, 687, 0, 688, 0, 689, 0, 690, 0, 691, 0, 0, 0, 692, 0, 693,
    0, 0, 0, 694, 0, 0, 0, 0, 695, 0, 696, 0, 0, 0, 0, 697, 0, 0, 0, 0, 0, 698, 0, 0, 699, 0, 700, 0, 0, 0, 0, 701,
    0, 0, 702, 0, 703, 0, 0, 704, 0, 705, 0, 0, 0, 0, 706, 0, 707, 0, 0, 0, 708, 0, 0, 709, 0, 0, 0, 0, 710, 0, 0, 711,
    0, 712, 0, 713, 0, 714, 0, 715, 0, 716, 0, 0, 0, 717, 0, 718, 0, 0, 0, 719, 0, 0, 0, 0, 720, 0, 721, 0, 0, 0, 0, 722,
    0, 0, 0, 0, 0, 723, 0, 0, 724, 0, 725, 0, 0, 0, 0, 726, 0, 0, 727, 0, 728, 0, 0, 729, 0, 730, 0, 0, 0, 0, 731, 0,
    0, 0, 732, 0, 0, 733, 0, 0, 0, 734, 735, 0, 736, 0, 0, 0, 737, 0, 0, 738, 0, 739, 0, 740, 0, 0, 741, 0, 742, 0, 0, 0,
    743, 0, 0, 744, 0, 0, 0, 745, 746, 0, 747, 0, 0, 0, 748, 0, 0, 749, 0, 750, 0, 0, 0, 751, 0, 0, 752, 0, 753, 0, 754, 0,
    0, 0, 755, 0, 0, 756, 0, 0, 0, 757, 0, 0, 0, 758, 0, 0, 0, 0, 0, 0, 0, 0, 0, 759, 0, 760, 0, 0, 0, 0, 761, 0,
    0, 762, 0, 0, 0, 0, 0, 0, 0, 763, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 764, 0, 0, 765, 0, 0, 0, 766, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 767, 0, 768, 0, 769, 0, 770, 0, 771, 0, 0, 772, 0, 0, 0, 773, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 774, 0, 775, 0, 776, 0, 777, 0, 0, 778, 0, 0, 779, 0, 0, 0, 0, 0, 0, 0, 0, 780, 0, 0, 0, 0,
    781, 0, 782, 0, 0, 0, 0, 0, 0, 0, 0, 783, 0, 784, 0, 0, 0, 0, 0, 0, 0, 0, 785, 0, 786, 0, 787, 0, 0, 0, 0, 0,
    0, 0, 0, 788, 0, 0, 0, 0, 0, 789, 790, 0, 791, 0, 0, 0, 0, 792, 0, 0, 793, 0, 794, 0, 0, 795, 0, 0, 796, 0, 797, 0,
    798, 0, 0, 799, 0, 0, 800, 801, 0, 0, 0, 0, 0, 0, 802, 0, 803, 0, 0, 804, 0, 0, 0, 805, 0, 0, 0, 0, 0, 0, 806, 0,
    0, 807, 0, 0, 0, 0, 0, 0, 0, 0, 0, 808, 0, 0, 809, 0, 810, 0, 0, 0, 0, 0, 0, 811, 0, 0, 0, 812, 0, 0, 813, 0,
    0, 0, 0, 0, 814, 0, 815, 0, 0, 816, 0, 817, 0, 0, 818, 0, 819, 0, 0, 0, 0, 820, 0, 821, 0, 0, 0, 822, 0, 0, 0, 0,
    823, 0, 0, 0, 0, 824, 0, 0, 0, 0, 825, 0, 0, 0, 0, 0, 0, 0, 826, 0, 827, 0, 828, 0, 829, 0, 0, 830, 0, 0, 831, 0,
    832, 0, 833, 0, 0, 834, 0, 835, 0, 836, 0, 0, 837, 0, 0, 0, 838, 0, 0, 0, 839, 0, 0, 840, 0, 0, 0, 0, 841, 0, 842, 0,
    843, 0, 844, 0, 845, 0, 0, 846, 0, 0, 0, 0, 0, 847, 0, 0, 848, 0, 849, 0, 0, 0, 0, 0, 850, 0, 0, 851, 0, 852, 0, 0,
    0, 853, 854, 0, 855, 0, 0, 0, 0, 0, 0, 0, 0, 856, 0, 0, 0, 857, 0, 0, 0, 858, 0, 859, 0, 0, 860, 0, 0, 861, 0, 0,
    0, 862, 0, 863, 0, 0, 0, 0, 864, 0, 865, 0, 866, 0, 867, 0, 0, 868, 0, 0, 0, 0, 0, 869, 0, 870, 0, 0, 0, 871, 0, 0,
    0, 0, 0, 872, 0, 0, 0, 873, 0, 0, 0, 0, 874, 0, 875, 0, 876, 0, 877, 0, 0, 0, 0, 0, 0, 878, 0, 0, 879, 0, 0, 0,
    0, 880, 0, 0, 881, 0, 0, 0, 882, 0, 0, 883, 0, 0, 884, 0, 885, 0, 886, 0, 887, 0, 888, 0, 0, 0, 0, 0, 889, 0, 890, 0,
    0, 0, 0, 0, 891, 0, 892, 0, 0, 0, 0, 0, 893, 0, 894, 0, 0, 895, 0, 896, 0, 897, 898, 0, 0, 0, 0, 899, 0, 0, 0, 0,
    0, 900, 0, 901, 0, 902, 0, 0, 0, 903, 0, 0, 904, 905, 0, 0, 906, 0, 907, 0, 0, 0, 908, 0, 0, 0, 909, 910, 0, 0, 0, 911,
    0, 912, 0, 0, 913, 0, 0, 914, 0, 0, 915, 0, 0, 916, 0, 917, 0, 0, 0, 0, 0, 0, 918, 0, 0, 0, 0, 0, 0, 0, 919, 0,
    0, 920, 0, 0, 0, 0, 0, 921, 0, 0, 922, 0, 923, 0, 924, 0, 925, 0, 0, 0, 926, 0, 0, 0, 0, 927, 0, 928, 0, 929, 0, 0,
    930, 0, 931, 0, 932, 0, 0, 0, 0, 933, 0, 934, 0, 935, 0, 936, 0, 937, 0, 938, 0, 939, 0, 940, 0, 941, 0, 942, 0, 0, 0, 943,
    0, 944, 0, 945, 0, 946, 0, 947, 0, 948, 0, 949, 0, 0, 0, 0, 0, 950, 0, 951, 0, 952, 0, 953, 0, 954, 0, 955, 0, 956, 0, 957,
    0, 958, 0, 959, 0, 960, 0, 0, 0, 0, 961, 0, 962, 0, 963, 0, 964, 0, 0, 0, 0, 965, 0, 966, 0, 0, 0, 967, 0, 968, 0, 969,
    0, 970, 0, 0, 0, 0, 971, 0, 972, 0, 973, 0, 974, 0, 0, 975, 0, 976, 0, 977, 0, 0, 978, 979, 0, 980, 0, 0, 981, 0, 0, 0,
    982, 0, 0, 983, 0, 0, 984, 0, 0, 0, 985, 986, 0, 0, 987, 0, 0, 0, 988, 0, 989, 0, 990, 0, 991, 0, 992, 0, 0, 0, 993, 0,
    994, 0, 0, 0, 995, 0, 996, 0, 0, 0, 997, 0, 998, 0, 999, 0, 1000, 0, 0, 0, 1001, 0, 1002, 0, 0, 0, 1003, 0, 1004, 0, 0, 0,
    0, 1005, 0, 1006, 0, 0, 0, 1007, 0, 1008, 0, 0, 0, 1009, 0, 1010, 0, 0, 0, 0, 0, 1011, 0, 1012, 0, 0, 1013, 0, 0, 0, 0, 1014,
    0, 1015, 0, 1016, 0, 1017, 0, 1018, 0, 1019, 0, 0, 0, 0, 1020, 0, 0, 0, 0, 0, 1021, 0, 0, 0, 0, 1022, 0, 0, 0, 1023, 0, 1024,
    0, 0, 0, 0, 1025, 0, 0, 0, 1026, 0, 1027, 0, 0, 0, 1028, 0, 1029, 0, 0, 0, 0, 1030, 0, 0, 1031, 0, 1032, 0, 1033, 0, 1034, 0,
    1035, 0, 1036, 0, 1037, 0, 1038, 0, 1039, 0, 1040, 0, 1041, 0, 1042, 0, 1043, 0, 1044, 0, 0, 1045, 0, 1046, 0, 0, 1047, 0, 1048, 0, 0, 1049,
    0, 0, 1050, 0, 0, 0, 0, 0, 1051, 0, 1052, 0, 1053, 0, 1054, 0, 1055, 0, 1056, 0, 1057, 0, 1058, 0, 1059, 0, 1060, 0, 1061, 0, 1062, 0,
    1063, 0, 1064, 0, 1065, 0, 1066, 0, 1067, 0, 0, 1068, 0, 1069, 0, 0, 1070, 0, 1071, 0, 1072, 0, 0, 1073, 0, 0, 0, 0, 1074, 0, 1075, 0,
    0, 0, 1076, 0, 1077, 0, 1078, 0, 1079, 0, 1080, 0, 1081, 0, 1082, 0, 1083, 0, 1084, 0, 1085, 0, 0, 0, 1086, 0, 0, 1087, 0, 1088, 0, 0,
    1089, 0, 0, 0, 0, 0, 0, 0, 0, 1090, 0, 1091, 0, 1092, 0, 0, 0, 0, 0, 1093, 0, 1094, 0, 0, 0, 1095,
};
void recomp_unit_0071_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08920000u;
        entry_id = (entry_delta < 16360u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0071[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08920000;
    case 2u: goto L_08920004;
    case 3u: goto L_08920014;
    case 4u: goto L_08920024;
    case 5u: goto L_08920030;
    case 6u: goto L_08920040;
    case 7u: goto L_08920054;
    case 8u: goto L_08920074;
    case 9u: goto L_08920090;
    case 10u: goto L_089200D8;
    case 11u: goto L_08920108;
    case 12u: goto L_08920110;
    case 13u: goto L_08920128;
    case 14u: goto L_08920144;
    case 15u: goto L_08920160;
    case 16u: goto L_08920194;
    case 17u: goto L_089201C8;
    case 18u: goto L_089201FC;
    case 19u: goto L_08920230;
    case 20u: goto L_08920264;
    case 21u: goto L_08920298;
    case 22u: goto L_089202CC;
    case 23u: goto L_089202F8;
    case 24u: goto L_08920300;
    case 25u: goto L_08920320;
    case 26u: goto L_0892032C;
    case 27u: goto L_08920344;
    case 28u: goto L_08920350;
    case 29u: goto L_08920370;
    case 30u: goto L_08920388;
    case 31u: goto L_08920394;
    case 32u: goto L_089203B0;
    case 33u: goto L_089203BC;
    case 34u: goto L_08920420;
    case 35u: goto L_08920428;
    case 36u: goto L_08920438;
    case 37u: goto L_0892048C;
    case 38u: goto L_08920498;
    case 39u: goto L_089204A0;
    case 40u: goto L_089204A8;
    case 41u: goto L_089204B0;
    case 42u: goto L_089204C8;
    case 43u: goto L_08920508;
    case 44u: goto L_08920510;
    case 45u: goto L_08920518;
    case 46u: goto L_08920520;
    case 47u: goto L_0892052C;
    case 48u: goto L_08920538;
    case 49u: goto L_08920610;
    case 50u: goto L_08920628;
    case 51u: goto L_08920630;
    case 52u: goto L_08920638;
    case 53u: goto L_08920644;
    case 54u: goto L_08920648;
    case 55u: goto L_089206A8;
    case 56u: goto L_089206B8;
    case 57u: goto L_089206C4;
    case 58u: goto L_089206CC;
    case 59u: goto L_089206D4;
    case 60u: goto L_089206DC;
    case 61u: goto L_08920708;
    case 62u: goto L_08920714;
    case 63u: goto L_08920720;
    case 64u: goto L_0892073C;
    case 65u: goto L_08920744;
    case 66u: goto L_0892074C;
    case 67u: goto L_08920754;
    case 68u: goto L_0892077C;
    case 69u: goto L_08920784;
    case 70u: goto L_089207A8;
    case 71u: goto L_089207B8;
    case 72u: goto L_089207C8;
    case 73u: goto L_089207D8;
    case 74u: goto L_089207E8;
    case 75u: goto L_089207F8;
    case 76u: goto L_089207FC;
    case 77u: goto L_08920818;
    case 78u: goto L_08920828;
    case 79u: goto L_08920838;
    case 80u: goto L_08920848;
    case 81u: goto L_08920864;
    case 82u: goto L_08920870;
    case 83u: goto L_08920878;
    case 84u: goto L_08920880;
    case 85u: goto L_08920890;
    case 86u: goto L_08920894;
    case 87u: goto L_089208C8;
    case 88u: goto L_089208D4;
    case 89u: goto L_089208EC;
    case 90u: goto L_089208F4;
    case 91u: goto L_089208FC;
    case 92u: goto L_08920914;
    case 93u: goto L_08920918;
    case 94u: goto L_08920924;
    case 95u: goto L_0892092C;
    case 96u: goto L_0892093C;
    case 97u: goto L_08920944;
    case 98u: goto L_08920954;
    case 99u: goto L_0892095C;
    case 100u: goto L_08920964;
    case 101u: goto L_0892097C;
    case 102u: goto L_08920984;
    case 103u: goto L_0892098C;
    case 104u: goto L_089209A8;
    case 105u: goto L_089209C0;
    case 106u: goto L_089209D8;
    case 107u: goto L_089209E8;
    case 108u: goto L_089209F0;
    case 109u: goto L_089209F8;
    case 110u: goto L_08920A2C;
    case 111u: goto L_08920A38;
    case 112u: goto L_08920A48;
    case 113u: goto L_08920A50;
    case 114u: goto L_08920A58;
    case 115u: goto L_08920A70;
    case 116u: goto L_08920A94;
    case 117u: goto L_08920AC8;
    case 118u: goto L_08920AD4;
    case 119u: goto L_08920AF8;
    case 120u: goto L_08920B00;
    case 121u: goto L_08920B1C;
    case 122u: goto L_08920B28;
    case 123u: goto L_08920B30;
    case 124u: goto L_08920B40;
    case 125u: goto L_08920B8C;
    case 126u: goto L_08920BB0;
    case 127u: goto L_08920BB4;
    case 128u: goto L_08920BD4;
    case 129u: goto L_08920BF0;
    case 130u: goto L_08920BF8;
    case 131u: goto L_08920C00;
    case 132u: goto L_08920C18;
    case 133u: goto L_08920C20;
    case 134u: goto L_08920C38;
    case 135u: goto L_08920C50;
    case 136u: goto L_08920C5C;
    case 137u: goto L_08920C64;
    case 138u: goto L_08920C68;
    case 139u: goto L_08920C84;
    case 140u: goto L_08920C98;
    case 141u: goto L_08920CA0;
    case 142u: goto L_08920CA4;
    case 143u: goto L_08920CAC;
    case 144u: goto L_08920CB0;
    case 145u: goto L_08920D9C;
    case 146u: goto L_08920DB0;
    case 147u: goto L_08920DB8;
    case 148u: goto L_08920DC0;
    case 149u: goto L_08920DC4;
    case 150u: goto L_08920DCC;
    case 151u: goto L_08920DF8;
    case 152u: goto L_08920E0C;
    case 153u: goto L_08920E14;
    case 154u: goto L_08920E1C;
    case 155u: goto L_08920E20;
    case 156u: goto L_08920E70;
    case 157u: goto L_08920E78;
    case 158u: goto L_08920E98;
    case 159u: goto L_08920EA4;
    case 160u: goto L_08920EAC;
    case 161u: goto L_08920EC0;
    case 162u: goto L_08920EDC;
    case 163u: goto L_08920EE8;
    case 164u: goto L_08920F04;
    case 165u: goto L_08920F20;
    case 166u: goto L_08920F4C;
    case 167u: goto L_08920F54;
    case 168u: goto L_08920F68;
    case 169u: goto L_08920F78;
    case 170u: goto L_08920F80;
    case 171u: goto L_08920F8C;
    case 172u: goto L_08920F98;
    case 173u: goto L_08920FA4;
    case 174u: goto L_08920FC0;
    case 175u: goto L_08920FDC;
    case 176u: goto L_08920FE4;
    case 177u: goto L_08920FF0;
    case 178u: goto L_08920FFC;
    case 179u: goto L_08921010;
    case 180u: goto L_08921018;
    case 181u: goto L_08921024;
    case 182u: goto L_08921038;
    case 183u: goto L_08921048;
    case 184u: goto L_08921054;
    case 185u: goto L_0892105C;
    case 186u: goto L_08921074;
    case 187u: goto L_08921078;
    case 188u: goto L_08921090;
    case 189u: goto L_0892109C;
    case 190u: goto L_089210A8;
    case 191u: goto L_089210B8;
    case 192u: goto L_089210CC;
    case 193u: goto L_089210D8;
    case 194u: goto L_089210F0;
    case 195u: goto L_089210F8;
    case 196u: goto L_08921104;
    case 197u: goto L_08921110;
    case 198u: goto L_08921118;
    case 199u: goto L_08921124;
    case 200u: goto L_0892112C;
    case 201u: goto L_08921148;
    case 202u: goto L_08921150;
    case 203u: goto L_08921168;
    case 204u: goto L_08921170;
    case 205u: goto L_0892117C;
    case 206u: goto L_08921184;
    case 207u: goto L_08921190;
    case 208u: goto L_08921198;
    case 209u: goto L_089211A0;
    case 210u: goto L_089211B0;
    case 211u: goto L_089211C8;
    case 212u: goto L_089211D4;
    case 213u: goto L_089211DC;
    case 214u: goto L_089211E4;
    case 215u: goto L_089211F4;
    case 216u: goto L_089211FC;
    case 217u: goto L_08921204;
    case 218u: goto L_08921210;
    case 219u: goto L_08921218;
    case 220u: goto L_08921220;
    case 221u: goto L_08921228;
    case 222u: goto L_08921230;
    case 223u: goto L_08921238;
    case 224u: goto L_08921240;
    case 225u: goto L_0892124C;
    case 226u: goto L_08921254;
    case 227u: goto L_08921260;
    case 228u: goto L_08921268;
    case 229u: goto L_08921274;
    case 230u: goto L_0892127C;
    case 231u: goto L_08921288;
    case 232u: goto L_08921290;
    case 233u: goto L_0892129C;
    case 234u: goto L_089212A4;
    case 235u: goto L_089212B0;
    case 236u: goto L_089212B8;
    case 237u: goto L_089212C4;
    case 238u: goto L_089212CC;
    case 239u: goto L_089212D8;
    case 240u: goto L_089212E0;
    case 241u: goto L_089212EC;
    case 242u: goto L_089212F4;
    case 243u: goto L_08921300;
    case 244u: goto L_0892130C;
    case 245u: goto L_08921314;
    case 246u: goto L_0892131C;
    case 247u: goto L_08921324;
    case 248u: goto L_08921330;
    case 249u: goto L_08921338;
    case 250u: goto L_08921354;
    case 251u: goto L_08921360;
    case 252u: goto L_08921368;
    case 253u: goto L_08921370;
    case 254u: goto L_08921378;
    case 255u: goto L_0892138C;
    case 256u: goto L_08921394;
    case 257u: goto L_089213A4;
    case 258u: goto L_089213AC;
    case 259u: goto L_089213B4;
    case 260u: goto L_089213BC;
    case 261u: goto L_089213C8;
    case 262u: goto L_089213D0;
    case 263u: goto L_08921404;
    case 264u: goto L_0892140C;
    case 265u: goto L_0892141C;
    case 266u: goto L_08921424;
    case 267u: goto L_0892142C;
    case 268u: goto L_0892143C;
    case 269u: goto L_0892145C;
    case 270u: goto L_08921464;
    case 271u: goto L_0892146C;
    case 272u: goto L_0892147C;
    case 273u: goto L_08921488;
    case 274u: goto L_08921490;
    case 275u: goto L_0892149C;
    case 276u: goto L_089214CC;
    case 277u: goto L_089214D4;
    case 278u: goto L_089214E4;
    case 279u: goto L_089214F0;
    case 280u: goto L_089214F8;
    case 281u: goto L_08921504;
    case 282u: goto L_08921534;
    case 283u: goto L_0892153C;
    case 284u: goto L_08921544;
    case 285u: goto L_08921554;
    case 286u: goto L_08921560;
    case 287u: goto L_08921568;
    case 288u: goto L_08921570;
    case 289u: goto L_08921578;
    case 290u: goto L_08921580;
    case 291u: goto L_08921588;
    case 292u: goto L_08921590;
    case 293u: goto L_08921598;
    case 294u: goto L_0892159C;
    case 295u: goto L_089215A4;
    case 296u: goto L_089215AC;
    case 297u: goto L_089215C4;
    case 298u: goto L_089215D4;
    case 299u: goto L_089215DC;
    case 300u: goto L_089215EC;
    case 301u: goto L_089215F4;
    case 302u: goto L_08921600;
    case 303u: goto L_08921618;
    case 304u: goto L_08921624;
    case 305u: goto L_0892162C;
    case 306u: goto L_08921634;
    case 307u: goto L_0892163C;
    case 308u: goto L_08921644;
    case 309u: goto L_0892164C;
    case 310u: goto L_08921658;
    case 311u: goto L_08921664;
    case 312u: goto L_0892166C;
    case 313u: goto L_08921674;
    case 314u: goto L_08921680;
    case 315u: goto L_0892168C;
    case 316u: goto L_08921694;
    case 317u: goto L_0892169C;
    case 318u: goto L_089216A8;
    case 319u: goto L_089216B4;
    case 320u: goto L_089216C4;
    case 321u: goto L_089216DC;
    case 322u: goto L_089216E8;
    case 323u: goto L_089216EC;
    case 324u: goto L_08921700;
    case 325u: goto L_08921708;
    case 326u: goto L_08921714;
    case 327u: goto L_0892171C;
    case 328u: goto L_08921728;
    case 329u: goto L_08921730;
    case 330u: goto L_08921738;
    case 331u: goto L_08921744;
    case 332u: goto L_0892174C;
    case 333u: goto L_08921758;
    case 334u: goto L_08921760;
    case 335u: goto L_08921768;
    case 336u: goto L_08921784;
    case 337u: goto L_08921794;
    case 338u: goto L_0892179C;
    case 339u: goto L_089217AC;
    case 340u: goto L_089217B8;
    case 341u: goto L_089217D0;
    case 342u: goto L_089217DC;
    case 343u: goto L_089217E4;
    case 344u: goto L_089217EC;
    case 345u: goto L_089217F4;
    case 346u: goto L_089217FC;
    case 347u: goto L_08921804;
    case 348u: goto L_08921810;
    case 349u: goto L_0892181C;
    case 350u: goto L_08921824;
    case 351u: goto L_0892182C;
    case 352u: goto L_08921838;
    case 353u: goto L_08921844;
    case 354u: goto L_0892184C;
    case 355u: goto L_08921854;
    case 356u: goto L_08921860;
    case 357u: goto L_0892186C;
    case 358u: goto L_08921878;
    case 359u: goto L_08921880;
    case 360u: goto L_08921888;
    case 361u: goto L_08921890;
    case 362u: goto L_08921898;
    case 363u: goto L_089218A4;
    case 364u: goto L_089218AC;
    case 365u: goto L_089218B4;
    case 366u: goto L_089218BC;
    case 367u: goto L_089218D8;
    case 368u: goto L_089218E0;
    case 369u: goto L_089218E8;
    case 370u: goto L_089218F0;
    case 371u: goto L_0892190C;
    case 372u: goto L_08921914;
    case 373u: goto L_0892191C;
    case 374u: goto L_08921928;
    case 375u: goto L_08921930;
    case 376u: goto L_08921938;
    case 377u: goto L_08921940;
    case 378u: goto L_08921948;
    case 379u: goto L_08921954;
    case 380u: goto L_08921960;
    case 381u: goto L_08921974;
    case 382u: goto L_08921990;
    case 383u: goto L_0892199C;
    case 384u: goto L_089219AC;
    case 385u: goto L_089219CC;
    case 386u: goto L_089219DC;
    case 387u: goto L_089219E4;
    case 388u: goto L_089219EC;
    case 389u: goto L_089219F8;
    case 390u: goto L_08921A08;
    case 391u: goto L_08921A10;
    case 392u: goto L_08921A18;
    case 393u: goto L_08921A20;
    case 394u: goto L_08921A2C;
    case 395u: goto L_08921A34;
    case 396u: goto L_08921A40;
    case 397u: goto L_08921A48;
    case 398u: goto L_08921A50;
    case 399u: goto L_08921A58;
    case 400u: goto L_08921A70;
    case 401u: goto L_08921A80;
    case 402u: goto L_08921A90;
    case 403u: goto L_08921A98;
    case 404u: goto L_08921AA0;
    case 405u: goto L_08921AA8;
    case 406u: goto L_08921AC4;
    case 407u: goto L_08921ACC;
    case 408u: goto L_08921AD8;
    case 409u: goto L_08921AF0;
    case 410u: goto L_08921AFC;
    case 411u: goto L_08921B04;
    case 412u: goto L_08921B1C;
    case 413u: goto L_08921B28;
    case 414u: goto L_08921B34;
    case 415u: goto L_08921B3C;
    case 416u: goto L_08921B44;
    case 417u: goto L_08921B50;
    case 418u: goto L_08921B58;
    case 419u: goto L_08921B64;
    case 420u: goto L_08921B70;
    case 421u: goto L_08921B88;
    case 422u: goto L_08921B90;
    case 423u: goto L_08921B9C;
    case 424u: goto L_08921BA8;
    case 425u: goto L_08921BB0;
    case 426u: goto L_08921BB8;
    case 427u: goto L_08921BC4;
    case 428u: goto L_08921BCC;
    case 429u: goto L_08921BD4;
    case 430u: goto L_08921BDC;
    case 431u: goto L_08921BE8;
    case 432u: goto L_08921C00;
    case 433u: goto L_08921C08;
    case 434u: goto L_08921C10;
    case 435u: goto L_08921C18;
    case 436u: goto L_08921C24;
    case 437u: goto L_08921C2C;
    case 438u: goto L_08921C38;
    case 439u: goto L_08921C3C;
    case 440u: goto L_08921C58;
    case 441u: goto L_08921C68;
    case 442u: goto L_08921C74;
    case 443u: goto L_08921C84;
    case 444u: goto L_08921C88;
    case 445u: goto L_08921C90;
    case 446u: goto L_08921C98;
    case 447u: goto L_08921CB4;
    case 448u: goto L_08921CBC;
    case 449u: goto L_08921CC4;
    case 450u: goto L_08921CDC;
    case 451u: goto L_08921CE4;
    case 452u: goto L_08921CF4;
    case 453u: goto L_08921D00;
    case 454u: goto L_08921D0C;
    case 455u: goto L_08921D1C;
    case 456u: goto L_08921D28;
    case 457u: goto L_08921D3C;
    case 458u: goto L_08921D48;
    case 459u: goto L_08921D50;
    case 460u: goto L_08921D58;
    case 461u: goto L_08921D60;
    case 462u: goto L_08921D68;
    case 463u: goto L_08921D78;
    case 464u: goto L_08921D90;
    case 465u: goto L_08921DA0;
    case 466u: goto L_08921DA8;
    case 467u: goto L_08921DC0;
    case 468u: goto L_08921DC8;
    case 469u: goto L_08921DD4;
    case 470u: goto L_08921DEC;
    case 471u: goto L_08921DF4;
    case 472u: goto L_08921E04;
    case 473u: goto L_08921E0C;
    case 474u: goto L_08921E28;
    case 475u: goto L_08921E40;
    case 476u: goto L_08921E4C;
    case 477u: goto L_08921E5C;
    case 478u: goto L_08921E80;
    case 479u: goto L_08921E90;
    case 480u: goto L_08921EA0;
    case 481u: goto L_08921ECC;
    case 482u: goto L_08921ED8;
    case 483u: goto L_08921EE4;
    case 484u: goto L_08921EEC;
    case 485u: goto L_08921EF8;
    case 486u: goto L_08921F0C;
    case 487u: goto L_08921F18;
    case 488u: goto L_08921F28;
    case 489u: goto L_08921F38;
    case 490u: goto L_08921F40;
    case 491u: goto L_08921F60;
    case 492u: goto L_08921F68;
    case 493u: goto L_08921F90;
    case 494u: goto L_08921FCC;
    case 495u: goto L_08921FD4;
    case 496u: goto L_08921FDC;
    case 497u: goto L_08921FF4;
    case 498u: goto L_08922030;
    case 499u: goto L_08922038;
    case 500u: goto L_08922048;
    case 501u: goto L_08922054;
    case 502u: goto L_0892205C;
    case 503u: goto L_08922064;
    case 504u: goto L_0892206C;
    case 505u: goto L_08922074;
    case 506u: goto L_08922080;
    case 507u: goto L_08922088;
    case 508u: goto L_08922094;
    case 509u: goto L_089220A0;
    case 510u: goto L_089220B4;
    case 511u: goto L_089220BC;
    case 512u: goto L_089220C8;
    case 513u: goto L_089220DC;
    case 514u: goto L_089220EC;
    case 515u: goto L_0892210C;
    case 516u: goto L_08922124;
    case 517u: goto L_0892212C;
    case 518u: goto L_08922134;
    case 519u: goto L_0892213C;
    case 520u: goto L_0892214C;
    case 521u: goto L_08922154;
    case 522u: goto L_08922164;
    case 523u: goto L_0892218C;
    case 524u: goto L_08922198;
    case 525u: goto L_089221C0;
    case 526u: goto L_089221D0;
    case 527u: goto L_089221DC;
    case 528u: goto L_089221F0;
    case 529u: goto L_08922200;
    case 530u: goto L_0892220C;
    case 531u: goto L_08922238;
    case 532u: goto L_0892225C;
    case 533u: goto L_08922270;
    case 534u: goto L_08922278;
    case 535u: goto L_08922288;
    case 536u: goto L_08922294;
    case 537u: goto L_089222B8;
    case 538u: goto L_089222C4;
    case 539u: goto L_089222D8;
    case 540u: goto L_089222E0;
    case 541u: goto L_089222EC;
    case 542u: goto L_089222F4;
    case 543u: goto L_089222FC;
    case 544u: goto L_08922304;
    case 545u: goto L_08922314;
    case 546u: goto L_08922334;
    case 547u: goto L_08922344;
    case 548u: goto L_08922350;
    case 549u: goto L_08922374;
    case 550u: goto L_08922384;
    case 551u: goto L_08922390;
    case 552u: goto L_089223A4;
    case 553u: goto L_089223AC;
    case 554u: goto L_089223B4;
    case 555u: goto L_089223C4;
    case 556u: goto L_089223D0;
    case 557u: goto L_089223F4;
    case 558u: goto L_08922404;
    case 559u: goto L_08922410;
    case 560u: goto L_08922424;
    case 561u: goto L_0892242C;
    case 562u: goto L_08922450;
    case 563u: goto L_0892245C;
    case 564u: goto L_08922464;
    case 565u: goto L_08922470;
    case 566u: goto L_08922478;
    case 567u: goto L_08922488;
    case 568u: goto L_089224A4;
    case 569u: goto L_089224B4;
    case 570u: goto L_089224BC;
    case 571u: goto L_089224E8;
    case 572u: goto L_0892250C;
    case 573u: goto L_0892251C;
    case 574u: goto L_08922528;
    case 575u: goto L_08922538;
    case 576u: goto L_08922544;
    case 577u: goto L_08922558;
    case 578u: goto L_08922564;
    case 579u: goto L_08922574;
    case 580u: goto L_0892257C;
    case 581u: goto L_08922584;
    case 582u: goto L_0892258C;
    case 583u: goto L_08922598;
    case 584u: goto L_089225A0;
    case 585u: goto L_089225B8;
    case 586u: goto L_089225C8;
    case 587u: goto L_089225D0;
    case 588u: goto L_089225E8;
    case 589u: goto L_089225F0;
    case 590u: goto L_089225F8;
    case 591u: goto L_08922610;
    case 592u: goto L_08922620;
    case 593u: goto L_08922628;
    case 594u: goto L_08922640;
    case 595u: goto L_08922648;
    case 596u: goto L_08922658;
    case 597u: goto L_08922660;
    case 598u: goto L_08922670;
    case 599u: goto L_08922678;
    case 600u: goto L_08922688;
    case 601u: goto L_089226A0;
    case 602u: goto L_089226A8;
    case 603u: goto L_089226B8;
    case 604u: goto L_089226C0;
    case 605u: goto L_089226D0;
    case 606u: goto L_089226D8;
    case 607u: goto L_089226E0;
    case 608u: goto L_089226EC;
    case 609u: goto L_089226F8;
    case 610u: goto L_08922714;
    case 611u: goto L_08922724;
    case 612u: goto L_0892272C;
    case 613u: goto L_08922734;
    case 614u: goto L_08922744;
    case 615u: goto L_08922754;
    case 616u: goto L_0892275C;
    case 617u: goto L_08922764;
    case 618u: goto L_0892276C;
    case 619u: goto L_08922780;
    case 620u: goto L_0892278C;
    case 621u: goto L_0892279C;
    case 622u: goto L_089227A4;
    case 623u: goto L_089227B4;
    case 624u: goto L_089227BC;
    case 625u: goto L_089227CC;
    case 626u: goto L_089227D8;
    case 627u: goto L_089227E8;
    case 628u: goto L_089227F0;
    case 629u: goto L_08922800;
    case 630u: goto L_08922808;
    case 631u: goto L_08922818;
    case 632u: goto L_08922820;
    case 633u: goto L_08922828;
    case 634u: goto L_08922830;
    case 635u: goto L_08922838;
    case 636u: goto L_08922840;
    case 637u: goto L_08922850;
    case 638u: goto L_08922860;
    case 639u: goto L_0892286C;
    case 640u: goto L_0892287C;
    case 641u: goto L_08922888;
    case 642u: goto L_0892289C;
    case 643u: goto L_089228A8;
    case 644u: goto L_089228B0;
    case 645u: goto L_089228BC;
    case 646u: goto L_089228CC;
    case 647u: goto L_089228D8;
    case 648u: goto L_089228F0;
    case 649u: goto L_089228FC;
    case 650u: goto L_0892290C;
    case 651u: goto L_0892291C;
    case 652u: goto L_08922944;
    case 653u: goto L_0892294C;
    case 654u: goto L_08922960;
    case 655u: goto L_0892296C;
    case 656u: goto L_0892298C;
    case 657u: goto L_08922990;
    case 658u: goto L_0892299C;
    case 659u: goto L_089229AC;
    case 660u: goto L_089229B8;
    case 661u: goto L_089229C8;
    case 662u: goto L_089229D8;
    case 663u: goto L_08922A00;
    case 664u: goto L_08922A08;
    case 665u: goto L_08922A1C;
    case 666u: goto L_08922A28;
    case 667u: goto L_08922A48;
    case 668u: goto L_08922A70;
    case 669u: goto L_08922A94;
    case 670u: goto L_08922AA0;
    case 671u: goto L_08922AE4;
    case 672u: goto L_08922AEC;
    case 673u: goto L_08922B00;
    case 674u: goto L_08922B08;
    case 675u: goto L_08922B30;
    case 676u: goto L_08922B38;
    case 677u: goto L_08922B58;
    case 678u: goto L_08922B6C;
    case 679u: goto L_08922B80;
    case 680u: goto L_08922B88;
    case 681u: goto L_08922B94;
    case 682u: goto L_08922B9C;
    case 683u: goto L_08922BA4;
    case 684u: goto L_08922BAC;
    case 685u: goto L_08922BB4;
    case 686u: goto L_08922BBC;
    case 687u: goto L_08922BC4;
    case 688u: goto L_08922BCC;
    case 689u: goto L_08922BD4;
    case 690u: goto L_08922BDC;
    case 691u: goto L_08922BE4;
    case 692u: goto L_08922BF4;
    case 693u: goto L_08922BFC;
    case 694u: goto L_08922C0C;
    case 695u: goto L_08922C20;
    case 696u: goto L_08922C28;
    case 697u: goto L_08922C3C;
    case 698u: goto L_08922C54;
    case 699u: goto L_08922C60;
    case 700u: goto L_08922C68;
    case 701u: goto L_08922C7C;
    case 702u: goto L_08922C88;
    case 703u: goto L_08922C90;
    case 704u: goto L_08922C9C;
    case 705u: goto L_08922CA4;
    case 706u: goto L_08922CB8;
    case 707u: goto L_08922CC0;
    case 708u: goto L_08922CD0;
    case 709u: goto L_08922CDC;
    case 710u: goto L_08922CF0;
    case 711u: goto L_08922CFC;
    case 712u: goto L_08922D04;
    case 713u: goto L_08922D0C;
    case 714u: goto L_08922D14;
    case 715u: goto L_08922D1C;
    case 716u: goto L_08922D24;
    case 717u: goto L_08922D34;
    case 718u: goto L_08922D3C;
    case 719u: goto L_08922D4C;
    case 720u: goto L_08922D60;
    case 721u: goto L_08922D68;
    case 722u: goto L_08922D7C;
    case 723u: goto L_08922D94;
    case 724u: goto L_08922DA0;
    case 725u: goto L_08922DA8;
    case 726u: goto L_08922DBC;
    case 727u: goto L_08922DC8;
    case 728u: goto L_08922DD0;
    case 729u: goto L_08922DDC;
    case 730u: goto L_08922DE4;
    case 731u: goto L_08922DF8;
    case 732u: goto L_08922E08;
    case 733u: goto L_08922E14;
    case 734u: goto L_08922E24;
    case 735u: goto L_08922E28;
    case 736u: goto L_08922E30;
    case 737u: goto L_08922E40;
    case 738u: goto L_08922E4C;
    case 739u: goto L_08922E54;
    case 740u: goto L_08922E5C;
    case 741u: goto L_08922E68;
    case 742u: goto L_08922E70;
    case 743u: goto L_08922E80;
    case 744u: goto L_08922E8C;
    case 745u: goto L_08922E9C;
    case 746u: goto L_08922EA0;
    case 747u: goto L_08922EA8;
    case 748u: goto L_08922EB8;
    case 749u: goto L_08922EC4;
    case 750u: goto L_08922ECC;
    case 751u: goto L_08922EDC;
    case 752u: goto L_08922EE8;
    case 753u: goto L_08922EF0;
    case 754u: goto L_08922EF8;
    case 755u: goto L_08922F08;
    case 756u: goto L_08922F14;
    case 757u: goto L_08922F24;
    case 758u: goto L_08922F34;
    case 759u: goto L_08922F5C;
    case 760u: goto L_08922F64;
    case 761u: goto L_08922F78;
    case 762u: goto L_08922F84;
    case 763u: goto L_08922FA4;
    case 764u: goto L_08922FD0;
    case 765u: goto L_08922FDC;
    case 766u: goto L_08922FEC;
    case 767u: goto L_08923024;
    case 768u: goto L_0892302C;
    case 769u: goto L_08923034;
    case 770u: goto L_0892303C;
    case 771u: goto L_08923044;
    case 772u: goto L_08923050;
    case 773u: goto L_08923060;
    case 774u: goto L_08923098;
    case 775u: goto L_089230A0;
    case 776u: goto L_089230A8;
    case 777u: goto L_089230B0;
    case 778u: goto L_089230BC;
    case 779u: goto L_089230C8;
    case 780u: goto L_089230EC;
    case 781u: goto L_08923100;
    case 782u: goto L_08923108;
    case 783u: goto L_0892312C;
    case 784u: goto L_08923134;
    case 785u: goto L_08923158;
    case 786u: goto L_08923160;
    case 787u: goto L_08923168;
    case 788u: goto L_0892318C;
    case 789u: goto L_089231A4;
    case 790u: goto L_089231A8;
    case 791u: goto L_089231B0;
    case 792u: goto L_089231C4;
    case 793u: goto L_089231D0;
    case 794u: goto L_089231D8;
    case 795u: goto L_089231E4;
    case 796u: goto L_089231F0;
    case 797u: goto L_089231F8;
    case 798u: goto L_08923200;
    case 799u: goto L_0892320C;
    case 800u: goto L_08923218;
    case 801u: goto L_0892321C;
    case 802u: goto L_08923238;
    case 803u: goto L_08923240;
    case 804u: goto L_0892324C;
    case 805u: goto L_0892325C;
    case 806u: goto L_08923278;
    case 807u: goto L_08923284;
    case 808u: goto L_089232AC;
    case 809u: goto L_089232B8;
    case 810u: goto L_089232C0;
    case 811u: goto L_089232DC;
    case 812u: goto L_089232EC;
    case 813u: goto L_089232F8;
    case 814u: goto L_08923310;
    case 815u: goto L_08923318;
    case 816u: goto L_08923324;
    case 817u: goto L_0892332C;
    case 818u: goto L_08923338;
    case 819u: goto L_08923340;
    case 820u: goto L_08923354;
    case 821u: goto L_0892335C;
    case 822u: goto L_0892336C;
    case 823u: goto L_08923380;
    case 824u: goto L_08923394;
    case 825u: goto L_089233A8;
    case 826u: goto L_089233C8;
    case 827u: goto L_089233D0;
    case 828u: goto L_089233D8;
    case 829u: goto L_089233E0;
    case 830u: goto L_089233EC;
    case 831u: goto L_089233F8;
    case 832u: goto L_08923400;
    case 833u: goto L_08923408;
    case 834u: goto L_08923414;
    case 835u: goto L_0892341C;
    case 836u: goto L_08923424;
    case 837u: goto L_08923430;
    case 838u: goto L_08923440;
    case 839u: goto L_08923450;
    case 840u: goto L_0892345C;
    case 841u: goto L_08923470;
    case 842u: goto L_08923478;
    case 843u: goto L_08923480;
    case 844u: goto L_08923488;
    case 845u: goto L_08923490;
    case 846u: goto L_0892349C;
    case 847u: goto L_089234B4;
    case 848u: goto L_089234C0;
    case 849u: goto L_089234C8;
    case 850u: goto L_089234E0;
    case 851u: goto L_089234EC;
    case 852u: goto L_089234F4;
    case 853u: goto L_08923504;
    case 854u: goto L_08923508;
    case 855u: goto L_08923510;
    case 856u: goto L_08923534;
    case 857u: goto L_08923544;
    case 858u: goto L_08923554;
    case 859u: goto L_0892355C;
    case 860u: goto L_08923568;
    case 861u: goto L_08923574;
    case 862u: goto L_08923584;
    case 863u: goto L_0892358C;
    case 864u: goto L_089235A0;
    case 865u: goto L_089235A8;
    case 866u: goto L_089235B0;
    case 867u: goto L_089235B8;
    case 868u: goto L_089235C4;
    case 869u: goto L_089235DC;
    case 870u: goto L_089235E4;
    case 871u: goto L_089235F4;
    case 872u: goto L_0892360C;
    case 873u: goto L_0892361C;
    case 874u: goto L_08923630;
    case 875u: goto L_08923638;
    case 876u: goto L_08923640;
    case 877u: goto L_08923648;
    case 878u: goto L_08923664;
    case 879u: goto L_08923670;
    case 880u: goto L_08923684;
    case 881u: goto L_08923690;
    case 882u: goto L_089236A0;
    case 883u: goto L_089236AC;
    case 884u: goto L_089236B8;
    case 885u: goto L_089236C0;
    case 886u: goto L_089236C8;
    case 887u: goto L_089236D0;
    case 888u: goto L_089236D8;
    case 889u: goto L_089236F0;
    case 890u: goto L_089236F8;
    case 891u: goto L_08923710;
    case 892u: goto L_08923718;
    case 893u: goto L_08923730;
    case 894u: goto L_08923738;
    case 895u: goto L_08923744;
    case 896u: goto L_0892374C;
    case 897u: goto L_08923754;
    case 898u: goto L_08923758;
    case 899u: goto L_0892376C;
    case 900u: goto L_08923784;
    case 901u: goto L_0892378C;
    case 902u: goto L_08923794;
    case 903u: goto L_089237A4;
    case 904u: goto L_089237B0;
    case 905u: goto L_089237B4;
    case 906u: goto L_089237C0;
    case 907u: goto L_089237C8;
    case 908u: goto L_089237D8;
    case 909u: goto L_089237E8;
    case 910u: goto L_089237EC;
    case 911u: goto L_089237FC;
    case 912u: goto L_08923804;
    case 913u: goto L_08923810;
    case 914u: goto L_0892381C;
    case 915u: goto L_08923828;
    case 916u: goto L_08923834;
    case 917u: goto L_0892383C;
    case 918u: goto L_08923858;
    case 919u: goto L_08923878;
    case 920u: goto L_08923884;
    case 921u: goto L_0892389C;
    case 922u: goto L_089238A8;
    case 923u: goto L_089238B0;
    case 924u: goto L_089238B8;
    case 925u: goto L_089238C0;
    case 926u: goto L_089238D0;
    case 927u: goto L_089238E4;
    case 928u: goto L_089238EC;
    case 929u: goto L_089238F4;
    case 930u: goto L_08923900;
    case 931u: goto L_08923908;
    case 932u: goto L_08923910;
    case 933u: goto L_08923924;
    case 934u: goto L_0892392C;
    case 935u: goto L_08923934;
    case 936u: goto L_0892393C;
    case 937u: goto L_08923944;
    case 938u: goto L_0892394C;
    case 939u: goto L_08923954;
    case 940u: goto L_0892395C;
    case 941u: goto L_08923964;
    case 942u: goto L_0892396C;
    case 943u: goto L_0892397C;
    case 944u: goto L_08923984;
    case 945u: goto L_0892398C;
    case 946u: goto L_08923994;
    case 947u: goto L_0892399C;
    case 948u: goto L_089239A4;
    case 949u: goto L_089239AC;
    case 950u: goto L_089239C4;
    case 951u: goto L_089239CC;
    case 952u: goto L_089239D4;
    case 953u: goto L_089239DC;
    case 954u: goto L_089239E4;
    case 955u: goto L_089239EC;
    case 956u: goto L_089239F4;
    case 957u: goto L_089239FC;
    case 958u: goto L_08923A04;
    case 959u: goto L_08923A0C;
    case 960u: goto L_08923A14;
    case 961u: goto L_08923A28;
    case 962u: goto L_08923A30;
    case 963u: goto L_08923A38;
    case 964u: goto L_08923A40;
    case 965u: goto L_08923A54;
    case 966u: goto L_08923A5C;
    case 967u: goto L_08923A6C;
    case 968u: goto L_08923A74;
    case 969u: goto L_08923A7C;
    case 970u: goto L_08923A84;
    case 971u: goto L_08923A98;
    case 972u: goto L_08923AA0;
    case 973u: goto L_08923AA8;
    case 974u: goto L_08923AB0;
    case 975u: goto L_08923ABC;
    case 976u: goto L_08923AC4;
    case 977u: goto L_08923ACC;
    case 978u: goto L_08923AD8;
    case 979u: goto L_08923ADC;
    case 980u: goto L_08923AE4;
    case 981u: goto L_08923AF0;
    case 982u: goto L_08923B00;
    case 983u: goto L_08923B0C;
    case 984u: goto L_08923B18;
    case 985u: goto L_08923B28;
    case 986u: goto L_08923B2C;
    case 987u: goto L_08923B38;
    case 988u: goto L_08923B48;
    case 989u: goto L_08923B50;
    case 990u: goto L_08923B58;
    case 991u: goto L_08923B60;
    case 992u: goto L_08923B68;
    case 993u: goto L_08923B78;
    case 994u: goto L_08923B80;
    case 995u: goto L_08923B90;
    case 996u: goto L_08923B98;
    case 997u: goto L_08923BA8;
    case 998u: goto L_08923BB0;
    case 999u: goto L_08923BB8;
    case 1000u: goto L_08923BC0;
    case 1001u: goto L_08923BD0;
    case 1002u: goto L_08923BD8;
    case 1003u: goto L_08923BE8;
    case 1004u: goto L_08923BF0;
    case 1005u: goto L_08923C04;
    case 1006u: goto L_08923C0C;
    case 1007u: goto L_08923C1C;
    case 1008u: goto L_08923C24;
    case 1009u: goto L_08923C34;
    case 1010u: goto L_08923C3C;
    case 1011u: goto L_08923C54;
    case 1012u: goto L_08923C5C;
    case 1013u: goto L_08923C68;
    case 1014u: goto L_08923C7C;
    case 1015u: goto L_08923C84;
    case 1016u: goto L_08923C8C;
    case 1017u: goto L_08923C94;
    case 1018u: goto L_08923C9C;
    case 1019u: goto L_08923CA4;
    case 1020u: goto L_08923CB8;
    case 1021u: goto L_08923CD0;
    case 1022u: goto L_08923CE4;
    case 1023u: goto L_08923CF4;
    case 1024u: goto L_08923CFC;
    case 1025u: goto L_08923D10;
    case 1026u: goto L_08923D20;
    case 1027u: goto L_08923D28;
    case 1028u: goto L_08923D38;
    case 1029u: goto L_08923D40;
    case 1030u: goto L_08923D54;
    case 1031u: goto L_08923D60;
    case 1032u: goto L_08923D68;
    case 1033u: goto L_08923D70;
    case 1034u: goto L_08923D78;
    case 1035u: goto L_08923D80;
    case 1036u: goto L_08923D88;
    case 1037u: goto L_08923D90;
    case 1038u: goto L_08923D98;
    case 1039u: goto L_08923DA0;
    case 1040u: goto L_08923DA8;
    case 1041u: goto L_08923DB0;
    case 1042u: goto L_08923DB8;
    case 1043u: goto L_08923DC0;
    case 1044u: goto L_08923DC8;
    case 1045u: goto L_08923DD4;
    case 1046u: goto L_08923DDC;
    case 1047u: goto L_08923DE8;
    case 1048u: goto L_08923DF0;
    case 1049u: goto L_08923DFC;
    case 1050u: goto L_08923E08;
    case 1051u: goto L_08923E20;
    case 1052u: goto L_08923E28;
    case 1053u: goto L_08923E30;
    case 1054u: goto L_08923E38;
    case 1055u: goto L_08923E40;
    case 1056u: goto L_08923E48;
    case 1057u: goto L_08923E50;
    case 1058u: goto L_08923E58;
    case 1059u: goto L_08923E60;
    case 1060u: goto L_08923E68;
    case 1061u: goto L_08923E70;
    case 1062u: goto L_08923E78;
    case 1063u: goto L_08923E80;
    case 1064u: goto L_08923E88;
    case 1065u: goto L_08923E90;
    case 1066u: goto L_08923E98;
    case 1067u: goto L_08923EA0;
    case 1068u: goto L_08923EAC;
    case 1069u: goto L_08923EB4;
    case 1070u: goto L_08923EC0;
    case 1071u: goto L_08923EC8;
    case 1072u: goto L_08923ED0;
    case 1073u: goto L_08923EDC;
    case 1074u: goto L_08923EF0;
    case 1075u: goto L_08923EF8;
    case 1076u: goto L_08923F08;
    case 1077u: goto L_08923F10;
    case 1078u: goto L_08923F18;
    case 1079u: goto L_08923F20;
    case 1080u: goto L_08923F28;
    case 1081u: goto L_08923F30;
    case 1082u: goto L_08923F38;
    case 1083u: goto L_08923F40;
    case 1084u: goto L_08923F48;
    case 1085u: goto L_08923F50;
    case 1086u: goto L_08923F60;
    case 1087u: goto L_08923F6C;
    case 1088u: goto L_08923F74;
    case 1089u: goto L_08923F80;
    case 1090u: goto L_08923FA4;
    case 1091u: goto L_08923FAC;
    case 1092u: goto L_08923FB4;
    case 1093u: goto L_08923FCC;
    case 1094u: goto L_08923FD4;
    case 1095u: goto L_08923FE4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08920000:
    // nop
    goto L_08920004;
L_08920004:
    ctx.gpr[4] = (16192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08920040;
      }
      goto L_08920014;
    }
L_08920014:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2000));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
      if (branch_taken) {
          goto L_08920030;
      }
      goto L_08920024;
    }
L_08920024:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    goto L_08920030;
L_08920030:
    ctx.gpr[4] = (14621u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 18770u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    goto L_08920040;
L_08920040:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1914)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08920344;
      }
      goto L_08920054;
    }
L_08920054:
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1784)));
    ctx.gpr[5] = (0u | 57u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2228));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
      if (branch_taken) {
          goto L_0892032C;
      }
      goto L_08920074;
    }
L_08920074:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1784)));
    ctx.gpr[5] = (0u | 58u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2228));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
      if (branch_taken) {
          goto L_0892032C;
      }
      goto L_08920090;
    }
L_08920090:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1784)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
      if (branch_taken) {
          goto L_0892032C;
      }
      goto L_089200D8;
    }
L_089200D8:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1784)));
    ctx.gpr[5] = (0u | 200u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(1768), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1784)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-12289));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(472)));
    ctx.gpr[6] = (ctx.gpr[7] & ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] | 4096u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(472), ctx.gpr[6]);
    ctx.gpr[31] = (0x08920108u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1784)));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08920108u) goto L_08920108;
    return;
L_08920108:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
      if (branch_taken) {
          goto L_0892032C;
      }
      goto L_08920110;
    }
L_08920110:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1784)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(456)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
      if (branch_taken) {
          goto L_0892032C;
      }
      goto L_08920128;
    }
L_08920128:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1784)));
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2228));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
      if (branch_taken) {
          goto L_0892032C;
      }
      goto L_08920144;
    }
L_08920144:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1784)));
    ctx.gpr[5] = (0u | 17u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2228));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2236u << 16u);
      if (branch_taken) {
          goto L_0892032C;
      }
      goto L_08920160;
    }
L_08920160:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[6] = (0u - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(112))))));
    ctx.gpr[5] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2236u << 16u);
      if (branch_taken) {
          goto L_0892032C;
      }
      goto L_08920194;
    }
L_08920194:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[6] = (0u - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(112))))));
    ctx.gpr[5] = (0u | 46u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2236u << 16u);
      if (branch_taken) {
          goto L_0892032C;
      }
      goto L_089201C8;
    }
L_089201C8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[6] = (0u - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(112))))));
    ctx.gpr[5] = (0u | 47u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2236u << 16u);
      if (branch_taken) {
          goto L_0892032C;
      }
      goto L_089201FC;
    }
L_089201FC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[6] = (0u - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(112))))));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2236u << 16u);
      if (branch_taken) {
          goto L_0892032C;
      }
      goto L_08920230;
    }
L_08920230:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[6] = (0u - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(112))))));
    ctx.gpr[5] = (0u | 34u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2236u << 16u);
      if (branch_taken) {
          goto L_0892032C;
      }
      goto L_08920264;
    }
L_08920264:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[6] = (0u - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(112))))));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2236u << 16u);
      if (branch_taken) {
          goto L_0892032C;
      }
      goto L_08920298;
    }
L_08920298:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[6] = (0u - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(112))))));
    ctx.gpr[5] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2236u << 16u);
      if (branch_taken) {
          goto L_0892032C;
      }
      goto L_089202CC;
    }
L_089202CC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[6] = (0u - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[31] = (0x089202F8u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 119u, 0x089990E0u>(ctx, &aot_mem) && ctx.pc == 0x089202F8u) goto L_089202F8;
    return;
L_089202F8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892032C;
      }
      goto L_08920300;
    }
L_08920300:
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[19] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1784)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08920320u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 442u, 0x08909A64u>(ctx, &aot_mem) && ctx.pc == 0x08920320u) goto L_08920320;
    return;
L_08920320:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1784)));
    ctx.gpr[31] = (0x0892032Cu);
    ctx.gpr[5] = (0u | 500u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 326u, 0x089092DCu>(ctx, &aot_mem) && ctx.pc == 0x0892032Cu) goto L_0892032C;
    return;
L_0892032C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1914)));
    ctx.gpr[18] = (ctx.gpr[18] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08920054;
      }
      goto L_08920344;
    }
L_08920344:
    ctx.gpr[4] = (ctx.gpr[17] < static_cast<std::uint32_t>(2001) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08920498;
      }
      goto L_08920350;
    }
L_08920350:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2000));
    ctx.gpr[4] = (ctx.gpr[17] < static_cast<std::uint32_t>(5000) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08920428;
      }
      goto L_08920370;
    }
L_08920370:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(17));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5028)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_08920394;
      }
      goto L_08920388;
    }
L_08920388:
    ctx.gpr[7] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08920394;
L_08920394:
    ctx.gpr[7] = (14621u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.gpr[7] = (ctx.gpr[7] | 18770u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_089203BC;
      }
      goto L_089203B0;
    }
L_089203B0:
    ctx.gpr[7] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_089203BC;
L_089203BC:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (47389u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] | 18770u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[8] = (16256u << 16u);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[9] = (16928u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (0u | 255u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x08920420u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 490u, 0x08A97518u>(ctx, &aot_mem) && ctx.pc == 0x08920420u) goto L_08920420;
    return;
L_08920420:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08920498;
      }
      goto L_08920428;
    }
L_08920428:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1780))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08920498;
      }
      goto L_08920438;
    }
L_08920438:
    ctx.gpr[10] = (16192u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[10] = (ctx.gpr[10] | 1u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.gpr[2] = (16512u << 16u);
    ctx.gpr[10] = (48960u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[10] = (ctx.gpr[10] | 1u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.gpr[2] = (16256u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5028)));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[11] = (0u | 40000u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x0892048Cu);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 328u, 0x08A961ECu>(ctx, &aot_mem) && ctx.pc == 0x0892048Cu) goto L_0892048C;
    return;
L_0892048C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1780))))));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1780), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08920498;
L_08920498:
    ctx.gpr[31] = (0x089204A0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 12u, 0x08860400u>(ctx, &aot_mem) && ctx.pc == 0x089204A0u) goto L_089204A0;
    return;
L_089204A0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089204B0;
      }
      goto L_089204A8;
    }
L_089204A8:
    ctx.gpr[31] = (0x089204B0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 68u, 0x08860704u>(ctx, &aot_mem) && ctx.pc == 0x089204B0u) goto L_089204B0;
    return;
L_089204B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08920510;
      }
      goto L_089204C8;
    }
L_089204C8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 1u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[31] = (0x08920508u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 540u, 0x08A666DCu>(ctx, &aot_mem) && ctx.pc == 0x08920508u) goto L_08920508;
    return;
L_08920508:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089206CC;
      }
      goto L_08920510;
    }
L_08920510:
    ctx.gpr[31] = (0x08920518u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 727u, 0x08A67B3Cu>(ctx, &aot_mem) && ctx.pc == 0x08920518u) goto L_08920518;
    return;
L_08920518:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089206CC;
      }
      goto L_08920520;
    }
L_08920520:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089206CC;
      }
      goto L_0892052C;
    }
L_0892052C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[31] = (0x08920538u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 912u, 0x0885F828u>(ctx, &aot_mem) && ctx.pc == 0x08920538u) goto L_08920538;
    return;
L_08920538:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-16385));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 14u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-4097));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[6] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] << 12u);
    ctx.gpr[4] = (ctx.gpr[6] | ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (65535u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32767));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 15u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (65534u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 17u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-3));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[7] & 1u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-513));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[6] << 9u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(328)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x08920610u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem) && ctx.pc == 0x08920610u) goto L_08920610;
    return;
L_08920610:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(192));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08920628u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08920628u) goto L_08920628;
    return;
L_08920628:
    ctx.gpr[31] = (0x08920630u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 727u, 0x08A67B3Cu>(ctx, &aot_mem) && ctx.pc == 0x08920630u) goto L_08920630;
    return;
L_08920630:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08920648;
      }
      goto L_08920638;
    }
L_08920638:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[31] = (0x08920644u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 7u, 0x08860358u>(ctx, &aot_mem) && ctx.pc == 0x08920644u) goto L_08920644;
    return;
L_08920644:
    ctx.gpr[4] = (0u | 1u);
    goto L_08920648;
L_08920648:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (65535u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32767));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 15u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-16385));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 14u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 9u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[31] = (0x089206A8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 540u, 0x08A666DCu>(ctx, &aot_mem) && ctx.pc == 0x089206A8u) goto L_089206A8;
    return;
L_089206A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089206CC;
      }
      goto L_089206B8;
    }
L_089206B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089206CC;
      }
      goto L_089206C4;
    }
L_089206C4:
    ctx.gpr[31] = (0x089206CCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem) && ctx.pc == 0x089206CCu) goto L_089206CC;
    return;
L_089206CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 144u, 0x089246E4u>(ctx, &aot_mem); return;
      }
      goto L_089206D4;
    }
L_089206D4:
    ctx.gpr[31] = (0x089206DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 756u, 0x089130B0u>(ctx, &aot_mem) && ctx.pc == 0x089206DCu) goto L_089206DC;
    return;
L_089206DC:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 1u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892073C;
      }
      goto L_08920708;
    }
L_08920708:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7893)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892073C;
      }
      goto L_08920714;
    }
L_08920714:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1300)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892073C;
      }
      goto L_08920720;
    }
L_08920720:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1300)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08920754;
      }
      goto L_0892073C;
    }
L_0892073C:
    ctx.gpr[31] = (0x08920744u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem) && ctx.pc == 0x08920744u) goto L_08920744;
    return;
L_08920744:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2236)));
        goto L_0892077C;
    }
    goto L_0892074C;
L_0892074C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089207F8;
      }
      goto L_08920754;
    }
L_08920754:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (65534u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 17u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 144u, 0x089246E4u>(ctx, &aot_mem); return;
      }
      goto L_0892077C;
    }
L_0892077C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (15395u << 16u);
      if (branch_taken) {
          goto L_089207F8;
      }
      goto L_08920784;
    }
L_08920784:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(264)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089207F8;
      }
      goto L_089207A8;
    }
L_089207A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2248)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089207D8;
      }
      goto L_089207B8;
    }
L_089207B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2248)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089207D8;
      }
      goto L_089207C8;
    }
L_089207C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2248)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089207F8;
      }
      goto L_089207D8;
    }
L_089207D8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1938)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 50 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089207FC;
      }
      goto L_089207E8;
    }
L_089207E8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1938)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1938), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089207FC;
      }
      goto L_089207F8;
    }
L_089207F8:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1938), static_cast<std::uint8_t>(0u));
    goto L_089207FC;
L_089207FC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(468)));
        goto L_08920894;
    }
    goto L_08920818;
L_08920818:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 41 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(468)));
        goto L_08920894;
    }
    goto L_08920828;
L_08920828:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[4] = (ctx.gpr[4] & 4096u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(468)));
        goto L_08920894;
    }
    goto L_08920838;
L_08920838:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[4] = (ctx.gpr[4] & 8192u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(468)));
        goto L_08920894;
    }
    goto L_08920848;
L_08920848:
    ctx.gpr[7] = (16512u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[31] = (0x08920864u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 653u, 0x0891F338u>(ctx, &aot_mem) && ctx.pc == 0x08920864u) goto L_08920864;
    return;
L_08920864:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(468)));
        goto L_08920894;
    }
    goto L_08920870;
L_08920870:
    ctx.gpr[31] = (0x08920878u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08920878u) goto L_08920878;
    return;
L_08920878:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(468)));
        goto L_08920894;
    }
    goto L_08920880;
L_08920880:
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08920890u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 173u, 0x08ADC8D4u>(ctx, &aot_mem) && ctx.pc == 0x08920890u) goto L_08920890;
    return;
L_08920890:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(468)));
    goto L_08920894;
L_08920894:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-33));
    ctx.gpr[18] = (ctx.gpr[4] & 32u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(464)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(468), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[18] = (0u < ctx.gpr[18] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(464), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08923510;
      }
      goto L_089208C8;
    }
L_089208C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089208EC;
      }
      goto L_089208D4;
    }
L_089208D4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(268)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
        goto L_08920918;
    }
    goto L_089208EC;
L_089208EC:
    ctx.gpr[31] = (0x089208F4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x089208F4u) goto L_089208F4;
    return;
L_089208F4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08923510;
      }
      goto L_089208FC;
    }
L_089208FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 16384u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08923510;
      }
      goto L_08920914;
    }
L_08920914:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    goto L_08920918;
L_08920918:
    ctx.gpr[5] = (0u | 57u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08923510;
      }
      goto L_08920924;
    }
L_08920924:
    ctx.gpr[31] = (0x0892092Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 371u, 0x08A01528u>(ctx, &aot_mem) && ctx.pc == 0x0892092Cu) goto L_0892092C;
    return;
L_0892092C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1340)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0892093Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 858u, 0x08A0343Cu>(ctx, &aot_mem) && ctx.pc == 0x0892093Cu) goto L_0892093C;
    return;
L_0892093C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08923510;
      }
      goto L_08920944;
    }
L_08920944:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1938)));
    ctx.gpr[5] = (0u | 50u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
      if (branch_taken) {
          goto L_08920984;
      }
      goto L_08920954;
    }
L_08920954:
    ctx.gpr[31] = (0x0892095Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem) && ctx.pc == 0x0892095Cu) goto L_0892095C;
    return;
L_0892095C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08920984;
      }
      goto L_08920964;
    }
L_08920964:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 12u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0892097Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 613u, 0x0892F140u>(ctx, &aot_mem) && ctx.pc == 0x0892097Cu) goto L_0892097C;
    return;
L_0892097C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08922744;
      }
      goto L_08920984;
    }
L_08920984:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08922744;
      }
      goto L_0892098C;
    }
L_0892098C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] >> 1u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08922744;
      }
      goto L_089209A8;
    }
L_089209A8:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-12480)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089209C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(352)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.gpr[20] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[31] = (0x089209D8u);
    ctx.gpr[21] = (ctx.gpr[4] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 666u, 0x08A7FAA4u>(ctx, &aot_mem) && ctx.pc == 0x089209D8u) goto L_089209D8;
    return;
L_089209D8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089209E8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089209E8u) goto L_089209E8;
    return;
L_089209E8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089209F8;
      }
      goto L_089209F0;
    }
L_089209F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08922744;
      }
      goto L_089209F8;
    }
L_089209F8:
    ctx.gpr[20] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[21] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[22] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1156)));
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08920A38;
      }
      goto L_08920A2C;
    }
L_08920A2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(464)));
    ctx.gpr[4] = (ctx.gpr[4] | 32u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(464), ctx.gpr[4]);
    goto L_08920A38;
L_08920A38:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (0u | 280u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08920B00;
      }
      goto L_08920A48;
    }
L_08920A48:
    ctx.gpr[31] = (0x08920A50u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08920A50u) goto L_08920A50;
    return;
L_08920A50:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (14545u << 16u);
      if (branch_taken) {
          goto L_08920B00;
      }
      goto L_08920A58;
    }
L_08920A58:
    ctx.gpr[4] = (ctx.gpr[4] | 46871u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08920B00;
      }
      goto L_08920A70;
    }
L_08920A70:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(320)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(324)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x08920A94u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 618u, 0x08906DC4u>(ctx, &aot_mem) && ctx.pc == 0x08920A94u) goto L_08920A94;
    return;
L_08920A94:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(28));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1000u);
    ctx.gpr[31] = (0x08920AC8u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 14u, 0x0891C0E8u>(ctx, &aot_mem) && ctx.pc == 0x08920AC8u) goto L_08920AC8;
    return;
L_08920AC8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08920AD4u);
    ctx.gpr[5] = (0u | 103u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem) && ctx.pc == 0x08920AD4u) goto L_08920AD4;
    return;
L_08920AD4:
    ctx.gpr[10] = (17046u << 16u);
    ctx.gpr[8] = (ctx.gpr[18] & 255u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 42u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08920AF8u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 692u, 0x088EB674u>(ctx, &aot_mem) && ctx.pc == 0x08920AF8u) goto L_08920AF8;
    return;
L_08920AF8:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
      if (branch_taken) {
          goto L_089216EC;
      }
      goto L_08920B00;
    }
L_08920B00:
    ctx.gpr[4] = (15139u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55051u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08921218;
      }
      goto L_08920B1C;
    }
L_08920B1C:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(268)));
    ctx.gpr[31] = (0x08920B28u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08920B28u) goto L_08920B28;
    return;
L_08920B28:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (15692u << 16u);
      if (branch_taken) {
          goto L_08920BB4;
      }
      goto L_08920B30;
    }
L_08920B30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (15692u << 16u);
      if (branch_taken) {
          goto L_08920BB4;
      }
      goto L_08920B40;
    }
L_08920B40:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(796)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
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
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(288));
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
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08920BB0;
      }
      goto L_08920B8C;
    }
L_08920B8C:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08920BB0;
    }
    goto L_08920BB0;
L_08920BB0:
    ctx.gpr[4] = (15692u << 16u);
    goto L_08920BB4;
L_08920BB4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08920BF0;
      }
      goto L_08920BD4;
    }
L_08920BD4:
    ctx.gpr[7] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    ctx.gpr[31] = (0x08920BF0u);
    ctx.gpr[6] = (0u | 167u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem) && ctx.pc == 0x08920BF0u) goto L_08920BF0;
    return;
L_08920BF0:
    ctx.gpr[31] = (0x08920BF8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08920BF8u) goto L_08920BF8;
    return;
L_08920BF8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089211DC;
      }
      goto L_08920C00;
    }
L_08920C00:
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08920C20;
      }
      goto L_08920C18;
    }
L_08920C18:
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08920C20;
L_08920C20:
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08920C68;
      }
      goto L_08920C38;
    }
L_08920C38:
    ctx.gpr[4] = (16720u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08920C64;
      }
      goto L_08920C50;
    }
L_08920C50:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08920C5Cu);
    ctx.gpr[5] = (0u | 103u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem) && ctx.pc == 0x08920C5Cu) goto L_08920C5C;
    return;
L_08920C5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08920C68;
      }
      goto L_08920C64;
    }
L_08920C64:
    ctx.gpr[20] = (0u | 1u);
    goto L_08920C68;
L_08920C68:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[22]) || std::isnan(ctx.fpr[13])) && ctx.fpr[22] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08920CA0;
      }
      goto L_08920C84;
    }
L_08920C84:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08920CA4;
    }
    goto L_08920C98;
L_08920C98:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08920CB0;
      }
      goto L_08920CA0;
    }
L_08920CA0:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08920CA4;
L_08920CA4:
    ctx.gpr[31] = (0x08920CACu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem) && ctx.pc == 0x08920CACu) goto L_08920CAC;
    return;
L_08920CAC:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08920CB0;
L_08920CB0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
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
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(48);
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
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
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
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
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[14])) && ctx.fpr[12] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
      if (branch_taken) {
          goto L_08920DB8;
      }
      goto L_08920D9C;
    }
L_08920D9C:
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[14])) && ctx.fpr[13] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08920DB8;
      }
      goto L_08920DB0;
    }
L_08920DB0:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08920DC4;
      }
      goto L_08920DB8;
    }
L_08920DB8:
    ctx.gpr[31] = (0x08920DC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem) && ctx.pc == 0x08920DC0u) goto L_08920DC0;
    return;
L_08920DC0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08920DC4;
L_08920DC4:
    ctx.gpr[31] = (0x08920DCCu);
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem) && ctx.pc == 0x08920DCCu) goto L_08920DCC;
    return;
L_08920DCC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[14])) && ctx.fpr[12] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = ctx.fpr[15] - ctx.fpr[13];
      if (branch_taken) {
          goto L_08920E14;
      }
      goto L_08920DF8;
    }
L_08920DF8:
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[14])) && ctx.fpr[13] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08920E14;
      }
      goto L_08920E0C;
    }
L_08920E0C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08920E20;
      }
      goto L_08920E14;
    }
L_08920E14:
    ctx.gpr[31] = (0x08920E1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem) && ctx.pc == 0x08920E1Cu) goto L_08920E1C;
    return;
L_08920E1C:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08920E20;
L_08920E20:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
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
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08920E98;
      }
      goto L_08920E70;
    }
L_08920E70:
    ctx.gpr[31] = (0x08920E78u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 350u, 0x08905990u>(ctx, &aot_mem) && ctx.pc == 0x08920E78u) goto L_08920E78;
    return;
L_08920E78:
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[24];
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08920EAC;
      }
      goto L_08920E98;
    }
L_08920E98:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    ctx.gpr[31] = (0x08920EA4u);
    ctx.gpr[5] = (ctx.gpr[22] + static_cast<std::uint32_t>(320));
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 179u, 0x08904B8Cu>(ctx, &aot_mem) && ctx.pc == 0x08920EA4u) goto L_08920EA4;
    return;
L_08920EA4:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08921048;
      }
      goto L_08920EAC;
    }
L_08920EAC:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08920F80;
      }
      goto L_08920EC0;
    }
L_08920EC0:
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (49024u << 16u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08920EDCu);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 182u, 0x08904BD8u>(ctx, &aot_mem) && ctx.pc == 0x08920EDCu) goto L_08920EDC;
    return;
L_08920EDC:
    ctx.gpr[5] = (ctx.gpr[22] + static_cast<std::uint32_t>(320));
    ctx.gpr[31] = (0x08920EE8u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 179u, 0x08904B8Cu>(ctx, &aot_mem) && ctx.pc == 0x08920EE8u) goto L_08920EE8;
    return;
L_08920EE8:
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55051u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08920F78;
      }
      goto L_08920F04;
    }
L_08920F04:
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08920F78;
      }
      goto L_08920F20;
    }
L_08920F20:
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
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
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
      if (branch_taken) {
          goto L_08920F78;
      }
      goto L_08920F4C;
    }
L_08920F4C:
    ctx.gpr[31] = (0x08920F54u);
    ctx.gpr[5] = (ctx.gpr[22] + static_cast<std::uint32_t>(320));
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 179u, 0x08904B8Cu>(ctx, &aot_mem) && ctx.pc == 0x08920F54u) goto L_08920F54;
    return;
L_08920F54:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08920F78;
      }
      goto L_08920F68;
    }
L_08920F68:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08920F78u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 480u, 0x0891E8B4u>(ctx, &aot_mem) && ctx.pc == 0x08920F78u) goto L_08920F78;
    return;
L_08920F78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08921048;
      }
      goto L_08920F80;
    }
L_08920F80:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08920F8Cu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 356u, 0x08905A28u>(ctx, &aot_mem) && ctx.pc == 0x08920F8Cu) goto L_08920F8C;
    return;
L_08920F8C:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08920F98u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 400u, 0x08905EB8u>(ctx, &aot_mem) && ctx.pc == 0x08920F98u) goto L_08920F98;
    return;
L_08920F98:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08920FA4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 179u, 0x08904B8Cu>(ctx, &aot_mem) && ctx.pc == 0x08920FA4u) goto L_08920FA4;
    return;
L_08920FA4:
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55051u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08921048;
      }
      goto L_08920FC0;
    }
L_08920FC0:
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08921048;
      }
      goto L_08920FDC;
    }
L_08920FDC:
    ctx.gpr[31] = (0x08920FE4u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 356u, 0x08905A28u>(ctx, &aot_mem) && ctx.pc == 0x08920FE4u) goto L_08920FE4;
    return;
L_08920FE4:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08920FF0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 197u, 0x08904CF4u>(ctx, &aot_mem) && ctx.pc == 0x08920FF0u) goto L_08920FF0;
    return;
L_08920FF0:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08920FFCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 179u, 0x08904B8Cu>(ctx, &aot_mem) && ctx.pc == 0x08920FFCu) goto L_08920FFC;
    return;
L_08920FFC:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08921048;
      }
      goto L_08921010;
    }
L_08921010:
    ctx.gpr[31] = (0x08921018u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 400u, 0x08905EB8u>(ctx, &aot_mem) && ctx.pc == 0x08921018u) goto L_08921018;
    return;
L_08921018:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    ctx.gpr[31] = (0x08921024u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 179u, 0x08904B8Cu>(ctx, &aot_mem) && ctx.pc == 0x08921024u) goto L_08921024;
    return;
L_08921024:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08921048;
      }
      goto L_08921038;
    }
L_08921038:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08921048u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 480u, 0x0891E8B4u>(ctx, &aot_mem) && ctx.pc == 0x08921048u) goto L_08921048;
    return;
L_08921048:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (15820u << 16u);
      if (branch_taken) {
          goto L_08921078;
      }
      goto L_08921054;
    }
L_08921054:
    ctx.gpr[31] = (0x0892105Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 403u, 0x08905EDCu>(ctx, &aot_mem) && ctx.pc == 0x0892105Cu) goto L_0892105C;
    return;
L_0892105C:
    ctx.gpr[4] = (16752u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08921090;
      }
      goto L_08921074;
    }
L_08921074:
    ctx.gpr[4] = (15820u << 16u);
    goto L_08921078;
L_08921078:
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08921198;
      }
      goto L_08921090;
    }
L_08921090:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892109Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 336u, 0x08905804u>(ctx, &aot_mem) && ctx.pc == 0x0892109Cu) goto L_0892109C;
    return;
L_0892109C:
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    ctx.gpr[31] = (0x089210A8u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 400u, 0x08905EB8u>(ctx, &aot_mem) && ctx.pc == 0x089210A8u) goto L_089210A8;
    return;
L_089210A8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x089210B8u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 400u, 0x08905EB8u>(ctx, &aot_mem) && ctx.pc == 0x089210B8u) goto L_089210B8;
    return;
L_089210B8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x089210CCu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 185u, 0x08904C30u>(ctx, &aot_mem) && ctx.pc == 0x089210CCu) goto L_089210CC;
    return;
L_089210CC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089210D8u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 618u, 0x08906DC4u>(ctx, &aot_mem) && ctx.pc == 0x089210D8u) goto L_089210D8;
    return;
L_089210D8:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[23] + static_cast<std::uint32_t>(28));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1000u);
    ctx.gpr[31] = (0x089210F0u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 14u, 0x0891C0E8u>(ctx, &aot_mem) && ctx.pc == 0x089210F0u) goto L_089210F0;
    return;
L_089210F0:
    ctx.gpr[31] = (0x089210F8u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 388u, 0x08905CE4u>(ctx, &aot_mem) && ctx.pc == 0x089210F8u) goto L_089210F8;
    return;
L_089210F8:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-939));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08921110;
      }
      goto L_08921104;
    }
L_08921104:
    ctx.gpr[4] = (16968u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0892112C;
      }
      goto L_08921110;
    }
L_08921110:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08921124;
      }
      goto L_08921118;
    }
L_08921118:
    ctx.gpr[4] = (16672u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0892112C;
      }
      goto L_08921124;
    }
L_08921124:
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_0892112C;
L_0892112C:
    ctx.gpr[8] = (ctx.gpr[23] & 255u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 42u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08921148u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 692u, 0x088EB674u>(ctx, &aot_mem) && ctx.pc == 0x08921148u) goto L_08921148;
    return;
L_08921148:
    ctx.gpr[31] = (0x08921150u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 359u, 0x08905A60u>(ctx, &aot_mem) && ctx.pc == 0x08921150u) goto L_08921150;
    return;
L_08921150:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08921184;
      }
      goto L_08921168;
    }
L_08921168:
    ctx.gpr[31] = (0x08921170u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 388u, 0x08905CE4u>(ctx, &aot_mem) && ctx.pc == 0x08921170u) goto L_08921170;
    return;
L_08921170:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-939));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08921184;
      }
      goto L_0892117C;
    }
L_0892117C:
    ctx.gpr[31] = (0x08921184u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 706u, 0x0890F00Cu>(ctx, &aot_mem) && ctx.pc == 0x08921184u) goto L_08921184;
    return;
L_08921184:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08921190u);
    ctx.gpr[5] = (0u | 103u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem) && ctx.pc == 0x08921190u) goto L_08921190;
    return;
L_08921190:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089211D4;
      }
      goto L_08921198;
    }
L_08921198:
    ctx.gpr[31] = (0x089211A0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 231u, 0x08905104u>(ctx, &aot_mem) && ctx.pc == 0x089211A0u) goto L_089211A0;
    return;
L_089211A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089211D4;
      }
      goto L_089211B0;
    }
L_089211B0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x089211C8u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 442u, 0x08909A64u>(ctx, &aot_mem) && ctx.pc == 0x089211C8u) goto L_089211C8;
    return;
L_089211C8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089211D4u);
    ctx.gpr[5] = (0u | 700u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 326u, 0x089092DCu>(ctx, &aot_mem) && ctx.pc == 0x089211D4u) goto L_089211D4;
    return;
L_089211D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089211F4;
      }
      goto L_089211DC;
    }
L_089211DC:
    ctx.gpr[31] = (0x089211E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 403u, 0x08905EDCu>(ctx, &aot_mem) && ctx.pc == 0x089211E4u) goto L_089211E4;
    return;
L_089211E4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x089211F4u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 665u, 0x088EE9E4u>(ctx, &aot_mem) && ctx.pc == 0x089211F4u) goto L_089211F4;
    return;
L_089211F4:
    ctx.gpr[31] = (0x089211FCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 320u, 0x08911218u>(ctx, &aot_mem) && ctx.pc == 0x089211FCu) goto L_089211FC;
    return;
L_089211FC:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08921210;
      }
      goto L_08921204;
    }
L_08921204:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(468)));
    ctx.gpr[4] = (ctx.gpr[4] | 32u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(468), ctx.gpr[4]);
    goto L_08921210;
L_08921210:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
      if (branch_taken) {
          goto L_089216EC;
      }
      goto L_08921218;
    }
L_08921218:
    ctx.gpr[31] = (0x08921220u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem) && ctx.pc == 0x08921220u) goto L_08921220;
    return;
L_08921220:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08921534;
      }
      goto L_08921228;
    }
L_08921228:
    ctx.gpr[31] = (0x08921230u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08921230u) goto L_08921230;
    return;
L_08921230:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08921300;
      }
      goto L_08921238;
    }
L_08921238:
    ctx.gpr[31] = (0x08921240u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 698u, 0x08907124u>(ctx, &aot_mem) && ctx.pc == 0x08921240u) goto L_08921240;
    return;
L_08921240:
    ctx.gpr[4] = (0u | 24u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08921300;
      }
      goto L_0892124C;
    }
L_0892124C:
    ctx.gpr[31] = (0x08921254u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 698u, 0x08907124u>(ctx, &aot_mem) && ctx.pc == 0x08921254u) goto L_08921254;
    return;
L_08921254:
    ctx.gpr[4] = (0u | 39u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08921300;
      }
      goto L_08921260;
    }
L_08921260:
    ctx.gpr[31] = (0x08921268u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 698u, 0x08907124u>(ctx, &aot_mem) && ctx.pc == 0x08921268u) goto L_08921268;
    return;
L_08921268:
    ctx.gpr[4] = (0u | 40u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08921300;
      }
      goto L_08921274;
    }
L_08921274:
    ctx.gpr[31] = (0x0892127Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 698u, 0x08907124u>(ctx, &aot_mem) && ctx.pc == 0x0892127Cu) goto L_0892127C;
    return;
L_0892127C:
    ctx.gpr[4] = (0u | 43u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08921300;
      }
      goto L_08921288;
    }
L_08921288:
    ctx.gpr[31] = (0x08921290u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 698u, 0x08907124u>(ctx, &aot_mem) && ctx.pc == 0x08921290u) goto L_08921290;
    return;
L_08921290:
    ctx.gpr[4] = (0u | 44u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08921300;
      }
      goto L_0892129C;
    }
L_0892129C:
    ctx.gpr[31] = (0x089212A4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 698u, 0x08907124u>(ctx, &aot_mem) && ctx.pc == 0x089212A4u) goto L_089212A4;
    return;
L_089212A4:
    ctx.gpr[4] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08921300;
      }
      goto L_089212B0;
    }
L_089212B0:
    ctx.gpr[31] = (0x089212B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 698u, 0x08907124u>(ctx, &aot_mem) && ctx.pc == 0x089212B8u) goto L_089212B8;
    return;
L_089212B8:
    ctx.gpr[4] = (0u | 53u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08921300;
      }
      goto L_089212C4;
    }
L_089212C4:
    ctx.gpr[31] = (0x089212CCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 698u, 0x08907124u>(ctx, &aot_mem) && ctx.pc == 0x089212CCu) goto L_089212CC;
    return;
L_089212CC:
    ctx.gpr[4] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08921300;
      }
      goto L_089212D8;
    }
L_089212D8:
    ctx.gpr[31] = (0x089212E0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 698u, 0x08907124u>(ctx, &aot_mem) && ctx.pc == 0x089212E0u) goto L_089212E0;
    return;
L_089212E0:
    ctx.gpr[4] = (0u | 49u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08921300;
      }
      goto L_089212EC;
    }
L_089212EC:
    ctx.gpr[31] = (0x089212F4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 698u, 0x08907124u>(ctx, &aot_mem) && ctx.pc == 0x089212F4u) goto L_089212F4;
    return;
L_089212F4:
    ctx.gpr[4] = (0u | 25u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08921534;
      }
      goto L_08921300;
    }
L_08921300:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1300)));
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08921378;
      }
      goto L_0892130C;
    }
L_0892130C:
    ctx.gpr[31] = (0x08921314u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08921314u) goto L_08921314;
    return;
L_08921314:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08921378;
      }
      goto L_0892131C;
    }
L_0892131C:
    ctx.gpr[31] = (0x08921324u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 617u, 0x08906DBCu>(ctx, &aot_mem) && ctx.pc == 0x08921324u) goto L_08921324;
    return;
L_08921324:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08921330u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 751u, 0x0890747Cu>(ctx, &aot_mem) && ctx.pc == 0x08921330u) goto L_08921330;
    return;
L_08921330:
    ctx.gpr[31] = (0x08921338u);
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[0];
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 350u, 0x08905990u>(ctx, &aot_mem) && ctx.pc == 0x08921338u) goto L_08921338;
    return;
L_08921338:
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089216E8;
      }
      goto L_08921354;
    }
L_08921354:
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08921360u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 479u, 0x0890DF64u>(ctx, &aot_mem) && ctx.pc == 0x08921360u) goto L_08921360;
    return;
L_08921360:
    if (ctx.gpr[2] == 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
        goto L_089216EC;
    }
    goto L_08921368;
L_08921368:
    ctx.gpr[31] = (0x08921370u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 513u, 0x0890E2FCu>(ctx, &aot_mem) && ctx.pc == 0x08921370u) goto L_08921370;
    return;
L_08921370:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
      if (branch_taken) {
          goto L_089216EC;
      }
      goto L_08921378;
    }
L_08921378:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    if (ctx.gpr[4] != 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
        goto L_089216EC;
    }
    goto L_0892138C;
L_0892138C:
    ctx.gpr[31] = (0x08921394u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 231u, 0x08905104u>(ctx, &aot_mem) && ctx.pc == 0x08921394u) goto L_08921394;
    return;
L_08921394:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 17u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
        goto L_089216EC;
    }
    goto L_089213A4;
L_089213A4:
    ctx.gpr[31] = (0x089213ACu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 382u, 0x08905C2Cu>(ctx, &aot_mem) && ctx.pc == 0x089213ACu) goto L_089213AC;
    return;
L_089213AC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089214CC;
      }
      goto L_089213B4;
    }
L_089213B4:
    ctx.gpr[31] = (0x089213BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 415u, 0x08905FE4u>(ctx, &aot_mem) && ctx.pc == 0x089213BCu) goto L_089213BC;
    return;
L_089213BC:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089214CC;
      }
      goto L_089213C8;
    }
L_089213C8:
    ctx.gpr[31] = (0x089213D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 275u, 0x08905378u>(ctx, &aot_mem) && ctx.pc == 0x089213D0u) goto L_089213D0;
    return;
L_089213D0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (2238u << 16u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6992));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(180)));
    ctx.gpr[4] = (ctx.gpr[2] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08921464;
      }
      goto L_08921404;
    }
L_08921404:
    ctx.gpr[31] = (0x0892140Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 275u, 0x08905378u>(ctx, &aot_mem) && ctx.pc == 0x0892140Cu) goto L_0892140C;
    return;
L_0892140C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2072)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08921464;
      }
      goto L_0892141C;
    }
L_0892141C:
    ctx.gpr[31] = (0x08921424u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 20u, 0x08910150u>(ctx, &aot_mem) && ctx.pc == 0x08921424u) goto L_08921424;
    return;
L_08921424:
    if (ctx.gpr[2] == ctx.gpr[22]) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
        goto L_089216EC;
    }
    goto L_0892142C;
L_0892142C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0892143Cu);
    ctx.gpr[6] = (0u | 4000u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 803u, 0x0890B27Cu>(ctx, &aot_mem) && ctx.pc == 0x0892143Cu) goto L_0892143C;
    return;
L_0892143C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (49152u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892145Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x0892145Cu) goto L_0892145C;
    return;
L_0892145C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
      if (branch_taken) {
          goto L_089216EC;
      }
      goto L_08921464;
    }
L_08921464:
    ctx.gpr[31] = (0x0892146Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 231u, 0x08905104u>(ctx, &aot_mem) && ctx.pc == 0x0892146Cu) goto L_0892146C;
    return;
L_0892146C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 24u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08921490;
      }
      goto L_0892147C;
    }
L_0892147C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08921488u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 888u, 0x0890FF6Cu>(ctx, &aot_mem) && ctx.pc == 0x08921488u) goto L_08921488;
    return;
L_08921488:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
      if (branch_taken) {
          goto L_089216EC;
      }
      goto L_08921490;
    }
L_08921490:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892149Cu);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 213u, 0x0892D2E4u>(ctx, &aot_mem) && ctx.pc == 0x0892149Cu) goto L_0892149C;
    return;
L_0892149C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2072)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (2238u << 16u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-6992));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(180), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089216E8;
      }
      goto L_089214CC;
    }
L_089214CC:
    ctx.gpr[31] = (0x089214D4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 231u, 0x08905104u>(ctx, &aot_mem) && ctx.pc == 0x089214D4u) goto L_089214D4;
    return;
L_089214D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 24u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089214F8;
      }
      goto L_089214E4;
    }
L_089214E4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089214F0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 888u, 0x0890FF6Cu>(ctx, &aot_mem) && ctx.pc == 0x089214F0u) goto L_089214F0;
    return;
L_089214F0:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
      if (branch_taken) {
          goto L_089216EC;
      }
      goto L_089214F8;
    }
L_089214F8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08921504u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 213u, 0x0892D2E4u>(ctx, &aot_mem) && ctx.pc == 0x08921504u) goto L_08921504;
    return;
L_08921504:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2072)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (2238u << 16u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-6992));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(180), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089216E8;
      }
      goto L_08921534;
    }
L_08921534:
    ctx.gpr[31] = (0x0892153Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x0892153Cu) goto L_0892153C;
    return;
L_0892153C:
    if (ctx.gpr[2] == 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
        goto L_089216EC;
    }
    goto L_08921544;
L_08921544:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[4] = (ctx.gpr[4] & 4096u);
    if (ctx.gpr[4] != 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
        goto L_089216EC;
    }
    goto L_08921554;
L_08921554:
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08921560u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 380u, 0x08905C04u>(ctx, &aot_mem) && ctx.pc == 0x08921560u) goto L_08921560;
    return;
L_08921560:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08921590;
      }
      goto L_08921568;
    }
L_08921568:
    ctx.gpr[31] = (0x08921570u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 845u, 0x08907B54u>(ctx, &aot_mem) && ctx.pc == 0x08921570u) goto L_08921570;
    return;
L_08921570:
    ctx.gpr[31] = (0x08921578u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 818u, 0x0891351Cu>(ctx, &aot_mem) && ctx.pc == 0x08921578u) goto L_08921578;
    return;
L_08921578:
    ctx.gpr[31] = (0x08921580u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 814u, 0x089134D4u>(ctx, &aot_mem) && ctx.pc == 0x08921580u) goto L_08921580;
    return;
L_08921580:
    ctx.gpr[31] = (0x08921588u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 813u, 0x089134C8u>(ctx, &aot_mem) && ctx.pc == 0x08921588u) goto L_08921588;
    return;
L_08921588:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0892159C;
      }
      goto L_08921590;
    }
L_08921590:
    ctx.gpr[31] = (0x08921598u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 409u, 0x08905F98u>(ctx, &aot_mem) && ctx.pc == 0x08921598u) goto L_08921598;
    return;
L_08921598:
    ctx.gpr[22] = (0u < ctx.gpr[2] ? 1u : 0u);
    goto L_0892159C;
L_0892159C:
    ctx.gpr[31] = (0x089215A4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem) && ctx.pc == 0x089215A4u) goto L_089215A4;
    return;
L_089215A4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089216C4;
      }
      goto L_089215AC;
    }
L_089215AC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(3156)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089216C4;
      }
      goto L_089215C4;
    }
L_089215C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(456)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089216C4;
      }
      goto L_089215D4;
    }
L_089215D4:
    ctx.gpr[31] = (0x089215DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 275u, 0x08905378u>(ctx, &aot_mem) && ctx.pc == 0x089215DCu) goto L_089215DC;
    return;
L_089215DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1736)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089216C4;
      }
      goto L_089215EC;
    }
L_089215EC:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_089216C4;
      }
      goto L_089215F4;
    }
L_089215F4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08921600u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 668u, 0x0894751Cu>(ctx, &aot_mem) && ctx.pc == 0x08921600u) goto L_08921600;
    return;
L_08921600:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08921618u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 442u, 0x08909A64u>(ctx, &aot_mem) && ctx.pc == 0x08921618u) goto L_08921618;
    return;
L_08921618:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08921624u);
    ctx.gpr[5] = (0u | 1300u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 326u, 0x089092DCu>(ctx, &aot_mem) && ctx.pc == 0x08921624u) goto L_08921624;
    return;
L_08921624:
    ctx.gpr[31] = (0x0892162Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 512u, 0x08906534u>(ctx, &aot_mem) && ctx.pc == 0x0892162Cu) goto L_0892162C;
    return;
L_0892162C:
    ctx.gpr[31] = (0x08921634u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 412u, 0x08905FB8u>(ctx, &aot_mem) && ctx.pc == 0x08921634u) goto L_08921634;
    return;
L_08921634:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089216B4;
      }
      goto L_0892163C;
    }
L_0892163C:
    ctx.gpr[31] = (0x08921644u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 512u, 0x08906534u>(ctx, &aot_mem) && ctx.pc == 0x08921644u) goto L_08921644;
    return;
L_08921644:
    ctx.gpr[31] = (0x0892164Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 412u, 0x08905FB8u>(ctx, &aot_mem) && ctx.pc == 0x0892164Cu) goto L_0892164C;
    return;
L_0892164C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08921658u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 51u, 0x089082A8u>(ctx, &aot_mem) && ctx.pc == 0x08921658u) goto L_08921658;
    return;
L_08921658:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089216B4;
      }
      goto L_08921664;
    }
L_08921664:
    ctx.gpr[31] = (0x0892166Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 512u, 0x08906534u>(ctx, &aot_mem) && ctx.pc == 0x0892166Cu) goto L_0892166C;
    return;
L_0892166C:
    ctx.gpr[31] = (0x08921674u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 412u, 0x08905FB8u>(ctx, &aot_mem) && ctx.pc == 0x08921674u) goto L_08921674;
    return;
L_08921674:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08921680u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 51u, 0x089082A8u>(ctx, &aot_mem) && ctx.pc == 0x08921680u) goto L_08921680;
    return;
L_08921680:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089216B4;
      }
      goto L_0892168C;
    }
L_0892168C:
    ctx.gpr[31] = (0x08921694u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 512u, 0x08906534u>(ctx, &aot_mem) && ctx.pc == 0x08921694u) goto L_08921694;
    return;
L_08921694:
    ctx.gpr[31] = (0x0892169Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 412u, 0x08905FB8u>(ctx, &aot_mem) && ctx.pc == 0x0892169Cu) goto L_0892169C;
    return;
L_0892169C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089216A8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 51u, 0x089082A8u>(ctx, &aot_mem) && ctx.pc == 0x089216A8u) goto L_089216A8;
    return;
L_089216A8:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089216E8;
      }
      goto L_089216B4;
    }
L_089216B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(464)));
    ctx.gpr[4] = (ctx.gpr[4] | 256u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(464), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089216E8;
      }
      goto L_089216C4;
    }
L_089216C4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x089216DCu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 442u, 0x08909A64u>(ctx, &aot_mem) && ctx.pc == 0x089216DCu) goto L_089216DC;
    return;
L_089216DC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089216E8u);
    ctx.gpr[5] = (0u | 500u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 326u, 0x089092DCu>(ctx, &aot_mem) && ctx.pc == 0x089216E8u) goto L_089216E8;
    return;
L_089216E8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
    goto L_089216EC;
L_089216EC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08921714;
      }
      goto L_08921700;
    }
L_08921700:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08921714;
      }
      goto L_08921708;
    }
L_08921708:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08921714u);
    ctx.gpr[5] = (0u | 104u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem) && ctx.pc == 0x08921714u) goto L_08921714;
    return;
L_08921714:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08922744;
      }
      goto L_0892171C;
    }
L_0892171C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08921728u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 402u, 0x088ED6F8u>(ctx, &aot_mem) && ctx.pc == 0x08921728u) goto L_08921728;
    return;
L_08921728:
    ctx.gpr[31] = (0x08921730u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08921730u) goto L_08921730;
    return;
L_08921730:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08921878;
      }
      goto L_08921738;
    }
L_08921738:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08921744u);
    ctx.gpr[5] = (0u | 155u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem) && ctx.pc == 0x08921744u) goto L_08921744;
    return;
L_08921744:
    ctx.gpr[31] = (0x0892174Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 697u, 0x0890711Cu>(ctx, &aot_mem) && ctx.pc == 0x0892174Cu) goto L_0892174C;
    return;
L_0892174C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08921878;
      }
      goto L_08921758;
    }
L_08921758:
    ctx.gpr[31] = (0x08921760u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem) && ctx.pc == 0x08921760u) goto L_08921760;
    return;
L_08921760:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08921878;
      }
      goto L_08921768;
    }
L_08921768:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(3156)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08921878;
      }
      goto L_08921784;
    }
L_08921784:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(456)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08921878;
      }
      goto L_08921794;
    }
L_08921794:
    ctx.gpr[31] = (0x0892179Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 275u, 0x08905378u>(ctx, &aot_mem) && ctx.pc == 0x0892179Cu) goto L_0892179C;
    return;
L_0892179C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1736)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08921878;
      }
      goto L_089217AC;
    }
L_089217AC:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089217B8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 668u, 0x0894751Cu>(ctx, &aot_mem) && ctx.pc == 0x089217B8u) goto L_089217B8;
    return;
L_089217B8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x089217D0u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 442u, 0x08909A64u>(ctx, &aot_mem) && ctx.pc == 0x089217D0u) goto L_089217D0;
    return;
L_089217D0:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089217DCu);
    ctx.gpr[5] = (0u | 1300u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 326u, 0x089092DCu>(ctx, &aot_mem) && ctx.pc == 0x089217DCu) goto L_089217DC;
    return;
L_089217DC:
    ctx.gpr[31] = (0x089217E4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 512u, 0x08906534u>(ctx, &aot_mem) && ctx.pc == 0x089217E4u) goto L_089217E4;
    return;
L_089217E4:
    ctx.gpr[31] = (0x089217ECu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 412u, 0x08905FB8u>(ctx, &aot_mem) && ctx.pc == 0x089217ECu) goto L_089217EC;
    return;
L_089217EC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892186C;
      }
      goto L_089217F4;
    }
L_089217F4:
    ctx.gpr[31] = (0x089217FCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 512u, 0x08906534u>(ctx, &aot_mem) && ctx.pc == 0x089217FCu) goto L_089217FC;
    return;
L_089217FC:
    ctx.gpr[31] = (0x08921804u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 412u, 0x08905FB8u>(ctx, &aot_mem) && ctx.pc == 0x08921804u) goto L_08921804;
    return;
L_08921804:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08921810u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 51u, 0x089082A8u>(ctx, &aot_mem) && ctx.pc == 0x08921810u) goto L_08921810;
    return;
L_08921810:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0892186C;
      }
      goto L_0892181C;
    }
L_0892181C:
    ctx.gpr[31] = (0x08921824u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 512u, 0x08906534u>(ctx, &aot_mem) && ctx.pc == 0x08921824u) goto L_08921824;
    return;
L_08921824:
    ctx.gpr[31] = (0x0892182Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 412u, 0x08905FB8u>(ctx, &aot_mem) && ctx.pc == 0x0892182Cu) goto L_0892182C;
    return;
L_0892182C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08921838u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 51u, 0x089082A8u>(ctx, &aot_mem) && ctx.pc == 0x08921838u) goto L_08921838;
    return;
L_08921838:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0892186C;
      }
      goto L_08921844;
    }
L_08921844:
    ctx.gpr[31] = (0x0892184Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 512u, 0x08906534u>(ctx, &aot_mem) && ctx.pc == 0x0892184Cu) goto L_0892184C;
    return;
L_0892184C:
    ctx.gpr[31] = (0x08921854u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 412u, 0x08905FB8u>(ctx, &aot_mem) && ctx.pc == 0x08921854u) goto L_08921854;
    return;
L_08921854:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08921860u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 51u, 0x089082A8u>(ctx, &aot_mem) && ctx.pc == 0x08921860u) goto L_08921860;
    return;
L_08921860:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08921878;
      }
      goto L_0892186C;
    }
L_0892186C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(464)));
    ctx.gpr[4] = (ctx.gpr[4] | 256u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(464), ctx.gpr[4]);
    goto L_08921878;
L_08921878:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08922744;
      }
      goto L_08921880;
    }
L_08921880:
    ctx.gpr[31] = (0x08921888u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 379u, 0x08905BF0u>(ctx, &aot_mem) && ctx.pc == 0x08921888u) goto L_08921888;
    return;
L_08921888:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089218A4;
      }
      goto L_08921890;
    }
L_08921890:
    ctx.gpr[31] = (0x08921898u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 410u, 0x08905FA0u>(ctx, &aot_mem) && ctx.pc == 0x08921898u) goto L_08921898;
    return;
L_08921898:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0892190C;
      }
      goto L_089218A4;
    }
L_089218A4:
    ctx.gpr[31] = (0x089218ACu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 388u, 0x08905CE4u>(ctx, &aot_mem) && ctx.pc == 0x089218ACu) goto L_089218AC;
    return;
L_089218AC:
    ctx.gpr[31] = (0x089218B4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 367u, 0x08905B14u>(ctx, &aot_mem) && ctx.pc == 0x089218B4u) goto L_089218B4;
    return;
L_089218B4:
    ctx.gpr[31] = (0x089218BCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 368u, 0x08905B2Cu>(ctx, &aot_mem) && ctx.pc == 0x089218BCu) goto L_089218BC;
    return;
L_089218BC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08921930;
      }
      goto L_089218D8;
    }
L_089218D8:
    ctx.gpr[31] = (0x089218E0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 388u, 0x08905CE4u>(ctx, &aot_mem) && ctx.pc == 0x089218E0u) goto L_089218E0;
    return;
L_089218E0:
    ctx.gpr[31] = (0x089218E8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 367u, 0x08905B14u>(ctx, &aot_mem) && ctx.pc == 0x089218E8u) goto L_089218E8;
    return;
L_089218E8:
    ctx.gpr[31] = (0x089218F0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 368u, 0x08905B2Cu>(ctx, &aot_mem) && ctx.pc == 0x089218F0u) goto L_089218F0;
    return;
L_089218F0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08921930;
      }
      goto L_0892190C;
    }
L_0892190C:
    ctx.gpr[31] = (0x08921914u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08921914u) goto L_08921914;
    return;
L_08921914:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08921930;
      }
      goto L_0892191C;
    }
L_0892191C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08921928u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 213u, 0x0892D2E4u>(ctx, &aot_mem) && ctx.pc == 0x08921928u) goto L_08921928;
    return;
L_08921928:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08922744;
      }
      goto L_08921930;
    }
L_08921930:
    ctx.gpr[31] = (0x08921938u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08921938u) goto L_08921938;
    return;
L_08921938:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08922734;
      }
      goto L_08921940;
    }
L_08921940:
    ctx.gpr[31] = (0x08921948u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 359u, 0x08905A60u>(ctx, &aot_mem) && ctx.pc == 0x08921948u) goto L_08921948;
    return;
L_08921948:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08921954u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 359u, 0x08905A60u>(ctx, &aot_mem) && ctx.pc == 0x08921954u) goto L_08921954;
    return;
L_08921954:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08921960u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 359u, 0x08905A60u>(ctx, &aot_mem) && ctx.pc == 0x08921960u) goto L_08921960;
    return;
L_08921960:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(288)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08921974u);
    ctx.fpr[24] = ctx.fpr[12] + ctx.fpr[13];
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 359u, 0x08905A60u>(ctx, &aot_mem) && ctx.pc == 0x08921974u) goto L_08921974;
    return;
L_08921974:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(292)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08921990u);
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[16];
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 395u, 0x08905D98u>(ctx, &aot_mem) && ctx.pc == 0x08921990u) goto L_08921990;
    return;
L_08921990:
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x0892199Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 617u, 0x08906DBCu>(ctx, &aot_mem) && ctx.pc == 0x0892199Cu) goto L_0892199C;
    return;
L_0892199C:
    ctx.fpr[12] = ctx.fpr[0] - ctx.fpr[26];
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(360));
    ctx.gpr[31] = (0x089219ACu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 175u, 0x08904B3Cu>(ctx, &aot_mem) && ctx.pc == 0x089219ACu) goto L_089219AC;
    return;
L_089219AC:
    ctx.gpr[4] = (16457u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089219DC;
      }
      goto L_089219CC;
    }
L_089219CC:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = ctx.fpr[12] - ctx.fpr[22];
    goto L_089219DC;
L_089219DC:
    ctx.gpr[31] = (0x089219E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 751u, 0x0890747Cu>(ctx, &aot_mem) && ctx.pc == 0x089219E4u) goto L_089219E4;
    return;
L_089219E4:
    ctx.gpr[31] = (0x089219ECu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem) && ctx.pc == 0x089219ECu) goto L_089219EC;
    return;
L_089219EC:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x089219F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 231u, 0x08905104u>(ctx, &aot_mem) && ctx.pc == 0x089219F8u) goto L_089219F8;
    return;
L_089219F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089226E0;
      }
      goto L_08921A08;
    }
L_08921A08:
    ctx.gpr[31] = (0x08921A10u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 752u, 0x08907484u>(ctx, &aot_mem) && ctx.pc == 0x08921A10u) goto L_08921A10;
    return;
L_08921A10:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08921BD4;
      }
      goto L_08921A18;
    }
L_08921A18:
    ctx.gpr[31] = (0x08921A20u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 698u, 0x08907124u>(ctx, &aot_mem) && ctx.pc == 0x08921A20u) goto L_08921A20;
    return;
L_08921A20:
    ctx.gpr[4] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08921A40;
      }
      goto L_08921A2C;
    }
L_08921A2C:
    ctx.gpr[31] = (0x08921A34u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 698u, 0x08907124u>(ctx, &aot_mem) && ctx.pc == 0x08921A34u) goto L_08921A34;
    return;
L_08921A34:
    ctx.gpr[4] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08921BD4;
      }
      goto L_08921A40;
    }
L_08921A40:
    ctx.gpr[31] = (0x08921A48u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 752u, 0x08907484u>(ctx, &aot_mem) && ctx.pc == 0x08921A48u) goto L_08921A48;
    return;
L_08921A48:
    ctx.gpr[31] = (0x08921A50u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08921A50u) goto L_08921A50;
    return;
L_08921A50:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (16050u << 16u);
      if (branch_taken) {
          goto L_08921B90;
      }
      goto L_08921A58;
    }
L_08921A58:
    ctx.gpr[4] = (ctx.gpr[4] | 47299u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08921A80;
      }
      goto L_08921A70;
    }
L_08921A70:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1938)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08921B90;
      }
      goto L_08921A80;
    }
L_08921A80:
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(288));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08921A90u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 479u, 0x0890DF64u>(ctx, &aot_mem) && ctx.pc == 0x08921A90u) goto L_08921A90;
    return;
L_08921A90:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08921AA8;
      }
      goto L_08921A98;
    }
L_08921A98:
    ctx.gpr[31] = (0x08921AA0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 513u, 0x0890E2FCu>(ctx, &aot_mem) && ctx.pc == 0x08921AA0u) goto L_08921AA0;
    return;
L_08921AA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089226A0;
      }
      goto L_08921AA8;
    }
L_08921AA8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(296)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089226A0;
      }
      goto L_08921AC4;
    }
L_08921AC4:
    ctx.gpr[31] = (0x08921ACCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 698u, 0x08907124u>(ctx, &aot_mem) && ctx.pc == 0x08921ACCu) goto L_08921ACC;
    return;
L_08921ACC:
    ctx.gpr[4] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08921B3C;
      }
      goto L_08921AD8;
    }
L_08921AD8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08921AF0u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 613u, 0x0892F140u>(ctx, &aot_mem) && ctx.pc == 0x08921AF0u) goto L_08921AF0;
    return;
L_08921AF0:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x08921AFCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 361u, 0x0890D7B8u>(ctx, &aot_mem) && ctx.pc == 0x08921AFCu) goto L_08921AFC;
    return;
L_08921AFC:
    ctx.gpr[31] = (0x08921B04u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 752u, 0x08907484u>(ctx, &aot_mem) && ctx.pc == 0x08921B04u) goto L_08921B04;
    return;
L_08921B04:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08921B1Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 442u, 0x08909A64u>(ctx, &aot_mem) && ctx.pc == 0x08921B1Cu) goto L_08921B1C;
    return;
L_08921B1C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08921B28u);
    ctx.gpr[5] = (0u | 3000u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 326u, 0x089092DCu>(ctx, &aot_mem) && ctx.pc == 0x08921B28u) goto L_08921B28;
    return;
L_08921B28:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08921B34u);
    ctx.gpr[5] = (0u | 157u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem) && ctx.pc == 0x08921B34u) goto L_08921B34;
    return;
L_08921B34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089226A0;
      }
      goto L_08921B3C;
    }
L_08921B3C:
    ctx.gpr[31] = (0x08921B44u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 513u, 0x08906550u>(ctx, &aot_mem) && ctx.pc == 0x08921B44u) goto L_08921B44;
    return;
L_08921B44:
    ctx.gpr[4] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08921B70;
      }
      goto L_08921B50;
    }
L_08921B50:
    ctx.gpr[31] = (0x08921B58u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 281u, 0x08909054u>(ctx, &aot_mem) && ctx.pc == 0x08921B58u) goto L_08921B58;
    return;
L_08921B58:
    ctx.gpr[4] = (0u | 13u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08921B70;
      }
      goto L_08921B64;
    }
L_08921B64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2336)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2336), ctx.gpr[4]);
    goto L_08921B70;
L_08921B70:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 13u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08921B88u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 613u, 0x0892F140u>(ctx, &aot_mem) && ctx.pc == 0x08921B88u) goto L_08921B88;
    return;
L_08921B88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089226A0;
      }
      goto L_08921B90;
    }
L_08921B90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1716)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08921BA8;
      }
      goto L_08921B9C;
    }
L_08921B9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1716)));
    ctx.gpr[31] = (0x08921BA8u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1716));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 430u, 0x08A93004u>(ctx, &aot_mem) && ctx.pc == 0x08921BA8u) goto L_08921BA8;
    return;
L_08921BA8:
    ctx.gpr[31] = (0x08921BB0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 752u, 0x08907484u>(ctx, &aot_mem) && ctx.pc == 0x08921BB0u) goto L_08921BB0;
    return;
L_08921BB0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1716), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08921BC4;
      }
      goto L_08921BB8;
    }
L_08921BB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1716)));
    ctx.gpr[31] = (0x08921BC4u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1716));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem) && ctx.pc == 0x08921BC4u) goto L_08921BC4;
    return;
L_08921BC4:
    ctx.gpr[31] = (0x08921BCCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 332u, 0x0890932Cu>(ctx, &aot_mem) && ctx.pc == 0x08921BCCu) goto L_08921BCC;
    return;
L_08921BCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089226A0;
      }
      goto L_08921BD4;
    }
L_08921BD4:
    ctx.gpr[31] = (0x08921BDCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 513u, 0x08906550u>(ctx, &aot_mem) && ctx.pc == 0x08921BDCu) goto L_08921BDC;
    return;
L_08921BDC:
    ctx.gpr[4] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.gpr[4] = (16006u << 16u);
      if (branch_taken) {
          goto L_08921CDC;
      }
      goto L_08921BE8;
    }
L_08921BE8:
    ctx.gpr[4] = (ctx.gpr[4] | 2706u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08921CDC;
      }
      goto L_08921C00;
    }
L_08921C00:
    ctx.gpr[31] = (0x08921C08u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 281u, 0x08909054u>(ctx, &aot_mem) && ctx.pc == 0x08921C08u) goto L_08921C08;
    return;
L_08921C08:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08921CDC;
      }
      goto L_08921C10;
    }
L_08921C10:
    ctx.gpr[31] = (0x08921C18u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 303u, 0x08911130u>(ctx, &aot_mem) && ctx.pc == 0x08921C18u) goto L_08921C18;
    return;
L_08921C18:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.gpr[4] = (16025u << 16u);
      if (branch_taken) {
          goto L_08921C3C;
      }
      goto L_08921C24;
    }
L_08921C24:
    ctx.gpr[31] = (0x08921C2Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 303u, 0x08911130u>(ctx, &aot_mem) && ctx.pc == 0x08921C2Cu) goto L_08921C2C;
    return;
L_08921C2C:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08921CDC;
      }
      goto L_08921C38;
    }
L_08921C38:
    ctx.gpr[4] = (16025u << 16u);
    goto L_08921C3C;
L_08921C3C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(296)));
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08921CDC;
      }
      goto L_08921C58;
    }
L_08921C58:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08921C68u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x08921C68u) goto L_08921C68;
    return;
L_08921C68:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08921C88;
      }
      goto L_08921C74;
    }
L_08921C74:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08921C84u);
    ctx.gpr[6] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x08921C84u) goto L_08921C84;
    return;
L_08921C84:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_08921C88;
L_08921C88:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08921CDC;
      }
      goto L_08921C90;
    }
L_08921C90:
    ctx.gpr[31] = (0x08921C98u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 375u, 0x08905BB8u>(ctx, &aot_mem) && ctx.pc == 0x08921C98u) goto L_08921C98;
    return;
L_08921C98:
    ctx.gpr[4] = (16230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08921CDC;
      }
      goto L_08921CB4;
    }
L_08921CB4:
    ctx.gpr[31] = (0x08921CBCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 226u, 0x089050C8u>(ctx, &aot_mem) && ctx.pc == 0x08921CBCu) goto L_08921CBC;
    return;
L_08921CBC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08921CDC;
      }
      goto L_08921CC4;
    }
L_08921CC4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 9u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08921CDCu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 613u, 0x0892F140u>(ctx, &aot_mem) && ctx.pc == 0x08921CDCu) goto L_08921CDC;
    return;
L_08921CDC:
    ctx.gpr[31] = (0x08921CE4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 231u, 0x08905104u>(ctx, &aot_mem) && ctx.pc == 0x08921CE4u) goto L_08921CE4;
    return;
L_08921CE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08921D60;
      }
      goto L_08921CF4;
    }
L_08921CF4:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(372));
    ctx.gpr[31] = (0x08921D00u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 359u, 0x08905A60u>(ctx, &aot_mem) && ctx.pc == 0x08921D00u) goto L_08921D00;
    return;
L_08921D00:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08921D0Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 359u, 0x08905A60u>(ctx, &aot_mem) && ctx.pc == 0x08921D0Cu) goto L_08921D0C;
    return;
L_08921D0C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08921D1Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(364));
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 185u, 0x08904C30u>(ctx, &aot_mem) && ctx.pc == 0x08921D1Cu) goto L_08921D1C;
    return;
L_08921D1C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08921D28u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 365u, 0x08905AE4u>(ctx, &aot_mem) && ctx.pc == 0x08921D28u) goto L_08921D28;
    return;
L_08921D28:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1368)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08921D3Cu);
    ctx.gpr[6] = (0u | 5000u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 779u, 0x0890B0A8u>(ctx, &aot_mem) && ctx.pc == 0x08921D3Cu) goto L_08921D3C;
    return;
L_08921D3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1368)));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08921D58;
      }
      goto L_08921D48;
    }
L_08921D48:
    ctx.gpr[31] = (0x08921D50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 275u, 0x08905378u>(ctx, &aot_mem) && ctx.pc == 0x08921D50u) goto L_08921D50;
    return;
L_08921D50:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(500));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2072), ctx.gpr[4]);
    goto L_08921D58;
L_08921D58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089226A0;
      }
      goto L_08921D60;
    }
L_08921D60:
    ctx.gpr[31] = (0x08921D68u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 231u, 0x08905104u>(ctx, &aot_mem) && ctx.pc == 0x08921D68u) goto L_08921D68;
    return;
L_08921D68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (16095u << 16u);
      if (branch_taken) {
          goto L_08921E0C;
      }
      goto L_08921D78;
    }
L_08921D78:
    ctx.gpr[4] = (ctx.gpr[4] | 26355u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08921DA0;
      }
      goto L_08921D90;
    }
L_08921D90:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1938)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08921E0C;
      }
      goto L_08921DA0;
    }
L_08921DA0:
    ctx.gpr[31] = (0x08921DA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 275u, 0x08905378u>(ctx, &aot_mem) && ctx.pc == 0x08921DA8u) goto L_08921DA8;
    return;
L_08921DA8:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2500));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1380), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1376), ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1376));
    ctx.gpr[31] = (0x08921DC0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem) && ctx.pc == 0x08921DC0u) goto L_08921DC0;
    return;
L_08921DC0:
    ctx.gpr[31] = (0x08921DC8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 281u, 0x08909054u>(ctx, &aot_mem) && ctx.pc == 0x08921DC8u) goto L_08921DC8;
    return;
L_08921DC8:
    ctx.gpr[4] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08921DEC;
      }
      goto L_08921DD4;
    }
L_08921DD4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 10u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08921DECu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 613u, 0x0892F140u>(ctx, &aot_mem) && ctx.pc == 0x08921DECu) goto L_08921DEC;
    return;
L_08921DEC:
    ctx.gpr[31] = (0x08921DF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 275u, 0x08905378u>(ctx, &aot_mem) && ctx.pc == 0x08921DF4u) goto L_08921DF4;
    return;
L_08921DF4:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(5000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2072), ctx.gpr[4]);
    ctx.gpr[31] = (0x08921E04u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 665u, 0x08917990u>(ctx, &aot_mem) && ctx.pc == 0x08921E04u) goto L_08921E04;
    return;
L_08921E04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089226A0;
      }
      goto L_08921E0C;
    }
L_08921E0C:
    ctx.gpr[4] = (16262u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 2706u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089226A0;
      }
      goto L_08921E28;
    }
L_08921E28:
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08921E40u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 206u, 0x08904E70u>(ctx, &aot_mem) && ctx.pc == 0x08921E40u) goto L_08921E40;
    return;
L_08921E40:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(448));
    ctx.gpr[31] = (0x08921E4Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 363u, 0x08905AB0u>(ctx, &aot_mem) && ctx.pc == 0x08921E4Cu) goto L_08921E4C;
    return;
L_08921E4C:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    ctx.gpr[31] = (0x08921E5Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 359u, 0x08905A60u>(ctx, &aot_mem) && ctx.pc == 0x08921E5Cu) goto L_08921E5C;
    return;
L_08921E5C:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(288)));
    ctx.gpr[5] = (16512u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(416));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(292)));
    ctx.gpr[31] = (0x08921E80u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(432));
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 206u, 0x08904E70u>(ctx, &aot_mem) && ctx.pc == 0x08921E80u) goto L_08921E80;
    return;
L_08921E80:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08921E90u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 182u, 0x08904BD8u>(ctx, &aot_mem) && ctx.pc == 0x08921E90u) goto L_08921E90;
    return;
L_08921E90:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08921EA0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 180u, 0x08904BA8u>(ctx, &aot_mem) && ctx.pc == 0x08921EA0u) goto L_08921EA0;
    return;
L_08921EA0:
    ctx.gpr[2] = (17096u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08921ECCu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 650u, 0x08976FBCu>(ctx, &aot_mem) && ctx.pc == 0x08921ECCu) goto L_08921ECC;
    return;
L_08921ECC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08921ED8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 698u, 0x08907124u>(ctx, &aot_mem) && ctx.pc == 0x08921ED8u) goto L_08921ED8;
    return;
L_08921ED8:
    ctx.gpr[4] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08921EF8;
      }
      goto L_08921EE4;
    }
L_08921EE4:
    ctx.gpr[31] = (0x08921EECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 698u, 0x08907124u>(ctx, &aot_mem) && ctx.pc == 0x08921EECu) goto L_08921EEC;
    return;
L_08921EEC:
    ctx.gpr[4] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08922134;
      }
      goto L_08921EF8;
    }
L_08921EF8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(288)));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(292)));
    ctx.gpr[31] = (0x08921F0Cu);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 395u, 0x08905D98u>(ctx, &aot_mem) && ctx.pc == 0x08921F0Cu) goto L_08921F0C;
    return;
L_08921F0C:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08921F18u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 617u, 0x08906DBCu>(ctx, &aot_mem) && ctx.pc == 0x08921F18u) goto L_08921F18;
    return;
L_08921F18:
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08921F38;
      }
      goto L_08921F28;
    }
L_08921F28:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
    goto L_08921F38;
L_08921F38:
    ctx.gpr[31] = (0x08921F40u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 617u, 0x08906DBCu>(ctx, &aot_mem) && ctx.pc == 0x08921F40u) goto L_08921F40;
    return;
L_08921F40:
    ctx.fpr[22] = ctx.fpr[22] - ctx.fpr[0];
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08921FD4;
      }
      goto L_08921F60;
    }
L_08921F60:
    ctx.gpr[31] = (0x08921F68u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 617u, 0x08906DBCu>(ctx, &aot_mem) && ctx.pc == 0x08921F68u) goto L_08921F68;
    return;
L_08921F68:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[22];
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.gpr[31] = (0x08921F90u);
    ctx.fpr[22] = ctx.fpr[0] - ctx.fpr[22];
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 617u, 0x08906DBCu>(ctx, &aot_mem) && ctx.pc == 0x08921F90u) goto L_08921F90;
    return;
L_08921F90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1364)));
    ctx.gpr[5] = (16457u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[5] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17204u << 16u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (16384u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x08921FCCu);
    ctx.fpr[12] = ctx.fpr[0] - ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 700u, 0x08907134u>(ctx, &aot_mem) && ctx.pc == 0x08921FCCu) goto L_08921FCC;
    return;
L_08921FCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08922030;
      }
      goto L_08921FD4;
    }
L_08921FD4:
    ctx.gpr[31] = (0x08921FDCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 617u, 0x08906DBCu>(ctx, &aot_mem) && ctx.pc == 0x08921FDCu) goto L_08921FDC;
    return;
L_08921FDC:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08921FF4u);
    ctx.fpr[22] = ctx.fpr[0] + ctx.fpr[22];
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 617u, 0x08906DBCu>(ctx, &aot_mem) && ctx.pc == 0x08921FF4u) goto L_08921FF4;
    return;
L_08921FF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1364)));
    ctx.gpr[5] = (16457u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[5] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17204u << 16u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[5] = (16384u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x08922030u);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 700u, 0x08907134u>(ctx, &aot_mem) && ctx.pc == 0x08922030u) goto L_08922030;
    return;
L_08922030:
    ctx.gpr[31] = (0x08922038u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 275u, 0x08905378u>(ctx, &aot_mem) && ctx.pc == 0x08922038u) goto L_08922038;
    return;
L_08922038:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(200));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2072), ctx.gpr[4]);
    ctx.gpr[31] = (0x08922048u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 513u, 0x08906550u>(ctx, &aot_mem) && ctx.pc == 0x08922048u) goto L_08922048;
    return;
L_08922048:
    ctx.gpr[4] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08922584;
      }
      goto L_08922054;
    }
L_08922054:
    ctx.gpr[31] = (0x0892205Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 752u, 0x08907484u>(ctx, &aot_mem) && ctx.pc == 0x0892205Cu) goto L_0892205C;
    return;
L_0892205C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08922584;
      }
      goto L_08922064;
    }
L_08922064:
    ctx.gpr[31] = (0x0892206Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 752u, 0x08907484u>(ctx, &aot_mem) && ctx.pc == 0x0892206Cu) goto L_0892206C;
    return;
L_0892206C:
    ctx.gpr[31] = (0x08922074u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 359u, 0x08905A60u>(ctx, &aot_mem) && ctx.pc == 0x08922074u) goto L_08922074;
    return;
L_08922074:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08922080u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 752u, 0x08907484u>(ctx, &aot_mem) && ctx.pc == 0x08922080u) goto L_08922080;
    return;
L_08922080:
    ctx.gpr[31] = (0x08922088u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 359u, 0x08905A60u>(ctx, &aot_mem) && ctx.pc == 0x08922088u) goto L_08922088;
    return;
L_08922088:
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08922094u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 359u, 0x08905A60u>(ctx, &aot_mem) && ctx.pc == 0x08922094u) goto L_08922094;
    return;
L_08922094:
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x089220A0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 359u, 0x08905A60u>(ctx, &aot_mem) && ctx.pc == 0x089220A0u) goto L_089220A0;
    return;
L_089220A0:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x089220B4u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 395u, 0x08905D98u>(ctx, &aot_mem) && ctx.pc == 0x089220B4u) goto L_089220B4;
    return;
L_089220B4:
    ctx.gpr[31] = (0x089220BCu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem) && ctx.pc == 0x089220BCu) goto L_089220BC;
    return;
L_089220BC:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x089220C8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem) && ctx.pc == 0x089220C8u) goto L_089220C8;
    return;
L_089220C8:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089220EC;
      }
      goto L_089220DC;
    }
L_089220DC:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[12];
    goto L_089220EC;
L_089220EC:
    ctx.fpr[24] = ctx.fpr[24] - ctx.fpr[22];
    ctx.gpr[4] = (16423u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 36151u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16490u << 16u);
      if (branch_taken) {
          goto L_0892212C;
      }
      goto L_0892210C;
    }
L_0892210C:
    ctx.gpr[4] = (ctx.gpr[4] | 37504u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0892212C;
      }
      goto L_08922124;
    }
L_08922124:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2300), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0892212C;
L_0892212C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08922584;
      }
      goto L_08922134;
    }
L_08922134:
    ctx.gpr[31] = (0x0892213Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 231u, 0x08905104u>(ctx, &aot_mem) && ctx.pc == 0x0892213Cu) goto L_0892213C;
    return;
L_0892213C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08922164;
      }
      goto L_0892214C;
    }
L_0892214C:
    ctx.gpr[31] = (0x08922154u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 231u, 0x08905104u>(ctx, &aot_mem) && ctx.pc == 0x08922154u) goto L_08922154;
    return;
L_08922154:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 24u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089222FC;
      }
      goto L_08922164;
    }
L_08922164:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    ctx.gpr[5] = (ctx.gpr[18] << 3u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(464));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(448));
    ctx.gpr[31] = (0x0892218Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 398u, 0x08905E50u>(ctx, &aot_mem) && ctx.pc == 0x0892218Cu) goto L_0892218C;
    return;
L_0892218C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(528));
    ctx.gpr[31] = (0x08922198u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 364u, 0x08905AC8u>(ctx, &aot_mem) && ctx.pc == 0x08922198u) goto L_08922198;
    return;
L_08922198:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(528)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(456));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(460), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089221C0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 365u, 0x08905AE4u>(ctx, &aot_mem) && ctx.pc == 0x089221C0u) goto L_089221C0;
    return;
L_089221C0:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(448)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(452)));
    ctx.gpr[31] = (0x089221D0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 359u, 0x08905A60u>(ctx, &aot_mem) && ctx.pc == 0x089221D0u) goto L_089221D0;
    return;
L_089221D0:
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x089221DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 359u, 0x08905A60u>(ctx, &aot_mem) && ctx.pc == 0x089221DCu) goto L_089221DC;
    return;
L_089221DC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x089221F0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 395u, 0x08905D98u>(ctx, &aot_mem) && ctx.pc == 0x089221F0u) goto L_089221F0;
    return;
L_089221F0:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(512));
    ctx.gpr[31] = (0x08922200u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 359u, 0x08905A60u>(ctx, &aot_mem) && ctx.pc == 0x08922200u) goto L_08922200;
    return;
L_08922200:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(544));
    ctx.gpr[31] = (0x0892220Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 364u, 0x08905AC8u>(ctx, &aot_mem) && ctx.pc == 0x0892220Cu) goto L_0892220C;
    return;
L_0892220C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(544)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(548)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(480));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(480), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(484), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(536));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08922238u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 186u, 0x08904C40u>(ctx, &aot_mem) && ctx.pc == 0x08922238u) goto L_08922238;
    return;
L_08922238:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(536)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(540)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(460), ctx.gpr[6]);
    ctx.gpr[31] = (0x0892225Cu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 365u, 0x08905AE4u>(ctx, &aot_mem) && ctx.pc == 0x0892225Cu) goto L_0892225C;
    return;
L_0892225C:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(496));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(520));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08922270u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 10u, 0x08910074u>(ctx, &aot_mem) && ctx.pc == 0x08922270u) goto L_08922270;
    return;
L_08922270:
    ctx.gpr[31] = (0x08922278u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 359u, 0x08905A60u>(ctx, &aot_mem) && ctx.pc == 0x08922278u) goto L_08922278;
    return;
L_08922278:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08922288u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 181u, 0x08904BC0u>(ctx, &aot_mem) && ctx.pc == 0x08922288u) goto L_08922288;
    return;
L_08922288:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(552));
    ctx.gpr[31] = (0x08922294u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 364u, 0x08905AC8u>(ctx, &aot_mem) && ctx.pc == 0x08922294u) goto L_08922294;
    return;
L_08922294:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(552)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(556)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(480), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(484), ctx.gpr[6]);
    ctx.gpr[31] = (0x089222B8u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 365u, 0x08905AE4u>(ctx, &aot_mem) && ctx.pc == 0x089222B8u) goto L_089222B8;
    return;
L_089222B8:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089222C4u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 184u, 0x08904C10u>(ctx, &aot_mem) && ctx.pc == 0x089222C4u) goto L_089222C4;
    return;
L_089222C4:
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089222F4;
      }
      goto L_089222D8;
    }
L_089222D8:
    ctx.gpr[31] = (0x089222E0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 751u, 0x0890747Cu>(ctx, &aot_mem) && ctx.pc == 0x089222E0u) goto L_089222E0;
    return;
L_089222E0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089222ECu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 700u, 0x08907134u>(ctx, &aot_mem) && ctx.pc == 0x089222ECu) goto L_089222EC;
    return;
L_089222EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08922744;
      }
      goto L_089222F4;
    }
L_089222F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08922584;
      }
      goto L_089222FC;
    }
L_089222FC:
    ctx.gpr[31] = (0x08922304u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 231u, 0x08905104u>(ctx, &aot_mem) && ctx.pc == 0x08922304u) goto L_08922304;
    return;
L_08922304:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089223AC;
      }
      goto L_08922314;
    }
L_08922314:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    ctx.gpr[5] = (ctx.gpr[18] << 3u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x08922334u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 849u, 0x0890FD1Cu>(ctx, &aot_mem) && ctx.pc == 0x08922334u) goto L_08922334;
    return;
L_08922334:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(576));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08922344u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 94u, 0x089105E8u>(ctx, &aot_mem) && ctx.pc == 0x08922344u) goto L_08922344;
    return;
L_08922344:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(592));
    ctx.gpr[31] = (0x08922350u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 364u, 0x08905AC8u>(ctx, &aot_mem) && ctx.pc == 0x08922350u) goto L_08922350;
    return;
L_08922350:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(592)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(596)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(560));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(560), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(564), ctx.gpr[6]);
    ctx.gpr[31] = (0x08922374u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(448));
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 365u, 0x08905AE4u>(ctx, &aot_mem) && ctx.pc == 0x08922374u) goto L_08922374;
    return;
L_08922374:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(448)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(452)));
    ctx.gpr[31] = (0x08922384u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 359u, 0x08905A60u>(ctx, &aot_mem) && ctx.pc == 0x08922384u) goto L_08922384;
    return;
L_08922384:
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08922390u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 359u, 0x08905A60u>(ctx, &aot_mem) && ctx.pc == 0x08922390u) goto L_08922390;
    return;
L_08922390:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x089223A4u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 395u, 0x08905D98u>(ctx, &aot_mem) && ctx.pc == 0x089223A4u) goto L_089223A4;
    return;
L_089223A4:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08922584;
      }
      goto L_089223AC;
    }
L_089223AC:
    ctx.gpr[31] = (0x089223B4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 231u, 0x08905104u>(ctx, &aot_mem) && ctx.pc == 0x089223B4u) goto L_089223B4;
    return;
L_089223B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0892242C;
      }
      goto L_089223C4;
    }
L_089223C4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(608));
    ctx.gpr[31] = (0x089223D0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 88u, 0x08910538u>(ctx, &aot_mem) && ctx.pc == 0x089223D0u) goto L_089223D0;
    return;
L_089223D0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(608)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(612)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(600));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(600), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(604), ctx.gpr[6]);
    ctx.gpr[31] = (0x089223F4u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(448));
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 365u, 0x08905AE4u>(ctx, &aot_mem) && ctx.pc == 0x089223F4u) goto L_089223F4;
    return;
L_089223F4:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(448)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(452)));
    ctx.gpr[31] = (0x08922404u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 359u, 0x08905A60u>(ctx, &aot_mem) && ctx.pc == 0x08922404u) goto L_08922404;
    return;
L_08922404:
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08922410u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 359u, 0x08905A60u>(ctx, &aot_mem) && ctx.pc == 0x08922410u) goto L_08922410;
    return;
L_08922410:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08922424u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 395u, 0x08905D98u>(ctx, &aot_mem) && ctx.pc == 0x08922424u) goto L_08922424;
    return;
L_08922424:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08922584;
      }
      goto L_0892242C;
    }
L_0892242C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    ctx.gpr[5] = (ctx.gpr[18] << 3u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(616));
    ctx.gpr[31] = (0x08922450u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 399u, 0x08905E94u>(ctx, &aot_mem) && ctx.pc == 0x08922450u) goto L_08922450;
    return;
L_08922450:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(448));
    ctx.gpr[31] = (0x0892245Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 187u, 0x08904C6Cu>(ctx, &aot_mem) && ctx.pc == 0x0892245Cu) goto L_0892245C;
    return;
L_0892245C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08922478;
      }
      goto L_08922464;
    }
L_08922464:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(448));
    ctx.gpr[31] = (0x08922470u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(616));
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 365u, 0x08905AE4u>(ctx, &aot_mem) && ctx.pc == 0x08922470u) goto L_08922470;
    return;
L_08922470:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08922528;
      }
      goto L_08922478;
    }
L_08922478:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(624));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(640));
    ctx.gpr[31] = (0x08922488u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 359u, 0x08905A60u>(ctx, &aot_mem) && ctx.pc == 0x08922488u) goto L_08922488;
    return;
L_08922488:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(656));
    ctx.gpr[6] = (16448u << 16u);
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(288));
    ctx.gpr[31] = (0x089224A4u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 182u, 0x08904BD8u>(ctx, &aot_mem) && ctx.pc == 0x089224A4u) goto L_089224A4;
    return;
L_089224A4:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089224B4u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 180u, 0x08904BA8u>(ctx, &aot_mem) && ctx.pc == 0x089224B4u) goto L_089224B4;
    return;
L_089224B4:
    ctx.gpr[31] = (0x089224BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 195u, 0x08904CD4u>(ctx, &aot_mem) && ctx.pc == 0x089224BCu) goto L_089224BC;
    return;
L_089224BC:
    ctx.gpr[4] = (ctx.gpr[2] & 511u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (15235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x089224E8u);
    ctx.fpr[26] = ctx.fpr[12] - ctx.fpr[24];
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 195u, 0x08904CD4u>(ctx, &aot_mem) && ctx.pc == 0x089224E8u) goto L_089224E8;
    return;
L_089224E8:
    ctx.gpr[4] = (ctx.gpr[2] & 511u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(672));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[31] = (0x0892250Cu);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[24];
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 206u, 0x08904E70u>(ctx, &aot_mem) && ctx.pc == 0x0892250Cu) goto L_0892250C;
    return;
L_0892250C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0892251Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 180u, 0x08904BA8u>(ctx, &aot_mem) && ctx.pc == 0x0892251Cu) goto L_0892251C;
    return;
L_0892251C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(448));
    ctx.gpr[31] = (0x08922528u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 366u, 0x08905AFCu>(ctx, &aot_mem) && ctx.pc == 0x08922528u) goto L_08922528;
    return;
L_08922528:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(448)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(452)));
    ctx.gpr[31] = (0x08922538u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 359u, 0x08905A60u>(ctx, &aot_mem) && ctx.pc == 0x08922538u) goto L_08922538;
    return;
L_08922538:
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08922544u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 359u, 0x08905A60u>(ctx, &aot_mem) && ctx.pc == 0x08922544u) goto L_08922544;
    return;
L_08922544:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08922558u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 395u, 0x08905D98u>(ctx, &aot_mem) && ctx.pc == 0x08922558u) goto L_08922558;
    return;
L_08922558:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08922564u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 231u, 0x08905104u>(ctx, &aot_mem) && ctx.pc == 0x08922564u) goto L_08922564;
    return;
L_08922564:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08922584;
      }
      goto L_08922574;
    }
L_08922574:
    ctx.gpr[31] = (0x0892257Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 275u, 0x08905378u>(ctx, &aot_mem) && ctx.pc == 0x0892257Cu) goto L_0892257C;
    return;
L_0892257C:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(500));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2072), ctx.gpr[4]);
    goto L_08922584;
L_08922584:
    ctx.gpr[31] = (0x0892258Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem) && ctx.pc == 0x0892258Cu) goto L_0892258C;
    return;
L_0892258C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08922598u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 699u, 0x0890712Cu>(ctx, &aot_mem) && ctx.pc == 0x08922598u) goto L_08922598;
    return;
L_08922598:
    ctx.gpr[31] = (0x089225A0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 617u, 0x08906DBCu>(ctx, &aot_mem) && ctx.pc == 0x089225A0u) goto L_089225A0;
    return;
L_089225A0:
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = ctx.fpr[0] + ctx.fpr[12];
    ctx.gpr[31] = (0x089225B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 751u, 0x0890747Cu>(ctx, &aot_mem) && ctx.pc == 0x089225B8u) goto L_089225B8;
    return;
L_089225B8:
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089225F0;
      }
      goto L_089225C8;
    }
L_089225C8:
    ctx.gpr[31] = (0x089225D0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 751u, 0x0890747Cu>(ctx, &aot_mem) && ctx.pc == 0x089225D0u) goto L_089225D0;
    return;
L_089225D0:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089225E8u);
    ctx.fpr[12] = ctx.fpr[0] - ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 699u, 0x0890712Cu>(ctx, &aot_mem) && ctx.pc == 0x089225E8u) goto L_089225E8;
    return;
L_089225E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08922640;
      }
      goto L_089225F0;
    }
L_089225F0:
    ctx.gpr[31] = (0x089225F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 617u, 0x08906DBCu>(ctx, &aot_mem) && ctx.pc == 0x089225F8u) goto L_089225F8;
    return;
L_089225F8:
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = ctx.fpr[0] - ctx.fpr[12];
    ctx.gpr[31] = (0x08922610u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 751u, 0x0890747Cu>(ctx, &aot_mem) && ctx.pc == 0x08922610u) goto L_08922610;
    return;
L_08922610:
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08922640;
      }
      goto L_08922620;
    }
L_08922620:
    ctx.gpr[31] = (0x08922628u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 751u, 0x0890747Cu>(ctx, &aot_mem) && ctx.pc == 0x08922628u) goto L_08922628;
    return;
L_08922628:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08922640u);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 699u, 0x0890712Cu>(ctx, &aot_mem) && ctx.pc == 0x08922640u) goto L_08922640;
    return;
L_08922640:
    ctx.gpr[31] = (0x08922648u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 751u, 0x0890747Cu>(ctx, &aot_mem) && ctx.pc == 0x08922648u) goto L_08922648;
    return;
L_08922648:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[20]) || std::isnan(ctx.fpr[0])) && ctx.fpr[20] == ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089226A0;
      }
      goto L_08922658;
    }
L_08922658:
    ctx.gpr[31] = (0x08922660u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 275u, 0x08905378u>(ctx, &aot_mem) && ctx.pc == 0x08922660u) goto L_08922660;
    return;
L_08922660:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2072)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089226A0;
      }
      goto L_08922670;
    }
L_08922670:
    ctx.gpr[31] = (0x08922678u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 275u, 0x08905378u>(ctx, &aot_mem) && ctx.pc == 0x08922678u) goto L_08922678;
    return;
L_08922678:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(200));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2072), ctx.gpr[4]);
    ctx.gpr[31] = (0x08922688u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 751u, 0x0890747Cu>(ctx, &aot_mem) && ctx.pc == 0x08922688u) goto L_08922688;
    return;
L_08922688:
    ctx.gpr[4] = (16329u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089226A0u);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 699u, 0x0890712Cu>(ctx, &aot_mem) && ctx.pc == 0x089226A0u) goto L_089226A0;
    return;
L_089226A0:
    ctx.gpr[31] = (0x089226A8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 231u, 0x08905104u>(ctx, &aot_mem) && ctx.pc == 0x089226A8u) goto L_089226A8;
    return;
L_089226A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08922734;
      }
      goto L_089226B8;
    }
L_089226B8:
    ctx.gpr[31] = (0x089226C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 231u, 0x08905104u>(ctx, &aot_mem) && ctx.pc == 0x089226C0u) goto L_089226C0;
    return;
L_089226C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08922734;
      }
      goto L_089226D0;
    }
L_089226D0:
    ctx.gpr[31] = (0x089226D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 887u, 0x0890FF64u>(ctx, &aot_mem) && ctx.pc == 0x089226D8u) goto L_089226D8;
    return;
L_089226D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08922734;
      }
      goto L_089226E0;
    }
L_089226E0:
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(288));
    ctx.gpr[31] = (0x089226ECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 197u, 0x08904CF4u>(ctx, &aot_mem) && ctx.pc == 0x089226ECu) goto L_089226EC;
    return;
L_089226EC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089226F8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 179u, 0x08904B8Cu>(ctx, &aot_mem) && ctx.pc == 0x089226F8u) goto L_089226F8;
    return;
L_089226F8:
    ctx.gpr[4] = (48989u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 45613u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08922734;
      }
      goto L_08922714;
    }
L_08922714:
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(288));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08922724u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 479u, 0x0890DF64u>(ctx, &aot_mem) && ctx.pc == 0x08922724u) goto L_08922724;
    return;
L_08922724:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08922734;
      }
      goto L_0892272C;
    }
L_0892272C:
    ctx.gpr[31] = (0x08922734u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 513u, 0x0890E2FCu>(ctx, &aot_mem) && ctx.pc == 0x08922734u) goto L_08922734;
    return;
L_08922734:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08922744;
      }
      goto L_08922744;
    }
L_08922744:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[4] = (ctx.gpr[4] & 4096u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089227D8;
      }
      goto L_08922754;
    }
L_08922754:
    ctx.gpr[31] = (0x0892275Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 664u, 0x08906F80u>(ctx, &aot_mem) && ctx.pc == 0x0892275Cu) goto L_0892275C;
    return;
L_0892275C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089227D8;
      }
      goto L_08922764;
    }
L_08922764:
    ctx.gpr[31] = (0x0892276Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 403u, 0x08905EDCu>(ctx, &aot_mem) && ctx.pc == 0x0892276Cu) goto L_0892276C;
    return;
L_0892276C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089227D8;
      }
      goto L_08922780;
    }
L_08922780:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[31] = (0x0892278Cu);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(288));
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 354u, 0x089059FCu>(ctx, &aot_mem) && ctx.pc == 0x0892278Cu) goto L_0892278C;
    return;
L_0892278C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892279Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 521u, 0x08909F78u>(ctx, &aot_mem) && ctx.pc == 0x0892279Cu) goto L_0892279C;
    return;
L_0892279C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089227BC;
      }
      goto L_089227A4;
    }
L_089227A4:
    ctx.gpr[5] = (16512u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[31] = (0x089227B4u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 355u, 0x08905A0Cu>(ctx, &aot_mem) && ctx.pc == 0x089227B4u) goto L_089227B4;
    return;
L_089227B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089227CC;
      }
      goto L_089227BC;
    }
L_089227BC:
    ctx.gpr[5] = (16128u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[31] = (0x089227CCu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 355u, 0x08905A0Cu>(ctx, &aot_mem) && ctx.pc == 0x089227CCu) goto L_089227CC;
    return;
L_089227CC:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[31] = (0x089227D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 405u, 0x08905EECu>(ctx, &aot_mem) && ctx.pc == 0x089227D8u) goto L_089227D8;
    return;
L_089227D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[4] = (ctx.gpr[4] & 4096u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08922818;
      }
      goto L_089227E8;
    }
L_089227E8:
    ctx.gpr[31] = (0x089227F0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 231u, 0x08905104u>(ctx, &aot_mem) && ctx.pc == 0x089227F0u) goto L_089227F0;
    return;
L_089227F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 57u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08922818;
      }
      goto L_08922800;
    }
L_08922800:
    ctx.gpr[31] = (0x08922808u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 231u, 0x08905104u>(ctx, &aot_mem) && ctx.pc == 0x08922808u) goto L_08922808;
    return;
L_08922808:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 58u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08922850;
      }
      goto L_08922818;
    }
L_08922818:
    ctx.gpr[31] = (0x08922820u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 521u, 0x08909F78u>(ctx, &aot_mem) && ctx.pc == 0x08922820u) goto L_08922820;
    return;
L_08922820:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089234F4;
      }
      goto L_08922828;
    }
L_08922828:
    ctx.gpr[31] = (0x08922830u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 992u, 0x0890BED4u>(ctx, &aot_mem) && ctx.pc == 0x08922830u) goto L_08922830;
    return;
L_08922830:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089234F4;
      }
      goto L_08922838;
    }
L_08922838:
    ctx.gpr[31] = (0x08922840u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 231u, 0x08905104u>(ctx, &aot_mem) && ctx.pc == 0x08922840u) goto L_08922840;
    return;
L_08922840:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089234F4;
      }
      goto L_08922850;
    }
L_08922850:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2072)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1001) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(784), 0u);
      if (branch_taken) {
          goto L_0892286C;
      }
      goto L_08922860;
    }
L_08922860:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2072)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089228B0;
      }
      goto L_0892286C;
    }
L_0892286C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2072), 0u);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(1696));
    ctx.gpr[31] = (0x0892287Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 359u, 0x08905A60u>(ctx, &aot_mem) && ctx.pc == 0x0892287Cu) goto L_0892287C;
    return;
L_0892287C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08922888u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 354u, 0x089059FCu>(ctx, &aot_mem) && ctx.pc == 0x08922888u) goto L_08922888;
    return;
L_08922888:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(800));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0892289Cu);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 206u, 0x08904E70u>(ctx, &aot_mem) && ctx.pc == 0x0892289Cu) goto L_0892289C;
    return;
L_0892289C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[31] = (0x089228A8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 354u, 0x089059FCu>(ctx, &aot_mem) && ctx.pc == 0x089228A8u) goto L_089228A8;
    return;
L_089228A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089228D8;
      }
      goto L_089228B0;
    }
L_089228B0:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(816));
    ctx.gpr[31] = (0x089228BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 359u, 0x08905A60u>(ctx, &aot_mem) && ctx.pc == 0x089228BCu) goto L_089228BC;
    return;
L_089228BC:
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(1696));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089228CCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 181u, 0x08904BC0u>(ctx, &aot_mem) && ctx.pc == 0x089228CCu) goto L_089228CC;
    return;
L_089228CC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[31] = (0x089228D8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 354u, 0x089059FCu>(ctx, &aot_mem) && ctx.pc == 0x089228D8u) goto L_089228D8;
    return;
L_089228D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2072)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2072), ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
      if (branch_taken) {
          goto L_089228FC;
      }
      goto L_089228F0;
    }
L_089228F0:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    goto L_089228FC;
L_089228FC:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x0892290Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(688), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 373u, 0x08905BA0u>(ctx, &aot_mem) && ctx.pc == 0x0892290Cu) goto L_0892290C;
    return;
L_0892290C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(692), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(692));
    ctx.gpr[31] = (0x0892291Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(688));
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 192u, 0x08904CACu>(ctx, &aot_mem) && ctx.pc == 0x0892291Cu) goto L_0892291C;
    return;
L_0892291C:
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16968u << 16u);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(310)));
        goto L_08922990;
    }
    goto L_08922944;
L_08922944:
    ctx.gpr[31] = (0x0892294Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 353u, 0x089059E4u>(ctx, &aot_mem) && ctx.pc == 0x0892294Cu) goto L_0892294C;
    return;
L_0892294C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2072)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_0892296C;
      }
      goto L_08922960;
    }
L_08922960:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_0892296C;
L_0892296C:
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08922A48;
      }
      goto L_0892298C;
    }
L_0892298C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(310)));
    goto L_08922990;
L_08922990:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08922ECC;
      }
      goto L_0892299C;
    }
L_0892299C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2072)));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
      if (branch_taken) {
          goto L_089229B8;
      }
      goto L_089229AC;
    }
L_089229AC:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    goto L_089229B8;
L_089229B8:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x089229C8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(696), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 373u, 0x08905BA0u>(ctx, &aot_mem) && ctx.pc == 0x089229C8u) goto L_089229C8;
    return;
L_089229C8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(700), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(700));
    ctx.gpr[31] = (0x089229D8u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(696));
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 192u, 0x08904CACu>(ctx, &aot_mem) && ctx.pc == 0x089229D8u) goto L_089229D8;
    return;
L_089229D8:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16968u << 16u);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08922ECC;
      }
      goto L_08922A00;
    }
L_08922A00:
    ctx.gpr[31] = (0x08922A08u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 350u, 0x08905990u>(ctx, &aot_mem) && ctx.pc == 0x08922A08u) goto L_08922A08;
    return;
L_08922A08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2072)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_08922A28;
      }
      goto L_08922A1C;
    }
L_08922A1C:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_08922A28;
L_08922A28:
    ctx.gpr[4] = (15235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08922ECC;
      }
      goto L_08922A48;
    }
L_08922A48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (16320u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] >> 22u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08922B9C;
      }
      goto L_08922A70;
    }
L_08922A70:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(768));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(832));
    ctx.gpr[31] = (0x08922A94u);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 206u, 0x08904E70u>(ctx, &aot_mem) && ctx.pc == 0x08922A94u) goto L_08922A94;
    return;
L_08922A94:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08922AA0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 354u, 0x089059FCu>(ctx, &aot_mem) && ctx.pc == 0x08922AA0u) goto L_08922AA0;
    return;
L_08922AA0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (16261u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 7864u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(704));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(784));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x08922AE4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 287u, 0x08891DD4u>(ctx, &aot_mem) && ctx.pc == 0x08922AE4u) goto L_08922AE4;
    return;
L_08922AE4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08922B94;
      }
      goto L_08922AEC;
    }
L_08922AEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(464)));
    ctx.gpr[5] = (8192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08922B30;
      }
      goto L_08922B00;
    }
L_08922B00:
    ctx.gpr[31] = (0x08922B08u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(704));
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 390u, 0x08905D48u>(ctx, &aot_mem) && ctx.pc == 0x08922B08u) goto L_08922B08;
    return;
L_08922B08:
    ctx.gpr[4] = (16261u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 7864u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08922B80;
      }
      goto L_08922B30;
    }
L_08922B30:
    ctx.gpr[31] = (0x08922B38u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(704));
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 390u, 0x08905D48u>(ctx, &aot_mem) && ctx.pc == 0x08922B38u) goto L_08922B38;
    return;
L_08922B38:
    ctx.gpr[4] = (16261u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 7864u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08922B58u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem) && ctx.pc == 0x08922B58u) goto L_08922B58;
    return;
L_08922B58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(464)));
    ctx.gpr[5] = (8192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08922B80;
      }
      goto L_08922B6C;
    }
L_08922B6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(464)));
    ctx.gpr[5] = (57344u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(464), ctx.gpr[4]);
    goto L_08922B80;
L_08922B80:
    ctx.gpr[31] = (0x08922B88u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 551u, 0x0890A1A0u>(ctx, &aot_mem) && ctx.pc == 0x08922B88u) goto L_08922B88;
    return;
L_08922B88:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08922B94u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 336u, 0x08905804u>(ctx, &aot_mem) && ctx.pc == 0x08922B94u) goto L_08922B94;
    return;
L_08922B94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089234EC;
      }
      goto L_08922B9C;
    }
L_08922B9C:
    ctx.gpr[31] = (0x08922BA4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08922BA4u) goto L_08922BA4;
    return;
L_08922BA4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08922D04;
      }
      goto L_08922BAC;
    }
L_08922BAC:
    ctx.gpr[31] = (0x08922BB4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 664u, 0x08906F80u>(ctx, &aot_mem) && ctx.pc == 0x08922BB4u) goto L_08922BB4;
    return;
L_08922BB4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08922D04;
      }
      goto L_08922BBC;
    }
L_08922BBC:
    ctx.gpr[31] = (0x08922BC4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08922BC4u) goto L_08922BC4;
    return;
L_08922BC4:
    ctx.gpr[31] = (0x08922BCCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 508u, 0x0898D640u>(ctx, &aot_mem) && ctx.pc == 0x08922BCCu) goto L_08922BCC;
    return;
L_08922BCC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08922D04;
      }
      goto L_08922BD4;
    }
L_08922BD4:
    ctx.gpr[31] = (0x08922BDCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08922BDCu) goto L_08922BDC;
    return;
L_08922BDC:
    ctx.gpr[31] = (0x08922BE4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 114u, 0x0898C4ECu>(ctx, &aot_mem) && ctx.pc == 0x08922BE4u) goto L_08922BE4;
    return;
L_08922BE4:
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08922BF4u);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[22])));
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08922BF4u) goto L_08922BF4;
    return;
L_08922BF4:
    ctx.gpr[31] = (0x08922BFCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 124u, 0x0898C578u>(ctx, &aot_mem) && ctx.pc == 0x08922BFCu) goto L_08922BFC;
    return;
L_08922BFC:
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
    ctx.gpr[31] = (0x08922C0Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 350u, 0x08905990u>(ctx, &aot_mem) && ctx.pc == 0x08922C0Cu) goto L_08922C0C;
    return;
L_08922C0C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08922C3C;
      }
      goto L_08922C20;
    }
L_08922C20:
    ctx.gpr[31] = (0x08922C28u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 350u, 0x08905990u>(ctx, &aot_mem) && ctx.pc == 0x08922C28u) goto L_08922C28;
    return;
L_08922C28:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08922CB8;
      }
      goto L_08922C3C;
    }
L_08922C3C:
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08922C54u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 395u, 0x08905D98u>(ctx, &aot_mem) && ctx.pc == 0x08922C54u) goto L_08922C54;
    return;
L_08922C54:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08922C60u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 699u, 0x0890712Cu>(ctx, &aot_mem) && ctx.pc == 0x08922C60u) goto L_08922C60;
    return;
L_08922C60:
    ctx.gpr[31] = (0x08922C68u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 751u, 0x0890747Cu>(ctx, &aot_mem) && ctx.pc == 0x08922C68u) goto L_08922C68;
    return;
L_08922C68:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1968)));
    ctx.gpr[31] = (0x08922C7Cu);
    ctx.fpr[12] = ctx.fpr[0] - ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem) && ctx.pc == 0x08922C7Cu) goto L_08922C7C;
    return;
L_08922C7C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08922C88u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 699u, 0x0890712Cu>(ctx, &aot_mem) && ctx.pc == 0x08922C88u) goto L_08922C88;
    return;
L_08922C88:
    ctx.gpr[31] = (0x08922C90u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 751u, 0x0890747Cu>(ctx, &aot_mem) && ctx.pc == 0x08922C90u) goto L_08922C90;
    return;
L_08922C90:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08922C9Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 700u, 0x08907134u>(ctx, &aot_mem) && ctx.pc == 0x08922C9Cu) goto L_08922C9C;
    return;
L_08922C9C:
    ctx.gpr[31] = (0x08922CA4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 617u, 0x08906DBCu>(ctx, &aot_mem) && ctx.pc == 0x08922CA4u) goto L_08922CA4;
    return;
L_08922CA4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08922CB8u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 360u, 0x08905A68u>(ctx, &aot_mem) && ctx.pc == 0x08922CB8u) goto L_08922CB8;
    return;
L_08922CB8:
    ctx.gpr[31] = (0x08922CC0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 513u, 0x0890E2FCu>(ctx, &aot_mem) && ctx.pc == 0x08922CC0u) goto L_08922CC0;
    return;
L_08922CC0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2072), 0u);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(1696));
    ctx.gpr[31] = (0x08922CD0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 359u, 0x08905A60u>(ctx, &aot_mem) && ctx.pc == 0x08922CD0u) goto L_08922CD0;
    return;
L_08922CD0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08922CDCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 354u, 0x089059FCu>(ctx, &aot_mem) && ctx.pc == 0x08922CDCu) goto L_08922CDC;
    return;
L_08922CDC:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(848));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08922CF0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 206u, 0x08904E70u>(ctx, &aot_mem) && ctx.pc == 0x08922CF0u) goto L_08922CF0;
    return;
L_08922CF0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[31] = (0x08922CFCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 354u, 0x089059FCu>(ctx, &aot_mem) && ctx.pc == 0x08922CFCu) goto L_08922CFC;
    return;
L_08922CFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089234EC;
      }
      goto L_08922D04;
    }
L_08922D04:
    ctx.gpr[31] = (0x08922D0Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08922D0Cu) goto L_08922D0C;
    return;
L_08922D0C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08922E70;
      }
      goto L_08922D14;
    }
L_08922D14:
    ctx.gpr[31] = (0x08922D1Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08922D1Cu) goto L_08922D1C;
    return;
L_08922D1C:
    ctx.gpr[31] = (0x08922D24u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 114u, 0x0898C4ECu>(ctx, &aot_mem) && ctx.pc == 0x08922D24u) goto L_08922D24;
    return;
L_08922D24:
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08922D34u);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[22])));
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08922D34u) goto L_08922D34;
    return;
L_08922D34:
    ctx.gpr[31] = (0x08922D3Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 124u, 0x0898C578u>(ctx, &aot_mem) && ctx.pc == 0x08922D3Cu) goto L_08922D3C;
    return;
L_08922D3C:
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
    ctx.gpr[31] = (0x08922D4Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 350u, 0x08905990u>(ctx, &aot_mem) && ctx.pc == 0x08922D4Cu) goto L_08922D4C;
    return;
L_08922D4C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08922D7C;
      }
      goto L_08922D60;
    }
L_08922D60:
    ctx.gpr[31] = (0x08922D68u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 350u, 0x08905990u>(ctx, &aot_mem) && ctx.pc == 0x08922D68u) goto L_08922D68;
    return;
L_08922D68:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08922DF8;
      }
      goto L_08922D7C;
    }
L_08922D7C:
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08922D94u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 395u, 0x08905D98u>(ctx, &aot_mem) && ctx.pc == 0x08922D94u) goto L_08922D94;
    return;
L_08922D94:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08922DA0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 699u, 0x0890712Cu>(ctx, &aot_mem) && ctx.pc == 0x08922DA0u) goto L_08922DA0;
    return;
L_08922DA0:
    ctx.gpr[31] = (0x08922DA8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 751u, 0x0890747Cu>(ctx, &aot_mem) && ctx.pc == 0x08922DA8u) goto L_08922DA8;
    return;
L_08922DA8:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1968)));
    ctx.gpr[31] = (0x08922DBCu);
    ctx.fpr[12] = ctx.fpr[0] - ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem) && ctx.pc == 0x08922DBCu) goto L_08922DBC;
    return;
L_08922DBC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08922DC8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 699u, 0x0890712Cu>(ctx, &aot_mem) && ctx.pc == 0x08922DC8u) goto L_08922DC8;
    return;
L_08922DC8:
    ctx.gpr[31] = (0x08922DD0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 751u, 0x0890747Cu>(ctx, &aot_mem) && ctx.pc == 0x08922DD0u) goto L_08922DD0;
    return;
L_08922DD0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08922DDCu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 700u, 0x08907134u>(ctx, &aot_mem) && ctx.pc == 0x08922DDCu) goto L_08922DDC;
    return;
L_08922DDC:
    ctx.gpr[31] = (0x08922DE4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 617u, 0x08906DBCu>(ctx, &aot_mem) && ctx.pc == 0x08922DE4u) goto L_08922DE4;
    return;
L_08922DE4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08922DF8u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 360u, 0x08905A68u>(ctx, &aot_mem) && ctx.pc == 0x08922DF8u) goto L_08922DF8;
    return;
L_08922DF8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08922E08u);
    ctx.gpr[6] = (0u | 137u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x08922E08u) goto L_08922E08;
    return;
L_08922E08:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08922E28;
      }
      goto L_08922E14;
    }
L_08922E14:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08922E24u);
    ctx.gpr[6] = (0u | 140u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x08922E24u) goto L_08922E24;
    return;
L_08922E24:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_08922E28;
L_08922E28:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08922E4C;
      }
      goto L_08922E30;
    }
L_08922E30:
    ctx.gpr[5] = (49216u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08922E40u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 376u, 0x08905BC0u>(ctx, &aot_mem) && ctx.pc == 0x08922E40u) goto L_08922E40;
    return;
L_08922E40:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08922E4Cu);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 374u, 0x08905BA8u>(ctx, &aot_mem) && ctx.pc == 0x08922E4Cu) goto L_08922E4C;
    return;
L_08922E4C:
    ctx.gpr[31] = (0x08922E54u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 664u, 0x08906F80u>(ctx, &aot_mem) && ctx.pc == 0x08922E54u) goto L_08922E54;
    return;
L_08922E54:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08922E68;
      }
      goto L_08922E5C;
    }
L_08922E5C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08922E68u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem) && ctx.pc == 0x08922E68u) goto L_08922E68;
    return;
L_08922E68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089234EC;
      }
      goto L_08922E70;
    }
L_08922E70:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08922E80u);
    ctx.gpr[6] = (0u | 137u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x08922E80u) goto L_08922E80;
    return;
L_08922E80:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08922EA0;
      }
      goto L_08922E8C;
    }
L_08922E8C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08922E9Cu);
    ctx.gpr[6] = (0u | 140u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x08922E9Cu) goto L_08922E9C;
    return;
L_08922E9C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_08922EA0;
L_08922EA0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08922EC4;
      }
      goto L_08922EA8;
    }
L_08922EA8:
    ctx.gpr[5] = (49216u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08922EB8u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 376u, 0x08905BC0u>(ctx, &aot_mem) && ctx.pc == 0x08922EB8u) goto L_08922EB8;
    return;
L_08922EB8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08922EC4u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 374u, 0x08905BA8u>(ctx, &aot_mem) && ctx.pc == 0x08922EC4u) goto L_08922EC4;
    return;
L_08922EC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089234EC;
      }
      goto L_08922ECC;
    }
L_08922ECC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(310)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089233A8;
      }
      goto L_08922EDC;
    }
L_08922EDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(240)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089233A8;
      }
      goto L_08922EE8;
    }
L_08922EE8:
    ctx.gpr[31] = (0x08922EF0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(240)));
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 377u, 0x08905BC8u>(ctx, &aot_mem) && ctx.pc == 0x08922EF0u) goto L_08922EF0;
    return;
L_08922EF0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089233A8;
      }
      goto L_08922EF8;
    }
L_08922EF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2072)));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
      if (branch_taken) {
          goto L_08922F14;
      }
      goto L_08922F08;
    }
L_08922F08:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    goto L_08922F14;
L_08922F14:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08922F24u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(864), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 373u, 0x08905BA0u>(ctx, &aot_mem) && ctx.pc == 0x08922F24u) goto L_08922F24;
    return;
L_08922F24:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(868), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(868));
    ctx.gpr[31] = (0x08922F34u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(864));
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 192u, 0x08904CACu>(ctx, &aot_mem) && ctx.pc == 0x08922F34u) goto L_08922F34;
    return;
L_08922F34:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16968u << 16u);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089233A8;
      }
      goto L_08922F5C;
    }
L_08922F5C:
    ctx.gpr[31] = (0x08922F64u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 350u, 0x08905990u>(ctx, &aot_mem) && ctx.pc == 0x08922F64u) goto L_08922F64;
    return;
L_08922F64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2072)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_08922F84;
      }
      goto L_08922F78;
    }
L_08922F78:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_08922F84;
L_08922F84:
    ctx.gpr[4] = (15235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089233A8;
      }
      goto L_08922FA4;
    }
L_08922FA4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[4] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(768), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(772), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(768));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(776), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08922FD0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 352u, 0x089059BCu>(ctx, &aot_mem) && ctx.pc == 0x08922FD0u) goto L_08922FD0;
    return;
L_08922FD0:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(880));
    ctx.gpr[31] = (0x08922FDCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 359u, 0x08905A60u>(ctx, &aot_mem) && ctx.pc == 0x08922FDCu) goto L_08922FDC;
    return;
L_08922FDC:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08922FECu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 180u, 0x08904BA8u>(ctx, &aot_mem) && ctx.pc == 0x08922FECu) goto L_08922FEC;
    return;
L_08922FEC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[2] = (49568u << 16u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(704));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(784));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x08923024u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 287u, 0x08891DD4u>(ctx, &aot_mem) && ctx.pc == 0x08923024u) goto L_08923024;
    return;
L_08923024:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892303C;
      }
      goto L_0892302C;
    }
L_0892302C:
    ctx.gpr[31] = (0x08923034u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(704));
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 390u, 0x08905D48u>(ctx, &aot_mem) && ctx.pc == 0x08923034u) goto L_08923034;
    return;
L_08923034:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08923044;
      }
      goto L_0892303C;
    }
L_0892303C:
    ctx.gpr[4] = (17402u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08923044;
L_08923044:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(880));
    ctx.gpr[31] = (0x08923050u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 359u, 0x08905A60u>(ctx, &aot_mem) && ctx.pc == 0x08923050u) goto L_08923050;
    return;
L_08923050:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(768));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08923060u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 181u, 0x08904BC0u>(ctx, &aot_mem) && ctx.pc == 0x08923060u) goto L_08923060;
    return;
L_08923060:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[2] = (49568u << 16u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(736));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(784));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x08923098u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 287u, 0x08891DD4u>(ctx, &aot_mem) && ctx.pc == 0x08923098u) goto L_08923098;
    return;
L_08923098:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089230B0;
      }
      goto L_089230A0;
    }
L_089230A0:
    ctx.gpr[31] = (0x089230A8u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(736));
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 390u, 0x08905D48u>(ctx, &aot_mem) && ctx.pc == 0x089230A8u) goto L_089230A8;
    return;
L_089230A8:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089230BC;
      }
      goto L_089230B0;
    }
L_089230B0:
    ctx.gpr[4] = (17402u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_089230BC;
L_089230BC:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x089230C8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 359u, 0x08905A60u>(ctx, &aot_mem) && ctx.pc == 0x089230C8u) goto L_089230C8;
    return;
L_089230C8:
    ctx.gpr[4] = (16261u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 7864u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (17402u << 16u);
      if (branch_taken) {
          goto L_08923100;
      }
      goto L_089230EC;
    }
L_089230EC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08923158;
      }
      goto L_08923100;
    }
L_08923100:
    ctx.gpr[31] = (0x08923108u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 359u, 0x08905A60u>(ctx, &aot_mem) && ctx.pc == 0x08923108u) goto L_08923108;
    return;
L_08923108:
    ctx.gpr[4] = (16261u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 7864u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08923160;
      }
      goto L_0892312C;
    }
L_0892312C:
    ctx.gpr[31] = (0x08923134u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 359u, 0x08905A60u>(ctx, &aot_mem) && ctx.pc == 0x08923134u) goto L_08923134;
    return;
L_08923134:
    ctx.gpr[4] = (16261u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 7864u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08923160;
      }
      goto L_08923158;
    }
L_08923158:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_089231A8;
      }
      goto L_08923160;
    }
L_08923160:
    ctx.gpr[31] = (0x08923168u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 359u, 0x08905A60u>(ctx, &aot_mem) && ctx.pc == 0x08923168u) goto L_08923168;
    return;
L_08923168:
    ctx.gpr[4] = (16261u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 7864u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (17401u << 16u);
      if (branch_taken) {
          goto L_089231A8;
      }
      goto L_0892318C;
    }
L_0892318C:
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089231A8;
      }
      goto L_089231A4;
    }
L_089231A4:
    ctx.gpr[18] = (0u | 2u);
    goto L_089231A8;
L_089231A8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0892324C;
      }
      goto L_089231B0;
    }
L_089231B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(464)));
    ctx.gpr[5] = (8192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892324C;
      }
      goto L_089231C4;
    }
L_089231C4:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089231F8;
      }
      goto L_089231D0;
    }
L_089231D0:
    ctx.gpr[31] = (0x089231D8u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(736));
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 390u, 0x08905D48u>(ctx, &aot_mem) && ctx.pc == 0x089231D8u) goto L_089231D8;
    return;
L_089231D8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(912));
    ctx.gpr[31] = (0x089231E4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 351u, 0x0890599Cu>(ctx, &aot_mem) && ctx.pc == 0x089231E4u) goto L_089231E4;
    return;
L_089231E4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089231F0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 357u, 0x08905A30u>(ctx, &aot_mem) && ctx.pc == 0x089231F0u) goto L_089231F0;
    return;
L_089231F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (16261u << 16u);
      if (branch_taken) {
          goto L_0892321C;
      }
      goto L_089231F8;
    }
L_089231F8:
    ctx.gpr[31] = (0x08923200u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(704));
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 390u, 0x08905D48u>(ctx, &aot_mem) && ctx.pc == 0x08923200u) goto L_08923200;
    return;
L_08923200:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(928));
    ctx.gpr[31] = (0x0892320Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 351u, 0x0890599Cu>(ctx, &aot_mem) && ctx.pc == 0x0892320Cu) goto L_0892320C;
    return;
L_0892320C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08923218u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 357u, 0x08905A30u>(ctx, &aot_mem) && ctx.pc == 0x08923218u) goto L_08923218;
    return;
L_08923218:
    ctx.gpr[4] = (16261u << 16u);
    goto L_0892321C;
L_0892321C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (ctx.gpr[4] | 7864u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08923238u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem) && ctx.pc == 0x08923238u) goto L_08923238;
    return;
L_08923238:
    ctx.gpr[31] = (0x08923240u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 551u, 0x0890A1A0u>(ctx, &aot_mem) && ctx.pc == 0x08923240u) goto L_08923240;
    return;
L_08923240:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892324Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 336u, 0x08905804u>(ctx, &aot_mem) && ctx.pc == 0x0892324Cu) goto L_0892324C;
    return;
L_0892324C:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08923284;
      }
      goto L_0892325C;
    }
L_0892325C:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(768));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(944));
    ctx.gpr[6] = (49024u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08923278u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 182u, 0x08904BD8u>(ctx, &aot_mem) && ctx.pc == 0x08923278u) goto L_08923278;
    return;
L_08923278:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08923284u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 354u, 0x089059FCu>(ctx, &aot_mem) && ctx.pc == 0x08923284u) goto L_08923284;
    return;
L_08923284:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(880));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(776), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(768));
    ctx.gpr[6] = (16512u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x089232ACu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 182u, 0x08904BD8u>(ctx, &aot_mem) && ctx.pc == 0x089232ACu) goto L_089232AC;
    return;
L_089232AC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089232B8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 405u, 0x08905EECu>(ctx, &aot_mem) && ctx.pc == 0x089232B8u) goto L_089232B8;
    return;
L_089232B8:
    ctx.gpr[31] = (0x089232C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 359u, 0x08905A60u>(ctx, &aot_mem) && ctx.pc == 0x089232C0u) goto L_089232C0;
    return;
L_089232C0:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(896));
    ctx.gpr[6] = (16000u << 16u);
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089232DCu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 182u, 0x08904BD8u>(ctx, &aot_mem) && ctx.pc == 0x089232DCu) goto L_089232DC;
    return;
L_089232DC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089232ECu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 180u, 0x08904BA8u>(ctx, &aot_mem) && ctx.pc == 0x089232ECu) goto L_089232EC;
    return;
L_089232EC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089232F8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 358u, 0x08905A44u>(ctx, &aot_mem) && ctx.pc == 0x089232F8u) goto L_089232F8;
    return;
L_089232F8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(768)));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(772)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08923310u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 395u, 0x08905D98u>(ctx, &aot_mem) && ctx.pc == 0x08923310u) goto L_08923310;
    return;
L_08923310:
    ctx.gpr[31] = (0x08923318u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem) && ctx.pc == 0x08923318u) goto L_08923318;
    return;
L_08923318:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08923324u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 700u, 0x08907134u>(ctx, &aot_mem) && ctx.pc == 0x08923324u) goto L_08923324;
    return;
L_08923324:
    ctx.gpr[31] = (0x0892332Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 617u, 0x08906DBCu>(ctx, &aot_mem) && ctx.pc == 0x0892332Cu) goto L_0892332C;
    return;
L_0892332C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08923338u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 699u, 0x0890712Cu>(ctx, &aot_mem) && ctx.pc == 0x08923338u) goto L_08923338;
    return;
L_08923338:
    ctx.gpr[31] = (0x08923340u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 617u, 0x08906DBCu>(ctx, &aot_mem) && ctx.pc == 0x08923340u) goto L_08923340;
    return;
L_08923340:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08923354u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 360u, 0x08905A68u>(ctx, &aot_mem) && ctx.pc == 0x08923354u) goto L_08923354;
    return;
L_08923354:
    ctx.gpr[31] = (0x0892335Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 231u, 0x08905104u>(ctx, &aot_mem) && ctx.pc == 0x0892335Cu) goto L_0892335C;
    return;
L_0892335C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08923394;
      }
      goto L_0892336C;
    }
L_0892336C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (8192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08923394;
      }
      goto L_08923380;
    }
L_08923380:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1000u);
    ctx.gpr[6] = (0u | 30u);
    ctx.gpr[31] = (0x08923394u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 14u, 0x0891C0E8u>(ctx, &aot_mem) && ctx.pc == 0x08923394u) goto L_08923394;
    return;
L_08923394:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-4097));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089234EC;
      }
      goto L_089233A8;
    }
L_089233A8:
    ctx.gpr[4] = (16076u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(296)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089234EC;
      }
      goto L_089233C8;
    }
L_089233C8:
    ctx.gpr[31] = (0x089233D0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 664u, 0x08906F80u>(ctx, &aot_mem) && ctx.pc == 0x089233D0u) goto L_089233D0;
    return;
L_089233D0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08923430;
      }
      goto L_089233D8;
    }
L_089233D8:
    ctx.gpr[31] = (0x089233E0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 277u, 0x08905388u>(ctx, &aot_mem) && ctx.pc == 0x089233E0u) goto L_089233E0;
    return;
L_089233E0:
    ctx.gpr[4] = (ctx.gpr[2] < static_cast<std::uint32_t>(2001) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08923400;
      }
      goto L_089233EC;
    }
L_089233EC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089233F8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 276u, 0x08905380u>(ctx, &aot_mem) && ctx.pc == 0x089233F8u) goto L_089233F8;
    return;
L_089233F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08923430;
      }
      goto L_08923400;
    }
L_08923400:
    ctx.gpr[31] = (0x08923408u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 277u, 0x08905388u>(ctx, &aot_mem) && ctx.pc == 0x08923408u) goto L_08923408;
    return;
L_08923408:
    ctx.gpr[4] = (ctx.gpr[2] < static_cast<std::uint32_t>(1000) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08923430;
      }
      goto L_08923414;
    }
L_08923414:
    ctx.gpr[31] = (0x0892341Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 277u, 0x08905388u>(ctx, &aot_mem) && ctx.pc == 0x0892341Cu) goto L_0892341C;
    return;
L_0892341C:
    ctx.gpr[31] = (0x08923424u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 369u, 0x08905B34u>(ctx, &aot_mem) && ctx.pc == 0x08923424u) goto L_08923424;
    return;
L_08923424:
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[2]);
    ctx.gpr[31] = (0x08923430u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 276u, 0x08905380u>(ctx, &aot_mem) && ctx.pc == 0x08923430u) goto L_08923430;
    return;
L_08923430:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(288));
    ctx.gpr[31] = (0x08923440u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 354u, 0x089059FCu>(ctx, &aot_mem) && ctx.pc == 0x08923440u) goto L_08923440;
    return;
L_08923440:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08923450u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 175u, 0x08904B3Cu>(ctx, &aot_mem) && ctx.pc == 0x08923450u) goto L_08923450;
    return;
L_08923450:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x0892345Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(180));
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 175u, 0x08904B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0892345Cu) goto L_0892345C;
    return;
L_0892345C:
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[0];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089234EC;
      }
      goto L_08923470;
    }
L_08923470:
    ctx.gpr[31] = (0x08923478u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 352u, 0x089059BCu>(ctx, &aot_mem) && ctx.pc == 0x08923478u) goto L_08923478;
    return;
L_08923478:
    ctx.gpr[31] = (0x08923480u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 664u, 0x08906F80u>(ctx, &aot_mem) && ctx.pc == 0x08923480u) goto L_08923480;
    return;
L_08923480:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089234C8;
      }
      goto L_08923488;
    }
L_08923488:
    ctx.gpr[31] = (0x08923490u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 277u, 0x08905388u>(ctx, &aot_mem) && ctx.pc == 0x08923490u) goto L_08923490;
    return;
L_08923490:
    ctx.gpr[4] = (ctx.gpr[2] < static_cast<std::uint32_t>(300) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089234C8;
      }
      goto L_0892349C;
    }
L_0892349C:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(960));
    ctx.gpr[6] = (49280u << 16u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x089234B4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 182u, 0x08904BD8u>(ctx, &aot_mem) && ctx.pc == 0x089234B4u) goto L_089234B4;
    return;
L_089234B4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089234C0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 405u, 0x08905EECu>(ctx, &aot_mem) && ctx.pc == 0x089234C0u) goto L_089234C0;
    return;
L_089234C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089234EC;
      }
      goto L_089234C8;
    }
L_089234C8:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(976));
    ctx.gpr[6] = (16384u << 16u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x089234E0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 182u, 0x08904BD8u>(ctx, &aot_mem) && ctx.pc == 0x089234E0u) goto L_089234E0;
    return;
L_089234E0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089234ECu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 405u, 0x08905EECu>(ctx, &aot_mem) && ctx.pc == 0x089234ECu) goto L_089234EC;
    return;
L_089234EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08923508;
      }
      goto L_089234F4;
    }
L_089234F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2072)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1001) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08923508;
      }
      goto L_08923504;
    }
L_08923504:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2072), 0u);
    goto L_08923508;
L_08923508:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08923574;
      }
      goto L_08923510;
    }
L_08923510:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (65535u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32767));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2072)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] < static_cast<std::uint32_t>(1001) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08923574;
      }
      goto L_08923534;
    }
L_08923534:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2072)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(501) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08923554;
      }
      goto L_08923544;
    }
L_08923544:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[4] = (ctx.gpr[4] & 4096u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892355C;
      }
      goto L_08923554;
    }
L_08923554:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2072), 0u);
      if (branch_taken) {
          goto L_08923574;
      }
      goto L_0892355C;
    }
L_0892355C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2072)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08923574;
      }
      goto L_08923568;
    }
L_08923568:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2072)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2072), ctx.gpr[4]);
    goto L_08923574;
L_08923574:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & 8192u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892358C;
      }
      goto L_08923584;
    }
L_08923584:
    ctx.gpr[31] = (0x0892358Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 675u, 0x089AB3ACu>(ctx, &aot_mem) && ctx.pc == 0x0892358Cu) goto L_0892358C;
    return;
L_0892358C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (2048u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08923630;
      }
      goto L_089235A0;
    }
L_089235A0:
    ctx.gpr[31] = (0x089235A8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem) && ctx.pc == 0x089235A8u) goto L_089235A8;
    return;
L_089235A8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089235DC;
      }
      goto L_089235B0;
    }
L_089235B0:
    ctx.gpr[31] = (0x089235B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 899u, 0x0890B900u>(ctx, &aot_mem) && ctx.pc == 0x089235B8u) goto L_089235B8;
    return;
L_089235B8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1930))))));
    ctx.gpr[31] = (0x089235C4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 631u, 0x0890A728u>(ctx, &aot_mem) && ctx.pc == 0x089235C4u) goto L_089235C4;
    return;
L_089235C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (63488u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08923630;
      }
      goto L_089235DC;
    }
L_089235DC:
    ctx.gpr[31] = (0x089235E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 231u, 0x08905104u>(ctx, &aot_mem) && ctx.pc == 0x089235E4u) goto L_089235E4;
    return;
L_089235E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08923630;
      }
      goto L_089235F4;
    }
L_089235F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[31] = (0x0892360Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 240u, 0x089051A4u>(ctx, &aot_mem) && ctx.pc == 0x0892360Cu) goto L_0892360C;
    return;
L_0892360C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[31] = (0x0892361Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem) && ctx.pc == 0x0892361Cu) goto L_0892361C;
    return;
L_0892361C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (63488u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    goto L_08923630;
L_08923630:
    ctx.gpr[31] = (0x08923638u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 521u, 0x08909F78u>(ctx, &aot_mem) && ctx.pc == 0x08923638u) goto L_08923638;
    return;
L_08923638:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089236AC;
      }
      goto L_08923640;
    }
L_08923640:
    ctx.gpr[31] = (0x08923648u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 400u, 0x08905EB8u>(ctx, &aot_mem) && ctx.pc == 0x08923648u) goto L_08923648;
    return;
L_08923648:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089236AC;
      }
      goto L_08923664;
    }
L_08923664:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(992));
    ctx.gpr[31] = (0x08923670u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 400u, 0x08905EB8u>(ctx, &aot_mem) && ctx.pc == 0x08923670u) goto L_08923670;
    return;
L_08923670:
    ctx.gpr[4] = (16243u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08923684u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 373u, 0x08905BA0u>(ctx, &aot_mem) && ctx.pc == 0x08923684u) goto L_08923684;
    return;
L_08923684:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08923690u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 349u, 0x08905964u>(ctx, &aot_mem) && ctx.pc == 0x08923690u) goto L_08923690;
    return;
L_08923690:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x089236A0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 183u, 0x08904BF4u>(ctx, &aot_mem) && ctx.pc == 0x089236A0u) goto L_089236A0;
    return;
L_089236A0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089236ACu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem) && ctx.pc == 0x089236ACu) goto L_089236AC;
    return;
L_089236AC:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x089236B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x089236B8u) goto L_089236B8;
    return;
L_089236B8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089237B4;
      }
      goto L_089236C0;
    }
L_089236C0:
    ctx.gpr[31] = (0x089236C8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 521u, 0x08909F78u>(ctx, &aot_mem) && ctx.pc == 0x089236C8u) goto L_089236C8;
    return;
L_089236C8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089237B4;
      }
      goto L_089236D0;
    }
L_089236D0:
    ctx.gpr[31] = (0x089236D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 400u, 0x08905EB8u>(ctx, &aot_mem) && ctx.pc == 0x089236D8u) goto L_089236D8;
    return;
L_089236D8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089237B4;
      }
      goto L_089236F0;
    }
L_089236F0:
    ctx.gpr[31] = (0x089236F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 400u, 0x08905EB8u>(ctx, &aot_mem) && ctx.pc == 0x089236F8u) goto L_089236F8;
    return;
L_089236F8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089237B4;
      }
      goto L_08923710;
    }
L_08923710:
    ctx.gpr[31] = (0x08923718u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 400u, 0x08905EB8u>(ctx, &aot_mem) && ctx.pc == 0x08923718u) goto L_08923718;
    return;
L_08923718:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089237B4;
      }
      goto L_08923730;
    }
L_08923730:
    ctx.gpr[31] = (0x08923738u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 697u, 0x0890711Cu>(ctx, &aot_mem) && ctx.pc == 0x08923738u) goto L_08923738;
    return;
L_08923738:
    ctx.gpr[4] = (0u | 1u);
    if (ctx.gpr[2] == ctx.gpr[4]) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(792)));
        goto L_08923758;
    }
    goto L_08923744;
L_08923744:
    ctx.gpr[31] = (0x0892374Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 697u, 0x0890711Cu>(ctx, &aot_mem) && ctx.pc == 0x0892374Cu) goto L_0892374C;
    return;
L_0892374C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089237B4;
      }
      goto L_08923754;
    }
L_08923754:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(792)));
    goto L_08923758;
L_08923758:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089237B4;
      }
      goto L_0892376C;
    }
L_0892376C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(796)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089237B4;
      }
      goto L_08923784;
    }
L_08923784:
    ctx.gpr[31] = (0x0892378Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 664u, 0x08906F80u>(ctx, &aot_mem) && ctx.pc == 0x0892378Cu) goto L_0892378C;
    return;
L_0892378C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089237B4;
      }
      goto L_08923794;
    }
L_08923794:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[4] = (ctx.gpr[4] & 4096u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089237B4;
      }
      goto L_089237A4;
    }
L_089237A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1300)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089237B4;
      }
      goto L_089237B0;
    }
L_089237B0:
    ctx.gpr[18] = (0u | 1u);
    goto L_089237B4;
L_089237B4:
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
    ctx.gpr[31] = (0x089237C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 381u, 0x08905C18u>(ctx, &aot_mem) && ctx.pc == 0x089237C0u) goto L_089237C0;
    return;
L_089237C0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089237D8;
      }
      goto L_089237C8;
    }
L_089237C8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(304))))));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(304), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089237FC;
      }
      goto L_089237D8;
    }
L_089237D8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(304))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089237EC;
      }
      goto L_089237E8;
    }
L_089237E8:
    ctx.gpr[18] = (0u | 0u);
    goto L_089237EC;
L_089237EC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(304))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(304), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089237FC;
L_089237FC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089238B0;
      }
      goto L_08923804;
    }
L_08923804:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08923810u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 384u, 0x08905C4Cu>(ctx, &aot_mem) && ctx.pc == 0x08923810u) goto L_08923810;
    return;
L_08923810:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892381Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 385u, 0x08905C70u>(ctx, &aot_mem) && ctx.pc == 0x0892381Cu) goto L_0892381C;
    return;
L_0892381C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08923828u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 386u, 0x08905C98u>(ctx, &aot_mem) && ctx.pc == 0x08923828u) goto L_08923828;
    return;
L_08923828:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08923834u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 387u, 0x08905CC0u>(ctx, &aot_mem) && ctx.pc == 0x08923834u) goto L_08923834;
    return;
L_08923834:
    ctx.gpr[31] = (0x0892383Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 401u, 0x08905EC0u>(ctx, &aot_mem) && ctx.pc == 0x0892383Cu) goto L_0892383C;
    return;
L_0892383C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (65520u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[31] = (0x08923858u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 402u, 0x08905EC8u>(ctx, &aot_mem) && ctx.pc == 0x08923858u) goto L_08923858;
    return;
L_08923858:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(144));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08923878u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 206u, 0x08904E70u>(ctx, &aot_mem) && ctx.pc == 0x08923878u) goto L_08923878;
    return;
L_08923878:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08923884u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 354u, 0x089059FCu>(ctx, &aot_mem) && ctx.pc == 0x08923884u) goto L_08923884;
    return;
L_08923884:
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(128));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0892389Cu);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 206u, 0x08904E70u>(ctx, &aot_mem) && ctx.pc == 0x0892389Cu) goto L_0892389C;
    return;
L_0892389C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089238A8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 354u, 0x089059FCu>(ctx, &aot_mem) && ctx.pc == 0x089238A8u) goto L_089238A8;
    return;
L_089238A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089238B8;
      }
      goto L_089238B0;
    }
L_089238B0:
    ctx.gpr[31] = (0x089238B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 540u, 0x08A666DCu>(ctx, &aot_mem) && ctx.pc == 0x089238B8u) goto L_089238B8;
    return;
L_089238B8:
    ctx.gpr[31] = (0x089238C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 231u, 0x08905104u>(ctx, &aot_mem) && ctx.pc == 0x089238C0u) goto L_089238C0;
    return;
L_089238C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 57u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08923954;
      }
      goto L_089238D0;
    }
L_089238D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (8192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08923954;
      }
      goto L_089238E4;
    }
L_089238E4:
    ctx.gpr[31] = (0x089238ECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 521u, 0x08909F78u>(ctx, &aot_mem) && ctx.pc == 0x089238ECu) goto L_089238EC;
    return;
L_089238EC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08923924;
      }
      goto L_089238F4;
    }
L_089238F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1300)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08923944;
      }
      goto L_08923900;
    }
L_08923900:
    ctx.gpr[31] = (0x08923908u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08923908u) goto L_08923908;
    return;
L_08923908:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08923944;
      }
      goto L_08923910;
    }
L_08923910:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1300)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(236)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08923944;
      }
      goto L_08923924;
    }
L_08923924:
    ctx.gpr[31] = (0x0892392Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 730u, 0x08907350u>(ctx, &aot_mem) && ctx.pc == 0x0892392Cu) goto L_0892392C;
    return;
L_0892392C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08923944;
      }
      goto L_08923934;
    }
L_08923934:
    ctx.gpr[31] = (0x0892393Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 383u, 0x08905C3Cu>(ctx, &aot_mem) && ctx.pc == 0x0892393Cu) goto L_0892393C;
    return;
L_0892393C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892394C;
      }
      goto L_08923944;
    }
L_08923944:
    ctx.gpr[31] = (0x0892394Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 854u, 0x0890B608u>(ctx, &aot_mem) && ctx.pc == 0x0892394Cu) goto L_0892394C;
    return;
L_0892394C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1300), 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 144u, 0x089246E4u>(ctx, &aot_mem); return;
      }
      goto L_08923954;
    }
L_08923954:
    ctx.gpr[31] = (0x0892395Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 33u, 0x089081BCu>(ctx, &aot_mem) && ctx.pc == 0x0892395Cu) goto L_0892395C;
    return;
L_0892395C:
    ctx.gpr[31] = (0x08923964u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 124u, 0x08914E30u>(ctx, &aot_mem) && ctx.pc == 0x08923964u) goto L_08923964;
    return;
L_08923964:
    ctx.gpr[31] = (0x0892396Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 231u, 0x08905104u>(ctx, &aot_mem) && ctx.pc == 0x0892396Cu) goto L_0892396C;
    return;
L_0892396C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 58u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0892398C;
      }
      goto L_0892397C;
    }
L_0892397C:
    ctx.gpr[31] = (0x08923984u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 258u, 0x08919480u>(ctx, &aot_mem) && ctx.pc == 0x08923984u) goto L_08923984;
    return;
L_08923984:
    ctx.gpr[31] = (0x0892398Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 839u, 0x08907AECu>(ctx, &aot_mem) && ctx.pc == 0x0892398Cu) goto L_0892398C;
    return;
L_0892398C:
    ctx.gpr[31] = (0x08923994u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 349u, 0x08919CD8u>(ctx, &aot_mem) && ctx.pc == 0x08923994u) goto L_08923994;
    return;
L_08923994:
    ctx.gpr[31] = (0x0892399Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x0892399Cu) goto L_0892399C;
    return;
L_0892399C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089239AC;
      }
      goto L_089239A4;
    }
L_089239A4:
    ctx.gpr[31] = (0x089239ACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 395u, 0x088B9DE0u>(ctx, &aot_mem) && ctx.pc == 0x089239ACu) goto L_089239AC;
    return;
L_089239AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089239C4u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089239C4u) goto L_089239C4;
    return;
L_089239C4:
    ctx.gpr[31] = (0x089239CCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 414u, 0x08905FD4u>(ctx, &aot_mem) && ctx.pc == 0x089239CCu) goto L_089239CC;
    return;
L_089239CC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08923A54;
      }
      goto L_089239D4;
    }
L_089239D4:
    ctx.gpr[31] = (0x089239DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem) && ctx.pc == 0x089239DCu) goto L_089239DC;
    return;
L_089239DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08923A54;
      }
      goto L_089239E4;
    }
L_089239E4:
    ctx.gpr[31] = (0x089239ECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 521u, 0x08909F78u>(ctx, &aot_mem) && ctx.pc == 0x089239ECu) goto L_089239EC;
    return;
L_089239EC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08923A54;
      }
      goto L_089239F4;
    }
L_089239F4:
    ctx.gpr[31] = (0x089239FCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 404u, 0x08905EE4u>(ctx, &aot_mem) && ctx.pc == 0x089239FCu) goto L_089239FC;
    return;
L_089239FC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08923A54;
      }
      goto L_08923A04;
    }
L_08923A04:
    ctx.gpr[31] = (0x08923A0Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 467u, 0x08909C20u>(ctx, &aot_mem) && ctx.pc == 0x08923A0Cu) goto L_08923A0C;
    return;
L_08923A0C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08923A28;
      }
      goto L_08923A14;
    }
L_08923A14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-4097));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08923A54;
      }
      goto L_08923A28;
    }
L_08923A28:
    ctx.gpr[31] = (0x08923A30u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 491u, 0x08909D3Cu>(ctx, &aot_mem) && ctx.pc == 0x08923A30u) goto L_08923A30;
    return;
L_08923A30:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08923A54;
      }
      goto L_08923A38;
    }
L_08923A38:
    ctx.gpr[31] = (0x08923A40u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 509u, 0x08909EBCu>(ctx, &aot_mem) && ctx.pc == 0x08923A40u) goto L_08923A40;
    return;
L_08923A40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(464)));
    ctx.gpr[5] = (57344u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(464), ctx.gpr[4]);
    goto L_08923A54;
L_08923A54:
    ctx.gpr[31] = (0x08923A5Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 29u, 0x08AC811Cu>(ctx, &aot_mem) && ctx.pc == 0x08923A5Cu) goto L_08923A5C;
    return;
L_08923A5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(472)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08923BD8;
      }
      goto L_08923A6C;
    }
L_08923A6C:
    ctx.gpr[31] = (0x08923A74u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 512u, 0x08906534u>(ctx, &aot_mem) && ctx.pc == 0x08923A74u) goto L_08923A74;
    return;
L_08923A74:
    ctx.gpr[31] = (0x08923A7Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 412u, 0x08905FB8u>(ctx, &aot_mem) && ctx.pc == 0x08923A7Cu) goto L_08923A7C;
    return;
L_08923A7C:
    ctx.gpr[31] = (0x08923A84u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem) && ctx.pc == 0x08923A84u) goto L_08923A84;
    return;
L_08923A84:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[31] = (0x08923A98u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08923A98u) goto L_08923A98;
    return;
L_08923A98:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08923ADC;
      }
      goto L_08923AA0;
    }
L_08923AA0:
    ctx.gpr[31] = (0x08923AA8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 512u, 0x08906534u>(ctx, &aot_mem) && ctx.pc == 0x08923AA8u) goto L_08923AA8;
    return;
L_08923AA8:
    ctx.gpr[31] = (0x08923AB0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 412u, 0x08905FB8u>(ctx, &aot_mem) && ctx.pc == 0x08923AB0u) goto L_08923AB0;
    return;
L_08923AB0:
    ctx.gpr[4] = (0u | 24u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08923AD8;
      }
      goto L_08923ABC;
    }
L_08923ABC:
    ctx.gpr[31] = (0x08923AC4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 512u, 0x08906534u>(ctx, &aot_mem) && ctx.pc == 0x08923AC4u) goto L_08923AC4;
    return;
L_08923AC4:
    ctx.gpr[31] = (0x08923ACCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 412u, 0x08905FB8u>(ctx, &aot_mem) && ctx.pc == 0x08923ACCu) goto L_08923ACC;
    return;
L_08923ACC:
    ctx.gpr[4] = (0u | 26u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08923ADC;
      }
      goto L_08923AD8;
    }
L_08923AD8:
    ctx.gpr[20] = (0u | 1u);
    goto L_08923ADC;
L_08923ADC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08923B2C;
      }
      goto L_08923AE4;
    }
L_08923AE4:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08923AF0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 393u, 0x08905D74u>(ctx, &aot_mem) && ctx.pc == 0x08923AF0u) goto L_08923AF0;
    return;
L_08923AF0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08923B00u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x08923B00u) goto L_08923B00;
    return;
L_08923B00:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08923B2C;
      }
      goto L_08923B0C;
    }
L_08923B0C:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08923B18u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 391u, 0x08905D50u>(ctx, &aot_mem) && ctx.pc == 0x08923B18u) goto L_08923B18;
    return;
L_08923B18:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08923B28u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x08923B28u) goto L_08923B28;
    return;
L_08923B28:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    goto L_08923B2C;
L_08923B2C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(816));
    ctx.gpr[31] = (0x08923B38u);
    ctx.gpr[5] = (0u | 248u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 413u, 0x08905FC0u>(ctx, &aot_mem) && ctx.pc == 0x08923B38u) goto L_08923B38;
    return;
L_08923B38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08923B68;
      }
      goto L_08923B48;
    }
L_08923B48:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08923B68;
      }
      goto L_08923B50;
    }
L_08923B50:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_08923B68;
      }
      goto L_08923B58;
    }
L_08923B58:
    ctx.gpr[31] = (0x08923B60u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 352u, 0x089094C8u>(ctx, &aot_mem) && ctx.pc == 0x08923B60u) goto L_08923B60;
    return;
L_08923B60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08923B80;
      }
      goto L_08923B68;
    }
L_08923B68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08923B80;
      }
      goto L_08923B78;
    }
L_08923B78:
    ctx.gpr[31] = (0x08923B80u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 387u, 0x089096B0u>(ctx, &aot_mem) && ctx.pc == 0x08923B80u) goto L_08923B80;
    return;
L_08923B80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08923BC0;
      }
      goto L_08923B90;
    }
L_08923B90:
    ctx.gpr[31] = (0x08923B98u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 231u, 0x08905104u>(ctx, &aot_mem) && ctx.pc == 0x08923B98u) goto L_08923B98;
    return;
L_08923B98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08923BC0;
      }
      goto L_08923BA8;
    }
L_08923BA8:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_08923BC0;
      }
      goto L_08923BB0;
    }
L_08923BB0:
    ctx.gpr[31] = (0x08923BB8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 678u, 0x0891BD30u>(ctx, &aot_mem) && ctx.pc == 0x08923BB8u) goto L_08923BB8;
    return;
L_08923BB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08923BD8;
      }
      goto L_08923BC0;
    }
L_08923BC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08923BD8;
      }
      goto L_08923BD0;
    }
L_08923BD0:
    ctx.gpr[31] = (0x08923BD8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 426u, 0x08909950u>(ctx, &aot_mem) && ctx.pc == 0x08923BD8u) goto L_08923BD8;
    return;
L_08923BD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[4] = (ctx.gpr[4] & 4096u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08923BF0;
      }
      goto L_08923BE8;
    }
L_08923BE8:
    ctx.gpr[31] = (0x08923BF0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 522u, 0x08909F84u>(ctx, &aot_mem) && ctx.pc == 0x08923BF0u) goto L_08923BF0;
    return;
L_08923BF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (32u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08923C7C;
      }
      goto L_08923C04;
    }
L_08923C04:
    ctx.gpr[31] = (0x08923C0Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 231u, 0x08905104u>(ctx, &aot_mem) && ctx.pc == 0x08923C0Cu) goto L_08923C0C;
    return;
L_08923C0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 46u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08923C7C;
      }
      goto L_08923C1C;
    }
L_08923C1C:
    ctx.gpr[31] = (0x08923C24u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 231u, 0x08905104u>(ctx, &aot_mem) && ctx.pc == 0x08923C24u) goto L_08923C24;
    return;
L_08923C24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08923C7C;
      }
      goto L_08923C34;
    }
L_08923C34:
    ctx.gpr[31] = (0x08923C3Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 617u, 0x08906DBCu>(ctx, &aot_mem) && ctx.pc == 0x08923C3Cu) goto L_08923C3C;
    return;
L_08923C3C:
    ctx.gpr[4] = (16329u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08923C54u);
    ctx.fpr[12] = ctx.fpr[0] - ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 700u, 0x08907134u>(ctx, &aot_mem) && ctx.pc == 0x08923C54u) goto L_08923C54;
    return;
L_08923C54:
    ctx.gpr[31] = (0x08923C5Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 617u, 0x08906DBCu>(ctx, &aot_mem) && ctx.pc == 0x08923C5Cu) goto L_08923C5C;
    return;
L_08923C5C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08923C68u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 699u, 0x0890712Cu>(ctx, &aot_mem) && ctx.pc == 0x08923C68u) goto L_08923C68;
    return;
L_08923C68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (65504u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    goto L_08923C7C;
L_08923C7C:
    ctx.gpr[31] = (0x08923C84u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 281u, 0x08909054u>(ctx, &aot_mem) && ctx.pc == 0x08923C84u) goto L_08923C84;
    return;
L_08923C84:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08923C94;
      }
      goto L_08923C8C;
    }
L_08923C8C:
    ctx.gpr[31] = (0x08923C94u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 450u, 0x08929EE4u>(ctx, &aot_mem) && ctx.pc == 0x08923C94u) goto L_08923C94;
    return;
L_08923C94:
    ctx.gpr[31] = (0x08923C9Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 317u, 0x088E957Cu>(ctx, &aot_mem) && ctx.pc == 0x08923C9Cu) goto L_08923C9C;
    return;
L_08923C9C:
    ctx.gpr[31] = (0x08923CA4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 231u, 0x08905104u>(ctx, &aot_mem) && ctx.pc == 0x08923CA4u) goto L_08923CA4;
    return;
L_08923CA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(68) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 74u, 0x089242E0u>(ctx, &aot_mem); return;
      }
      goto L_08923CB8;
    }
L_08923CB8:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-12448)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08923CD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1364)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08923D28;
      }
      goto L_08923CE4;
    }
L_08923CE4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08923CF4u);
    ctx.gpr[6] = (0u | 157u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x08923CF4u) goto L_08923CF4;
    return;
L_08923CF4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08923D60;
      }
      goto L_08923CFC;
    }
L_08923CFC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08923D10u);
    ctx.gpr[7] = (0u | 157u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 175u, 0x089089B8u>(ctx, &aot_mem) && ctx.pc == 0x08923D10u) goto L_08923D10;
    return;
L_08923D10:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 118u);
    ctx.gpr[31] = (0x08923D20u);
    ctx.gpr[6] = (0u | 1500u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 294u, 0x0891108Cu>(ctx, &aot_mem) && ctx.pc == 0x08923D20u) goto L_08923D20;
    return;
L_08923D20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08923D60;
      }
      goto L_08923D28;
    }
L_08923D28:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08923D38u);
    ctx.gpr[6] = (0u | 156u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x08923D38u) goto L_08923D38;
    return;
L_08923D38:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08923D60;
      }
      goto L_08923D40;
    }
L_08923D40:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08923D54u);
    ctx.gpr[7] = (0u | 156u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 175u, 0x089089B8u>(ctx, &aot_mem) && ctx.pc == 0x08923D54u) goto L_08923D54;
    return;
L_08923D54:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08923D60u);
    ctx.gpr[5] = (0u | 118u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem) && ctx.pc == 0x08923D60u) goto L_08923D60;
    return;
L_08923D60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 74u, 0x089242E0u>(ctx, &aot_mem); return;
      }
      goto L_08923D68;
    }
L_08923D68:
    ctx.gpr[31] = (0x08923D70u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 70u, 0x0891C44Cu>(ctx, &aot_mem) && ctx.pc == 0x08923D70u) goto L_08923D70;
    return;
L_08923D70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 74u, 0x089242E0u>(ctx, &aot_mem); return;
      }
      goto L_08923D78;
    }
L_08923D78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 74u, 0x089242E0u>(ctx, &aot_mem); return;
      }
      goto L_08923D80;
    }
L_08923D80:
    ctx.gpr[31] = (0x08923D88u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 736u, 0x0890ADC4u>(ctx, &aot_mem) && ctx.pc == 0x08923D88u) goto L_08923D88;
    return;
L_08923D88:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08923D98;
      }
      goto L_08923D90;
    }
L_08923D90:
    ctx.gpr[31] = (0x08923D98u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 748u, 0x0890AE94u>(ctx, &aot_mem) && ctx.pc == 0x08923D98u) goto L_08923D98;
    return;
L_08923D98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 74u, 0x089242E0u>(ctx, &aot_mem); return;
      }
      goto L_08923DA0;
    }
L_08923DA0:
    ctx.gpr[31] = (0x08923DA8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 296u, 0x089A9900u>(ctx, &aot_mem) && ctx.pc == 0x08923DA8u) goto L_08923DA8;
    return;
L_08923DA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 74u, 0x089242E0u>(ctx, &aot_mem); return;
      }
      goto L_08923DB0;
    }
L_08923DB0:
    ctx.gpr[31] = (0x08923DB8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 240u, 0x089051A4u>(ctx, &aot_mem) && ctx.pc == 0x08923DB8u) goto L_08923DB8;
    return;
L_08923DB8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08923E28;
      }
      goto L_08923DC0;
    }
L_08923DC0:
    ctx.gpr[31] = (0x08923DC8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 698u, 0x08907124u>(ctx, &aot_mem) && ctx.pc == 0x08923DC8u) goto L_08923DC8;
    return;
L_08923DC8:
    ctx.gpr[4] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08923DE8;
      }
      goto L_08923DD4;
    }
L_08923DD4:
    ctx.gpr[31] = (0x08923DDCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 698u, 0x08907124u>(ctx, &aot_mem) && ctx.pc == 0x08923DDCu) goto L_08923DDC;
    return;
L_08923DDC:
    ctx.gpr[4] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08923DF0;
      }
      goto L_08923DE8;
    }
L_08923DE8:
    ctx.gpr[31] = (0x08923DF0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 441u, 0x089AA5B8u>(ctx, &aot_mem) && ctx.pc == 0x08923DF0u) goto L_08923DF0;
    return;
L_08923DF0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08923DFCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 209u, 0x08910BDCu>(ctx, &aot_mem) && ctx.pc == 0x08923DFCu) goto L_08923DFC;
    return;
L_08923DFC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08923E08u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem) && ctx.pc == 0x08923E08u) goto L_08923E08;
    return;
L_08923E08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(160));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08923E20u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08923E20u) goto L_08923E20;
    return;
L_08923E20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 144u, 0x089246E4u>(ctx, &aot_mem); return;
      }
      goto L_08923E28;
    }
L_08923E28:
    ctx.gpr[31] = (0x08923E30u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 240u, 0x089051A4u>(ctx, &aot_mem) && ctx.pc == 0x08923E30u) goto L_08923E30;
    return;
L_08923E30:
    ctx.gpr[31] = (0x08923E38u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 409u, 0x08905F98u>(ctx, &aot_mem) && ctx.pc == 0x08923E38u) goto L_08923E38;
    return;
L_08923E38:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08923E78;
      }
      goto L_08923E40;
    }
L_08923E40:
    ctx.gpr[31] = (0x08923E48u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 532u, 0x088E3B94u>(ctx, &aot_mem) && ctx.pc == 0x08923E48u) goto L_08923E48;
    return;
L_08923E48:
    ctx.gpr[31] = (0x08923E50u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 240u, 0x089051A4u>(ctx, &aot_mem) && ctx.pc == 0x08923E50u) goto L_08923E50;
    return;
L_08923E50:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08923E70;
      }
      goto L_08923E58;
    }
L_08923E58:
    ctx.gpr[31] = (0x08923E60u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08923E60u) goto L_08923E60;
    return;
L_08923E60:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08923E90;
      }
      goto L_08923E68;
    }
L_08923E68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08923F08;
      }
      goto L_08923E70;
    }
L_08923E70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 144u, 0x089246E4u>(ctx, &aot_mem); return;
      }
      goto L_08923E78;
    }
L_08923E78:
    ctx.gpr[31] = (0x08923E80u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 324u, 0x0890D498u>(ctx, &aot_mem) && ctx.pc == 0x08923E80u) goto L_08923E80;
    return;
L_08923E80:
    ctx.gpr[31] = (0x08923E88u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 344u, 0x0890D654u>(ctx, &aot_mem) && ctx.pc == 0x08923E88u) goto L_08923E88;
    return;
L_08923E88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08923E58;
      }
      goto L_08923E90;
    }
L_08923E90:
    ctx.gpr[31] = (0x08923E98u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 240u, 0x089051A4u>(ctx, &aot_mem) && ctx.pc == 0x08923E98u) goto L_08923E98;
    return;
L_08923E98:
    ctx.gpr[31] = (0x08923EA0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 408u, 0x08905F90u>(ctx, &aot_mem) && ctx.pc == 0x08923EA0u) goto L_08923EA0;
    return;
L_08923EA0:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08923F08;
      }
      goto L_08923EAC;
    }
L_08923EAC:
    ctx.gpr[31] = (0x08923EB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08923EB4u) goto L_08923EB4;
    return;
L_08923EB4:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1300)));
    ctx.gpr[31] = (0x08923EC0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 240u, 0x089051A4u>(ctx, &aot_mem) && ctx.pc == 0x08923EC0u) goto L_08923EC0;
    return;
L_08923EC0:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08923F08;
      }
      goto L_08923EC8;
    }
L_08923EC8:
    ctx.gpr[31] = (0x08923ED0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 415u, 0x08905FE4u>(ctx, &aot_mem) && ctx.pc == 0x08923ED0u) goto L_08923ED0;
    return;
L_08923ED0:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08923EF0;
      }
      goto L_08923EDC;
    }
L_08923EDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(464)));
    ctx.gpr[5] = (4096u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08923F08;
      }
      goto L_08923EF0;
    }
L_08923EF0:
    ctx.gpr[31] = (0x08923EF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08923EF8u) goto L_08923EF8;
    return;
L_08923EF8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 50u);
    ctx.gpr[31] = (0x08923F08u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem) && ctx.pc == 0x08923F08u) goto L_08923F08;
    return;
L_08923F08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 74u, 0x089242E0u>(ctx, &aot_mem); return;
      }
      goto L_08923F10;
    }
L_08923F10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 74u, 0x089242E0u>(ctx, &aot_mem); return;
      }
      goto L_08923F18;
    }
L_08923F18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 74u, 0x089242E0u>(ctx, &aot_mem); return;
      }
      goto L_08923F20;
    }
L_08923F20:
    ctx.gpr[31] = (0x08923F28u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 145u, 0x08924728u>(ctx, &aot_mem) && ctx.pc == 0x08923F28u) goto L_08923F28;
    return;
L_08923F28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 74u, 0x089242E0u>(ctx, &aot_mem); return;
      }
      goto L_08923F30;
    }
L_08923F30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 74u, 0x089242E0u>(ctx, &aot_mem); return;
      }
      goto L_08923F38;
    }
L_08923F38:
    ctx.gpr[31] = (0x08923F40u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 20u, 0x08910150u>(ctx, &aot_mem) && ctx.pc == 0x08923F40u) goto L_08923F40;
    return;
L_08923F40:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08923FB4;
      }
      goto L_08923F48;
    }
L_08923F48:
    ctx.gpr[31] = (0x08923F50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 275u, 0x08905378u>(ctx, &aot_mem) && ctx.pc == 0x08923F50u) goto L_08923F50;
    return;
L_08923F50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2072)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08923FCC;
      }
      goto L_08923F60;
    }
L_08923F60:
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(8864));
    ctx.gpr[31] = (0x08923F6Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 20u, 0x08910150u>(ctx, &aot_mem) && ctx.pc == 0x08923F6Cu) goto L_08923F6C;
    return;
L_08923F6C:
    ctx.gpr[31] = (0x08923F74u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 359u, 0x08905A60u>(ctx, &aot_mem) && ctx.pc == 0x08923F74u) goto L_08923F74;
    return;
L_08923F74:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1040));
    ctx.gpr[31] = (0x08923F80u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 364u, 0x08905AC8u>(ctx, &aot_mem) && ctx.pc == 0x08923F80u) goto L_08923F80;
    return;
L_08923F80:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1040)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1044)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1032));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1032), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1036), ctx.gpr[6]);
    ctx.gpr[31] = (0x08923FA4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 365u, 0x08905AE4u>(ctx, &aot_mem) && ctx.pc == 0x08923FA4u) goto L_08923FA4;
    return;
L_08923FA4:
    ctx.gpr[31] = (0x08923FACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 665u, 0x08917990u>(ctx, &aot_mem) && ctx.pc == 0x08923FACu) goto L_08923FAC;
    return;
L_08923FAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08923FCC;
      }
      goto L_08923FB4;
    }
L_08923FB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(468)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(468), ctx.gpr[4]);
    ctx.gpr[31] = (0x08923FCCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 282u, 0x0890905Cu>(ctx, &aot_mem) && ctx.pc == 0x08923FCCu) goto L_08923FCC;
    return;
L_08923FCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 74u, 0x089242E0u>(ctx, &aot_mem); return;
      }
      goto L_08923FD4;
    }
L_08923FD4:
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(8864));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1048));
    ctx.gpr[31] = (0x08923FE4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 15u, 0x089100C0u>(ctx, &aot_mem) && ctx.pc == 0x08923FE4u) goto L_08923FE4;
    return;
L_08923FE4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1048)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1052)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1024));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1024), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1028), ctx.gpr[6]);
    ctx.pc = 0x08924000u; return;
}

void recomp_unit_0071(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0071_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_71(Runtime &runtime) {
    runtime.register_generated_unit(71u, 0x08920000u, 16384u, &recomp_unit_0071, &recomp_unit_0071_entry);
    runtime.register_function(0x08920000u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920004u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920014u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920024u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920030u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920040u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920054u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920074u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920090u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089200D8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920108u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920110u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920128u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920144u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920160u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920194u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089201C8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089201FCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920230u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920264u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920298u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089202CCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089202F8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920300u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920320u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892032Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920344u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920350u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920370u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920388u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920394u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089203B0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089203BCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920420u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920428u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920438u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892048Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920498u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089204A0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089204A8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089204B0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089204C8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920508u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920510u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920518u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920520u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892052Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920538u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920610u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920628u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920630u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920638u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920644u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920648u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089206A8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089206B8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089206C4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089206CCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089206D4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089206DCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920708u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920714u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920720u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892073Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920744u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892074Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920754u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892077Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920784u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089207A8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089207B8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089207C8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089207D8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089207E8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089207F8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089207FCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920818u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920828u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920838u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920848u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920864u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920870u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920878u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920880u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920890u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920894u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089208C8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089208D4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089208ECu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089208F4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089208FCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920914u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920918u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920924u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892092Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892093Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920944u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920954u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892095Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920964u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892097Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920984u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892098Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089209A8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089209C0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089209D8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089209E8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089209F0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089209F8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920A2Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920A38u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920A48u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920A50u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920A58u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920A70u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920A94u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920AC8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920AD4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920AF8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920B00u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920B1Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920B28u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920B30u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920B40u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920B8Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920BB0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920BB4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920BD4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920BF0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920BF8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920C00u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920C18u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920C20u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920C38u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920C50u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920C5Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920C64u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920C68u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920C84u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920C98u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920CA0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920CA4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920CACu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920CB0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920D9Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920DB0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920DB8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920DC0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920DC4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920DCCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920DF8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920E0Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920E14u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920E1Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920E20u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920E70u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920E78u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920E98u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920EA4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920EACu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920EC0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920EDCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920EE8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920F04u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920F20u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920F4Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920F54u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920F68u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920F78u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920F80u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920F8Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920F98u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920FA4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920FC0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920FDCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920FE4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920FF0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08920FFCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921010u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921018u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921024u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921038u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921048u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921054u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892105Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921074u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921078u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921090u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892109Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089210A8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089210B8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089210CCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089210D8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089210F0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089210F8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921104u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921110u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921118u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921124u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892112Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921148u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921150u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921168u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921170u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892117Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921184u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921190u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921198u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089211A0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089211B0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089211C8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089211D4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089211DCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089211E4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089211F4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089211FCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921204u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921210u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921218u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921220u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921228u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921230u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921238u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921240u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892124Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921254u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921260u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921268u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921274u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892127Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921288u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921290u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892129Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089212A4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089212B0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089212B8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089212C4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089212CCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089212D8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089212E0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089212ECu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089212F4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921300u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892130Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921314u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892131Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921324u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921330u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921338u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921354u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921360u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921368u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921370u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921378u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892138Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921394u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089213A4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089213ACu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089213B4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089213BCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089213C8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089213D0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921404u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892140Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892141Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921424u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892142Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892143Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892145Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921464u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892146Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892147Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921488u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921490u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892149Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089214CCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089214D4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089214E4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089214F0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089214F8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921504u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921534u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892153Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921544u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921554u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921560u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921568u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921570u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921578u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921580u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921588u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921590u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921598u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892159Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089215A4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089215ACu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089215C4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089215D4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089215DCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089215ECu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089215F4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921600u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921618u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921624u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892162Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921634u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892163Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921644u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892164Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921658u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921664u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892166Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921674u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921680u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892168Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921694u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892169Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089216A8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089216B4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089216C4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089216DCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089216E8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089216ECu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921700u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921708u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921714u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892171Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921728u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921730u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921738u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921744u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892174Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921758u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921760u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921768u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921784u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921794u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892179Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089217ACu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089217B8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089217D0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089217DCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089217E4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089217ECu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089217F4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089217FCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921804u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921810u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892181Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921824u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892182Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921838u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921844u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892184Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921854u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921860u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892186Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921878u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921880u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921888u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921890u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921898u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089218A4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089218ACu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089218B4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089218BCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089218D8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089218E0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089218E8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089218F0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892190Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921914u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892191Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921928u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921930u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921938u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921940u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921948u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921954u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921960u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921974u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921990u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892199Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089219ACu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089219CCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089219DCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089219E4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089219ECu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089219F8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921A08u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921A10u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921A18u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921A20u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921A2Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921A34u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921A40u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921A48u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921A50u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921A58u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921A70u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921A80u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921A90u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921A98u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921AA0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921AA8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921AC4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921ACCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921AD8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921AF0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921AFCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921B04u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921B1Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921B28u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921B34u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921B3Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921B44u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921B50u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921B58u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921B64u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921B70u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921B88u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921B90u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921B9Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921BA8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921BB0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921BB8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921BC4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921BCCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921BD4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921BDCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921BE8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921C00u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921C08u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921C10u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921C18u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921C24u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921C2Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921C38u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921C3Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921C58u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921C68u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921C74u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921C84u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921C88u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921C90u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921C98u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921CB4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921CBCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921CC4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921CDCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921CE4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921CF4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921D00u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921D0Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921D1Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921D28u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921D3Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921D48u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921D50u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921D58u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921D60u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921D68u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921D78u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921D90u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921DA0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921DA8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921DC0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921DC8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921DD4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921DECu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921DF4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921E04u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921E0Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921E28u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921E40u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921E4Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921E5Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921E80u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921E90u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921EA0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921ECCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921ED8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921EE4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921EECu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921EF8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921F0Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921F18u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921F28u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921F38u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921F40u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921F60u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921F68u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921F90u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921FCCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921FD4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921FDCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08921FF4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922030u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922038u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922048u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922054u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892205Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922064u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892206Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922074u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922080u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922088u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922094u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089220A0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089220B4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089220BCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089220C8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089220DCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089220ECu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892210Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922124u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892212Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922134u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892213Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892214Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922154u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922164u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892218Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922198u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089221C0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089221D0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089221DCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089221F0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922200u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892220Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922238u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892225Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922270u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922278u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922288u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922294u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089222B8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089222C4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089222D8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089222E0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089222ECu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089222F4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089222FCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922304u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922314u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922334u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922344u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922350u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922374u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922384u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922390u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089223A4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089223ACu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089223B4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089223C4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089223D0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089223F4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922404u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922410u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922424u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892242Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922450u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892245Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922464u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922470u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922478u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922488u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089224A4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089224B4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089224BCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089224E8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892250Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892251Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922528u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922538u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922544u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922558u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922564u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922574u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892257Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922584u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892258Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922598u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089225A0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089225B8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089225C8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089225D0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089225E8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089225F0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089225F8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922610u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922620u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922628u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922640u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922648u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922658u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922660u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922670u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922678u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922688u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089226A0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089226A8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089226B8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089226C0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089226D0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089226D8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089226E0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089226ECu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089226F8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922714u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922724u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892272Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922734u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922744u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922754u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892275Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922764u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892276Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922780u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892278Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892279Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089227A4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089227B4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089227BCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089227CCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089227D8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089227E8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089227F0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922800u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922808u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922818u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922820u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922828u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922830u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922838u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922840u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922850u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922860u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892286Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892287Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922888u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892289Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089228A8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089228B0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089228BCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089228CCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089228D8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089228F0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089228FCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892290Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892291Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922944u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892294Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922960u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892296Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892298Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922990u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892299Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089229ACu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089229B8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089229C8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089229D8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922A00u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922A08u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922A1Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922A28u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922A48u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922A70u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922A94u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922AA0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922AE4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922AECu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922B00u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922B08u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922B30u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922B38u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922B58u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922B6Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922B80u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922B88u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922B94u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922B9Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922BA4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922BACu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922BB4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922BBCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922BC4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922BCCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922BD4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922BDCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922BE4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922BF4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922BFCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922C0Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922C20u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922C28u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922C3Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922C54u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922C60u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922C68u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922C7Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922C88u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922C90u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922C9Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922CA4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922CB8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922CC0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922CD0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922CDCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922CF0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922CFCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922D04u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922D0Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922D14u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922D1Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922D24u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922D34u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922D3Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922D4Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922D60u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922D68u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922D7Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922D94u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922DA0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922DA8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922DBCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922DC8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922DD0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922DDCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922DE4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922DF8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922E08u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922E14u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922E24u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922E28u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922E30u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922E40u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922E4Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922E54u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922E5Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922E68u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922E70u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922E80u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922E8Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922E9Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922EA0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922EA8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922EB8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922EC4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922ECCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922EDCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922EE8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922EF0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922EF8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922F08u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922F14u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922F24u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922F34u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922F5Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922F64u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922F78u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922F84u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922FA4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922FD0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922FDCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08922FECu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923024u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892302Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923034u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892303Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923044u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923050u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923060u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923098u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089230A0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089230A8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089230B0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089230BCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089230C8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089230ECu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923100u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923108u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892312Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923134u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923158u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923160u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923168u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892318Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089231A4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089231A8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089231B0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089231C4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089231D0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089231D8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089231E4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089231F0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089231F8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923200u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892320Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923218u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892321Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923238u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923240u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892324Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892325Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923278u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923284u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089232ACu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089232B8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089232C0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089232DCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089232ECu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089232F8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923310u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923318u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923324u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892332Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923338u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923340u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923354u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892335Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892336Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923380u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923394u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089233A8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089233C8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089233D0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089233D8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089233E0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089233ECu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089233F8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923400u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923408u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923414u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892341Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923424u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923430u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923440u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923450u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892345Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923470u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923478u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923480u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923488u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923490u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892349Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089234B4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089234C0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089234C8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089234E0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089234ECu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089234F4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923504u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923508u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923510u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923534u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923544u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923554u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892355Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923568u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923574u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923584u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892358Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089235A0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089235A8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089235B0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089235B8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089235C4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089235DCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089235E4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089235F4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892360Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892361Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923630u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923638u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923640u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923648u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923664u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923670u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923684u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923690u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089236A0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089236ACu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089236B8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089236C0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089236C8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089236D0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089236D8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089236F0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089236F8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923710u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923718u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923730u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923738u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923744u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892374Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923754u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923758u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892376Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923784u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892378Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923794u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089237A4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089237B0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089237B4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089237C0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089237C8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089237D8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089237E8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089237ECu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089237FCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923804u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923810u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892381Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923828u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923834u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892383Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923858u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923878u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923884u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892389Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089238A8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089238B0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089238B8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089238C0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089238D0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089238E4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089238ECu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089238F4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923900u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923908u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923910u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923924u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892392Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923934u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892393Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923944u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892394Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923954u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892395Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923964u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892396Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892397Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923984u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892398Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923994u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x0892399Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089239A4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089239ACu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089239C4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089239CCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089239D4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089239DCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089239E4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089239ECu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089239F4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x089239FCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923A04u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923A0Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923A14u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923A28u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923A30u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923A38u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923A40u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923A54u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923A5Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923A6Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923A74u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923A7Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923A84u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923A98u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923AA0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923AA8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923AB0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923ABCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923AC4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923ACCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923AD8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923ADCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923AE4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923AF0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923B00u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923B0Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923B18u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923B28u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923B2Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923B38u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923B48u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923B50u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923B58u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923B60u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923B68u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923B78u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923B80u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923B90u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923B98u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923BA8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923BB0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923BB8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923BC0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923BD0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923BD8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923BE8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923BF0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923C04u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923C0Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923C1Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923C24u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923C34u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923C3Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923C54u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923C5Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923C68u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923C7Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923C84u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923C8Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923C94u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923C9Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923CA4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923CB8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923CD0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923CE4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923CF4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923CFCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923D10u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923D20u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923D28u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923D38u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923D40u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923D54u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923D60u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923D68u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923D70u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923D78u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923D80u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923D88u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923D90u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923D98u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923DA0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923DA8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923DB0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923DB8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923DC0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923DC8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923DD4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923DDCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923DE8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923DF0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923DFCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923E08u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923E20u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923E28u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923E30u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923E38u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923E40u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923E48u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923E50u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923E58u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923E60u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923E68u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923E70u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923E78u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923E80u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923E88u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923E90u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923E98u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923EA0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923EACu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923EB4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923EC0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923EC8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923ED0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923EDCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923EF0u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923EF8u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923F08u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923F10u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923F18u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923F20u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923F28u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923F30u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923F38u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923F40u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923F48u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923F50u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923F60u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923F6Cu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923F74u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923F80u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923FA4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923FACu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923FB4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923FCCu, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923FD4u, &recomp_unit_0071, "recomp_unit_0071");
    runtime.register_function(0x08923FE4u, &recomp_unit_0071, "recomp_unit_0071");
}
} // namespace psprecomp
