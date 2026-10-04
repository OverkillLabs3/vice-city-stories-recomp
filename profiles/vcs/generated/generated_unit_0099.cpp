#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0099[4089] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 4, 0, 0, 0, 5, 0, 6, 0, 7,
    0, 8, 0, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 11, 0, 12, 0, 0, 0, 0, 0, 0, 13, 0, 14, 0, 0, 15, 0, 16, 0, 0,
    17, 0, 0, 18, 0, 0, 0, 19, 20, 0, 0, 21, 0, 22, 0, 0, 0, 23, 0, 24, 0, 25, 0, 0, 0, 0, 0, 0, 26, 27, 0, 0,
    0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 29, 0, 0, 30, 0, 0, 31, 32, 0, 0, 0, 33, 0, 0, 34, 0, 0, 35, 36, 0, 0,
    0, 37, 0, 0, 38, 0, 0, 39, 40, 0, 0, 0, 41, 0, 0, 42, 0, 0, 43, 44, 0, 0, 0, 45, 0, 0, 46, 0, 0, 47, 48, 0,
    0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 51, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 54, 0, 0, 0, 0, 55, 0, 0, 56, 0, 0,
    0, 0, 57, 0, 0, 58, 0, 0, 0, 0, 59, 0, 0, 60, 0, 0, 0, 0, 61, 0, 0, 62, 0, 0, 0, 0, 63, 0, 0, 64, 0, 65,
    0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0,
    71, 0, 72, 0, 0, 73, 0, 74, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 79, 0, 80,
    0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 84, 85, 0, 0, 0, 0, 86, 87, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 89, 0, 0, 0, 90, 0, 91, 0,
    92, 0, 0, 0, 93, 0, 0, 0, 94, 0, 95, 0, 0, 96, 97, 0, 0, 0, 0, 98, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 103, 0, 104, 0,
    0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 108, 109, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 114, 0, 115, 0, 0, 0, 116, 0, 0,
    0, 117, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 119, 120, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0,
    0, 123, 0, 0, 124, 0, 0, 0, 125, 0, 126, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 128, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0,
    0, 0, 0, 131, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 134, 0, 0, 0, 0, 0, 135, 0, 0, 136, 0, 0, 0, 0, 0, 137, 0,
    0, 138, 0, 0, 0, 0, 0, 0, 139, 0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 0, 142, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 0, 146, 0, 147, 0, 0, 148, 149, 0, 0, 0, 0, 150, 151, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 153, 0, 154, 0, 155, 0, 156, 0, 157, 0, 158, 0,
    159, 0, 0, 0, 0, 0, 0, 160, 0, 161, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 166, 0, 0, 0,
    0, 167, 0, 168, 0, 0, 0, 0, 169, 0, 170, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0,
    0, 0, 174, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0,
    179, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 184, 0,
    0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 189, 0, 0, 0,
    0, 0, 190, 0, 191, 0, 192, 0, 193, 0, 194, 0, 195, 0, 196, 0, 197, 0, 198, 0, 199, 0, 200, 0, 201, 0, 202, 0, 203, 0, 204, 0,
    205, 0, 206, 0, 207, 0, 208, 0, 209, 0, 210, 211, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0,
    214, 0, 0, 0, 0, 215, 0, 216, 0, 0, 0, 0, 217, 218, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0,
    0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 223, 0, 0, 0, 0, 0, 0, 224, 0, 225, 0, 0, 226, 0, 0, 0, 0,
    227, 0, 228, 0, 0, 0, 229, 0, 230, 0, 0, 0, 231, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 233, 0, 234, 0, 0, 0, 0, 0,
    0, 0, 235, 0, 236, 0, 0, 0, 0, 0, 0, 237, 0, 238, 0, 0, 0, 0, 239, 240, 0, 241, 0, 0, 0, 0, 0, 0, 242, 0, 243, 0,
    0, 0, 0, 244, 245, 0, 246, 0, 0, 0, 0, 0, 0, 247, 0, 248, 0, 0, 0, 0, 249, 250, 0, 251, 0, 0, 0, 0, 0, 0, 252, 0,
    253, 0, 0, 0, 0, 254, 255, 0, 256, 0, 0, 0, 0, 0, 0, 257, 0, 258, 0, 0, 0, 0, 259, 260, 0, 261, 0, 0, 0, 0, 0, 0,
    262, 0, 263, 0, 0, 0, 0, 264, 265, 0, 266, 0, 0, 0, 0, 267, 0, 268, 0, 0, 0, 0, 0, 269, 270, 0, 271, 0, 0, 0, 0, 272,
    0, 273, 0, 0, 0, 0, 0, 274, 275, 0, 276, 0, 0, 0, 0, 0, 0, 277, 0, 278, 0, 0, 0, 0, 279, 280, 0, 281, 0, 0, 0, 0,
    0, 0, 282, 0, 283, 0, 0, 0, 0, 284, 285, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 288, 0, 0, 0, 0, 289,
    290, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 295, 0, 296, 0,
    0, 0, 297, 0, 298, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 300, 0, 301, 0, 0, 0, 302, 0, 303, 0, 0, 0, 304, 0, 0, 0, 0,
    0, 305, 0, 306, 0, 307, 0, 0, 0, 308, 0, 0, 0, 0, 0, 309, 0, 0, 310, 0, 311, 0, 0, 312, 0, 0, 0, 313, 0, 314, 0, 0,
    315, 0, 0, 0, 316, 0, 317, 318, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 321, 0, 0, 0, 0, 0, 0,
    322, 0, 323, 0, 324, 0, 0, 325, 0, 0, 326, 0, 327, 328, 0, 329, 0, 330, 0, 0, 331, 0, 332, 0, 333, 0, 0, 0, 0, 334, 0, 0,
    0, 335, 0, 0, 336, 0, 0, 0, 337, 0, 0, 338, 0, 0, 339, 0, 0, 340, 0, 0, 341, 0, 342, 343, 0, 344, 0, 345, 0, 0, 346, 0,
    347, 0, 348, 0, 0, 349, 0, 0, 350, 0, 0, 351, 0, 352, 353, 0, 354, 0, 355, 0, 0, 356, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 361, 0, 0, 0, 0, 362, 363, 0, 0, 0, 0, 364, 365, 0, 0, 0, 0, 366, 367, 0, 0, 0, 0, 368, 369, 0, 0, 0, 0, 370,
    371, 0, 0, 0, 0, 372, 373, 0, 0, 0, 0, 374, 375, 0, 0, 0, 0, 376, 0, 377, 0, 0, 0, 0, 378, 0, 379, 0, 0, 0, 0, 380,
    381, 0, 0, 0, 0, 382, 383, 0, 0, 0, 0, 384, 385, 0, 0, 0, 0, 0, 386, 387, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 393, 0, 0, 394,
    0, 0, 395, 0, 0, 396, 0, 397, 0, 0, 0, 398, 0, 399, 0, 0, 0, 400, 0, 401, 0, 0, 402, 0, 0, 403, 0, 404, 0, 0, 0, 405,
    0, 406, 0, 0, 0, 407, 0, 408, 0, 0, 0, 409, 0, 410, 0, 0, 411, 0, 0, 412, 0, 413, 0, 0, 0, 414, 0, 415, 0, 0, 0, 416,
    0, 417, 0, 0, 418, 0, 0, 419, 0, 420, 0, 0, 0, 421, 0, 422, 0, 0, 0, 423, 0, 424, 0, 0, 425, 0, 0, 426, 0, 427, 0, 0,
    0, 428, 0, 429, 0, 0, 0, 430, 0, 431, 0, 0, 432, 0, 0, 433, 0, 434, 0, 0, 0, 435, 0, 436, 0, 0, 0, 437, 0, 438, 0, 0,
    439, 0, 0, 440, 0, 441, 0, 0, 0, 442, 0, 443, 0, 0, 0, 444, 0, 445, 0, 0, 446, 0, 0, 447, 0, 448, 0, 0, 0, 449, 0, 450,
    0, 0, 0, 451, 0, 452, 0, 0, 453, 0, 0, 454, 0, 455, 0, 0, 0, 456, 0, 457, 0, 0, 0, 458, 0, 459, 0, 0, 460, 0, 0, 461,
    0, 462, 0, 0, 0, 463, 0, 464, 0, 0, 0, 465, 0, 466, 0, 0, 467, 0, 0, 468, 0, 469, 0, 0, 0, 470, 0, 471, 0, 0, 0, 472,
    0, 473, 0, 0, 474, 0, 0, 475, 0, 476, 0, 0, 0, 477, 0, 478, 0, 0, 0, 479, 0, 480, 0, 0, 481, 0, 0, 482, 0, 483, 0, 0,
    0, 484, 0, 485, 0, 0, 0, 486, 0, 487, 0, 0, 488, 0, 0, 489, 0, 490, 0, 0, 0, 491, 0, 492, 0, 0, 0, 493, 0, 494, 0, 0,
    495, 0, 0, 496, 0, 0, 0, 497, 0, 498, 0, 0, 0, 499, 0, 500, 0, 0, 501, 0, 0, 502, 0, 503, 0, 0, 0, 504, 0, 505, 0, 0,
    0, 506, 0, 507, 0, 0, 508, 0, 0, 509, 0, 510, 0, 0, 0, 511, 0, 512, 0, 0, 0, 513, 0, 514, 0, 0, 515, 0, 0, 516, 0, 517,
    0, 0, 0, 518, 0, 519, 0, 0, 0, 520, 0, 521, 0, 0, 522, 0, 0, 523, 0, 524, 0, 0, 0, 525, 0, 526, 0, 0, 0, 527, 0, 528,
    0, 0, 529, 0, 0, 530, 0, 531, 0, 0, 0, 532, 0, 533, 0, 0, 0, 534, 0, 535, 0, 0, 536, 0, 0, 537, 0, 538, 0, 0, 0, 539,
    0, 540, 0, 0, 0, 541, 0, 542, 0, 0, 543, 0, 0, 544, 0, 545, 0, 0, 0, 546, 0, 547, 0, 0, 0, 548, 0, 549, 0, 0, 550, 0,
    0, 0, 551, 0, 552, 0, 0, 0, 553, 0, 554, 0, 0, 0, 555, 0, 556, 0, 0, 0, 557, 0, 0, 0, 558, 0, 559, 0, 0, 0, 560, 0,
    561, 0, 0, 0, 562, 0, 563, 0, 0, 0, 0, 564, 0, 0, 0, 0, 565, 0, 566, 0, 0, 0, 567, 0, 568, 0, 0, 0, 569, 0, 570, 0,
    0, 0, 0, 571, 0, 0, 0, 0, 572, 0, 573, 0, 0, 0, 574, 0, 575, 0, 0, 0, 576, 0, 577, 0, 0, 0, 0, 578, 0, 0, 0, 0,
    579, 0, 580, 0, 0, 0, 581, 0, 582, 0, 0, 0, 583, 0, 584, 0, 0, 0, 0, 585, 0, 0, 0, 586, 0, 0, 0, 587, 0, 588, 0, 0,
    0, 589, 0, 590, 0, 0, 0, 0, 591, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 592, 0, 593, 0, 0, 0, 594, 0, 595,
    0, 0, 0, 596, 0, 597, 0, 0, 0, 598, 0, 599, 0, 0, 0, 600, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 601, 0, 602, 0, 0,
    0, 603, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 604, 0, 0, 0, 0,
    605, 0, 0, 0, 0, 606, 0, 0, 0, 0, 607, 0, 0, 0, 0, 608, 0, 0, 0, 0, 609, 0, 0, 0, 0, 0, 610, 0, 0, 0, 0, 611,
    0, 0, 0, 0, 612, 0, 0, 0, 0, 613, 0, 0, 0, 0, 614, 0, 0, 0, 0, 615, 0, 0, 0, 0, 616, 0, 0, 0, 0, 617, 0, 0,
    0, 0, 618, 0, 0, 0, 0, 619, 0, 0, 0, 0, 620, 0, 0, 0, 0, 621, 0, 0, 0, 0, 622, 0, 0, 0, 0, 623, 0, 0, 0, 0,
    624, 0, 0, 0, 0, 625, 0, 0, 0, 0, 626, 0, 0, 0, 0, 627, 0, 0, 0, 0, 628, 0, 0, 0, 0, 629, 0, 0, 0, 0, 630, 0,
    0, 0, 0, 631, 0, 0, 0, 0, 632, 0, 0, 0, 0, 633, 0, 0, 0, 0, 634, 0, 0, 0, 0, 635, 0, 0, 0, 0, 636, 0, 0, 0,
    0, 637, 0, 0, 0, 0, 638, 0, 0, 0, 0, 639, 0, 0, 0, 0, 640, 0, 0, 0, 0, 641, 0, 0, 0, 0, 642, 0, 0, 0, 0, 643,
    0, 0, 0, 0, 644, 0, 0, 0, 0, 645, 0, 0, 0, 0, 646, 0, 0, 0, 0, 647, 0, 0, 0, 0, 648, 0, 0, 0, 0, 649, 0, 0,
    0, 0, 650, 0, 0, 0, 0, 651, 0, 0, 0, 0, 652, 0, 0, 0, 0, 653, 0, 0, 0, 0, 654, 0, 0, 0, 0, 655, 0, 0, 0, 0,
    656, 0, 0, 0, 0, 657, 0, 0, 0, 0, 658, 0, 0, 0, 0, 659, 0, 0, 0, 0, 660, 0, 0, 0, 0, 661, 0, 0, 0, 0, 662, 0,
    0, 0, 0, 663, 0, 0, 0, 0, 664, 0, 0, 0, 0, 665, 0, 0, 0, 0, 666, 0, 0, 0, 0, 667, 0, 0, 0, 0, 668, 0, 0, 0,
    0, 669, 0, 0, 0, 0, 670, 0, 0, 0, 0, 671, 0, 0, 0, 0, 672, 0, 0, 0, 0, 673, 0, 0, 0, 0, 674, 0, 0, 0, 0, 675,
    0, 0, 0, 0, 676, 0, 0, 0, 0, 0, 677, 0, 0, 0, 0, 0, 678, 0, 0, 0, 0, 0, 679, 0, 0, 0, 0, 0, 680, 0, 0, 0,
    0, 0, 681, 0, 0, 0, 0, 0, 682, 0, 0, 0, 0, 0, 683, 0, 0, 0, 0, 684, 0, 0, 0, 0, 685, 0, 0, 0, 0, 0, 686, 0,
    0, 0, 0, 0, 687, 0, 0, 0, 0, 0, 688, 0, 0, 0, 0, 689, 0, 0, 0, 0, 690, 0, 0, 0, 0, 691, 0, 0, 0, 0, 692, 0,
    0, 0, 0, 693, 0, 0, 0, 0, 694, 0, 0, 0, 0, 695, 0, 0, 0, 0, 696, 0, 0, 0, 0, 697, 0, 0, 0, 0, 698, 0, 0, 0,
    0, 699, 0, 0, 0, 0, 700, 0, 0, 0, 0, 701, 0, 0, 0, 0, 702, 0, 0, 0, 0, 703, 0, 0, 0, 0, 704, 0, 0, 0, 0, 705,
    0, 0, 0, 0, 706, 0, 0, 0, 0, 707, 0, 0, 0, 0, 708, 0, 0, 0, 0, 709, 0, 0, 0, 0, 710, 0, 0, 0, 0, 711, 0, 0,
    0, 0, 712, 0, 0, 0, 0, 713, 0, 0, 0, 0, 714, 0, 0, 0, 0, 715, 0, 0, 0, 0, 716, 0, 0, 0, 0, 717, 0, 0, 0, 0,
    718, 0, 719, 0, 0, 720, 0, 0, 0, 721, 0, 0, 0, 0, 722, 0, 0, 0, 0, 0, 0, 723, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 724, 0, 0, 0, 0, 725, 0, 0, 0, 0, 726, 0, 0, 0, 0, 727, 0, 0, 0, 0, 728, 0, 0, 0, 0, 729, 0, 0, 0, 0, 0,
    730, 0, 0, 0, 0, 731, 0, 0, 0, 0, 732, 0, 0, 0, 0, 733, 0, 0, 0, 0, 734, 0, 0, 0, 0, 735, 0, 0, 0, 0, 736, 0,
    0, 0, 0, 737, 0, 0, 0, 0, 738, 0, 0, 0, 0, 739, 0, 0, 0, 0, 740, 0, 0, 0, 0, 741, 0, 0, 0, 0, 742, 0, 0, 0,
    0, 743, 0, 0, 0, 0, 744, 0, 0, 0, 0, 745, 0, 0, 0, 0, 746, 0, 0, 0, 0, 747, 0, 0, 0, 0, 748, 0, 0, 0, 0, 749,
    0, 0, 0, 0, 750, 0, 0, 0, 0, 751, 0, 0, 0, 0, 752, 0, 0, 0, 0, 753, 0, 0, 0, 0, 754, 0, 0, 0, 0, 755, 0, 0,
    0, 0, 756, 0, 0, 0, 0, 757, 0, 0, 0, 0, 758, 0, 0, 0, 0, 759, 0, 0, 0, 0, 760, 0, 0, 0, 0, 761, 0, 0, 0, 0,
    762, 0, 0, 0, 0, 763, 0, 0, 0, 0, 764, 0, 0, 0, 0, 765, 0, 0, 0, 0, 766, 0, 0, 0, 0, 767, 0, 0, 0, 0, 768, 0,
    0, 0, 0, 769, 0, 0, 0, 0, 770, 0, 0, 0, 0, 771, 0, 0, 0, 0, 772, 0, 0, 0, 0, 773, 0, 0, 0, 0, 774, 0, 0, 0,
    0, 775, 0, 0, 0, 0, 776, 0, 0, 0, 0, 777, 0, 0, 0, 0, 778, 0, 0, 0, 0, 779, 0, 0, 0, 0, 780, 0, 0, 0, 0, 781,
    0, 0, 0, 0, 782, 0, 0, 0, 0, 783, 0, 0, 0, 0, 784, 0, 0, 0, 0, 785, 0, 0, 0, 0, 786, 0, 0, 0, 0, 787, 0, 0,
    0, 0, 788, 0, 0, 0, 0, 789, 0, 0, 0, 0, 790, 0, 0, 0, 0, 791, 0, 0, 0, 0, 792, 0, 0, 0, 0, 793, 0, 0, 0, 0,
    794, 0, 0, 0, 0, 795, 0, 0, 0, 0, 796, 0, 0, 0, 0, 0, 797, 0, 0, 0, 0, 0, 798, 0, 0, 0, 0, 0, 799, 0, 0, 0,
    0, 0, 800, 0, 0, 0, 0, 0, 801, 0, 0, 0, 0, 0, 802, 0, 0, 0, 0, 0, 803, 0, 0, 0, 0, 804, 0, 0, 0, 0, 805, 0,
    0, 0, 0, 0, 806, 0, 0, 0, 0, 0, 807, 0, 0, 0, 0, 0, 808, 0, 0, 0, 0, 809, 0, 0, 0, 0, 810, 0, 0, 0, 0, 811,
    0, 0, 0, 0, 812, 0, 0, 0, 0, 813, 0, 0, 0, 0, 814, 0, 0, 0, 0, 815, 0, 0, 0, 0, 816, 0, 0, 0, 0, 817, 0, 0,
    0, 0, 818, 0, 0, 0, 0, 819, 0, 0, 0, 0, 820, 0, 0, 0, 0, 821, 0, 0, 0, 0, 822, 0, 0, 0, 0, 823, 0, 0, 0, 0,
    824, 0, 0, 0, 0, 825, 0, 0, 0, 0, 826, 0, 0, 0, 0, 827, 0, 0, 0, 0, 828, 0, 0, 0, 0, 829, 0, 0, 0, 0, 830, 0,
    0, 0, 0, 831, 0, 0, 0, 0, 832, 0, 0, 0, 0, 833, 0, 0, 0, 0, 834, 0, 0, 0, 0, 835, 0, 0, 0, 0, 836, 0, 0, 0,
    0, 837, 0, 0, 0, 0, 838, 0, 0, 0, 839, 0, 0, 0, 840, 0, 0, 0, 0, 841, 0, 0, 0, 0, 0, 842, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 843, 0, 0, 0, 0, 0, 0, 0, 0, 844, 0, 845, 0, 846, 0, 0, 0, 0, 0, 0, 0, 0, 0, 847, 0, 848, 0, 849, 0,
    850, 0, 0, 0, 0, 0, 0, 0, 851, 0, 852, 0, 853, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 854, 0, 855, 0,
    0, 0, 0, 0, 0, 0, 0, 856, 0, 857, 0, 0, 0, 0, 0, 0, 0, 0, 858, 0, 859, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 860, 0, 0, 861, 0, 862, 0, 0, 0, 0, 0, 0, 0, 0, 863, 0, 864, 0, 0, 0, 0, 0, 0, 0, 0, 865, 0,
    866, 0, 0, 867, 0, 0, 868, 0, 869, 0, 0, 0, 0, 0, 0, 0, 0, 870, 0, 871, 0, 872, 0, 0, 873, 0, 874, 0, 0, 0, 0, 0,
    875, 0, 876, 0, 877, 0, 0, 0, 878, 0, 0, 879, 0, 0, 0, 0, 0, 0, 0, 880, 0, 881, 882, 0, 0, 883, 0, 884, 0, 0, 0, 885,
    0, 0, 886, 0, 0, 0, 0, 0, 0, 0, 887, 0, 888, 889, 0, 0, 890, 0, 891, 0, 0, 0, 892, 0, 0, 893, 0, 0, 0, 0, 0, 0,
    0, 894, 0, 895, 896, 0, 0, 897, 0, 898, 0, 0, 0, 899, 0, 0, 900, 0, 0, 0, 0, 0, 0, 0, 901, 0, 902, 903, 0, 0, 904, 0,
    905, 0, 0, 0, 0, 906, 0, 907, 0, 908, 0, 0, 0, 0, 0, 0, 0, 0, 909, 0, 910, 0, 0, 911, 0, 912, 0, 913, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 914, 0, 915, 0, 0, 916, 0, 917, 0, 918, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 919, 0, 920, 0, 0, 921, 0, 922, 0, 923, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 924, 0, 925, 0, 0, 926,
    0, 927, 0, 928, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 929, 0, 930, 0, 0, 0, 0, 931, 0, 932, 0, 933, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 934, 0, 935, 0, 0, 0, 0, 936, 0, 937, 0, 938,
};
void recomp_unit_0099_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08990000u;
        entry_id = (entry_delta < 16356u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0099[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08990000;
    case 2u: goto L_08990018;
    case 3u: goto L_08990054;
    case 4u: goto L_0899005C;
    case 5u: goto L_0899006C;
    case 6u: goto L_08990074;
    case 7u: goto L_0899007C;
    case 8u: goto L_08990084;
    case 9u: goto L_08990098;
    case 10u: goto L_089900A8;
    case 11u: goto L_089900B4;
    case 12u: goto L_089900BC;
    case 13u: goto L_089900D8;
    case 14u: goto L_089900E0;
    case 15u: goto L_089900EC;
    case 16u: goto L_089900F4;
    case 17u: goto L_08990100;
    case 18u: goto L_0899010C;
    case 19u: goto L_0899011C;
    case 20u: goto L_08990120;
    case 21u: goto L_0899012C;
    case 22u: goto L_08990134;
    case 23u: goto L_08990144;
    case 24u: goto L_0899014C;
    case 25u: goto L_08990154;
    case 26u: goto L_08990170;
    case 27u: goto L_08990174;
    case 28u: goto L_08990190;
    case 29u: goto L_089901AC;
    case 30u: goto L_089901B8;
    case 31u: goto L_089901C4;
    case 32u: goto L_089901C8;
    case 33u: goto L_089901D8;
    case 34u: goto L_089901E4;
    case 35u: goto L_089901F0;
    case 36u: goto L_089901F4;
    case 37u: goto L_08990204;
    case 38u: goto L_08990210;
    case 39u: goto L_0899021C;
    case 40u: goto L_08990220;
    case 41u: goto L_08990230;
    case 42u: goto L_0899023C;
    case 43u: goto L_08990248;
    case 44u: goto L_0899024C;
    case 45u: goto L_0899025C;
    case 46u: goto L_08990268;
    case 47u: goto L_08990274;
    case 48u: goto L_08990278;
    case 49u: goto L_08990290;
    case 50u: goto L_089902A0;
    case 51u: goto L_089902A8;
    case 52u: goto L_089902B4;
    case 53u: goto L_089902C8;
    case 54u: goto L_089902D4;
    case 55u: goto L_089902E8;
    case 56u: goto L_089902F4;
    case 57u: goto L_08990308;
    case 58u: goto L_08990314;
    case 59u: goto L_08990328;
    case 60u: goto L_08990334;
    case 61u: goto L_08990348;
    case 62u: goto L_08990354;
    case 63u: goto L_08990368;
    case 64u: goto L_08990374;
    case 65u: goto L_0899037C;
    case 66u: goto L_08990390;
    case 67u: goto L_089903B0;
    case 68u: goto L_089903F0;
    case 69u: goto L_08990418;
    case 70u: goto L_08990464;
    case 71u: goto L_08990480;
    case 72u: goto L_08990488;
    case 73u: goto L_08990494;
    case 74u: goto L_0899049C;
    case 75u: goto L_089904B0;
    case 76u: goto L_089904DC;
    case 77u: goto L_08990548;
    case 78u: goto L_08990558;
    case 79u: goto L_08990574;
    case 80u: goto L_0899057C;
    case 81u: goto L_0899058C;
    case 82u: goto L_0899059C;
    case 83u: goto L_089905B8;
    case 84u: goto L_089905D0;
    case 85u: goto L_089905D4;
    case 86u: goto L_089905E8;
    case 87u: goto L_089905EC;
    case 88u: goto L_08990654;
    case 89u: goto L_08990660;
    case 90u: goto L_08990670;
    case 91u: goto L_08990678;
    case 92u: goto L_08990680;
    case 93u: goto L_08990690;
    case 94u: goto L_089906A0;
    case 95u: goto L_089906A8;
    case 96u: goto L_089906B4;
    case 97u: goto L_089906B8;
    case 98u: goto L_089906CC;
    case 99u: goto L_089906D0;
    case 100u: goto L_08990738;
    case 101u: goto L_08990744;
    case 102u: goto L_08990754;
    case 103u: goto L_08990770;
    case 104u: goto L_08990778;
    case 105u: goto L_08990788;
    case 106u: goto L_08990798;
    case 107u: goto L_089907B4;
    case 108u: goto L_089907C8;
    case 109u: goto L_089907CC;
    case 110u: goto L_089907E0;
    case 111u: goto L_08990824;
    case 112u: goto L_08990830;
    case 113u: goto L_08990840;
    case 114u: goto L_0899085C;
    case 115u: goto L_08990864;
    case 116u: goto L_08990874;
    case 117u: goto L_08990884;
    case 118u: goto L_089908A0;
    case 119u: goto L_089908B4;
    case 120u: goto L_089908B8;
    case 121u: goto L_089908CC;
    case 122u: goto L_089908EC;
    case 123u: goto L_08990904;
    case 124u: goto L_08990910;
    case 125u: goto L_08990920;
    case 126u: goto L_08990928;
    case 127u: goto L_08990938;
    case 128u: goto L_08990954;
    case 129u: goto L_0899095C;
    case 130u: goto L_08990970;
    case 131u: goto L_0899098C;
    case 132u: goto L_08990998;
    case 133u: goto L_089909B0;
    case 134u: goto L_089909BC;
    case 135u: goto L_089909D4;
    case 136u: goto L_089909E0;
    case 137u: goto L_089909F8;
    case 138u: goto L_08990A04;
    case 139u: goto L_08990A20;
    case 140u: goto L_08990A28;
    case 141u: goto L_08990A40;
    case 142u: goto L_08990A50;
    case 143u: goto L_08990A54;
    case 144u: goto L_08990A98;
    case 145u: goto L_08990AA8;
    case 146u: goto L_08990AB8;
    case 147u: goto L_08990AC0;
    case 148u: goto L_08990ACC;
    case 149u: goto L_08990AD0;
    case 150u: goto L_08990AE4;
    case 151u: goto L_08990AE8;
    case 152u: goto L_08990B30;
    case 153u: goto L_08990B50;
    case 154u: goto L_08990B58;
    case 155u: goto L_08990B60;
    case 156u: goto L_08990B68;
    case 157u: goto L_08990B70;
    case 158u: goto L_08990B78;
    case 159u: goto L_08990B80;
    case 160u: goto L_08990B9C;
    case 161u: goto L_08990BA4;
    case 162u: goto L_08990BB4;
    case 163u: goto L_08990BC4;
    case 164u: goto L_08990BD4;
    case 165u: goto L_08990BE8;
    case 166u: goto L_08990BF0;
    case 167u: goto L_08990C04;
    case 168u: goto L_08990C0C;
    case 169u: goto L_08990C20;
    case 170u: goto L_08990C28;
    case 171u: goto L_08990C40;
    case 172u: goto L_08990C58;
    case 173u: goto L_08990C70;
    case 174u: goto L_08990C88;
    case 175u: goto L_08990CA0;
    case 176u: goto L_08990CB8;
    case 177u: goto L_08990CD0;
    case 178u: goto L_08990CE8;
    case 179u: goto L_08990D00;
    case 180u: goto L_08990D18;
    case 181u: goto L_08990D30;
    case 182u: goto L_08990D48;
    case 183u: goto L_08990D60;
    case 184u: goto L_08990D78;
    case 185u: goto L_08990D90;
    case 186u: goto L_08990DA8;
    case 187u: goto L_08990DC0;
    case 188u: goto L_08990DD8;
    case 189u: goto L_08990DF0;
    case 190u: goto L_08990E08;
    case 191u: goto L_08990E10;
    case 192u: goto L_08990E18;
    case 193u: goto L_08990E20;
    case 194u: goto L_08990E28;
    case 195u: goto L_08990E30;
    case 196u: goto L_08990E38;
    case 197u: goto L_08990E40;
    case 198u: goto L_08990E48;
    case 199u: goto L_08990E50;
    case 200u: goto L_08990E58;
    case 201u: goto L_08990E60;
    case 202u: goto L_08990E68;
    case 203u: goto L_08990E70;
    case 204u: goto L_08990E78;
    case 205u: goto L_08990E80;
    case 206u: goto L_08990E88;
    case 207u: goto L_08990E90;
    case 208u: goto L_08990E98;
    case 209u: goto L_08990EA0;
    case 210u: goto L_08990EA8;
    case 211u: goto L_08990EAC;
    case 212u: goto L_08990EB4;
    case 213u: goto L_08990F78;
    case 214u: goto L_08990F80;
    case 215u: goto L_08990F94;
    case 216u: goto L_08990F9C;
    case 217u: goto L_08990FB0;
    case 218u: goto L_08990FB4;
    case 219u: goto L_08990FC0;
    case 220u: goto L_08990FF8;
    case 221u: goto L_0899100C;
    case 222u: goto L_08991034;
    case 223u: goto L_0899103C;
    case 224u: goto L_08991058;
    case 225u: goto L_08991060;
    case 226u: goto L_0899106C;
    case 227u: goto L_08991080;
    case 228u: goto L_08991088;
    case 229u: goto L_08991098;
    case 230u: goto L_089910A0;
    case 231u: goto L_089910B0;
    case 232u: goto L_089910C8;
    case 233u: goto L_089910E0;
    case 234u: goto L_089910E8;
    case 235u: goto L_08991108;
    case 236u: goto L_08991110;
    case 237u: goto L_0899112C;
    case 238u: goto L_08991134;
    case 239u: goto L_08991148;
    case 240u: goto L_0899114C;
    case 241u: goto L_08991154;
    case 242u: goto L_08991170;
    case 243u: goto L_08991178;
    case 244u: goto L_0899118C;
    case 245u: goto L_08991190;
    case 246u: goto L_08991198;
    case 247u: goto L_089911B4;
    case 248u: goto L_089911BC;
    case 249u: goto L_089911D0;
    case 250u: goto L_089911D4;
    case 251u: goto L_089911DC;
    case 252u: goto L_089911F8;
    case 253u: goto L_08991200;
    case 254u: goto L_08991214;
    case 255u: goto L_08991218;
    case 256u: goto L_08991220;
    case 257u: goto L_0899123C;
    case 258u: goto L_08991244;
    case 259u: goto L_08991258;
    case 260u: goto L_0899125C;
    case 261u: goto L_08991264;
    case 262u: goto L_08991280;
    case 263u: goto L_08991288;
    case 264u: goto L_0899129C;
    case 265u: goto L_089912A0;
    case 266u: goto L_089912A8;
    case 267u: goto L_089912BC;
    case 268u: goto L_089912C4;
    case 269u: goto L_089912DC;
    case 270u: goto L_089912E0;
    case 271u: goto L_089912E8;
    case 272u: goto L_089912FC;
    case 273u: goto L_08991304;
    case 274u: goto L_0899131C;
    case 275u: goto L_08991320;
    case 276u: goto L_08991328;
    case 277u: goto L_08991344;
    case 278u: goto L_0899134C;
    case 279u: goto L_08991360;
    case 280u: goto L_08991364;
    case 281u: goto L_0899136C;
    case 282u: goto L_08991388;
    case 283u: goto L_08991390;
    case 284u: goto L_089913A4;
    case 285u: goto L_089913A8;
    case 286u: goto L_089913B0;
    case 287u: goto L_089913D8;
    case 288u: goto L_089913E8;
    case 289u: goto L_089913FC;
    case 290u: goto L_08991400;
    case 291u: goto L_08991414;
    case 292u: goto L_0899142C;
    case 293u: goto L_08991444;
    case 294u: goto L_0899145C;
    case 295u: goto L_08991470;
    case 296u: goto L_08991478;
    case 297u: goto L_08991488;
    case 298u: goto L_08991490;
    case 299u: goto L_089914A8;
    case 300u: goto L_089914BC;
    case 301u: goto L_089914C4;
    case 302u: goto L_089914D4;
    case 303u: goto L_089914DC;
    case 304u: goto L_089914EC;
    case 305u: goto L_08991504;
    case 306u: goto L_0899150C;
    case 307u: goto L_08991514;
    case 308u: goto L_08991524;
    case 309u: goto L_0899153C;
    case 310u: goto L_08991548;
    case 311u: goto L_08991550;
    case 312u: goto L_0899155C;
    case 313u: goto L_0899156C;
    case 314u: goto L_08991574;
    case 315u: goto L_08991580;
    case 316u: goto L_08991590;
    case 317u: goto L_08991598;
    case 318u: goto L_0899159C;
    case 319u: goto L_089915A4;
    case 320u: goto L_089915DC;
    case 321u: goto L_089915E4;
    case 322u: goto L_08991600;
    case 323u: goto L_08991608;
    case 324u: goto L_08991610;
    case 325u: goto L_0899161C;
    case 326u: goto L_08991628;
    case 327u: goto L_08991630;
    case 328u: goto L_08991634;
    case 329u: goto L_0899163C;
    case 330u: goto L_08991644;
    case 331u: goto L_08991650;
    case 332u: goto L_08991658;
    case 333u: goto L_08991660;
    case 334u: goto L_08991674;
    case 335u: goto L_08991684;
    case 336u: goto L_08991690;
    case 337u: goto L_089916A0;
    case 338u: goto L_089916AC;
    case 339u: goto L_089916B8;
    case 340u: goto L_089916C4;
    case 341u: goto L_089916D0;
    case 342u: goto L_089916D8;
    case 343u: goto L_089916DC;
    case 344u: goto L_089916E4;
    case 345u: goto L_089916EC;
    case 346u: goto L_089916F8;
    case 347u: goto L_08991700;
    case 348u: goto L_08991708;
    case 349u: goto L_08991714;
    case 350u: goto L_08991720;
    case 351u: goto L_0899172C;
    case 352u: goto L_08991734;
    case 353u: goto L_08991738;
    case 354u: goto L_08991740;
    case 355u: goto L_08991748;
    case 356u: goto L_08991754;
    case 357u: goto L_0899175C;
    case 358u: goto L_08991788;
    case 359u: goto L_08991814;
    case 360u: goto L_08991828;
    case 361u: goto L_08991908;
    case 362u: goto L_0899191C;
    case 363u: goto L_08991920;
    case 364u: goto L_08991934;
    case 365u: goto L_08991938;
    case 366u: goto L_0899194C;
    case 367u: goto L_08991950;
    case 368u: goto L_08991964;
    case 369u: goto L_08991968;
    case 370u: goto L_0899197C;
    case 371u: goto L_08991980;
    case 372u: goto L_08991994;
    case 373u: goto L_08991998;
    case 374u: goto L_089919AC;
    case 375u: goto L_089919B0;
    case 376u: goto L_089919C4;
    case 377u: goto L_089919CC;
    case 378u: goto L_089919E0;
    case 379u: goto L_089919E8;
    case 380u: goto L_089919FC;
    case 381u: goto L_08991A00;
    case 382u: goto L_08991A14;
    case 383u: goto L_08991A18;
    case 384u: goto L_08991A2C;
    case 385u: goto L_08991A30;
    case 386u: goto L_08991A48;
    case 387u: goto L_08991A4C;
    case 388u: goto L_08991A60;
    case 389u: goto L_08991A9C;
    case 390u: goto L_08991AB4;
    case 391u: goto L_08991ACC;
    case 392u: goto L_08991B5C;
    case 393u: goto L_08991B70;
    case 394u: goto L_08991B7C;
    case 395u: goto L_08991B88;
    case 396u: goto L_08991B94;
    case 397u: goto L_08991B9C;
    case 398u: goto L_08991BAC;
    case 399u: goto L_08991BB4;
    case 400u: goto L_08991BC4;
    case 401u: goto L_08991BCC;
    case 402u: goto L_08991BD8;
    case 403u: goto L_08991BE4;
    case 404u: goto L_08991BEC;
    case 405u: goto L_08991BFC;
    case 406u: goto L_08991C04;
    case 407u: goto L_08991C14;
    case 408u: goto L_08991C1C;
    case 409u: goto L_08991C2C;
    case 410u: goto L_08991C34;
    case 411u: goto L_08991C40;
    case 412u: goto L_08991C4C;
    case 413u: goto L_08991C54;
    case 414u: goto L_08991C64;
    case 415u: goto L_08991C6C;
    case 416u: goto L_08991C7C;
    case 417u: goto L_08991C84;
    case 418u: goto L_08991C90;
    case 419u: goto L_08991C9C;
    case 420u: goto L_08991CA4;
    case 421u: goto L_08991CB4;
    case 422u: goto L_08991CBC;
    case 423u: goto L_08991CCC;
    case 424u: goto L_08991CD4;
    case 425u: goto L_08991CE0;
    case 426u: goto L_08991CEC;
    case 427u: goto L_08991CF4;
    case 428u: goto L_08991D04;
    case 429u: goto L_08991D0C;
    case 430u: goto L_08991D1C;
    case 431u: goto L_08991D24;
    case 432u: goto L_08991D30;
    case 433u: goto L_08991D3C;
    case 434u: goto L_08991D44;
    case 435u: goto L_08991D54;
    case 436u: goto L_08991D5C;
    case 437u: goto L_08991D6C;
    case 438u: goto L_08991D74;
    case 439u: goto L_08991D80;
    case 440u: goto L_08991D8C;
    case 441u: goto L_08991D94;
    case 442u: goto L_08991DA4;
    case 443u: goto L_08991DAC;
    case 444u: goto L_08991DBC;
    case 445u: goto L_08991DC4;
    case 446u: goto L_08991DD0;
    case 447u: goto L_08991DDC;
    case 448u: goto L_08991DE4;
    case 449u: goto L_08991DF4;
    case 450u: goto L_08991DFC;
    case 451u: goto L_08991E0C;
    case 452u: goto L_08991E14;
    case 453u: goto L_08991E20;
    case 454u: goto L_08991E2C;
    case 455u: goto L_08991E34;
    case 456u: goto L_08991E44;
    case 457u: goto L_08991E4C;
    case 458u: goto L_08991E5C;
    case 459u: goto L_08991E64;
    case 460u: goto L_08991E70;
    case 461u: goto L_08991E7C;
    case 462u: goto L_08991E84;
    case 463u: goto L_08991E94;
    case 464u: goto L_08991E9C;
    case 465u: goto L_08991EAC;
    case 466u: goto L_08991EB4;
    case 467u: goto L_08991EC0;
    case 468u: goto L_08991ECC;
    case 469u: goto L_08991ED4;
    case 470u: goto L_08991EE4;
    case 471u: goto L_08991EEC;
    case 472u: goto L_08991EFC;
    case 473u: goto L_08991F04;
    case 474u: goto L_08991F10;
    case 475u: goto L_08991F1C;
    case 476u: goto L_08991F24;
    case 477u: goto L_08991F34;
    case 478u: goto L_08991F3C;
    case 479u: goto L_08991F4C;
    case 480u: goto L_08991F54;
    case 481u: goto L_08991F60;
    case 482u: goto L_08991F6C;
    case 483u: goto L_08991F74;
    case 484u: goto L_08991F84;
    case 485u: goto L_08991F8C;
    case 486u: goto L_08991F9C;
    case 487u: goto L_08991FA4;
    case 488u: goto L_08991FB0;
    case 489u: goto L_08991FBC;
    case 490u: goto L_08991FC4;
    case 491u: goto L_08991FD4;
    case 492u: goto L_08991FDC;
    case 493u: goto L_08991FEC;
    case 494u: goto L_08991FF4;
    case 495u: goto L_08992000;
    case 496u: goto L_0899200C;
    case 497u: goto L_0899201C;
    case 498u: goto L_08992024;
    case 499u: goto L_08992034;
    case 500u: goto L_0899203C;
    case 501u: goto L_08992048;
    case 502u: goto L_08992054;
    case 503u: goto L_0899205C;
    case 504u: goto L_0899206C;
    case 505u: goto L_08992074;
    case 506u: goto L_08992084;
    case 507u: goto L_0899208C;
    case 508u: goto L_08992098;
    case 509u: goto L_089920A4;
    case 510u: goto L_089920AC;
    case 511u: goto L_089920BC;
    case 512u: goto L_089920C4;
    case 513u: goto L_089920D4;
    case 514u: goto L_089920DC;
    case 515u: goto L_089920E8;
    case 516u: goto L_089920F4;
    case 517u: goto L_089920FC;
    case 518u: goto L_0899210C;
    case 519u: goto L_08992114;
    case 520u: goto L_08992124;
    case 521u: goto L_0899212C;
    case 522u: goto L_08992138;
    case 523u: goto L_08992144;
    case 524u: goto L_0899214C;
    case 525u: goto L_0899215C;
    case 526u: goto L_08992164;
    case 527u: goto L_08992174;
    case 528u: goto L_0899217C;
    case 529u: goto L_08992188;
    case 530u: goto L_08992194;
    case 531u: goto L_0899219C;
    case 532u: goto L_089921AC;
    case 533u: goto L_089921B4;
    case 534u: goto L_089921C4;
    case 535u: goto L_089921CC;
    case 536u: goto L_089921D8;
    case 537u: goto L_089921E4;
    case 538u: goto L_089921EC;
    case 539u: goto L_089921FC;
    case 540u: goto L_08992204;
    case 541u: goto L_08992214;
    case 542u: goto L_0899221C;
    case 543u: goto L_08992228;
    case 544u: goto L_08992234;
    case 545u: goto L_0899223C;
    case 546u: goto L_0899224C;
    case 547u: goto L_08992254;
    case 548u: goto L_08992264;
    case 549u: goto L_0899226C;
    case 550u: goto L_08992278;
    case 551u: goto L_08992288;
    case 552u: goto L_08992290;
    case 553u: goto L_089922A0;
    case 554u: goto L_089922A8;
    case 555u: goto L_089922B8;
    case 556u: goto L_089922C0;
    case 557u: goto L_089922D0;
    case 558u: goto L_089922E0;
    case 559u: goto L_089922E8;
    case 560u: goto L_089922F8;
    case 561u: goto L_08992300;
    case 562u: goto L_08992310;
    case 563u: goto L_08992318;
    case 564u: goto L_0899232C;
    case 565u: goto L_08992340;
    case 566u: goto L_08992348;
    case 567u: goto L_08992358;
    case 568u: goto L_08992360;
    case 569u: goto L_08992370;
    case 570u: goto L_08992378;
    case 571u: goto L_0899238C;
    case 572u: goto L_089923A0;
    case 573u: goto L_089923A8;
    case 574u: goto L_089923B8;
    case 575u: goto L_089923C0;
    case 576u: goto L_089923D0;
    case 577u: goto L_089923D8;
    case 578u: goto L_089923EC;
    case 579u: goto L_08992400;
    case 580u: goto L_08992408;
    case 581u: goto L_08992418;
    case 582u: goto L_08992420;
    case 583u: goto L_08992430;
    case 584u: goto L_08992438;
    case 585u: goto L_0899244C;
    case 586u: goto L_0899245C;
    case 587u: goto L_0899246C;
    case 588u: goto L_08992474;
    case 589u: goto L_08992484;
    case 590u: goto L_0899248C;
    case 591u: goto L_089924A0;
    case 592u: goto L_089924DC;
    case 593u: goto L_089924E4;
    case 594u: goto L_089924F4;
    case 595u: goto L_089924FC;
    case 596u: goto L_0899250C;
    case 597u: goto L_08992514;
    case 598u: goto L_08992524;
    case 599u: goto L_0899252C;
    case 600u: goto L_0899253C;
    case 601u: goto L_0899256C;
    case 602u: goto L_08992574;
    case 603u: goto L_08992584;
    case 604u: goto L_0899266C;
    case 605u: goto L_08992680;
    case 606u: goto L_08992694;
    case 607u: goto L_089926A8;
    case 608u: goto L_089926BC;
    case 609u: goto L_089926D0;
    case 610u: goto L_089926E8;
    case 611u: goto L_089926FC;
    case 612u: goto L_08992710;
    case 613u: goto L_08992724;
    case 614u: goto L_08992738;
    case 615u: goto L_0899274C;
    case 616u: goto L_08992760;
    case 617u: goto L_08992774;
    case 618u: goto L_08992788;
    case 619u: goto L_0899279C;
    case 620u: goto L_089927B0;
    case 621u: goto L_089927C4;
    case 622u: goto L_089927D8;
    case 623u: goto L_089927EC;
    case 624u: goto L_08992800;
    case 625u: goto L_08992814;
    case 626u: goto L_08992828;
    case 627u: goto L_0899283C;
    case 628u: goto L_08992850;
    case 629u: goto L_08992864;
    case 630u: goto L_08992878;
    case 631u: goto L_0899288C;
    case 632u: goto L_089928A0;
    case 633u: goto L_089928B4;
    case 634u: goto L_089928C8;
    case 635u: goto L_089928DC;
    case 636u: goto L_089928F0;
    case 637u: goto L_08992904;
    case 638u: goto L_08992918;
    case 639u: goto L_0899292C;
    case 640u: goto L_08992940;
    case 641u: goto L_08992954;
    case 642u: goto L_08992968;
    case 643u: goto L_0899297C;
    case 644u: goto L_08992990;
    case 645u: goto L_089929A4;
    case 646u: goto L_089929B8;
    case 647u: goto L_089929CC;
    case 648u: goto L_089929E0;
    case 649u: goto L_089929F4;
    case 650u: goto L_08992A08;
    case 651u: goto L_08992A1C;
    case 652u: goto L_08992A30;
    case 653u: goto L_08992A44;
    case 654u: goto L_08992A58;
    case 655u: goto L_08992A6C;
    case 656u: goto L_08992A80;
    case 657u: goto L_08992A94;
    case 658u: goto L_08992AA8;
    case 659u: goto L_08992ABC;
    case 660u: goto L_08992AD0;
    case 661u: goto L_08992AE4;
    case 662u: goto L_08992AF8;
    case 663u: goto L_08992B0C;
    case 664u: goto L_08992B20;
    case 665u: goto L_08992B34;
    case 666u: goto L_08992B48;
    case 667u: goto L_08992B5C;
    case 668u: goto L_08992B70;
    case 669u: goto L_08992B84;
    case 670u: goto L_08992B98;
    case 671u: goto L_08992BAC;
    case 672u: goto L_08992BC0;
    case 673u: goto L_08992BD4;
    case 674u: goto L_08992BE8;
    case 675u: goto L_08992BFC;
    case 676u: goto L_08992C10;
    case 677u: goto L_08992C28;
    case 678u: goto L_08992C40;
    case 679u: goto L_08992C58;
    case 680u: goto L_08992C70;
    case 681u: goto L_08992C88;
    case 682u: goto L_08992CA0;
    case 683u: goto L_08992CB8;
    case 684u: goto L_08992CCC;
    case 685u: goto L_08992CE0;
    case 686u: goto L_08992CF8;
    case 687u: goto L_08992D10;
    case 688u: goto L_08992D28;
    case 689u: goto L_08992D3C;
    case 690u: goto L_08992D50;
    case 691u: goto L_08992D64;
    case 692u: goto L_08992D78;
    case 693u: goto L_08992D8C;
    case 694u: goto L_08992DA0;
    case 695u: goto L_08992DB4;
    case 696u: goto L_08992DC8;
    case 697u: goto L_08992DDC;
    case 698u: goto L_08992DF0;
    case 699u: goto L_08992E04;
    case 700u: goto L_08992E18;
    case 701u: goto L_08992E2C;
    case 702u: goto L_08992E40;
    case 703u: goto L_08992E54;
    case 704u: goto L_08992E68;
    case 705u: goto L_08992E7C;
    case 706u: goto L_08992E90;
    case 707u: goto L_08992EA4;
    case 708u: goto L_08992EB8;
    case 709u: goto L_08992ECC;
    case 710u: goto L_08992EE0;
    case 711u: goto L_08992EF4;
    case 712u: goto L_08992F08;
    case 713u: goto L_08992F1C;
    case 714u: goto L_08992F30;
    case 715u: goto L_08992F44;
    case 716u: goto L_08992F58;
    case 717u: goto L_08992F6C;
    case 718u: goto L_08992F80;
    case 719u: goto L_08992F88;
    case 720u: goto L_08992F94;
    case 721u: goto L_08992FA4;
    case 722u: goto L_08992FB8;
    case 723u: goto L_08992FD4;
    case 724u: goto L_08993004;
    case 725u: goto L_08993018;
    case 726u: goto L_0899302C;
    case 727u: goto L_08993040;
    case 728u: goto L_08993054;
    case 729u: goto L_08993068;
    case 730u: goto L_08993080;
    case 731u: goto L_08993094;
    case 732u: goto L_089930A8;
    case 733u: goto L_089930BC;
    case 734u: goto L_089930D0;
    case 735u: goto L_089930E4;
    case 736u: goto L_089930F8;
    case 737u: goto L_0899310C;
    case 738u: goto L_08993120;
    case 739u: goto L_08993134;
    case 740u: goto L_08993148;
    case 741u: goto L_0899315C;
    case 742u: goto L_08993170;
    case 743u: goto L_08993184;
    case 744u: goto L_08993198;
    case 745u: goto L_089931AC;
    case 746u: goto L_089931C0;
    case 747u: goto L_089931D4;
    case 748u: goto L_089931E8;
    case 749u: goto L_089931FC;
    case 750u: goto L_08993210;
    case 751u: goto L_08993224;
    case 752u: goto L_08993238;
    case 753u: goto L_0899324C;
    case 754u: goto L_08993260;
    case 755u: goto L_08993274;
    case 756u: goto L_08993288;
    case 757u: goto L_0899329C;
    case 758u: goto L_089932B0;
    case 759u: goto L_089932C4;
    case 760u: goto L_089932D8;
    case 761u: goto L_089932EC;
    case 762u: goto L_08993300;
    case 763u: goto L_08993314;
    case 764u: goto L_08993328;
    case 765u: goto L_0899333C;
    case 766u: goto L_08993350;
    case 767u: goto L_08993364;
    case 768u: goto L_08993378;
    case 769u: goto L_0899338C;
    case 770u: goto L_089933A0;
    case 771u: goto L_089933B4;
    case 772u: goto L_089933C8;
    case 773u: goto L_089933DC;
    case 774u: goto L_089933F0;
    case 775u: goto L_08993404;
    case 776u: goto L_08993418;
    case 777u: goto L_0899342C;
    case 778u: goto L_08993440;
    case 779u: goto L_08993454;
    case 780u: goto L_08993468;
    case 781u: goto L_0899347C;
    case 782u: goto L_08993490;
    case 783u: goto L_089934A4;
    case 784u: goto L_089934B8;
    case 785u: goto L_089934CC;
    case 786u: goto L_089934E0;
    case 787u: goto L_089934F4;
    case 788u: goto L_08993508;
    case 789u: goto L_0899351C;
    case 790u: goto L_08993530;
    case 791u: goto L_08993544;
    case 792u: goto L_08993558;
    case 793u: goto L_0899356C;
    case 794u: goto L_08993580;
    case 795u: goto L_08993594;
    case 796u: goto L_089935A8;
    case 797u: goto L_089935C0;
    case 798u: goto L_089935D8;
    case 799u: goto L_089935F0;
    case 800u: goto L_08993608;
    case 801u: goto L_08993620;
    case 802u: goto L_08993638;
    case 803u: goto L_08993650;
    case 804u: goto L_08993664;
    case 805u: goto L_08993678;
    case 806u: goto L_08993690;
    case 807u: goto L_089936A8;
    case 808u: goto L_089936C0;
    case 809u: goto L_089936D4;
    case 810u: goto L_089936E8;
    case 811u: goto L_089936FC;
    case 812u: goto L_08993710;
    case 813u: goto L_08993724;
    case 814u: goto L_08993738;
    case 815u: goto L_0899374C;
    case 816u: goto L_08993760;
    case 817u: goto L_08993774;
    case 818u: goto L_08993788;
    case 819u: goto L_0899379C;
    case 820u: goto L_089937B0;
    case 821u: goto L_089937C4;
    case 822u: goto L_089937D8;
    case 823u: goto L_089937EC;
    case 824u: goto L_08993800;
    case 825u: goto L_08993814;
    case 826u: goto L_08993828;
    case 827u: goto L_0899383C;
    case 828u: goto L_08993850;
    case 829u: goto L_08993864;
    case 830u: goto L_08993878;
    case 831u: goto L_0899388C;
    case 832u: goto L_089938A0;
    case 833u: goto L_089938B4;
    case 834u: goto L_089938C8;
    case 835u: goto L_089938DC;
    case 836u: goto L_089938F0;
    case 837u: goto L_08993904;
    case 838u: goto L_08993918;
    case 839u: goto L_08993928;
    case 840u: goto L_08993938;
    case 841u: goto L_0899394C;
    case 842u: goto L_08993964;
    case 843u: goto L_0899398C;
    case 844u: goto L_089939B0;
    case 845u: goto L_089939B8;
    case 846u: goto L_089939C0;
    case 847u: goto L_089939E8;
    case 848u: goto L_089939F0;
    case 849u: goto L_089939F8;
    case 850u: goto L_08993A00;
    case 851u: goto L_08993A20;
    case 852u: goto L_08993A28;
    case 853u: goto L_08993A30;
    case 854u: goto L_08993A70;
    case 855u: goto L_08993A78;
    case 856u: goto L_08993A9C;
    case 857u: goto L_08993AA4;
    case 858u: goto L_08993AC8;
    case 859u: goto L_08993AD0;
    case 860u: goto L_08993B14;
    case 861u: goto L_08993B20;
    case 862u: goto L_08993B28;
    case 863u: goto L_08993B4C;
    case 864u: goto L_08993B54;
    case 865u: goto L_08993B78;
    case 866u: goto L_08993B80;
    case 867u: goto L_08993B8C;
    case 868u: goto L_08993B98;
    case 869u: goto L_08993BA0;
    case 870u: goto L_08993BC4;
    case 871u: goto L_08993BCC;
    case 872u: goto L_08993BD4;
    case 873u: goto L_08993BE0;
    case 874u: goto L_08993BE8;
    case 875u: goto L_08993C00;
    case 876u: goto L_08993C08;
    case 877u: goto L_08993C10;
    case 878u: goto L_08993C20;
    case 879u: goto L_08993C2C;
    case 880u: goto L_08993C4C;
    case 881u: goto L_08993C54;
    case 882u: goto L_08993C58;
    case 883u: goto L_08993C64;
    case 884u: goto L_08993C6C;
    case 885u: goto L_08993C7C;
    case 886u: goto L_08993C88;
    case 887u: goto L_08993CA8;
    case 888u: goto L_08993CB0;
    case 889u: goto L_08993CB4;
    case 890u: goto L_08993CC0;
    case 891u: goto L_08993CC8;
    case 892u: goto L_08993CD8;
    case 893u: goto L_08993CE4;
    case 894u: goto L_08993D04;
    case 895u: goto L_08993D0C;
    case 896u: goto L_08993D10;
    case 897u: goto L_08993D1C;
    case 898u: goto L_08993D24;
    case 899u: goto L_08993D34;
    case 900u: goto L_08993D40;
    case 901u: goto L_08993D60;
    case 902u: goto L_08993D68;
    case 903u: goto L_08993D6C;
    case 904u: goto L_08993D78;
    case 905u: goto L_08993D80;
    case 906u: goto L_08993D94;
    case 907u: goto L_08993D9C;
    case 908u: goto L_08993DA4;
    case 909u: goto L_08993DC8;
    case 910u: goto L_08993DD0;
    case 911u: goto L_08993DDC;
    case 912u: goto L_08993DE4;
    case 913u: goto L_08993DEC;
    case 914u: goto L_08993E28;
    case 915u: goto L_08993E30;
    case 916u: goto L_08993E3C;
    case 917u: goto L_08993E44;
    case 918u: goto L_08993E4C;
    case 919u: goto L_08993E88;
    case 920u: goto L_08993E90;
    case 921u: goto L_08993E9C;
    case 922u: goto L_08993EA4;
    case 923u: goto L_08993EAC;
    case 924u: goto L_08993EE8;
    case 925u: goto L_08993EF0;
    case 926u: goto L_08993EFC;
    case 927u: goto L_08993F04;
    case 928u: goto L_08993F0C;
    case 929u: goto L_08993F48;
    case 930u: goto L_08993F50;
    case 931u: goto L_08993F64;
    case 932u: goto L_08993F6C;
    case 933u: goto L_08993F74;
    case 934u: goto L_08993FB4;
    case 935u: goto L_08993FBC;
    case 936u: goto L_08993FD0;
    case 937u: goto L_08993FD8;
    case 938u: goto L_08993FE0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08990000:
    ctx.gpr[2] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1944), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08990018:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15960)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] & 128u);
    ctx.gpr[5] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08990174;
      }
      goto L_08990054;
    }
L_08990054:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[5] = (0u | 3u);
      if (branch_taken) {
          goto L_0899006C;
      }
      goto L_0899005C;
    }
L_0899005C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08990074;
      }
      goto L_0899006C;
    }
L_0899006C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08990098;
      }
      goto L_08990074;
    }
L_08990074:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
      if (branch_taken) {
          goto L_08990084;
      }
      goto L_0899007C;
    }
L_0899007C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08990098;
      }
      goto L_08990084;
    }
L_08990084:
    ctx.gpr[6] = (0u + ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    goto L_08990098;
L_08990098:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(476)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089900E0;
      }
      goto L_089900A8;
    }
L_089900A8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089900B4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem) && ctx.pc == 0x089900B4u) goto L_089900B4;
    return;
L_089900B4:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089900D8;
      }
      goto L_089900BC;
    }
L_089900BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089900D8u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089900D8u) goto L_089900D8;
    return;
L_089900D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08990174;
      }
      goto L_089900E0;
    }
L_089900E0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089900ECu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 71u, 0x0888081Cu>(ctx, &aot_mem) && ctx.pc == 0x089900ECu) goto L_089900EC;
    return;
L_089900EC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08990174;
      }
      goto L_089900F4;
    }
L_089900F4:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08990100u);
    ctx.gpr[4] = (0u | 496u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 392u, 0x0882B994u>(ctx, &aot_mem) && ctx.pc == 0x08990100u) goto L_08990100;
    return;
L_08990100:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08990120;
      }
      goto L_0899010C;
    }
L_0899010C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0899011Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 351u, 0x0882B688u>(ctx, &aot_mem) && ctx.pc == 0x0899011Cu) goto L_0899011C;
    return;
L_0899011C:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_08990120;
L_08990120:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0899012Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem) && ctx.pc == 0x0899012Cu) goto L_0899012C;
    return;
L_0899012C:
    ctx.gpr[31] = (0x08990134u);
    // nop
    goto L_08990374;
L_08990134:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08990144u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08990144u) goto L_08990144;
    return;
L_08990144:
    ctx.gpr[31] = (0x0899014Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 224u, 0x08891A2Cu>(ctx, &aot_mem) && ctx.pc == 0x0899014Cu) goto L_0899014C;
    return;
L_0899014C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(80), 0u);
      if (branch_taken) {
          goto L_08990170;
      }
      goto L_08990154;
    }
L_08990154:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08990170u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08990170u) goto L_08990170;
    return;
L_08990170:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(68), 0u);
    goto L_08990174;
L_08990174:
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
L_08990190:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x089901ACu);
    ctx.gpr[4] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x089901ACu) goto L_089901AC;
    return;
L_089901AC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[6] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15944));
      if (branch_taken) {
          goto L_089901C8;
      }
      goto L_089901B8;
    }
L_089901B8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089901C4u);
    ctx.gpr[5] = (0u | 70u);
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 173u, 0x08B6CF28u>(ctx, &aot_mem) && ctx.pc == 0x089901C4u) goto L_089901C4;
    return;
L_089901C4:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_089901C8;
L_089901C8:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976), ctx.gpr[16]);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x089901D8u);
    ctx.gpr[4] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x089901D8u) goto L_089901D8;
    return;
L_089901D8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[6] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15936));
      if (branch_taken) {
          goto L_089901F4;
      }
      goto L_089901E4;
    }
L_089901E4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089901F0u);
    ctx.gpr[5] = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 179u, 0x08B6CFD0u>(ctx, &aot_mem) && ctx.pc == 0x089901F0u) goto L_089901F0;
    return;
L_089901F0:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_089901F4;
L_089901F4:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972), ctx.gpr[16]);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08990204u);
    ctx.gpr[4] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08990204u) goto L_08990204;
    return;
L_08990204:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[6] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15924));
      if (branch_taken) {
          goto L_08990220;
      }
      goto L_08990210;
    }
L_08990210:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0899021Cu);
    ctx.gpr[5] = (0u | 475u);
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 185u, 0x08B6D078u>(ctx, &aot_mem) && ctx.pc == 0x0899021Cu) goto L_0899021C;
    return;
L_0899021C:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08990220;
L_08990220:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-15960), ctx.gpr[16]);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08990230u);
    ctx.gpr[4] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08990230u) goto L_08990230;
    return;
L_08990230:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[6] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15916));
      if (branch_taken) {
          goto L_0899024C;
      }
      goto L_0899023C;
    }
L_0899023C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08990248u);
    ctx.gpr[5] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 191u, 0x08B6D120u>(ctx, &aot_mem) && ctx.pc == 0x08990248u) goto L_08990248;
    return;
L_08990248:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_0899024C;
L_0899024C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-15956), ctx.gpr[16]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0899025Cu);
    ctx.gpr[4] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x0899025Cu) goto L_0899025C;
    return;
L_0899025C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[6] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15908));
      if (branch_taken) {
          goto L_08990278;
      }
      goto L_08990268;
    }
L_08990268:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08990274u);
    ctx.gpr[5] = (0u | 192u);
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 197u, 0x08B6D1CCu>(ctx, &aot_mem) && ctx.pc == 0x08990274u) goto L_08990274;
    return;
L_08990274:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08990278;
L_08990278:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-15948), ctx.gpr[17]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08990290:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x089902A0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 624u, 0x08B6B464u>(ctx, &aot_mem) && ctx.pc == 0x089902A0u) goto L_089902A0;
    return;
L_089902A0:
    ctx.gpr[31] = (0x089902A8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 630u, 0x08B6B4B4u>(ctx, &aot_mem) && ctx.pc == 0x089902A8u) goto L_089902A8;
    return;
L_089902A8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089902B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x089902C8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 775u, 0x08B67368u>(ctx, &aot_mem) && ctx.pc == 0x089902C8u) goto L_089902C8;
    return;
L_089902C8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089902D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x089902E8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x089902E8u) goto L_089902E8;
    return;
L_089902E8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089902F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08990308u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 139u, 0x08B6CC28u>(ctx, &aot_mem) && ctx.pc == 0x08990308u) goto L_08990308;
    return;
L_08990308:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08990314:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08990328u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem) && ctx.pc == 0x08990328u) goto L_08990328;
    return;
L_08990328:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08990334:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08990348u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15960)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 636u, 0x08B66A10u>(ctx, &aot_mem) && ctx.pc == 0x08990348u) goto L_08990348;
    return;
L_08990348:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08990354:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08990368u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15960)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 445u, 0x08B65D28u>(ctx, &aot_mem) && ctx.pc == 0x08990368u) goto L_08990368;
    return;
L_08990368:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08990374:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 544u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899037C:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(0u));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08990390:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(0u));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089903B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (14545u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[5] | 46871u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[31] = (0x089903F0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 123u, 0x08A19410u>(ctx, &aot_mem) && ctx.pc == 0x089903F0u) goto L_089903F0;
    return;
L_089903F0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08990418u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 388u, 0x088B9CB0u>(ctx, &aot_mem) && ctx.pc == 0x08990418u) goto L_08990418;
    return;
L_08990418:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), 0u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(50), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08990464:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0899049C;
      }
      goto L_08990480;
    }
L_08990480:
    ctx.gpr[31] = (0x08990488u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089904B0;
L_08990488:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899049C;
      }
      goto L_08990494;
    }
L_08990494:
    ctx.gpr[31] = (0x0899049Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x0899049Cu) goto L_0899049C;
    return;
L_0899049C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089904B0:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(50), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), 0u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(76), 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089904DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(54)));
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0899057C;
      }
      goto L_08990548;
    }
L_08990548:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08990574;
      }
      goto L_08990558;
    }
L_08990558:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u | 16u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x08990574u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 173u, 0x08B60E20u>(ctx, &aot_mem) && ctx.pc == 0x08990574u) goto L_08990574;
    return;
L_08990574:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), 0u);
      if (branch_taken) {
          goto L_08990654;
      }
      goto L_0899057C;
    }
L_0899057C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(54)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(54)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089905D4;
      }
      goto L_0899058C;
    }
L_0899058C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(54)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089905B8;
      }
      goto L_0899059C;
    }
L_0899059C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u | 16u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x089905B8u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 173u, 0x08B60E20u>(ctx, &aot_mem) && ctx.pc == 0x089905B8u) goto L_089905B8;
    return;
L_089905B8:
    ctx.gpr[7] = (2201u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(54)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (0u | 16u);
    ctx.gpr[31] = (0x089905D0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 158u, 0x08B60C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089905D0u) goto L_089905D0;
    return;
L_089905D0:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    goto L_089905D4;
L_089905D4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(54)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08990654;
      }
      goto L_089905E8;
    }
L_089905E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    goto L_089905EC;
L_089905EC:
    ctx.gpr[4] = (ctx.gpr[19] << 4u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(6))))));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(10))))));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[19] = (ctx.gpr[19] & 65535u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(54)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
        goto L_089905EC;
    }
    goto L_08990654;
L_08990654:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08990680;
      }
      goto L_08990660;
    }
L_08990660:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08990678;
      }
      goto L_08990670;
    }
L_08990670:
    ctx.gpr[31] = (0x08990678u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem) && ctx.pc == 0x08990678u) goto L_08990678;
    return;
L_08990678:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), 0u);
      if (branch_taken) {
          goto L_08990738;
      }
      goto L_08990680;
    }
L_08990680:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089906B8;
      }
      goto L_08990690;
    }
L_08990690:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089906A8;
      }
      goto L_089906A0;
    }
L_089906A0:
    ctx.gpr[31] = (0x089906A8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem) && ctx.pc == 0x089906A8u) goto L_089906A8;
    return;
L_089906A8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (0x089906B4u);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 468u, 0x08ABE29Cu>(ctx, &aot_mem) && ctx.pc == 0x089906B4u) goto L_089906B4;
    return;
L_089906B4:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    goto L_089906B8;
L_089906B8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08990738;
      }
      goto L_089906CC;
    }
L_089906CC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    goto L_089906D0;
L_089906D0:
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.gpr[19] = (ctx.gpr[19] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
        goto L_089906D0;
    }
    goto L_08990738;
L_08990738:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(53)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08990778;
      }
      goto L_08990744;
    }
L_08990744:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08990770;
      }
      goto L_08990754;
    }
L_08990754:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u | 32u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x08990770u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 173u, 0x08B60E20u>(ctx, &aot_mem) && ctx.pc == 0x08990770u) goto L_08990770;
    return;
L_08990770:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(60), 0u);
      if (branch_taken) {
          goto L_08990824;
      }
      goto L_08990778;
    }
L_08990778:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(53)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(53)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089907CC;
      }
      goto L_08990788;
    }
L_08990788:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(53)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089907B4;
      }
      goto L_08990798;
    }
L_08990798:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u | 32u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x089907B4u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 173u, 0x08B60E20u>(ctx, &aot_mem) && ctx.pc == 0x089907B4u) goto L_089907B4;
    return;
L_089907B4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(53)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (0u | 32u);
    ctx.gpr[31] = (0x089907C8u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 158u, 0x08B60C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089907C8u) goto L_089907C8;
    return;
L_089907C8:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    goto L_089907CC;
L_089907CC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(53)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08990824;
      }
      goto L_089907E0;
    }
L_089907E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (ctx.gpr[19] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
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
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] & 65535u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(53)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089907E0;
      }
      goto L_08990824;
    }
L_08990824:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08990864;
      }
      goto L_08990830;
    }
L_08990830:
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899085C;
      }
      goto L_08990840;
    }
L_08990840:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u | 48u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x0899085Cu);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 173u, 0x08B60E20u>(ctx, &aot_mem) && ctx.pc == 0x0899085Cu) goto L_0899085C;
    return;
L_0899085C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), 0u);
      if (branch_taken) {
          goto L_08990904;
      }
      goto L_08990864;
    }
L_08990864:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089908B8;
      }
      goto L_08990874;
    }
L_08990874:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089908A0;
      }
      goto L_08990884;
    }
L_08990884:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u | 48u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x089908A0u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 173u, 0x08B60E20u>(ctx, &aot_mem) && ctx.pc == 0x089908A0u) goto L_089908A0;
    return;
L_089908A0:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (0u | 48u);
    ctx.gpr[31] = (0x089908B4u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 158u, 0x08B60C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089908B4u) goto L_089908B4;
    return;
L_089908B4:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    goto L_089908B8;
L_089908B8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08990904;
      }
      goto L_089908CC;
    }
L_089908CC:
    ctx.gpr[4] = (ctx.gpr[19] << 4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[31] = (0x089908ECu);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 390u, 0x088B9CECu>(ctx, &aot_mem) && ctx.pc == 0x089908ECu) goto L_089908EC;
    return;
L_089908EC:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (ctx.gpr[19] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089908CC;
      }
      goto L_08990904;
    }
L_08990904:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(50)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899095C;
      }
      goto L_08990910;
    }
L_08990910:
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(50), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08990928;
      }
      goto L_08990920;
    }
L_08990920:
    ctx.gpr[31] = (0x08990928u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem) && ctx.pc == 0x08990928u) goto L_08990928;
    return;
L_08990928:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(76), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08990954;
      }
      goto L_08990938;
    }
L_08990938:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x08990954u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 173u, 0x08B60E20u>(ctx, &aot_mem) && ctx.pc == 0x08990954u) goto L_08990954;
    return;
L_08990954:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), 0u);
      if (branch_taken) {
          goto L_08990B30;
      }
      goto L_0899095C;
    }
L_0899095C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(50)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089909F8;
      }
      goto L_08990970;
    }
L_08990970:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (ctx.gpr[19] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08990998;
      }
      goto L_0899098C;
    }
L_0899098C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08990998;
L_08990998:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089909BC;
      }
      goto L_089909B0;
    }
L_089909B0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    goto L_089909BC;
L_089909BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089909E0;
      }
      goto L_089909D4;
    }
L_089909D4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_089909E0;
L_089909E0:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(50)));
    ctx.gpr[19] = (ctx.gpr[19] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08990970;
      }
      goto L_089909F8;
    }
L_089909F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08990A20;
      }
      goto L_08990A04;
    }
L_08990A04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x08990A20u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 173u, 0x08B60E20u>(ctx, &aot_mem) && ctx.pc == 0x08990A20u) goto L_08990A20;
    return;
L_08990A20:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08990A98;
      }
      goto L_08990A28;
    }
L_08990A28:
    ctx.gpr[7] = (2201u << 16u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x08990A40u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(892));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 158u, 0x08B60C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08990A40u) goto L_08990A40;
    return;
L_08990A40:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08990A98;
      }
      goto L_08990A50;
    }
L_08990A50:
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[19]);
    goto L_08990A54;
L_08990A54:
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[19] = (ctx.gpr[19] & 65535u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_08990A54;
      }
      goto L_08990A98;
    }
L_08990A98:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(50)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(50)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08990AD0;
      }
      goto L_08990AA8;
    }
L_08990AA8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(50)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(50), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08990AC0;
      }
      goto L_08990AB8;
    }
L_08990AB8:
    ctx.gpr[31] = (0x08990AC0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem) && ctx.pc == 0x08990AC0u) goto L_08990AC0;
    return;
L_08990AC0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(50)));
    ctx.gpr[31] = (0x08990ACCu);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 468u, 0x08ABE29Cu>(ctx, &aot_mem) && ctx.pc == 0x08990ACCu) goto L_08990ACC;
    return;
L_08990ACC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    goto L_08990AD0;
L_08990AD0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(50)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08990B30;
      }
      goto L_08990AE4;
    }
L_08990AE4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    goto L_08990AE8;
L_08990AE8:
    ctx.gpr[4] = (ctx.gpr[19] << 3u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(6))))));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[8]));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(50)));
    ctx.gpr[19] = (ctx.gpr[19] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
        goto L_08990AE8;
    }
    goto L_08990B30;
L_08990B30:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
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
L_08990B50:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(9296), static_cast<std::uint16_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08990B58:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08990B60:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(7892), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08990B68:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08990B70:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08990B78:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08990B80:
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[28] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(9404));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
        goto L_08990B9C;
    }
    goto L_08990B9C;
L_08990B9C:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(9404), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08990BA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9348)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9348), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08990BB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9352)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9352), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08990BC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9356)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9356), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08990BD4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9360)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
        goto L_08990BE8;
    }
    goto L_08990BE8;
L_08990BE8:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9360), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08990BF0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9364)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
        goto L_08990C04;
    }
    goto L_08990C04;
L_08990C04:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9364), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08990C0C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9368)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
        goto L_08990C20;
    }
    goto L_08990C20;
L_08990C20:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9368), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08990C28:
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08990EA0;
      }
      goto L_08990C40;
    }
L_08990C40:
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08990E98;
      }
      goto L_08990C58;
    }
L_08990C58:
    ctx.gpr[4] = (17046u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08990E90;
      }
      goto L_08990C70;
    }
L_08990C70:
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08990E88;
      }
      goto L_08990C88;
    }
L_08990C88:
    ctx.gpr[4] = (17174u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08990E80;
      }
      goto L_08990CA0;
    }
L_08990CA0:
    ctx.gpr[4] = (17224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08990E78;
      }
      goto L_08990CB8;
    }
L_08990CB8:
    ctx.gpr[4] = (17274u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08990E70;
      }
      goto L_08990CD0;
    }
L_08990CD0:
    ctx.gpr[4] = (17302u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08990E68;
      }
      goto L_08990CE8;
    }
L_08990CE8:
    ctx.gpr[4] = (17327u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08990E60;
      }
      goto L_08990D00;
    }
L_08990D00:
    ctx.gpr[4] = (17352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08990E58;
      }
      goto L_08990D18;
    }
L_08990D18:
    ctx.gpr[4] = (17402u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08990E50;
      }
      goto L_08990D30;
    }
L_08990D30:
    ctx.gpr[4] = (17430u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08990E48;
      }
      goto L_08990D48;
    }
L_08990D48:
    ctx.gpr[4] = (17455u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08990E40;
      }
      goto L_08990D60;
    }
L_08990D60:
    ctx.gpr[4] = (17480u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08990E38;
      }
      goto L_08990D78;
    }
L_08990D78:
    ctx.gpr[4] = (17505u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08990E30;
      }
      goto L_08990D90;
    }
L_08990D90:
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08990E28;
      }
      goto L_08990DA8;
    }
L_08990DA8:
    ctx.gpr[4] = (17558u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08990E20;
      }
      goto L_08990DC0;
    }
L_08990DC0:
    ctx.gpr[4] = (17583u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08990E18;
      }
      goto L_08990DD8;
    }
L_08990DD8:
    ctx.gpr[4] = (17608u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08990E10;
      }
      goto L_08990DF0;
    }
L_08990DF0:
    ctx.gpr[4] = (17633u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08990EA8;
      }
      goto L_08990E08;
    }
L_08990E08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15712));
      if (branch_taken) {
          goto L_08990EAC;
      }
      goto L_08990E10;
    }
L_08990E10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15720));
      if (branch_taken) {
          goto L_08990EAC;
      }
      goto L_08990E18;
    }
L_08990E18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15728));
      if (branch_taken) {
          goto L_08990EAC;
      }
      goto L_08990E20;
    }
L_08990E20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15736));
      if (branch_taken) {
          goto L_08990EAC;
      }
      goto L_08990E28;
    }
L_08990E28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15744));
      if (branch_taken) {
          goto L_08990EAC;
      }
      goto L_08990E30;
    }
L_08990E30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15752));
      if (branch_taken) {
          goto L_08990EAC;
      }
      goto L_08990E38;
    }
L_08990E38:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15760));
      if (branch_taken) {
          goto L_08990EAC;
      }
      goto L_08990E40;
    }
L_08990E40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15768));
      if (branch_taken) {
          goto L_08990EAC;
      }
      goto L_08990E48;
    }
L_08990E48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15776));
      if (branch_taken) {
          goto L_08990EAC;
      }
      goto L_08990E50;
    }
L_08990E50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15784));
      if (branch_taken) {
          goto L_08990EAC;
      }
      goto L_08990E58;
    }
L_08990E58:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15792));
      if (branch_taken) {
          goto L_08990EAC;
      }
      goto L_08990E60;
    }
L_08990E60:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15800));
      if (branch_taken) {
          goto L_08990EAC;
      }
      goto L_08990E68;
    }
L_08990E68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15808));
      if (branch_taken) {
          goto L_08990EAC;
      }
      goto L_08990E70;
    }
L_08990E70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15816));
      if (branch_taken) {
          goto L_08990EAC;
      }
      goto L_08990E78;
    }
L_08990E78:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15824));
      if (branch_taken) {
          goto L_08990EAC;
      }
      goto L_08990E80;
    }
L_08990E80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15832));
      if (branch_taken) {
          goto L_08990EAC;
      }
      goto L_08990E88;
    }
L_08990E88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15840));
      if (branch_taken) {
          goto L_08990EAC;
      }
      goto L_08990E90;
    }
L_08990E90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15848));
      if (branch_taken) {
          goto L_08990EAC;
      }
      goto L_08990E98;
    }
L_08990E98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15856));
      if (branch_taken) {
          goto L_08990EAC;
      }
      goto L_08990EA0;
    }
L_08990EA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15864));
      if (branch_taken) {
          goto L_08990EAC;
      }
      goto L_08990EA8;
    }
L_08990EA8:
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15704));
    goto L_08990EAC;
L_08990EAC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08990EB4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (2238u << 16u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6992));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(172)));
    ctx.gpr[6] = (0u | 5000u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9036)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9412)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9032)));
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9320)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[7] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9348)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9364)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9352)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[5] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9368)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[7] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9356)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-16130)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9288)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9316)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8084)));
    ctx.gpr[8] = (ctx.lo);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_08990F80;
      }
      goto L_08990F78;
    }
L_08990F78:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08990F9C;
      }
      goto L_08990F80;
    }
L_08990F80:
    ctx.gpr[6] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10000));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
        goto L_08990F94;
    }
    goto L_08990F94;
L_08990F94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08990FB4;
      }
      goto L_08990F9C;
    }
L_08990F9C:
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
        goto L_08990FB0;
    }
    goto L_08990FB0;
L_08990FB0:
    ctx.gpr[2] = (ctx.gpr[6] | 0u);
    goto L_08990FB4;
L_08990FB4:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 101 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08990FF8;
      }
      goto L_08990FC0;
    }
L_08990FC0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9328)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[13] = ctx.fpr[14] / ctx.fpr[13];
    ctx.gpr[4] = (17402u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[15] + ctx.fpr[13];
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08990FF8;
L_08990FF8:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08991034;
      }
      goto L_0899100C;
    }
L_0899100C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8080)));
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08991034;
L_08991034:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899103C:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8084)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[14]) || std::isnan(ctx.fpr[13])) && ctx.fpr[14] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08991060;
      }
      goto L_08991058;
    }
L_08991058:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899106C;
      }
      goto L_08991060;
    }
L_08991060:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8080)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    goto L_0899106C;
L_0899106C:
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[0]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08991080;
    }
    goto L_08991080;
L_08991080:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08991088:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9376)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9376), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08991098:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9380), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089910A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9384)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9384), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089910B0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9392)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9392), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089910C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9412)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9408)));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9408), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9412), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089910E0:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9408), 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089910E8:
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (2279u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(17624));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
        goto L_08991108;
    }
    goto L_08991108;
L_08991108:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08991110:
    ctx.gpr[6] = (2279u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(17664));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08991134;
      }
      goto L_0899112C;
    }
L_0899112C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0899114C;
      }
      goto L_08991134;
    }
L_08991134:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
        goto L_08991148;
    }
    goto L_08991148;
L_08991148:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_0899114C;
L_0899114C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08991154:
    ctx.gpr[6] = (2279u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(17704));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08991178;
      }
      goto L_08991170;
    }
L_08991170:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08991190;
      }
      goto L_08991178;
    }
L_08991178:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
        goto L_0899118C;
    }
    goto L_0899118C;
L_0899118C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_08991190;
L_08991190:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08991198:
    ctx.gpr[6] = (2279u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(17744));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089911BC;
      }
      goto L_089911B4;
    }
L_089911B4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089911D4;
      }
      goto L_089911BC;
    }
L_089911BC:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
        goto L_089911D0;
    }
    goto L_089911D0;
L_089911D0:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_089911D4;
L_089911D4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089911DC:
    ctx.gpr[6] = (2279u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(17792));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08991200;
      }
      goto L_089911F8;
    }
L_089911F8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08991218;
      }
      goto L_08991200;
    }
L_08991200:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
        goto L_08991214;
    }
    goto L_08991214;
L_08991214:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_08991218;
L_08991218:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08991220:
    ctx.gpr[6] = (2279u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(17840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08991244;
      }
      goto L_0899123C;
    }
L_0899123C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0899125C;
      }
      goto L_08991244;
    }
L_08991244:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
        goto L_08991258;
    }
    goto L_08991258;
L_08991258:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_0899125C;
L_0899125C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08991264:
    ctx.gpr[6] = (2279u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(17872));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08991288;
      }
      goto L_08991280;
    }
L_08991280:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089912A0;
      }
      goto L_08991288;
    }
L_08991288:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
        goto L_0899129C;
    }
    goto L_0899129C;
L_0899129C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_089912A0;
L_089912A0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089912A8:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[28] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(9416)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089912C4;
      }
      goto L_089912BC;
    }
L_089912BC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(9416), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089912E0;
      }
      goto L_089912C4;
    }
L_089912C4:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(9416));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
        goto L_089912DC;
    }
    goto L_089912DC;
L_089912DC:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(9416), ctx.gpr[6]);
    goto L_089912E0;
L_089912E0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089912E8:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[28] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(9432)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08991304;
      }
      goto L_089912FC;
    }
L_089912FC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(9432), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08991320;
      }
      goto L_08991304;
    }
L_08991304:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(9432));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
        goto L_0899131C;
    }
    goto L_0899131C;
L_0899131C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(9432), ctx.gpr[6]);
    goto L_08991320;
L_08991320:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08991328:
    ctx.gpr[6] = (2279u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(17904));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899134C;
      }
      goto L_08991344;
    }
L_08991344:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08991364;
      }
      goto L_0899134C;
    }
L_0899134C:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
        goto L_08991360;
    }
    goto L_08991360;
L_08991360:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_08991364;
L_08991364:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899136C:
    ctx.gpr[6] = (2279u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(17936));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08991390;
      }
      goto L_08991388;
    }
L_08991388:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089913A8;
      }
      goto L_08991390;
    }
L_08991390:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
        goto L_089913A4;
    }
    goto L_089913A4;
L_089913A4:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_089913A8;
L_089913A8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089913B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2279u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(17584));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[31] = (0x089913D8u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 573u, 0x08A06454u>(ctx, &aot_mem) && ctx.pc == 0x089913D8u) goto L_089913D8;
    return;
L_089913D8:
    ctx.gpr[6] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089913E8;
L_089913E8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08991400;
      }
      goto L_089913FC;
    }
L_089913FC:
    ctx.gpr[16] = (0u | 0u);
    goto L_08991400;
L_08991400:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089913E8;
      }
      goto L_08991414;
    }
L_08991414:
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
L_0899142C:
    ctx.gpr[5] = (2279u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17584));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08991444:
    ctx.gpr[4] = (2279u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17584)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(17584));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    goto L_0899145C;
L_0899145C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08991478;
      }
      goto L_08991470;
    }
L_08991470:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
    goto L_08991478;
L_08991478:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0899145C;
      }
      goto L_08991488;
    }
L_08991488:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08991490:
    ctx.gpr[4] = (2279u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17584)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(17584));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    goto L_089914A8;
L_089914A8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089914C4;
      }
      goto L_089914BC;
    }
L_089914BC:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
    goto L_089914C4;
L_089914C4:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089914A8;
      }
      goto L_089914D4;
    }
L_089914D4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089914DC:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899150C;
      }
      goto L_089914EC;
    }
L_089914EC:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(9400)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[6] << (ctx.gpr[4] & 31u));
    ctx.gpr[6] = (ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899150C;
      }
      goto L_08991504;
    }
L_08991504:
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(9400), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_0899150C;
L_0899150C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08991514:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08991548;
      }
      goto L_08991524;
    }
L_08991524:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(9400)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[6] << (ctx.gpr[4] & 31u));
    ctx.gpr[6] = (ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08991548;
      }
      goto L_0899153C;
    }
L_0899153C:
    ctx.gpr[4] = (~(ctx.gpr[4] | 0u));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(9400), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08991548;
L_08991548:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08991550:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 60 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0899156C;
      }
      goto L_0899155C;
    }
L_0899155C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-60));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 60 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0899155C;
      }
      goto L_0899156C;
    }
L_0899156C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08991574:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 60 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08991590;
      }
      goto L_08991580;
    }
L_08991580:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-60));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 60 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08991580;
      }
      goto L_08991590;
    }
L_08991590:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0899159C;
      }
      goto L_08991598;
    }
L_08991598:
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    goto L_0899159C;
L_0899159C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089915A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-560));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(516), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(520), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(524), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(528), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(532), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(536), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(540), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(544), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(548), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08991608;
      }
      goto L_089915DC;
    }
L_089915DC:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08991608;
      }
      goto L_089915E4;
    }
L_089915E4:
    ctx.gpr[19] = (2238u << 16u);
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(17512), static_cast<std::uint16_t>(0u));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[22] = (2238u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(17512));
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[23] = (ctx.gpr[22] + static_cast<std::uint32_t>(-8144));
      if (branch_taken) {
          goto L_08991610;
      }
      goto L_08991600;
    }
L_08991600:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_0899163C;
      }
      goto L_08991608;
    }
L_08991608:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899175C;
      }
      goto L_08991610;
    }
L_08991610:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[31] = (0x0899161Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x0899161Cu) goto L_0899161C;
    return;
L_0899161C:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08991634;
      }
      goto L_08991628;
    }
L_08991628:
    ctx.gpr[31] = (0x08991630u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08991630u) goto L_08991630;
    return;
L_08991630:
    ctx.gpr[20] = (ctx.gpr[21] | 0u);
    goto L_08991634;
L_08991634:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_0899163C;
L_0899163C:
    ctx.gpr[31] = (0x08991644u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08991644u) goto L_08991644;
    return;
L_08991644:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08991650u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 851u, 0x08887B80u>(ctx, &aot_mem) && ctx.pc == 0x08991650u) goto L_08991650;
    return;
L_08991650:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) <= 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 256 ? 1u : 0u);
      if (branch_taken) {
          goto L_08991708;
      }
      goto L_08991658;
    }
L_08991658:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08991708;
      }
      goto L_08991660;
    }
L_08991660:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(512));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15696));
    ctx.gpr[31] = (0x08991674u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 843u, 0x08887B04u>(ctx, &aot_mem) && ctx.pc == 0x08991674u) goto L_08991674;
    return;
L_08991674:
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089916A0;
      }
      goto L_08991684;
    }
L_08991684:
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08991690u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 846u, 0x08887B30u>(ctx, &aot_mem) && ctx.pc == 0x08991690u) goto L_08991690;
    return;
L_08991690:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08991684;
      }
      goto L_089916A0;
    }
L_089916A0:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x089916ACu);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 851u, 0x08887B80u>(ctx, &aot_mem) && ctx.pc == 0x089916ACu) goto L_089916AC;
    return;
L_089916AC:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_089916E4;
      }
      goto L_089916B8;
    }
L_089916B8:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x089916C4u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x089916C4u) goto L_089916C4;
    return;
L_089916C4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089916DC;
      }
      goto L_089916D0;
    }
L_089916D0:
    ctx.gpr[31] = (0x089916D8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x089916D8u) goto L_089916D8;
    return;
L_089916D8:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_089916DC;
L_089916DC:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089916E4;
L_089916E4:
    ctx.gpr[31] = (0x089916ECu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x089916ECu) goto L_089916EC;
    return;
L_089916EC:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x089916F8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 846u, 0x08887B30u>(ctx, &aot_mem) && ctx.pc == 0x089916F8u) goto L_089916F8;
    return;
L_089916F8:
    ctx.gpr[31] = (0x08991700u);
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(-8144));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 340u, 0x089F5C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08991700u) goto L_08991700;
    return;
L_08991700:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899175C;
      }
      goto L_08991708;
    }
L_08991708:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08991740;
      }
      goto L_08991714;
    }
L_08991714:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08991720u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08991720u) goto L_08991720;
    return;
L_08991720:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08991738;
      }
      goto L_0899172C;
    }
L_0899172C:
    ctx.gpr[31] = (0x08991734u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08991734u) goto L_08991734;
    return;
L_08991734:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_08991738;
L_08991738:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08991740;
L_08991740:
    ctx.gpr[31] = (0x08991748u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08991748u) goto L_08991748;
    return;
L_08991748:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08991754u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 851u, 0x08887B80u>(ctx, &aot_mem) && ctx.pc == 0x08991754u) goto L_08991754;
    return;
L_08991754:
    ctx.gpr[31] = (0x0899175Cu);
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(-8144));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 340u, 0x089F5C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0899175Cu) goto L_0899175C;
    return;
L_0899175C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(516)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(520)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(524)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(528)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(532)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(536)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(540)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(544)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(548)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(560));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08991788:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9304), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9300), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9308), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9312), 0u);
    ctx.gpr[4] = (2279u << 16u);
    ctx.gpr[16] = (32768u << 16u);
    ctx.gpr[5] = (2279u << 16u);
    ctx.gpr[6] = (2279u << 16u);
    ctx.gpr[7] = (2279u << 16u);
    ctx.gpr[8] = (2279u << 16u);
    ctx.gpr[9] = (2279u << 16u);
    ctx.gpr[10] = (2279u << 16u);
    ctx.gpr[11] = (2279u << 16u);
    ctx.gpr[2] = (2279u << 16u);
    ctx.gpr[3] = (2279u << 16u);
    ctx.gpr[12] = (2240u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9316), 0u);
    ctx.gpr[13] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(17488));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17624));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(17664));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(17704));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(17744));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(17792));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(17840));
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(17872));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(17904));
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(17936));
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(-23472));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    goto L_08991814;
L_08991814:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(1));
    ctx.gpr[14] = (static_cast<std::int32_t>(ctx.gpr[13]) < 23 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[14] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08991814;
      }
      goto L_08991828;
    }
L_08991828:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9320), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8080), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9324), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9328), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7880), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8676), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9332), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9336), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9036), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9032), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8912), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9340), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9344), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8088), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8092), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8096), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8100), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8104), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8108), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8112), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8124), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8136), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8116), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8120), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9084), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9080), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9068), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9072), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9076), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9064), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9348), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9360), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9352), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9364), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9368), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9356), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9372), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9376), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9380), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9384), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8684), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9388), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9392), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9048), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9056), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9040), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9052), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9060), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9044), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8144), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9396), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7904), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9088), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9288), 0u);
    ctx.gpr[13] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[28] | 0u);
    goto L_08991908;
L_08991908:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(9404), 0u);
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(1));
    ctx.gpr[14] = (static_cast<std::int32_t>(ctx.gpr[13]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[14] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08991908;
      }
      goto L_0899191C;
    }
L_0899191C:
    ctx.gpr[4] = (0u | 0u);
    goto L_08991920;
L_08991920:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[13] = (static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[13] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08991920;
      }
      goto L_08991934;
    }
L_08991934:
    ctx.gpr[4] = (0u | 0u);
    goto L_08991938;
L_08991938:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08991938;
      }
      goto L_0899194C;
    }
L_0899194C:
    ctx.gpr[4] = (0u | 0u);
    goto L_08991950;
L_08991950:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08991950;
      }
      goto L_08991964;
    }
L_08991964:
    ctx.gpr[4] = (0u | 0u);
    goto L_08991968;
L_08991968:
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 12 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08991968;
      }
      goto L_0899197C;
    }
L_0899197C:
    ctx.gpr[4] = (0u | 0u);
    goto L_08991980;
L_08991980:
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 12 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08991980;
      }
      goto L_08991994;
    }
L_08991994:
    ctx.gpr[4] = (0u | 0u);
    goto L_08991998;
L_08991998:
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08991998;
      }
      goto L_089919AC;
    }
L_089919AC:
    ctx.gpr[4] = (0u | 0u);
    goto L_089919B0;
L_089919B0:
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089919B0;
      }
      goto L_089919C4;
    }
L_089919C4:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[28] | 0u);
    goto L_089919CC;
L_089919CC:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(9416), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089919CC;
      }
      goto L_089919E0;
    }
L_089919E0:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[28] | 0u);
    goto L_089919E8;
L_089919E8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(9432), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089919E8;
      }
      goto L_089919FC;
    }
L_089919FC:
    ctx.gpr[4] = (0u | 0u);
    goto L_08991A00;
L_08991A00:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08991A00;
      }
      goto L_08991A14;
    }
L_08991A14:
    ctx.gpr[4] = (0u | 0u);
    goto L_08991A18;
L_08991A18:
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08991A18;
      }
      goto L_08991A2C;
    }
L_08991A2C:
    ctx.gpr[4] = (0u | 0u);
    goto L_08991A30;
L_08991A30:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[28]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(8160), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08991A30;
      }
      goto L_08991A48;
    }
L_08991A48:
    ctx.gpr[4] = (0u | 0u);
    goto L_08991A4C;
L_08991A4C:
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08991A4C;
      }
      goto L_08991A60;
    }
L_08991A60:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8180), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8184), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8188), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8192), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8296), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8300), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8304), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8308), 0u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8312), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8313), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8314), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8315), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9408), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9412), 0u);
    ctx.gpr[4] = (0u | 0u);
    goto L_08991A9C;
L_08991A9C:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[28]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(8128), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08991A9C;
      }
      goto L_08991AB4;
    }
L_08991AB4:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8284), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8288), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8292), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8076), 0u);
    ctx.gpr[31] = (0x08991ACCu);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9292), 0u);
    goto L_089913B0;
L_08991ACC:
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(9400), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(8156), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(8158), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8148), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8152), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8260), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8264), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8268), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8140), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8168), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8212), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8216), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8196), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8200), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8204), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8208), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8220), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8224), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8228), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8232), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8236), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8240), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8244), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8248), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8252), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8256), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8172), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8176), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8272), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8280), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8276), 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08991B5C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    ctx.gpr[31] = (0x08991B70u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08990EB4;
L_08991B70:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08991C34;
      }
      goto L_08991B7C;
    }
L_08991B7C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < -499 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08991B9C;
      }
      goto L_08991B88;
    }
L_08991B88:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < -1999 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08991BB4;
      }
      goto L_08991B94;
    }
L_08991B94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08991BCC;
      }
      goto L_08991B9C;
    }
L_08991B9C:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15676));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08991BACu);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x08991BACu) goto L_08991BAC;
    return;
L_08991BAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_08991BB4;
    }
L_08991BB4:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15668));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x08991BC4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x08991BC4u) goto L_08991BC4;
    return;
L_08991BC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_08991BCC;
    }
L_08991BCC:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < -3999 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08991BEC;
      }
      goto L_08991BD8;
    }
L_08991BD8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < -5999 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08991C04;
      }
      goto L_08991BE4;
    }
L_08991BE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08991C1C;
      }
      goto L_08991BEC;
    }
L_08991BEC:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15660));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(2));
    ctx.gpr[31] = (0x08991BFCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x08991BFCu) goto L_08991BFC;
    return;
L_08991BFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_08991C04;
    }
L_08991C04:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15652));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(3));
    ctx.gpr[31] = (0x08991C14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x08991C14u) goto L_08991C14;
    return;
L_08991C14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_08991C1C;
    }
L_08991C1C:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15644));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08991C2Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x08991C2Cu) goto L_08991C2C;
    return;
L_08991C2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_08991C34;
    }
L_08991C34:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08991C54;
      }
      goto L_08991C40;
    }
L_08991C40:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 50 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08991C6C;
      }
      goto L_08991C4C;
    }
L_08991C4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08991C84;
      }
      goto L_08991C54;
    }
L_08991C54:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15636));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(5));
    ctx.gpr[31] = (0x08991C64u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x08991C64u) goto L_08991C64;
    return;
L_08991C64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_08991C6C;
    }
L_08991C6C:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15628));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(6));
    ctx.gpr[31] = (0x08991C7Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x08991C7Cu) goto L_08991C7C;
    return;
L_08991C7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_08991C84;
    }
L_08991C84:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 75 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08991CA4;
      }
      goto L_08991C90;
    }
L_08991C90:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 100 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08991CBC;
      }
      goto L_08991C9C;
    }
L_08991C9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08991CD4;
      }
      goto L_08991CA4;
    }
L_08991CA4:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15620));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(7));
    ctx.gpr[31] = (0x08991CB4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x08991CB4u) goto L_08991CB4;
    return;
L_08991CB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_08991CBC;
    }
L_08991CBC:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15612));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(8));
    ctx.gpr[31] = (0x08991CCCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x08991CCCu) goto L_08991CCC;
    return;
L_08991CCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_08991CD4;
    }
L_08991CD4:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 120 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08991CF4;
      }
      goto L_08991CE0;
    }
L_08991CE0:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 150 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08991D0C;
      }
      goto L_08991CEC;
    }
L_08991CEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08991D24;
      }
      goto L_08991CF4;
    }
L_08991CF4:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15604));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(9));
    ctx.gpr[31] = (0x08991D04u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x08991D04u) goto L_08991D04;
    return;
L_08991D04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_08991D0C;
    }
L_08991D0C:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15596));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(10));
    ctx.gpr[31] = (0x08991D1Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x08991D1Cu) goto L_08991D1C;
    return;
L_08991D1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_08991D24;
    }
L_08991D24:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 200 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08991D44;
      }
      goto L_08991D30;
    }
L_08991D30:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 240 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08991D5C;
      }
      goto L_08991D3C;
    }
L_08991D3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08991D74;
      }
      goto L_08991D44;
    }
L_08991D44:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15588));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(11));
    ctx.gpr[31] = (0x08991D54u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x08991D54u) goto L_08991D54;
    return;
L_08991D54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_08991D5C;
    }
L_08991D5C:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15580));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(12));
    ctx.gpr[31] = (0x08991D6Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x08991D6Cu) goto L_08991D6C;
    return;
L_08991D6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_08991D74;
    }
L_08991D74:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 270 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08991D94;
      }
      goto L_08991D80;
    }
L_08991D80:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 300 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08991DAC;
      }
      goto L_08991D8C;
    }
L_08991D8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08991DC4;
      }
      goto L_08991D94;
    }
L_08991D94:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15572));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(13));
    ctx.gpr[31] = (0x08991DA4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x08991DA4u) goto L_08991DA4;
    return;
L_08991DA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_08991DAC;
    }
L_08991DAC:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15564));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(14));
    ctx.gpr[31] = (0x08991DBCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x08991DBCu) goto L_08991DBC;
    return;
L_08991DBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_08991DC4;
    }
L_08991DC4:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 335 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08991DE4;
      }
      goto L_08991DD0;
    }
L_08991DD0:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 370 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08991DFC;
      }
      goto L_08991DDC;
    }
L_08991DDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08991E14;
      }
      goto L_08991DE4;
    }
L_08991DE4:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15556));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(15));
    ctx.gpr[31] = (0x08991DF4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x08991DF4u) goto L_08991DF4;
    return;
L_08991DF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_08991DFC;
    }
L_08991DFC:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15548));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08991E0Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x08991E0Cu) goto L_08991E0C;
    return;
L_08991E0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_08991E14;
    }
L_08991E14:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 400 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08991E34;
      }
      goto L_08991E20;
    }
L_08991E20:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 450 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08991E4C;
      }
      goto L_08991E2C;
    }
L_08991E2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08991E64;
      }
      goto L_08991E34;
    }
L_08991E34:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15540));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(17));
    ctx.gpr[31] = (0x08991E44u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x08991E44u) goto L_08991E44;
    return;
L_08991E44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_08991E4C;
    }
L_08991E4C:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15532));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(18));
    ctx.gpr[31] = (0x08991E5Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x08991E5Cu) goto L_08991E5C;
    return;
L_08991E5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_08991E64;
    }
L_08991E64:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 500 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08991E84;
      }
      goto L_08991E70;
    }
L_08991E70:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 550 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08991E9C;
      }
      goto L_08991E7C;
    }
L_08991E7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08991EB4;
      }
      goto L_08991E84;
    }
L_08991E84:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15524));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(19));
    ctx.gpr[31] = (0x08991E94u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x08991E94u) goto L_08991E94;
    return;
L_08991E94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_08991E9C;
    }
L_08991E9C:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15516));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[31] = (0x08991EACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x08991EACu) goto L_08991EAC;
    return;
L_08991EAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_08991EB4;
    }
L_08991EB4:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 600 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08991ED4;
      }
      goto L_08991EC0;
    }
L_08991EC0:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 610 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08991EEC;
      }
      goto L_08991ECC;
    }
L_08991ECC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08991F04;
      }
      goto L_08991ED4;
    }
L_08991ED4:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15508));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(21));
    ctx.gpr[31] = (0x08991EE4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x08991EE4u) goto L_08991EE4;
    return;
L_08991EE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_08991EEC;
    }
L_08991EEC:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15500));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(22));
    ctx.gpr[31] = (0x08991EFCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x08991EFCu) goto L_08991EFC;
    return;
L_08991EFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_08991F04;
    }
L_08991F04:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 650 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08991F24;
      }
      goto L_08991F10;
    }
L_08991F10:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 700 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08991F3C;
      }
      goto L_08991F1C;
    }
L_08991F1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08991F54;
      }
      goto L_08991F24;
    }
L_08991F24:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15492));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(23));
    ctx.gpr[31] = (0x08991F34u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x08991F34u) goto L_08991F34;
    return;
L_08991F34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_08991F3C;
    }
L_08991F3C:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15484));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x08991F4Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x08991F4Cu) goto L_08991F4C;
    return;
L_08991F4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_08991F54;
    }
L_08991F54:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 850 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08991F74;
      }
      goto L_08991F60;
    }
L_08991F60:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 1000 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08991F8C;
      }
      goto L_08991F6C;
    }
L_08991F6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08991FA4;
      }
      goto L_08991F74;
    }
L_08991F74:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15476));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(25));
    ctx.gpr[31] = (0x08991F84u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x08991F84u) goto L_08991F84;
    return;
L_08991F84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_08991F8C;
    }
L_08991F8C:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15468));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(26));
    ctx.gpr[31] = (0x08991F9Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x08991F9Cu) goto L_08991F9C;
    return;
L_08991F9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_08991FA4;
    }
L_08991FA4:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 1005 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08991FC4;
      }
      goto L_08991FB0;
    }
L_08991FB0:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 1150 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08991FDC;
      }
      goto L_08991FBC;
    }
L_08991FBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08991FF4;
      }
      goto L_08991FC4;
    }
L_08991FC4:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15460));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(27));
    ctx.gpr[31] = (0x08991FD4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x08991FD4u) goto L_08991FD4;
    return;
L_08991FD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_08991FDC;
    }
L_08991FDC:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15452));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.gpr[31] = (0x08991FECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x08991FECu) goto L_08991FEC;
    return;
L_08991FEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_08991FF4;
    }
L_08991FF4:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 1300 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899203C;
      }
      goto L_08992000;
    }
L_08992000:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9036)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08992024;
      }
      goto L_0899200C;
    }
L_0899200C:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15444));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(29));
    ctx.gpr[31] = (0x0899201Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x0899201Cu) goto L_0899201C;
    return;
L_0899201C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_08992024;
    }
L_08992024:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15452));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(30));
    ctx.gpr[31] = (0x08992034u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x08992034u) goto L_08992034;
    return;
L_08992034:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_0899203C;
    }
L_0899203C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 1500 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899205C;
      }
      goto L_08992048;
    }
L_08992048:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 1700 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08992074;
      }
      goto L_08992054;
    }
L_08992054:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899208C;
      }
      goto L_0899205C;
    }
L_0899205C:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15436));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(31));
    ctx.gpr[31] = (0x0899206Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x0899206Cu) goto L_0899206C;
    return;
L_0899206C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_08992074;
    }
L_08992074:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15428));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08992084u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x08992084u) goto L_08992084;
    return;
L_08992084:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_0899208C;
    }
L_0899208C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2000 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089920AC;
      }
      goto L_08992098;
    }
L_08992098:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2100 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089920C4;
      }
      goto L_089920A4;
    }
L_089920A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089920DC;
      }
      goto L_089920AC;
    }
L_089920AC:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15420));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(33));
    ctx.gpr[31] = (0x089920BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x089920BCu) goto L_089920BC;
    return;
L_089920BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_089920C4;
    }
L_089920C4:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15412));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(34));
    ctx.gpr[31] = (0x089920D4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x089920D4u) goto L_089920D4;
    return;
L_089920D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_089920DC;
    }
L_089920DC:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2300 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089920FC;
      }
      goto L_089920E8;
    }
L_089920E8:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2500 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08992114;
      }
      goto L_089920F4;
    }
L_089920F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899212C;
      }
      goto L_089920FC;
    }
L_089920FC:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15404));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(35));
    ctx.gpr[31] = (0x0899210Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x0899210Cu) goto L_0899210C;
    return;
L_0899210C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_08992114;
    }
L_08992114:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15396));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[31] = (0x08992124u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x08992124u) goto L_08992124;
    return;
L_08992124:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_0899212C;
    }
L_0899212C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2750 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899214C;
      }
      goto L_08992138;
    }
L_08992138:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3000 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08992164;
      }
      goto L_08992144;
    }
L_08992144:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899217C;
      }
      goto L_0899214C;
    }
L_0899214C:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15388));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(37));
    ctx.gpr[31] = (0x0899215Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x0899215Cu) goto L_0899215C;
    return;
L_0899215C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_08992164;
    }
L_08992164:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15380));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(38));
    ctx.gpr[31] = (0x08992174u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x08992174u) goto L_08992174;
    return;
L_08992174:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_0899217C;
    }
L_0899217C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3500 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899219C;
      }
      goto L_08992188;
    }
L_08992188:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4000 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089921B4;
      }
      goto L_08992194;
    }
L_08992194:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089921CC;
      }
      goto L_0899219C;
    }
L_0899219C:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15372));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(39));
    ctx.gpr[31] = (0x089921ACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x089921ACu) goto L_089921AC;
    return;
L_089921AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_089921B4;
    }
L_089921B4:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15364));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[31] = (0x089921C4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x089921C4u) goto L_089921C4;
    return;
L_089921C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_089921CC;
    }
L_089921CC:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5000 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089921EC;
      }
      goto L_089921D8;
    }
L_089921D8:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 7500 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08992204;
      }
      goto L_089921E4;
    }
L_089921E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899221C;
      }
      goto L_089921EC;
    }
L_089921EC:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15356));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(41));
    ctx.gpr[31] = (0x089921FCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x089921FCu) goto L_089921FC;
    return;
L_089921FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_08992204;
    }
L_08992204:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15348));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(42));
    ctx.gpr[31] = (0x08992214u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x08992214u) goto L_08992214;
    return;
L_08992214:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_0899221C;
    }
L_0899221C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10000 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899223C;
      }
      goto L_08992228;
    }
L_08992228:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 20000 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08992254;
      }
      goto L_08992234;
    }
L_08992234:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899226C;
      }
      goto L_0899223C;
    }
L_0899223C:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15340));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(43));
    ctx.gpr[31] = (0x0899224Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x0899224Cu) goto L_0899224C;
    return;
L_0899224C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_08992254;
    }
L_08992254:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15332));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.gpr[31] = (0x08992264u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x08992264u) goto L_08992264;
    return;
L_08992264:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_0899226C;
    }
L_0899226C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 30000 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08992290;
      }
      goto L_08992278;
    }
L_08992278:
    ctx.gpr[5] = (0u | 40000u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089922A8;
      }
      goto L_08992288;
    }
L_08992288:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089922C0;
      }
      goto L_08992290;
    }
L_08992290:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15324));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(45));
    ctx.gpr[31] = (0x089922A0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x089922A0u) goto L_089922A0;
    return;
L_089922A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_089922A8;
    }
L_089922A8:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15316));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(46));
    ctx.gpr[31] = (0x089922B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x089922B8u) goto L_089922B8;
    return;
L_089922B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_089922C0;
    }
L_089922C0:
    ctx.gpr[5] = (0u | 50000u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089922E8;
      }
      goto L_089922D0;
    }
L_089922D0:
    ctx.gpr[5] = (0u | 65000u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08992300;
      }
      goto L_089922E0;
    }
L_089922E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08992318;
      }
      goto L_089922E8;
    }
L_089922E8:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15308));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(47));
    ctx.gpr[31] = (0x089922F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x089922F8u) goto L_089922F8;
    return;
L_089922F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_08992300;
    }
L_08992300:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15300));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08992310u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x08992310u) goto L_08992310;
    return;
L_08992310:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_08992318;
    }
L_08992318:
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(14464));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08992348;
      }
      goto L_0899232C;
    }
L_0899232C:
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-31072));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08992360;
      }
      goto L_08992340;
    }
L_08992340:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08992378;
      }
      goto L_08992348;
    }
L_08992348:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15292));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(49));
    ctx.gpr[31] = (0x08992358u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x08992358u) goto L_08992358;
    return;
L_08992358:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_08992360;
    }
L_08992360:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15284));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(50));
    ctx.gpr[31] = (0x08992370u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x08992370u) goto L_08992370;
    return;
L_08992370:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_08992378;
    }
L_08992378:
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(18928));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089923A8;
      }
      goto L_0899238C;
    }
L_0899238C:
    ctx.gpr[5] = (3u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(3392));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089923C0;
      }
      goto L_089923A0;
    }
L_089923A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089923D8;
      }
      goto L_089923A8;
    }
L_089923A8:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15276));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(51));
    ctx.gpr[31] = (0x089923B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x089923B8u) goto L_089923B8;
    return;
L_089923B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_089923C0;
    }
L_089923C0:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15268));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[31] = (0x089923D0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x089923D0u) goto L_089923D0;
    return;
L_089923D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_089923D8;
    }
L_089923D8:
    ctx.gpr[5] = (5u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27680));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08992408;
      }
      goto L_089923EC;
    }
L_089923EC:
    ctx.gpr[5] = (6u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-18216));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08992420;
      }
      goto L_08992400;
    }
L_08992400:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08992438;
      }
      goto L_08992408;
    }
L_08992408:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15260));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(53));
    ctx.gpr[31] = (0x08992418u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x08992418u) goto L_08992418;
    return;
L_08992418:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_08992420;
    }
L_08992420:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15252));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(54));
    ctx.gpr[31] = (0x08992430u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x08992430u) goto L_08992430;
    return;
L_08992430:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_08992438;
    }
L_08992438:
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-24288));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899248C;
      }
      goto L_0899244C;
    }
L_0899244C:
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08992474;
      }
      goto L_0899245C;
    }
L_0899245C:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15244));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(55));
    ctx.gpr[31] = (0x0899246Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x0899246Cu) goto L_0899246C;
    return;
L_0899246C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_08992474;
    }
L_08992474:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15252));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.gpr[31] = (0x08992484u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x08992484u) goto L_08992484;
    return;
L_08992484:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_0899248C;
    }
L_0899248C:
    ctx.gpr[5] = (15u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16960));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089924E4;
      }
      goto L_089924A0;
    }
L_089924A0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (2238u << 16u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6992));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    ctx.gpr[5] = (153u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27008));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089924FC;
      }
      goto L_089924DC;
    }
L_089924DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08992514;
      }
      goto L_089924E4;
    }
L_089924E4:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15236));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(57));
    ctx.gpr[31] = (0x089924F4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x089924F4u) goto L_089924F4;
    return;
L_089924F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_089924FC;
    }
L_089924FC:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15228));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(58));
    ctx.gpr[31] = (0x0899250Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x0899250Cu) goto L_0899250C;
    return;
L_0899250C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_08992514;
    }
L_08992514:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15236));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(59));
    ctx.gpr[31] = (0x08992524u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x08992524u) goto L_08992524;
    return;
L_08992524:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899252C;
      }
      goto L_0899252C;
    }
L_0899252C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899253C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (2279u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(17584));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0899256Cu);
    // nop
    goto L_089910C8;
L_0899256C:
    ctx.gpr[4] = (0u | 338u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08992574;
L_08992574:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08992574;
      }
      goto L_08992584;
    }
L_08992584:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(36));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(36));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(36));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(9300));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0899266Cu);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x0899266Cu) goto L_0899266C;
    return;
L_0899266C:
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(9304));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08992680u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08992680u) goto L_08992680;
    return;
L_08992680:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(9308));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08992694u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08992694u) goto L_08992694;
    return;
L_08992694:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(9312));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089926A8u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x089926A8u) goto L_089926A8;
    return;
L_089926A8:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(7880));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089926BCu);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x089926BCu) goto L_089926BC;
    return;
L_089926BC:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(9316));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089926D0u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x089926D0u) goto L_089926D0;
    return;
L_089926D0:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2279u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 92u);
    ctx.gpr[31] = (0x089926E8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17488));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x089926E8u) goto L_089926E8;
    return;
L_089926E8:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(92));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(9320));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089926FCu);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x089926FCu) goto L_089926FC;
    return;
L_089926FC:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(8080));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08992710u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08992710u) goto L_08992710;
    return;
L_08992710:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(8084));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08992724u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08992724u) goto L_08992724;
    return;
L_08992724:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(9324));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08992738u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08992738u) goto L_08992738;
    return;
L_08992738:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(9328));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0899274Cu);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x0899274Cu) goto L_0899274C;
    return;
L_0899274C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(8676));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08992760u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08992760u) goto L_08992760;
    return;
L_08992760:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(9332));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08992774u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08992774u) goto L_08992774;
    return;
L_08992774:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(9336));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08992788u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08992788u) goto L_08992788;
    return;
L_08992788:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(9036));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0899279Cu);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x0899279Cu) goto L_0899279C;
    return;
L_0899279C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(9032));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089927B0u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x089927B0u) goto L_089927B0;
    return;
L_089927B0:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(8912));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089927C4u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x089927C4u) goto L_089927C4;
    return;
L_089927C4:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(9340));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089927D8u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x089927D8u) goto L_089927D8;
    return;
L_089927D8:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(9344));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089927ECu);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x089927ECu) goto L_089927EC;
    return;
L_089927EC:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(8088));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08992800u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08992800u) goto L_08992800;
    return;
L_08992800:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(8092));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08992814u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08992814u) goto L_08992814;
    return;
L_08992814:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(8096));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08992828u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08992828u) goto L_08992828;
    return;
L_08992828:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(8100));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0899283Cu);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x0899283Cu) goto L_0899283C;
    return;
L_0899283C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(8104));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08992850u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08992850u) goto L_08992850;
    return;
L_08992850:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(8108));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08992864u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08992864u) goto L_08992864;
    return;
L_08992864:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(8112));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08992878u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08992878u) goto L_08992878;
    return;
L_08992878:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(8124));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0899288Cu);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x0899288Cu) goto L_0899288C;
    return;
L_0899288C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(8116));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089928A0u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x089928A0u) goto L_089928A0;
    return;
L_089928A0:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(8120));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089928B4u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x089928B4u) goto L_089928B4;
    return;
L_089928B4:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(8284));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089928C8u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x089928C8u) goto L_089928C8;
    return;
L_089928C8:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(8288));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089928DCu);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x089928DCu) goto L_089928DC;
    return;
L_089928DC:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(8292));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089928F0u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x089928F0u) goto L_089928F0;
    return;
L_089928F0:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(8076));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08992904u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08992904u) goto L_08992904;
    return;
L_08992904:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(9084));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08992918u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08992918u) goto L_08992918;
    return;
L_08992918:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(9080));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0899292Cu);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x0899292Cu) goto L_0899292C;
    return;
L_0899292C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(9068));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08992940u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08992940u) goto L_08992940;
    return;
L_08992940:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(9072));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08992954u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08992954u) goto L_08992954;
    return;
L_08992954:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(9076));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08992968u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08992968u) goto L_08992968;
    return;
L_08992968:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(9064));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0899297Cu);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x0899297Cu) goto L_0899297C;
    return;
L_0899297C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(9348));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08992990u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08992990u) goto L_08992990;
    return;
L_08992990:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(9352));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089929A4u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x089929A4u) goto L_089929A4;
    return;
L_089929A4:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(9356));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089929B8u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x089929B8u) goto L_089929B8;
    return;
L_089929B8:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(9360));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089929CCu);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x089929CCu) goto L_089929CC;
    return;
L_089929CC:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(9364));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089929E0u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x089929E0u) goto L_089929E0;
    return;
L_089929E0:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(9368));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089929F4u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x089929F4u) goto L_089929F4;
    return;
L_089929F4:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(9372));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08992A08u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08992A08u) goto L_08992A08;
    return;
L_08992A08:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(9376));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08992A1Cu);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08992A1Cu) goto L_08992A1C;
    return;
L_08992A1C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(9380));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08992A30u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08992A30u) goto L_08992A30;
    return;
L_08992A30:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(9384));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08992A44u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08992A44u) goto L_08992A44;
    return;
L_08992A44:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(8684));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08992A58u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08992A58u) goto L_08992A58;
    return;
L_08992A58:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(9388));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08992A6Cu);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08992A6Cu) goto L_08992A6C;
    return;
L_08992A6C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(9392));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08992A80u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08992A80u) goto L_08992A80;
    return;
L_08992A80:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(9048));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08992A94u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08992A94u) goto L_08992A94;
    return;
L_08992A94:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(9056));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08992AA8u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08992AA8u) goto L_08992AA8;
    return;
L_08992AA8:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(9040));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08992ABCu);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08992ABCu) goto L_08992ABC;
    return;
L_08992ABC:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(9052));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08992AD0u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08992AD0u) goto L_08992AD0;
    return;
L_08992AD0:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(9060));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08992AE4u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08992AE4u) goto L_08992AE4;
    return;
L_08992AE4:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(9044));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08992AF8u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08992AF8u) goto L_08992AF8;
    return;
L_08992AF8:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(8144));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08992B0Cu);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08992B0Cu) goto L_08992B0C;
    return;
L_08992B0C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(9396));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08992B20u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08992B20u) goto L_08992B20;
    return;
L_08992B20:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(7904));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08992B34u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08992B34u) goto L_08992B34;
    return;
L_08992B34:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(9400));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08992B48u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08992B48u) goto L_08992B48;
    return;
L_08992B48:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(9088));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08992B5Cu);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08992B5Cu) goto L_08992B5C;
    return;
L_08992B5C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(9404));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08992B70u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08992B70u) goto L_08992B70;
    return;
L_08992B70:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(9408));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08992B84u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08992B84u) goto L_08992B84;
    return;
L_08992B84:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(9412));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08992B98u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08992B98u) goto L_08992B98;
    return;
L_08992B98:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(8128));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08992BACu);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08992BACu) goto L_08992BAC;
    return;
L_08992BAC:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(9288));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08992BC0u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08992BC0u) goto L_08992BC0;
    return;
L_08992BC0:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(8260));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08992BD4u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08992BD4u) goto L_08992BD4;
    return;
L_08992BD4:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(8264));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08992BE8u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08992BE8u) goto L_08992BE8;
    return;
L_08992BE8:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(8268));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08992BFCu);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08992BFCu) goto L_08992BFC;
    return;
L_08992BFC:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(8140));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08992C10u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08992C10u) goto L_08992C10;
    return;
L_08992C10:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2279u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 36u);
    ctx.gpr[31] = (0x08992C28u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17624));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08992C28u) goto L_08992C28;
    return;
L_08992C28:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(36));
    ctx.gpr[5] = (2279u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 36u);
    ctx.gpr[31] = (0x08992C40u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17664));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08992C40u) goto L_08992C40;
    return;
L_08992C40:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(36));
    ctx.gpr[5] = (2279u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 36u);
    ctx.gpr[31] = (0x08992C58u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17704));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08992C58u) goto L_08992C58;
    return;
L_08992C58:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(36));
    ctx.gpr[5] = (2279u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 48u);
    ctx.gpr[31] = (0x08992C70u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17744));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08992C70u) goto L_08992C70;
    return;
L_08992C70:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (2279u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 48u);
    ctx.gpr[31] = (0x08992C88u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17792));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08992C88u) goto L_08992C88;
    return;
L_08992C88:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (2279u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 32u);
    ctx.gpr[31] = (0x08992CA0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17840));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08992CA0u) goto L_08992CA0;
    return;
L_08992CA0:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (2279u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 32u);
    ctx.gpr[31] = (0x08992CB8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17872));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08992CB8u) goto L_08992CB8;
    return;
L_08992CB8:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(9416));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08992CCCu);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08992CCCu) goto L_08992CCC;
    return;
L_08992CCC:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(9432));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08992CE0u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08992CE0u) goto L_08992CE0;
    return;
L_08992CE0:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (2279u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 32u);
    ctx.gpr[31] = (0x08992CF8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17904));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08992CF8u) goto L_08992CF8;
    return;
L_08992CF8:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (2279u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 32u);
    ctx.gpr[31] = (0x08992D10u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17936));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08992D10u) goto L_08992D10;
    return;
L_08992D10:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (2240u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 24u);
    ctx.gpr[31] = (0x08992D28u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-23472));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08992D28u) goto L_08992D28;
    return;
L_08992D28:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(8180));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08992D3Cu);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08992D3Cu) goto L_08992D3C;
    return;
L_08992D3C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(8184));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08992D50u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08992D50u) goto L_08992D50;
    return;
L_08992D50:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(8188));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08992D64u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08992D64u) goto L_08992D64;
    return;
L_08992D64:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(8192));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08992D78u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08992D78u) goto L_08992D78;
    return;
L_08992D78:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(8296));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08992D8Cu);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08992D8Cu) goto L_08992D8C;
    return;
L_08992D8C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(8300));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08992DA0u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08992DA0u) goto L_08992DA0;
    return;
L_08992DA0:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(8304));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08992DB4u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08992DB4u) goto L_08992DB4;
    return;
L_08992DB4:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(8308));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08992DC8u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08992DC8u) goto L_08992DC8;
    return;
L_08992DC8:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(8168));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08992DDCu);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08992DDCu) goto L_08992DDC;
    return;
L_08992DDC:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(8212));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08992DF0u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08992DF0u) goto L_08992DF0;
    return;
L_08992DF0:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(8216));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08992E04u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08992E04u) goto L_08992E04;
    return;
L_08992E04:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(8196));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08992E18u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08992E18u) goto L_08992E18;
    return;
L_08992E18:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(8200));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08992E2Cu);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08992E2Cu) goto L_08992E2C;
    return;
L_08992E2C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(8204));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08992E40u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08992E40u) goto L_08992E40;
    return;
L_08992E40:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(8208));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08992E54u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08992E54u) goto L_08992E54;
    return;
L_08992E54:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(8220));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08992E68u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08992E68u) goto L_08992E68;
    return;
L_08992E68:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(8224));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08992E7Cu);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08992E7Cu) goto L_08992E7C;
    return;
L_08992E7C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(8228));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08992E90u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08992E90u) goto L_08992E90;
    return;
L_08992E90:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(8232));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08992EA4u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08992EA4u) goto L_08992EA4;
    return;
L_08992EA4:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(8236));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08992EB8u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08992EB8u) goto L_08992EB8;
    return;
L_08992EB8:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(8240));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08992ECCu);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08992ECCu) goto L_08992ECC;
    return;
L_08992ECC:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(8244));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08992EE0u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08992EE0u) goto L_08992EE0;
    return;
L_08992EE0:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(8248));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08992EF4u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08992EF4u) goto L_08992EF4;
    return;
L_08992EF4:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(8252));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08992F08u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08992F08u) goto L_08992F08;
    return;
L_08992F08:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(8256));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08992F1Cu);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08992F1Cu) goto L_08992F1C;
    return;
L_08992F1C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(8172));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08992F30u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08992F30u) goto L_08992F30;
    return;
L_08992F30:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(8176));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08992F44u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08992F44u) goto L_08992F44;
    return;
L_08992F44:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(8272));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08992F58u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08992F58u) goto L_08992F58;
    return;
L_08992F58:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(8280));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08992F6Cu);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08992F6Cu) goto L_08992F6C;
    return;
L_08992F6C:
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(8276));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08992F80u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08992F80u) goto L_08992F80;
    return;
L_08992F80:
    ctx.gpr[31] = (0x08992F88u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    goto L_089913B0;
L_08992F88:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[19]);
    goto L_08992F94;
L_08992F94:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08992FA4u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08992FA4u) goto L_08992FA4;
    return;
L_08992FA4:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08992F94;
      }
      goto L_08992FB8;
    }
L_08992FB8:
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
L_08992FD4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2279u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(17584));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(9300));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08993004u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08993004u) goto L_08993004;
    return;
L_08993004:
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(9304));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08993018u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08993018u) goto L_08993018;
    return;
L_08993018:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(9308));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0899302Cu);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x0899302Cu) goto L_0899302C;
    return;
L_0899302C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(9312));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08993040u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08993040u) goto L_08993040;
    return;
L_08993040:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7880));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08993054u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08993054u) goto L_08993054;
    return;
L_08993054:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(9316));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08993068u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08993068u) goto L_08993068;
    return;
L_08993068:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2279u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 92u);
    ctx.gpr[31] = (0x08993080u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(17488));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08993080u) goto L_08993080;
    return;
L_08993080:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(92));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(9320));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08993094u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08993094u) goto L_08993094;
    return;
L_08993094:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(8080));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089930A8u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x089930A8u) goto L_089930A8;
    return;
L_089930A8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(8084));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089930BCu);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x089930BCu) goto L_089930BC;
    return;
L_089930BC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(9324));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089930D0u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x089930D0u) goto L_089930D0;
    return;
L_089930D0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(9328));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089930E4u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x089930E4u) goto L_089930E4;
    return;
L_089930E4:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(8676));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089930F8u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x089930F8u) goto L_089930F8;
    return;
L_089930F8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(9332));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0899310Cu);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x0899310Cu) goto L_0899310C;
    return;
L_0899310C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(9336));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08993120u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08993120u) goto L_08993120;
    return;
L_08993120:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(9036));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08993134u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08993134u) goto L_08993134;
    return;
L_08993134:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(9032));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08993148u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08993148u) goto L_08993148;
    return;
L_08993148:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(8912));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0899315Cu);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x0899315Cu) goto L_0899315C;
    return;
L_0899315C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(9340));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08993170u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08993170u) goto L_08993170;
    return;
L_08993170:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(9344));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08993184u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08993184u) goto L_08993184;
    return;
L_08993184:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(8088));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08993198u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08993198u) goto L_08993198;
    return;
L_08993198:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(8092));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089931ACu);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x089931ACu) goto L_089931AC;
    return;
L_089931AC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(8096));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089931C0u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x089931C0u) goto L_089931C0;
    return;
L_089931C0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(8100));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089931D4u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x089931D4u) goto L_089931D4;
    return;
L_089931D4:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(8104));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089931E8u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x089931E8u) goto L_089931E8;
    return;
L_089931E8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(8108));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089931FCu);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x089931FCu) goto L_089931FC;
    return;
L_089931FC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(8112));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08993210u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08993210u) goto L_08993210;
    return;
L_08993210:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(8124));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08993224u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08993224u) goto L_08993224;
    return;
L_08993224:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(8116));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08993238u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08993238u) goto L_08993238;
    return;
L_08993238:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(8120));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0899324Cu);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x0899324Cu) goto L_0899324C;
    return;
L_0899324C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(8284));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08993260u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08993260u) goto L_08993260;
    return;
L_08993260:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(8288));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08993274u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08993274u) goto L_08993274;
    return;
L_08993274:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(8292));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08993288u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08993288u) goto L_08993288;
    return;
L_08993288:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(8076));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0899329Cu);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x0899329Cu) goto L_0899329C;
    return;
L_0899329C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(9084));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089932B0u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x089932B0u) goto L_089932B0;
    return;
L_089932B0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(9080));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089932C4u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x089932C4u) goto L_089932C4;
    return;
L_089932C4:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(9068));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089932D8u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x089932D8u) goto L_089932D8;
    return;
L_089932D8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(9072));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089932ECu);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x089932ECu) goto L_089932EC;
    return;
L_089932EC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(9076));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08993300u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08993300u) goto L_08993300;
    return;
L_08993300:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(9064));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08993314u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08993314u) goto L_08993314;
    return;
L_08993314:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(9348));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08993328u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08993328u) goto L_08993328;
    return;
L_08993328:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(9352));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0899333Cu);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x0899333Cu) goto L_0899333C;
    return;
L_0899333C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(9356));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08993350u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08993350u) goto L_08993350;
    return;
L_08993350:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(9360));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08993364u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08993364u) goto L_08993364;
    return;
L_08993364:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(9364));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08993378u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08993378u) goto L_08993378;
    return;
L_08993378:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(9368));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0899338Cu);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x0899338Cu) goto L_0899338C;
    return;
L_0899338C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(9372));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089933A0u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x089933A0u) goto L_089933A0;
    return;
L_089933A0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(9376));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089933B4u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x089933B4u) goto L_089933B4;
    return;
L_089933B4:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(9380));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089933C8u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x089933C8u) goto L_089933C8;
    return;
L_089933C8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(9384));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089933DCu);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x089933DCu) goto L_089933DC;
    return;
L_089933DC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(8684));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089933F0u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x089933F0u) goto L_089933F0;
    return;
L_089933F0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(9388));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08993404u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08993404u) goto L_08993404;
    return;
L_08993404:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(9392));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08993418u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08993418u) goto L_08993418;
    return;
L_08993418:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(9048));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0899342Cu);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x0899342Cu) goto L_0899342C;
    return;
L_0899342C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(9056));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08993440u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08993440u) goto L_08993440;
    return;
L_08993440:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(9040));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08993454u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08993454u) goto L_08993454;
    return;
L_08993454:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(9052));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08993468u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08993468u) goto L_08993468;
    return;
L_08993468:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(9060));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0899347Cu);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x0899347Cu) goto L_0899347C;
    return;
L_0899347C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(9044));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08993490u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08993490u) goto L_08993490;
    return;
L_08993490:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(8144));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089934A4u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x089934A4u) goto L_089934A4;
    return;
L_089934A4:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(9396));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089934B8u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x089934B8u) goto L_089934B8;
    return;
L_089934B8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7904));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089934CCu);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x089934CCu) goto L_089934CC;
    return;
L_089934CC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(9400));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089934E0u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x089934E0u) goto L_089934E0;
    return;
L_089934E0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(9088));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089934F4u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x089934F4u) goto L_089934F4;
    return;
L_089934F4:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(9404));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08993508u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08993508u) goto L_08993508;
    return;
L_08993508:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(9408));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0899351Cu);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x0899351Cu) goto L_0899351C;
    return;
L_0899351C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(9412));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08993530u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08993530u) goto L_08993530;
    return;
L_08993530:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(8128));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08993544u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08993544u) goto L_08993544;
    return;
L_08993544:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(9288));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08993558u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08993558u) goto L_08993558;
    return;
L_08993558:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(8260));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0899356Cu);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x0899356Cu) goto L_0899356C;
    return;
L_0899356C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(8264));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08993580u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08993580u) goto L_08993580;
    return;
L_08993580:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(8268));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08993594u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08993594u) goto L_08993594;
    return;
L_08993594:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(8140));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089935A8u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x089935A8u) goto L_089935A8;
    return;
L_089935A8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2279u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 36u);
    ctx.gpr[31] = (0x089935C0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(17624));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x089935C0u) goto L_089935C0;
    return;
L_089935C0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(36));
    ctx.gpr[4] = (2279u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 36u);
    ctx.gpr[31] = (0x089935D8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(17664));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x089935D8u) goto L_089935D8;
    return;
L_089935D8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(36));
    ctx.gpr[4] = (2279u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 36u);
    ctx.gpr[31] = (0x089935F0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(17704));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x089935F0u) goto L_089935F0;
    return;
L_089935F0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(36));
    ctx.gpr[4] = (2279u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 48u);
    ctx.gpr[31] = (0x08993608u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(17744));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08993608u) goto L_08993608;
    return;
L_08993608:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (2279u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 48u);
    ctx.gpr[31] = (0x08993620u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(17792));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08993620u) goto L_08993620;
    return;
L_08993620:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (2279u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 32u);
    ctx.gpr[31] = (0x08993638u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(17840));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08993638u) goto L_08993638;
    return;
L_08993638:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (2279u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 32u);
    ctx.gpr[31] = (0x08993650u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(17872));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08993650u) goto L_08993650;
    return;
L_08993650:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(9416));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08993664u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08993664u) goto L_08993664;
    return;
L_08993664:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(9432));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08993678u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08993678u) goto L_08993678;
    return;
L_08993678:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (2279u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 32u);
    ctx.gpr[31] = (0x08993690u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(17904));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08993690u) goto L_08993690;
    return;
L_08993690:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (2279u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 32u);
    ctx.gpr[31] = (0x089936A8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(17936));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x089936A8u) goto L_089936A8;
    return;
L_089936A8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (2240u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 24u);
    ctx.gpr[31] = (0x089936C0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23472));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x089936C0u) goto L_089936C0;
    return;
L_089936C0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(8180));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089936D4u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x089936D4u) goto L_089936D4;
    return;
L_089936D4:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(8184));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089936E8u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x089936E8u) goto L_089936E8;
    return;
L_089936E8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(8188));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089936FCu);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x089936FCu) goto L_089936FC;
    return;
L_089936FC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(8192));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08993710u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08993710u) goto L_08993710;
    return;
L_08993710:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(8296));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08993724u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08993724u) goto L_08993724;
    return;
L_08993724:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(8300));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08993738u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08993738u) goto L_08993738;
    return;
L_08993738:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(8304));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0899374Cu);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x0899374Cu) goto L_0899374C;
    return;
L_0899374C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(8308));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08993760u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08993760u) goto L_08993760;
    return;
L_08993760:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(8168));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08993774u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08993774u) goto L_08993774;
    return;
L_08993774:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(8212));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08993788u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08993788u) goto L_08993788;
    return;
L_08993788:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(8216));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0899379Cu);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x0899379Cu) goto L_0899379C;
    return;
L_0899379C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(8196));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089937B0u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x089937B0u) goto L_089937B0;
    return;
L_089937B0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(8200));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089937C4u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x089937C4u) goto L_089937C4;
    return;
L_089937C4:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(8204));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089937D8u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x089937D8u) goto L_089937D8;
    return;
L_089937D8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(8208));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089937ECu);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x089937ECu) goto L_089937EC;
    return;
L_089937EC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(8220));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08993800u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08993800u) goto L_08993800;
    return;
L_08993800:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(8224));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08993814u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08993814u) goto L_08993814;
    return;
L_08993814:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(8228));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08993828u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08993828u) goto L_08993828;
    return;
L_08993828:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(8232));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0899383Cu);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x0899383Cu) goto L_0899383C;
    return;
L_0899383C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(8236));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08993850u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08993850u) goto L_08993850;
    return;
L_08993850:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(8240));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08993864u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08993864u) goto L_08993864;
    return;
L_08993864:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(8244));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08993878u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08993878u) goto L_08993878;
    return;
L_08993878:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(8248));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0899388Cu);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x0899388Cu) goto L_0899388C;
    return;
L_0899388C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(8252));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089938A0u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x089938A0u) goto L_089938A0;
    return;
L_089938A0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(8256));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089938B4u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x089938B4u) goto L_089938B4;
    return;
L_089938B4:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(8172));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089938C8u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x089938C8u) goto L_089938C8;
    return;
L_089938C8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(8176));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089938DCu);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x089938DCu) goto L_089938DC;
    return;
L_089938DC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(8272));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089938F0u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x089938F0u) goto L_089938F0;
    return;
L_089938F0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(8280));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08993904u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08993904u) goto L_08993904;
    return;
L_08993904:
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(8276));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08993918u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08993918u) goto L_08993918;
    return;
L_08993918:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[16]);
    goto L_08993928;
L_08993928:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08993938u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08993938u) goto L_08993938;
    return;
L_08993938:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08993928;
      }
      goto L_0899394C;
    }
L_0899394C:
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
L_08993964:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-736));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(708), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(712), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(716), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(720), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(724), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(728), ctx.gpr[31]);
    ctx.gpr[31] = (0x0899398Cu);
    ctx.gpr[17] = (0u | 0u);
    goto L_0899103C;
L_0899398C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[14])) && ctx.fpr[12] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089939F0;
      }
      goto L_089939B0;
    }
L_089939B0:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089939C0;
      }
      goto L_089939B8;
    }
L_089939B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08993A28;
      }
      goto L_089939C0;
    }
L_089939C0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15212));
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[31] = (0x089939E8u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 796u, 0x08996D78u>(ctx, &aot_mem) && ctx.pc == 0x089939E8u) goto L_089939E8;
    return;
L_089939E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 795u, 0x08996D58u>(ctx, &aot_mem); return;
      }
      goto L_089939F0;
    }
L_089939F0:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08993A00;
      }
      goto L_089939F8;
    }
L_089939F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08993A28;
      }
      goto L_08993A00;
    }
L_08993A00:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15212));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08993A20u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 796u, 0x08996D78u>(ctx, &aot_mem) && ctx.pc == 0x08993A20u) goto L_08993A20;
    return;
L_08993A20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 795u, 0x08996D58u>(ctx, &aot_mem); return;
      }
      goto L_08993A28;
    }
L_08993A28:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08993A78;
      }
      goto L_08993A30;
    }
L_08993A30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[5] = (0u | 60000u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[5] = (0u | 60u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (ctx.hi);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08993AA4;
      }
      goto L_08993A70;
    }
L_08993A70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
      if (branch_taken) {
          goto L_08993AD0;
      }
      goto L_08993A78;
    }
L_08993A78:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8124)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15204));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(8));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08993A9Cu);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 796u, 0x08996D78u>(ctx, &aot_mem) && ctx.pc == 0x08993A9Cu) goto L_08993A9C;
    return;
L_08993A9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 795u, 0x08996D58u>(ctx, &aot_mem); return;
      }
      goto L_08993AA4;
    }
L_08993AA4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15196));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(12));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x08993AC8u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 796u, 0x08996D78u>(ctx, &aot_mem) && ctx.pc == 0x08993AC8u) goto L_08993AC8;
    return;
L_08993AC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 795u, 0x08996D58u>(ctx, &aot_mem); return;
      }
      goto L_08993AD0;
    }
L_08993AD0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8140)));
    ctx.gpr[6] = (0u | 60000u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (0u | 60u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.hi);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08993B28;
      }
      goto L_08993B14;
    }
L_08993B14:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08993B54;
      }
      goto L_08993B20;
    }
L_08993B20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08993B80;
      }
      goto L_08993B28;
    }
L_08993B28:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15188));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x08993B4Cu);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 796u, 0x08996D78u>(ctx, &aot_mem) && ctx.pc == 0x08993B4Cu) goto L_08993B4C;
    return;
L_08993B4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 795u, 0x08996D58u>(ctx, &aot_mem); return;
      }
      goto L_08993B54;
    }
L_08993B54:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8912)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15180));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08993B78u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 796u, 0x08996D78u>(ctx, &aot_mem) && ctx.pc == 0x08993B78u) goto L_08993B78;
    return;
L_08993B78:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 795u, 0x08996D58u>(ctx, &aot_mem); return;
      }
      goto L_08993B80;
    }
L_08993B80:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08993BA0;
      }
      goto L_08993B8C;
    }
L_08993B8C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-10001)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08993BCC;
      }
      goto L_08993B98;
    }
L_08993B98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 20u, 0x08994138u>(ctx, &aot_mem); return;
      }
      goto L_08993BA0;
    }
L_08993BA0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9340)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15172));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08993BC4u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 796u, 0x08996D78u>(ctx, &aot_mem) && ctx.pc == 0x08993BC4u) goto L_08993BC4;
    return;
L_08993BC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 795u, 0x08996D58u>(ctx, &aot_mem); return;
      }
      goto L_08993BCC;
    }
L_08993BCC:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15164));
      if (branch_taken) {
          goto L_08993BE8;
      }
      goto L_08993BD4;
    }
L_08993BD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8296)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08993C08;
      }
      goto L_08993BE0;
    }
L_08993BE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08993C58;
      }
      goto L_08993BE8;
    }
L_08993BE8:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08993C00u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 796u, 0x08996D78u>(ctx, &aot_mem) && ctx.pc == 0x08993C00u) goto L_08993C00;
    return;
L_08993C00:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 795u, 0x08996D58u>(ctx, &aot_mem); return;
      }
      goto L_08993C08;
    }
L_08993C08:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08993C54;
      }
      goto L_08993C10;
    }
L_08993C10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8296)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08993C2C;
      }
      goto L_08993C20;
    }
L_08993C20:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08993C2C;
L_08993C2C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15156));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08993C4Cu);
    ctx.gpr[9] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 796u, 0x08996D78u>(ctx, &aot_mem) && ctx.pc == 0x08993C4Cu) goto L_08993C4C;
    return;
L_08993C4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 795u, 0x08996D58u>(ctx, &aot_mem); return;
      }
      goto L_08993C54;
    }
L_08993C54:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08993C58;
L_08993C58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8300)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08993CB4;
      }
      goto L_08993C64;
    }
L_08993C64:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08993CB0;
      }
      goto L_08993C6C;
    }
L_08993C6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8300)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08993C88;
      }
      goto L_08993C7C;
    }
L_08993C7C:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08993C88;
L_08993C88:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15148));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08993CA8u);
    ctx.gpr[9] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 796u, 0x08996D78u>(ctx, &aot_mem) && ctx.pc == 0x08993CA8u) goto L_08993CA8;
    return;
L_08993CA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 795u, 0x08996D58u>(ctx, &aot_mem); return;
      }
      goto L_08993CB0;
    }
L_08993CB0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08993CB4;
L_08993CB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08993D10;
      }
      goto L_08993CC0;
    }
L_08993CC0:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08993D0C;
      }
      goto L_08993CC8;
    }
L_08993CC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8304)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08993CE4;
      }
      goto L_08993CD8;
    }
L_08993CD8:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08993CE4;
L_08993CE4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15140));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08993D04u);
    ctx.gpr[9] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 796u, 0x08996D78u>(ctx, &aot_mem) && ctx.pc == 0x08993D04u) goto L_08993D04;
    return;
L_08993D04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 795u, 0x08996D58u>(ctx, &aot_mem); return;
      }
      goto L_08993D0C;
    }
L_08993D0C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08993D10;
L_08993D10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8308)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08993D6C;
      }
      goto L_08993D1C;
    }
L_08993D1C:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08993D68;
      }
      goto L_08993D24;
    }
L_08993D24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8308)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08993D40;
      }
      goto L_08993D34;
    }
L_08993D34:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08993D40;
L_08993D40:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15132));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08993D60u);
    ctx.gpr[9] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 796u, 0x08996D78u>(ctx, &aot_mem) && ctx.pc == 0x08993D60u) goto L_08993D60;
    return;
L_08993D60:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 795u, 0x08996D58u>(ctx, &aot_mem); return;
      }
      goto L_08993D68;
    }
L_08993D68:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08993D6C;
L_08993D6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08993D80;
      }
      goto L_08993D78;
    }
L_08993D78:
    ctx.gpr[31] = (0x08993D80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 339u, 0x08B6572Cu>(ctx, &aot_mem) && ctx.pc == 0x08993D80u) goto L_08993D80;
    return;
L_08993D80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8312)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08993DD0;
      }
      goto L_08993D94;
    }
L_08993D94:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08993DA4;
      }
      goto L_08993D9C;
    }
L_08993D9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08993DD0;
      }
      goto L_08993DA4;
    }
L_08993DA4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8312)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15124));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08993DC8u);
    ctx.gpr[9] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 796u, 0x08996D78u>(ctx, &aot_mem) && ctx.pc == 0x08993DC8u) goto L_08993DC8;
    return;
L_08993DC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 795u, 0x08996D58u>(ctx, &aot_mem); return;
      }
      goto L_08993DD0;
    }
L_08993DD0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8312)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08993E30;
      }
      goto L_08993DDC;
    }
L_08993DDC:
    if (ctx.gpr[17] == ctx.gpr[16]) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8312)));
        goto L_08993DEC;
    }
    goto L_08993DE4;
L_08993DE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08993E30;
      }
      goto L_08993DEC;
    }
L_08993DEC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15116));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 4u);
    ctx.gpr[10] = (ctx.lo);
    ctx.gpr[31] = (0x08993E28u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[10]);
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 796u, 0x08996D78u>(ctx, &aot_mem) && ctx.pc == 0x08993E28u) goto L_08993E28;
    return;
L_08993E28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 795u, 0x08996D58u>(ctx, &aot_mem); return;
      }
      goto L_08993E30;
    }
L_08993E30:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8313)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08993E90;
      }
      goto L_08993E3C;
    }
L_08993E3C:
    if (ctx.gpr[17] == ctx.gpr[16]) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8313)));
        goto L_08993E4C;
    }
    goto L_08993E44;
L_08993E44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08993E90;
      }
      goto L_08993E4C;
    }
L_08993E4C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15108));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 4u);
    ctx.gpr[10] = (ctx.lo);
    ctx.gpr[31] = (0x08993E88u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[10]);
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 796u, 0x08996D78u>(ctx, &aot_mem) && ctx.pc == 0x08993E88u) goto L_08993E88;
    return;
L_08993E88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 795u, 0x08996D58u>(ctx, &aot_mem); return;
      }
      goto L_08993E90;
    }
L_08993E90:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8314)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08993EF0;
      }
      goto L_08993E9C;
    }
L_08993E9C:
    if (ctx.gpr[17] == ctx.gpr[16]) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8314)));
        goto L_08993EAC;
    }
    goto L_08993EA4;
L_08993EA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08993EF0;
      }
      goto L_08993EAC;
    }
L_08993EAC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15100));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 4u);
    ctx.gpr[10] = (ctx.lo);
    ctx.gpr[31] = (0x08993EE8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[10]);
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 796u, 0x08996D78u>(ctx, &aot_mem) && ctx.pc == 0x08993EE8u) goto L_08993EE8;
    return;
L_08993EE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 795u, 0x08996D58u>(ctx, &aot_mem); return;
      }
      goto L_08993EF0;
    }
L_08993EF0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8315)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08993F50;
      }
      goto L_08993EFC;
    }
L_08993EFC:
    if (ctx.gpr[17] == ctx.gpr[16]) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8315)));
        goto L_08993F0C;
    }
    goto L_08993F04;
L_08993F04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08993F50;
      }
      goto L_08993F0C;
    }
L_08993F0C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15092));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 4u);
    ctx.gpr[10] = (ctx.lo);
    ctx.gpr[31] = (0x08993F48u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[10]);
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 796u, 0x08996D78u>(ctx, &aot_mem) && ctx.pc == 0x08993F48u) goto L_08993F48;
    return;
L_08993F48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 795u, 0x08996D58u>(ctx, &aot_mem); return;
      }
      goto L_08993F50;
    }
L_08993F50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8184)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8180)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08993FBC;
      }
      goto L_08993F64;
    }
L_08993F64:
    if (ctx.gpr[17] == ctx.gpr[16]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8180)));
        goto L_08993F74;
    }
    goto L_08993F6C;
L_08993F6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08993FBC;
      }
      goto L_08993F74;
    }
L_08993F74:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8184)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[6] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    { const std::uint32_t dividend = ctx.gpr[6]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15084));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 4u);
    ctx.gpr[10] = (ctx.lo);
    ctx.gpr[31] = (0x08993FB4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[10]);
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 796u, 0x08996D78u>(ctx, &aot_mem) && ctx.pc == 0x08993FB4u) goto L_08993FB4;
    return;
L_08993FB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 795u, 0x08996D58u>(ctx, &aot_mem); return;
      }
      goto L_08993FBC;
    }
L_08993FBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8192)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8188)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 3u, 0x08994028u>(ctx, &aot_mem); return;
      }
      goto L_08993FD0;
    }
L_08993FD0:
    if (ctx.gpr[17] == ctx.gpr[16]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8188)));
        goto L_08993FE0;
    }
    goto L_08993FD8;
L_08993FD8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 3u, 0x08994028u>(ctx, &aot_mem); return;
      }
      goto L_08993FE0;
    }
L_08993FE0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8192)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[6] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    { const std::uint32_t dividend = ctx.gpr[6]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-15076));
    ctx.pc = 0x08994000u; return;
}

void recomp_unit_0099(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0099_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_99(Runtime &runtime) {
    runtime.register_generated_unit(99u, 0x08990000u, 16384u, &recomp_unit_0099, &recomp_unit_0099_entry);
    runtime.register_function(0x08990000u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990018u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990054u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899005Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899006Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990074u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899007Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990084u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990098u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089900A8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089900B4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089900BCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089900D8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089900E0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089900ECu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089900F4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990100u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899010Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899011Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990120u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899012Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990134u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990144u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899014Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990154u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990170u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990174u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990190u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089901ACu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089901B8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089901C4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089901C8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089901D8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089901E4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089901F0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089901F4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990204u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990210u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899021Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990220u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990230u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899023Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990248u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899024Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899025Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990268u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990274u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990278u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990290u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089902A0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089902A8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089902B4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089902C8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089902D4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089902E8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089902F4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990308u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990314u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990328u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990334u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990348u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990354u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990368u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990374u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899037Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990390u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089903B0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089903F0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990418u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990464u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990480u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990488u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990494u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899049Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089904B0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089904DCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990548u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990558u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990574u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899057Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899058Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899059Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089905B8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089905D0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089905D4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089905E8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089905ECu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990654u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990660u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990670u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990678u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990680u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990690u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089906A0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089906A8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089906B4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089906B8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089906CCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089906D0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990738u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990744u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990754u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990770u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990778u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990788u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990798u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089907B4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089907C8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089907CCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089907E0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990824u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990830u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990840u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899085Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990864u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990874u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990884u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089908A0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089908B4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089908B8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089908CCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089908ECu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990904u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990910u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990920u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990928u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990938u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990954u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899095Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990970u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899098Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990998u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089909B0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089909BCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089909D4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089909E0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089909F8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990A04u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990A20u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990A28u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990A40u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990A50u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990A54u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990A98u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990AA8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990AB8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990AC0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990ACCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990AD0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990AE4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990AE8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990B30u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990B50u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990B58u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990B60u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990B68u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990B70u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990B78u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990B80u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990B9Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990BA4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990BB4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990BC4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990BD4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990BE8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990BF0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990C04u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990C0Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990C20u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990C28u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990C40u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990C58u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990C70u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990C88u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990CA0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990CB8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990CD0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990CE8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990D00u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990D18u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990D30u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990D48u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990D60u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990D78u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990D90u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990DA8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990DC0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990DD8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990DF0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990E08u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990E10u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990E18u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990E20u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990E28u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990E30u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990E38u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990E40u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990E48u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990E50u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990E58u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990E60u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990E68u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990E70u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990E78u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990E80u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990E88u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990E90u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990E98u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990EA0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990EA8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990EACu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990EB4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990F78u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990F80u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990F94u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990F9Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990FB0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990FB4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990FC0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08990FF8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899100Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991034u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899103Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991058u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991060u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899106Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991080u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991088u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991098u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089910A0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089910B0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089910C8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089910E0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089910E8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991108u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991110u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899112Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991134u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991148u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899114Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991154u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991170u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991178u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899118Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991190u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991198u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089911B4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089911BCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089911D0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089911D4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089911DCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089911F8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991200u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991214u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991218u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991220u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899123Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991244u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991258u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899125Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991264u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991280u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991288u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899129Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089912A0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089912A8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089912BCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089912C4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089912DCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089912E0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089912E8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089912FCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991304u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899131Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991320u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991328u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991344u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899134Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991360u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991364u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899136Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991388u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991390u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089913A4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089913A8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089913B0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089913D8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089913E8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089913FCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991400u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991414u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899142Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991444u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899145Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991470u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991478u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991488u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991490u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089914A8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089914BCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089914C4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089914D4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089914DCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089914ECu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991504u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899150Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991514u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991524u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899153Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991548u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991550u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899155Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899156Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991574u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991580u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991590u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991598u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899159Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089915A4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089915DCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089915E4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991600u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991608u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991610u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899161Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991628u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991630u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991634u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899163Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991644u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991650u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991658u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991660u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991674u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991684u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991690u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089916A0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089916ACu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089916B8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089916C4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089916D0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089916D8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089916DCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089916E4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089916ECu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089916F8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991700u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991708u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991714u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991720u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899172Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991734u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991738u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991740u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991748u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991754u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899175Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991788u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991814u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991828u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991908u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899191Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991920u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991934u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991938u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899194Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991950u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991964u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991968u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899197Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991980u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991994u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991998u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089919ACu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089919B0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089919C4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089919CCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089919E0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089919E8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089919FCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991A00u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991A14u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991A18u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991A2Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991A30u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991A48u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991A4Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991A60u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991A9Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991AB4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991ACCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991B5Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991B70u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991B7Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991B88u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991B94u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991B9Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991BACu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991BB4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991BC4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991BCCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991BD8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991BE4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991BECu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991BFCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991C04u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991C14u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991C1Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991C2Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991C34u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991C40u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991C4Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991C54u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991C64u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991C6Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991C7Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991C84u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991C90u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991C9Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991CA4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991CB4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991CBCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991CCCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991CD4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991CE0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991CECu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991CF4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991D04u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991D0Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991D1Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991D24u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991D30u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991D3Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991D44u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991D54u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991D5Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991D6Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991D74u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991D80u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991D8Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991D94u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991DA4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991DACu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991DBCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991DC4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991DD0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991DDCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991DE4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991DF4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991DFCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991E0Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991E14u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991E20u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991E2Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991E34u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991E44u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991E4Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991E5Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991E64u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991E70u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991E7Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991E84u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991E94u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991E9Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991EACu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991EB4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991EC0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991ECCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991ED4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991EE4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991EECu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991EFCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991F04u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991F10u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991F1Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991F24u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991F34u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991F3Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991F4Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991F54u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991F60u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991F6Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991F74u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991F84u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991F8Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991F9Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991FA4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991FB0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991FBCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991FC4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991FD4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991FDCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991FECu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08991FF4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992000u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899200Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899201Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992024u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992034u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899203Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992048u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992054u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899205Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899206Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992074u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992084u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899208Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992098u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089920A4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089920ACu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089920BCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089920C4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089920D4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089920DCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089920E8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089920F4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089920FCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899210Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992114u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992124u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899212Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992138u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992144u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899214Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899215Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992164u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992174u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899217Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992188u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992194u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899219Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089921ACu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089921B4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089921C4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089921CCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089921D8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089921E4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089921ECu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089921FCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992204u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992214u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899221Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992228u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992234u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899223Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899224Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992254u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992264u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899226Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992278u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992288u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992290u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089922A0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089922A8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089922B8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089922C0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089922D0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089922E0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089922E8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089922F8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992300u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992310u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992318u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899232Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992340u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992348u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992358u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992360u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992370u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992378u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899238Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089923A0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089923A8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089923B8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089923C0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089923D0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089923D8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089923ECu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992400u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992408u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992418u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992420u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992430u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992438u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899244Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899245Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899246Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992474u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992484u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899248Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089924A0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089924DCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089924E4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089924F4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089924FCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899250Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992514u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992524u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899252Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899253Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899256Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992574u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992584u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899266Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992680u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992694u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089926A8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089926BCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089926D0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089926E8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089926FCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992710u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992724u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992738u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899274Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992760u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992774u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992788u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899279Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089927B0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089927C4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089927D8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089927ECu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992800u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992814u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992828u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899283Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992850u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992864u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992878u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899288Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089928A0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089928B4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089928C8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089928DCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089928F0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992904u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992918u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899292Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992940u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992954u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992968u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899297Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992990u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089929A4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089929B8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089929CCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089929E0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089929F4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992A08u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992A1Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992A30u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992A44u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992A58u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992A6Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992A80u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992A94u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992AA8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992ABCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992AD0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992AE4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992AF8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992B0Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992B20u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992B34u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992B48u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992B5Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992B70u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992B84u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992B98u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992BACu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992BC0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992BD4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992BE8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992BFCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992C10u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992C28u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992C40u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992C58u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992C70u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992C88u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992CA0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992CB8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992CCCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992CE0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992CF8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992D10u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992D28u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992D3Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992D50u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992D64u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992D78u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992D8Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992DA0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992DB4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992DC8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992DDCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992DF0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992E04u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992E18u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992E2Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992E40u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992E54u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992E68u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992E7Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992E90u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992EA4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992EB8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992ECCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992EE0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992EF4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992F08u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992F1Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992F30u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992F44u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992F58u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992F6Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992F80u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992F88u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992F94u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992FA4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992FB8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08992FD4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993004u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993018u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899302Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993040u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993054u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993068u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993080u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993094u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089930A8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089930BCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089930D0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089930E4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089930F8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899310Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993120u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993134u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993148u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899315Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993170u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993184u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993198u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089931ACu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089931C0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089931D4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089931E8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089931FCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993210u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993224u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993238u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899324Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993260u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993274u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993288u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899329Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089932B0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089932C4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089932D8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089932ECu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993300u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993314u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993328u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899333Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993350u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993364u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993378u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899338Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089933A0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089933B4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089933C8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089933DCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089933F0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993404u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993418u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899342Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993440u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993454u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993468u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899347Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993490u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089934A4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089934B8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089934CCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089934E0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089934F4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993508u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899351Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993530u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993544u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993558u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899356Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993580u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993594u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089935A8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089935C0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089935D8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089935F0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993608u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993620u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993638u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993650u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993664u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993678u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993690u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089936A8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089936C0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089936D4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089936E8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089936FCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993710u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993724u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993738u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899374Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993760u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993774u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993788u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899379Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089937B0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089937C4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089937D8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089937ECu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993800u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993814u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993828u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899383Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993850u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993864u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993878u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899388Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089938A0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089938B4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089938C8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089938DCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089938F0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993904u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993918u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993928u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993938u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899394Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993964u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x0899398Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089939B0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089939B8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089939C0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089939E8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089939F0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x089939F8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993A00u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993A20u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993A28u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993A30u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993A70u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993A78u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993A9Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993AA4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993AC8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993AD0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993B14u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993B20u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993B28u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993B4Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993B54u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993B78u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993B80u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993B8Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993B98u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993BA0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993BC4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993BCCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993BD4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993BE0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993BE8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993C00u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993C08u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993C10u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993C20u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993C2Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993C4Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993C54u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993C58u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993C64u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993C6Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993C7Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993C88u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993CA8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993CB0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993CB4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993CC0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993CC8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993CD8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993CE4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993D04u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993D0Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993D10u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993D1Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993D24u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993D34u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993D40u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993D60u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993D68u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993D6Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993D78u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993D80u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993D94u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993D9Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993DA4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993DC8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993DD0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993DDCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993DE4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993DECu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993E28u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993E30u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993E3Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993E44u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993E4Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993E88u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993E90u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993E9Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993EA4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993EACu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993EE8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993EF0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993EFCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993F04u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993F0Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993F48u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993F50u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993F64u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993F6Cu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993F74u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993FB4u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993FBCu, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993FD0u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993FD8u, &recomp_unit_0099, "recomp_unit_0099");
    runtime.register_function(0x08993FE0u, &recomp_unit_0099, "recomp_unit_0099");
}
} // namespace psprecomp
