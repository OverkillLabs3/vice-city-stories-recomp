#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0096[4090] = {
    1, 0, 0, 2, 0, 3, 0, 0, 4, 0, 0, 0, 5, 0, 0, 6, 0, 0, 0, 7, 0, 8, 0, 0, 0, 0, 9, 0, 0, 0, 0, 10,
    0, 0, 11, 0, 0, 0, 12, 0, 13, 0, 0, 0, 14, 0, 15, 0, 16, 0, 17, 0, 0, 18, 0, 19, 0, 20, 0, 0, 21, 0, 0, 0,
    0, 22, 0, 0, 23, 0, 0, 0, 24, 0, 25, 0, 0, 0, 26, 0, 27, 0, 28, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 31, 0,
    0, 32, 0, 0, 0, 33, 0, 0, 34, 0, 0, 35, 0, 0, 0, 36, 0, 0, 37, 0, 0, 38, 0, 0, 0, 39, 0, 0, 40, 0, 0, 41,
    0, 0, 0, 42, 0, 0, 43, 0, 0, 44, 0, 0, 0, 45, 0, 46, 0, 0, 0, 47, 0, 0, 48, 0, 0, 0, 0, 0, 49, 0, 0, 0,
    0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 52, 53, 54, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    56, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 58, 0, 59, 0, 0, 60, 0, 0, 61, 0, 62, 0, 63, 0, 0, 0, 0, 0, 64, 0, 0,
    0, 0, 0, 0, 65, 0, 66, 0, 0, 67, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 71, 0, 0,
    72, 0, 0, 0, 0, 0, 0, 73, 0, 74, 0, 0, 75, 0, 0, 76, 0, 77, 78, 0, 79, 0, 80, 0, 0, 0, 81, 0, 82, 0, 83, 0,
    0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 85, 0, 0, 86, 0, 0, 0, 0, 0, 0, 87, 0, 88, 0, 0, 0, 0, 0, 0, 89, 0,
    0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 92, 0, 0, 93, 0, 94, 0, 0, 0, 95, 0, 96, 0, 0, 97, 98, 0, 0, 0,
    0, 0, 99, 0, 0, 0, 0, 0, 0, 100, 0, 101, 102, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 106, 0,
    0, 107, 0, 108, 0, 0, 0, 109, 0, 110, 0, 0, 111, 112, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 115, 0, 116, 0,
    0, 117, 118, 0, 119, 0, 120, 0, 0, 121, 122, 0, 123, 0, 124, 0, 0, 125, 126, 0, 0, 0, 0, 127, 0, 0, 128, 0, 129, 0, 0, 130,
    131, 0, 132, 0, 133, 0, 0, 134, 135, 0, 136, 0, 0, 137, 138, 0, 139, 0, 140, 0, 141, 0, 142, 0, 0, 143, 144, 0, 145, 0, 146, 0,
    0, 147, 148, 0, 149, 0, 0, 150, 151, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0,
    0, 0, 0, 0, 154, 0, 155, 156, 0, 0, 157, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 160, 0, 0, 161, 0, 0, 162, 0,
    163, 0, 0, 164, 0, 165, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 168, 0, 169, 0, 0, 170, 0, 0, 0,
    171, 0, 0, 172, 0, 0, 173, 0, 174, 0, 175, 0, 0, 176, 0, 0, 0, 177, 0, 0, 178, 0, 0, 179, 0, 0, 0, 0, 0, 180, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 182, 0, 0, 183, 0, 0, 0, 0, 184, 0,
    0, 185, 0, 0, 0, 0, 186, 0, 187, 0, 0, 0, 0, 0, 188, 0, 0, 189, 0, 190, 191, 0, 0, 192, 0, 193, 0, 0, 194, 0, 195, 196,
    0, 197, 0, 198, 0, 0, 0, 199, 0, 200, 0, 201, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 203, 0, 204, 205, 0, 0, 206, 0,
    207, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 210, 0, 211, 0, 0, 212, 0, 0, 0, 0, 213, 0,
    214, 0, 0, 0, 0, 0, 215, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 219, 0, 0, 220, 0, 221,
    0, 0, 0, 222, 0, 223, 0, 0, 224, 225, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 228, 0, 0,
    0, 0, 229, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 232, 0, 0, 233, 0, 0, 234, 0, 0, 235, 0, 236,
    0, 0, 0, 0, 237, 0, 0, 0, 238, 0, 0, 239, 0, 0, 240, 0, 241, 0, 242, 243, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 245, 0, 0, 246, 0, 0, 247, 0, 0, 248, 0, 249, 0, 0, 250, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 253, 0, 0, 0, 254, 0, 255, 0, 0, 256, 0, 257, 0, 258, 0, 0, 259, 0, 0, 0, 0, 0,
    260, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 263, 0, 0, 264, 0, 265, 0, 0, 266, 267, 0,
    0, 268, 0, 269, 0, 0, 270, 271, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 274, 0, 275, 0, 0,
    276, 0, 277, 0, 0, 278, 0, 279, 0, 0, 280, 0, 281, 0, 0, 282, 0, 0, 283, 0, 0, 0, 0, 0, 284, 0, 0, 285, 0, 0, 286, 0,
    0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 288, 0, 289, 0, 0, 290, 0, 291, 0, 0, 292, 0, 0, 0, 293, 0, 294, 0, 0,
    0, 0, 0, 0, 295, 0, 296, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 299, 0, 300, 0, 0,
    301, 0, 0, 0, 0, 302, 0, 303, 0, 0, 304, 0, 0, 0, 0, 0, 0, 305, 0, 306, 0, 0, 307, 0, 0, 308, 0, 0, 0, 309, 0, 0,
    310, 0, 0, 0, 0, 0, 0, 311, 0, 0, 312, 0, 0, 313, 0, 0, 314, 0, 315, 0, 0, 316, 0, 0, 317, 0, 318, 0, 0, 319, 0, 0,
    0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 322, 0, 0, 323, 0, 324, 0, 0, 0, 0, 325, 0, 0, 0, 0,
    0, 0, 0, 0, 326, 0, 0, 327, 0, 328, 0, 0, 0, 329, 0, 0, 330, 0, 331, 0, 0, 332, 333, 0, 0, 0, 0, 0, 334, 0, 0, 0,
    335, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 338, 0, 339, 0, 0, 340, 0, 0, 341, 0, 0, 0, 0, 342, 0, 0, 0,
    0, 0, 0, 0, 0, 343, 0, 0, 344, 0, 345, 0, 0, 0, 0, 0, 346, 347, 0, 0, 348, 0, 349, 0, 0, 350, 351, 0, 0, 0, 0, 0,
    352, 0, 0, 0, 353, 0, 0, 354, 0, 0, 0, 355, 0, 0, 356, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 358, 0, 0, 359, 0,
    360, 361, 0, 0, 362, 0, 363, 0, 0, 364, 0, 365, 366, 0, 0, 367, 0, 368, 0, 0, 369, 0, 370, 371, 0, 0, 372, 0, 373, 0, 0, 374,
    0, 375, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 378, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 380, 0, 0, 381, 0, 382, 0, 0, 383, 384, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 386, 0, 0, 387, 0, 0, 388, 0, 0,
    389, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 392, 0, 0, 0, 393, 0, 394, 0, 0, 395, 0, 0, 396, 0, 0,
    397, 0, 0, 398, 0, 0, 0, 399, 0, 400, 0, 0, 401, 0, 0, 402, 0, 0, 403, 0, 0, 404, 0, 0, 0, 405, 0, 406, 0, 0, 407, 0,
    0, 408, 0, 0, 409, 0, 0, 410, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 413, 0, 0, 414, 0, 415, 0,
    0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 418, 0, 419, 0, 0, 0, 420, 0, 0, 421, 0, 422, 0, 0, 423, 424, 0,
    0, 0, 0, 0, 425, 0, 0, 0, 426, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 429, 0, 430, 0, 0, 431, 0, 0, 432,
    0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0,
    0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 439, 0,
    0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 442, 0, 0, 443, 0, 444, 0, 0, 445, 0, 446, 0, 0,
    447, 448, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 451, 0, 0, 452, 0, 453, 0, 454, 0,
    0, 455, 0, 456, 0, 0, 457, 0, 0, 0, 0, 458, 0, 459, 0, 460, 0, 461, 0, 462, 463, 0, 0, 464, 0, 0, 465, 0, 0, 466, 0, 467,
    0, 0, 0, 0, 468, 0, 0, 0, 0, 469, 0, 470, 0, 471, 0, 0, 0, 0, 0, 472, 0, 473, 474, 0, 0, 0, 0, 475, 0, 0, 476, 0,
    0, 477, 0, 478, 479, 0, 0, 0, 480, 0, 0, 481, 0, 482, 483, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 485, 486, 0, 0, 0, 0, 0,
    0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 488, 489, 0, 0, 0, 0, 0, 0, 490, 0, 491, 0, 0, 492, 493, 0, 494, 0, 495, 0, 0, 496,
    0, 0, 0, 0, 0, 497, 0, 0, 0, 0, 0, 0, 0, 0, 498, 0, 0, 499, 0, 500, 501, 0, 0, 502, 0, 503, 0, 0, 504, 505, 0, 0,
    0, 0, 0, 506, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 508, 0, 509, 510, 0, 511, 0, 0, 512, 0, 0, 0, 0, 0, 513, 0, 0,
    514, 0, 0, 515, 0, 0, 0, 0, 516, 0, 0, 0, 0, 517, 0, 0, 0, 0, 0, 0, 0, 0, 518, 0, 519, 0, 0, 0, 520, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 521, 0, 0, 0, 522, 0, 0, 0, 0, 0, 0, 0, 0, 523, 0, 524, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 525, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 526, 0, 0, 0, 527, 0, 528, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 529, 0, 0, 0, 0, 0, 530, 0, 531, 0, 0, 532, 0, 533, 0, 534, 0, 535, 0, 536, 0, 0, 0,
    0, 0, 0, 0, 0, 537, 0, 538, 0, 539, 0, 0, 0, 0, 0, 0, 540, 0, 541, 0, 0, 542, 0, 0, 0, 0, 543, 0, 544, 0, 0, 0,
    0, 0, 545, 0, 0, 546, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 547, 0, 0, 0, 0, 0, 0, 548, 0, 0, 0, 0, 0, 0, 549,
    0, 0, 550, 0, 0, 551, 0, 552, 0, 0, 553, 0, 554, 0, 0, 555, 0, 556, 0, 0, 557, 0, 558, 0, 0, 0, 0, 0, 559, 0, 0, 0,
    0, 560, 0, 0, 0, 0, 0, 0, 0, 0, 561, 0, 0, 0, 0, 0, 562, 0, 0, 0, 0, 0, 0, 563, 0, 564, 0, 565, 0, 0, 0, 0,
    0, 0, 0, 0, 566, 0, 0, 567, 0, 568, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 569, 0, 0, 0, 0, 0, 0, 0, 570, 0,
    571, 0, 572, 0, 0, 0, 0, 573, 0, 574, 0, 0, 0, 0, 0, 575, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 576, 0, 0, 0, 0,
    0, 577, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 578, 0, 0, 0, 0, 0, 579, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 580,
    0, 0, 0, 0, 0, 581, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 582, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 583, 0, 0, 0, 0, 0, 584, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 585, 0, 586, 0, 0, 0, 0, 0,
    587, 0, 0, 0, 0, 0, 588, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 589, 590, 0, 0, 0, 0, 0, 591, 0, 0, 0, 0, 0, 592,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 593, 0, 0, 0, 0, 0, 594, 0, 0, 0, 0, 0, 595, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 596, 0, 597, 0, 0, 0, 0, 0, 598, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 599, 0, 0, 0, 0, 0, 600,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 601, 0, 0, 0, 0, 0, 602, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 603, 0, 0, 0,
    0, 0, 0, 0, 604, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 605, 0, 606, 0, 0, 0, 0, 0, 607, 0, 0, 0, 0, 0, 608, 0, 0,
    0, 0, 609, 610, 0, 611, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 612, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    613, 0, 614, 0, 0, 0, 0, 0, 0, 0, 0, 0, 615, 0, 616, 0, 0, 617, 0, 618, 0, 0, 0, 0, 619, 0, 0, 620, 0, 0, 0, 621,
    0, 622, 0, 623, 0, 624, 0, 625, 0, 626, 627, 0, 0, 0, 0, 628, 0, 0, 629, 0, 630, 0, 631, 0, 0, 0, 632, 0, 0, 633, 0, 0,
    0, 634, 0, 635, 0, 636, 0, 0, 637, 0, 638, 0, 0, 0, 0, 0, 0, 639, 0, 640, 0, 641, 0, 642, 0, 643, 0, 644, 0, 645, 0, 646,
    0, 647, 0, 648, 0, 0, 0, 0, 0, 0, 649, 0, 0, 0, 0, 0, 650, 0, 0, 651, 0, 652, 0, 0, 0, 0, 0, 0, 0, 653, 0, 654,
    0, 0, 655, 0, 0, 0, 0, 0, 0, 0, 656, 0, 657, 0, 658, 659, 0, 0, 660, 0, 0, 0, 0, 0, 0, 661, 0, 0, 0, 0, 662, 0,
    0, 0, 663, 0, 0, 664, 0, 665, 0, 0, 0, 0, 0, 666, 0, 0, 667, 0, 0, 668, 0, 669, 0, 670, 0, 671, 672, 0, 0, 0, 0, 0,
    673, 0, 674, 0, 0, 675, 0, 676, 0, 677, 0, 678, 0, 679, 0, 680, 0, 0, 681, 0, 682, 0, 683, 0, 684, 0, 685, 0, 0, 0, 686, 0,
    687, 0, 688, 0, 689, 690, 0, 0, 691, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 692, 0, 0,
    0, 0, 0, 0, 693, 0, 0, 0, 694, 0, 695, 0, 0, 0, 0, 0, 0, 0, 0, 696, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 697, 0, 0, 0, 0, 0, 0, 0, 0, 698, 0, 0, 699, 0, 0, 700, 0, 0, 0, 701, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 702, 0, 0, 0, 0, 0, 703, 0, 0, 0, 704, 0, 705, 0, 0, 0, 0, 706, 0, 0, 0, 0, 707, 0, 708, 0, 0,
    0, 0, 709, 0, 710, 711, 0, 0, 0, 0, 712, 0, 0, 0, 713, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 714, 0, 0, 0, 0, 715,
    0, 0, 0, 716, 0, 0, 717, 0, 0, 0, 0, 718, 0, 719, 0, 0, 720, 0, 0, 0, 0, 721, 0, 722, 0, 0, 0, 0, 723, 0, 724, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 725, 0, 0, 0, 726, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 727, 0,
    0, 728, 0, 729, 0, 730, 0, 731, 732, 0, 0, 0, 0, 0, 0, 733, 0, 0, 0, 734, 0, 735, 0, 736, 0, 737, 0, 0, 738, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 739, 0, 0, 0, 740, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 741,
    0, 0, 0, 742, 0, 743, 0, 744, 0, 0, 0, 745, 0, 0, 0, 0, 746, 0, 0, 0, 0, 0, 0, 747, 0, 0, 748, 0, 749, 750, 0, 751,
    0, 0, 0, 0, 0, 0, 752, 0, 753, 0, 754, 755, 0, 756, 0, 757, 758, 0, 759, 0, 0, 0, 0, 0, 760, 0, 0, 761, 0, 0, 0, 762,
    0, 763, 0, 764, 0, 765, 0, 0, 0, 0, 0, 766, 0, 767, 0, 0, 0, 768, 0, 0, 0, 0, 0, 0, 0, 769, 0, 0, 770, 0, 0, 0,
    0, 0, 0, 771, 0, 0, 0, 0, 0, 772, 0, 773, 0, 774, 775, 0, 0, 776, 0, 0, 777, 0, 778, 0, 0, 0, 0, 779, 0, 0, 780, 0,
    0, 781, 0, 0, 0, 782, 0, 0, 0, 0, 0, 0, 783, 0, 784, 0, 785, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 786, 0, 0, 0, 0,
    787, 0, 788, 0, 789, 0, 790, 0, 0, 791, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 792, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    793, 0, 0, 0, 794, 0, 0, 0, 0, 795, 0, 796, 0, 797, 0, 798, 0, 0, 0, 0, 0, 0, 0, 0, 799, 0, 800, 0, 0, 0, 0, 0,
    801, 0, 0, 802, 0, 0, 0, 0, 803, 0, 804, 0, 805, 0, 806, 0, 0, 0, 807, 0, 0, 0, 0, 0, 0, 808, 0, 809, 0, 0, 0, 810,
    0, 811, 0, 812, 0, 813, 0, 814, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 815, 0, 816, 0,
    0, 0, 817, 0, 0, 0, 0, 0, 0, 0, 0, 818, 0, 0, 819, 0, 0, 0, 820, 0, 0, 0, 0, 821, 0, 822, 0, 823, 0, 824, 0, 0,
    0, 825, 0, 0, 0, 0, 0, 826, 0, 0, 0, 827, 0, 0, 0, 0, 0, 0, 828, 0, 0, 0, 829, 0, 0, 0, 0, 0, 0, 830, 0, 0,
    0, 831, 0, 0, 0, 0, 0, 0, 832, 0, 0, 0, 833, 0, 0, 0, 0, 0, 0, 834, 0, 835, 0, 0, 0, 836, 0, 0, 0, 837, 0, 838,
    0, 0, 839, 0, 0, 0, 0, 0, 0, 0, 0, 840, 0, 0, 0, 0, 841, 0, 842, 0, 0, 843, 844, 0, 0, 0, 0, 0, 0, 0, 845, 0,
    0, 0, 0, 0, 0, 846, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 847, 0, 848, 0, 849, 0, 850, 0, 851, 0, 852, 0, 853, 0, 854, 0, 855, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 856, 0, 0, 0, 0, 0, 857, 858, 0, 0, 0, 0, 0, 0, 0, 0, 0, 859, 0, 0,
    860, 0, 0, 0, 0, 0, 0, 861, 0, 862, 0, 0, 0, 0, 0, 0, 863, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 864, 0, 0, 0, 0,
    865, 0, 866, 0, 0, 0, 867, 0, 0, 0, 868, 0, 0, 0, 0, 869, 870, 871, 0, 0, 0, 872, 0, 0, 0, 873, 0, 0, 874, 0, 0, 875,
    0, 0, 0, 0, 876, 0, 0, 877, 878, 0, 0, 0, 0, 879, 0, 0, 0, 880, 0, 881, 0, 882, 0, 0, 883, 0, 0, 0, 0, 0, 0, 884,
    0, 0, 0, 0, 885, 0, 886, 0, 0, 887, 0, 0, 888, 0, 0, 889, 0, 890, 0, 891, 0, 892, 0, 0, 893, 0, 894, 0, 895, 0, 896, 0,
    0, 897, 0, 898, 0, 899, 0, 900, 0, 901, 0, 0, 902, 0, 903, 0, 904, 0, 0, 905, 0, 0, 906, 0, 0, 0, 0, 907, 0, 0, 908, 909,
    0, 0, 0, 0, 910, 0, 0, 0, 911, 0, 912, 0, 913, 0, 0, 914, 0, 0, 0, 0, 0, 0, 915, 0, 916, 0, 0, 917, 0, 0, 918, 0,
    919, 0, 920, 0, 921, 0, 922, 0, 0, 923, 0, 924, 0, 925, 0, 0, 926, 0, 927, 0, 928, 0, 0, 929, 0, 930, 0, 931, 0, 932, 933, 0,
    934, 0, 0, 0, 0, 0, 935, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 936, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 937, 938, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 939,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 940, 941, 0, 942, 0, 0, 0, 0, 943, 0, 0, 944, 0, 0, 0, 0, 945, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 946, 0, 0, 0, 0, 0, 0, 0, 0, 947, 0, 948, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 949, 0, 0, 0, 0, 950, 0, 0, 0, 0, 0, 0, 951, 0, 952, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 953, 0, 0, 954, 0, 0, 0, 0, 0, 955, 0, 0, 0, 0, 0, 0, 0, 0, 956, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 957, 0, 0, 958, 0, 0, 0, 0, 0, 0, 959, 0, 0, 960, 0, 0, 0, 0, 0, 961,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 962, 0, 0, 963, 0, 0, 0, 0, 964, 0, 965,
};
void recomp_unit_0096_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08984004u;
        entry_id = (entry_delta < 16360u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0096[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08984004;
    case 2u: goto L_08984010;
    case 3u: goto L_08984018;
    case 4u: goto L_08984024;
    case 5u: goto L_08984034;
    case 6u: goto L_08984040;
    case 7u: goto L_08984050;
    case 8u: goto L_08984058;
    case 9u: goto L_0898406C;
    case 10u: goto L_08984080;
    case 11u: goto L_0898408C;
    case 12u: goto L_0898409C;
    case 13u: goto L_089840A4;
    case 14u: goto L_089840B4;
    case 15u: goto L_089840BC;
    case 16u: goto L_089840C4;
    case 17u: goto L_089840CC;
    case 18u: goto L_089840D8;
    case 19u: goto L_089840E0;
    case 20u: goto L_089840E8;
    case 21u: goto L_089840F4;
    case 22u: goto L_08984108;
    case 23u: goto L_08984114;
    case 24u: goto L_08984124;
    case 25u: goto L_0898412C;
    case 26u: goto L_0898413C;
    case 27u: goto L_08984144;
    case 28u: goto L_0898414C;
    case 29u: goto L_0898415C;
    case 30u: goto L_08984170;
    case 31u: goto L_0898417C;
    case 32u: goto L_08984188;
    case 33u: goto L_08984198;
    case 34u: goto L_089841A4;
    case 35u: goto L_089841B0;
    case 36u: goto L_089841C0;
    case 37u: goto L_089841CC;
    case 38u: goto L_089841D8;
    case 39u: goto L_089841E8;
    case 40u: goto L_089841F4;
    case 41u: goto L_08984200;
    case 42u: goto L_08984210;
    case 43u: goto L_0898421C;
    case 44u: goto L_08984228;
    case 45u: goto L_08984238;
    case 46u: goto L_08984240;
    case 47u: goto L_08984250;
    case 48u: goto L_0898425C;
    case 49u: goto L_08984274;
    case 50u: goto L_0898428C;
    case 51u: goto L_089842B0;
    case 52u: goto L_089842C4;
    case 53u: goto L_089842C8;
    case 54u: goto L_089842CC;
    case 55u: goto L_089842D4;
    case 56u: goto L_08984304;
    case 57u: goto L_08984328;
    case 58u: goto L_08984330;
    case 59u: goto L_08984338;
    case 60u: goto L_08984344;
    case 61u: goto L_08984350;
    case 62u: goto L_08984358;
    case 63u: goto L_08984360;
    case 64u: goto L_08984378;
    case 65u: goto L_08984394;
    case 66u: goto L_0898439C;
    case 67u: goto L_089843A8;
    case 68u: goto L_089843B0;
    case 69u: goto L_089843C4;
    case 70u: goto L_089843E4;
    case 71u: goto L_089843F8;
    case 72u: goto L_08984404;
    case 73u: goto L_08984420;
    case 74u: goto L_08984428;
    case 75u: goto L_08984434;
    case 76u: goto L_08984440;
    case 77u: goto L_08984448;
    case 78u: goto L_0898444C;
    case 79u: goto L_08984454;
    case 80u: goto L_0898445C;
    case 81u: goto L_0898446C;
    case 82u: goto L_08984474;
    case 83u: goto L_0898447C;
    case 84u: goto L_08984494;
    case 85u: goto L_089844B0;
    case 86u: goto L_089844BC;
    case 87u: goto L_089844D8;
    case 88u: goto L_089844E0;
    case 89u: goto L_089844FC;
    case 90u: goto L_0898451C;
    case 91u: goto L_0898452C;
    case 92u: goto L_08984538;
    case 93u: goto L_08984544;
    case 94u: goto L_0898454C;
    case 95u: goto L_0898455C;
    case 96u: goto L_08984564;
    case 97u: goto L_08984570;
    case 98u: goto L_08984574;
    case 99u: goto L_0898458C;
    case 100u: goto L_089845A8;
    case 101u: goto L_089845B0;
    case 102u: goto L_089845B4;
    case 103u: goto L_089845C0;
    case 104u: goto L_089845E0;
    case 105u: goto L_089845F0;
    case 106u: goto L_089845FC;
    case 107u: goto L_08984608;
    case 108u: goto L_08984610;
    case 109u: goto L_08984620;
    case 110u: goto L_08984628;
    case 111u: goto L_08984634;
    case 112u: goto L_08984638;
    case 113u: goto L_08984650;
    case 114u: goto L_08984668;
    case 115u: goto L_08984674;
    case 116u: goto L_0898467C;
    case 117u: goto L_08984688;
    case 118u: goto L_0898468C;
    case 119u: goto L_08984694;
    case 120u: goto L_0898469C;
    case 121u: goto L_089846A8;
    case 122u: goto L_089846AC;
    case 123u: goto L_089846B4;
    case 124u: goto L_089846BC;
    case 125u: goto L_089846C8;
    case 126u: goto L_089846CC;
    case 127u: goto L_089846E0;
    case 128u: goto L_089846EC;
    case 129u: goto L_089846F4;
    case 130u: goto L_08984700;
    case 131u: goto L_08984704;
    case 132u: goto L_0898470C;
    case 133u: goto L_08984714;
    case 134u: goto L_08984720;
    case 135u: goto L_08984724;
    case 136u: goto L_0898472C;
    case 137u: goto L_08984738;
    case 138u: goto L_0898473C;
    case 139u: goto L_08984744;
    case 140u: goto L_0898474C;
    case 141u: goto L_08984754;
    case 142u: goto L_0898475C;
    case 143u: goto L_08984768;
    case 144u: goto L_0898476C;
    case 145u: goto L_08984774;
    case 146u: goto L_0898477C;
    case 147u: goto L_08984788;
    case 148u: goto L_0898478C;
    case 149u: goto L_08984794;
    case 150u: goto L_089847A0;
    case 151u: goto L_089847A4;
    case 152u: goto L_089847AC;
    case 153u: goto L_089847F4;
    case 154u: goto L_08984814;
    case 155u: goto L_0898481C;
    case 156u: goto L_08984820;
    case 157u: goto L_0898482C;
    case 158u: goto L_08984848;
    case 159u: goto L_0898485C;
    case 160u: goto L_08984864;
    case 161u: goto L_08984870;
    case 162u: goto L_0898487C;
    case 163u: goto L_08984884;
    case 164u: goto L_08984890;
    case 165u: goto L_08984898;
    case 166u: goto L_089848A0;
    case 167u: goto L_089848D0;
    case 168u: goto L_089848E0;
    case 169u: goto L_089848E8;
    case 170u: goto L_089848F4;
    case 171u: goto L_08984904;
    case 172u: goto L_08984910;
    case 173u: goto L_0898491C;
    case 174u: goto L_08984924;
    case 175u: goto L_0898492C;
    case 176u: goto L_08984938;
    case 177u: goto L_08984948;
    case 178u: goto L_08984954;
    case 179u: goto L_08984960;
    case 180u: goto L_08984978;
    case 181u: goto L_089849C0;
    case 182u: goto L_089849DC;
    case 183u: goto L_089849E8;
    case 184u: goto L_089849FC;
    case 185u: goto L_08984A08;
    case 186u: goto L_08984A1C;
    case 187u: goto L_08984A24;
    case 188u: goto L_08984A3C;
    case 189u: goto L_08984A48;
    case 190u: goto L_08984A50;
    case 191u: goto L_08984A54;
    case 192u: goto L_08984A60;
    case 193u: goto L_08984A68;
    case 194u: goto L_08984A74;
    case 195u: goto L_08984A7C;
    case 196u: goto L_08984A80;
    case 197u: goto L_08984A88;
    case 198u: goto L_08984A90;
    case 199u: goto L_08984AA0;
    case 200u: goto L_08984AA8;
    case 201u: goto L_08984AB0;
    case 202u: goto L_08984AC4;
    case 203u: goto L_08984AE4;
    case 204u: goto L_08984AEC;
    case 205u: goto L_08984AF0;
    case 206u: goto L_08984AFC;
    case 207u: goto L_08984B04;
    case 208u: goto L_08984B18;
    case 209u: goto L_08984B40;
    case 210u: goto L_08984B54;
    case 211u: goto L_08984B5C;
    case 212u: goto L_08984B68;
    case 213u: goto L_08984B7C;
    case 214u: goto L_08984B84;
    case 215u: goto L_08984B9C;
    case 216u: goto L_08984BA8;
    case 217u: goto L_08984BD0;
    case 218u: goto L_08984BE0;
    case 219u: goto L_08984BEC;
    case 220u: goto L_08984BF8;
    case 221u: goto L_08984C00;
    case 222u: goto L_08984C10;
    case 223u: goto L_08984C18;
    case 224u: goto L_08984C24;
    case 225u: goto L_08984C28;
    case 226u: goto L_08984C44;
    case 227u: goto L_08984C64;
    case 228u: goto L_08984C78;
    case 229u: goto L_08984C8C;
    case 230u: goto L_08984CA4;
    case 231u: goto L_08984CC0;
    case 232u: goto L_08984CD4;
    case 233u: goto L_08984CE0;
    case 234u: goto L_08984CEC;
    case 235u: goto L_08984CF8;
    case 236u: goto L_08984D00;
    case 237u: goto L_08984D14;
    case 238u: goto L_08984D24;
    case 239u: goto L_08984D30;
    case 240u: goto L_08984D3C;
    case 241u: goto L_08984D44;
    case 242u: goto L_08984D4C;
    case 243u: goto L_08984D50;
    case 244u: goto L_08984D5C;
    case 245u: goto L_08984D94;
    case 246u: goto L_08984DA0;
    case 247u: goto L_08984DAC;
    case 248u: goto L_08984DB8;
    case 249u: goto L_08984DC0;
    case 250u: goto L_08984DCC;
    case 251u: goto L_08984DD4;
    case 252u: goto L_08984E20;
    case 253u: goto L_08984E2C;
    case 254u: goto L_08984E3C;
    case 255u: goto L_08984E44;
    case 256u: goto L_08984E50;
    case 257u: goto L_08984E58;
    case 258u: goto L_08984E60;
    case 259u: goto L_08984E6C;
    case 260u: goto L_08984E84;
    case 261u: goto L_08984EA8;
    case 262u: goto L_08984ECC;
    case 263u: goto L_08984ED8;
    case 264u: goto L_08984EE4;
    case 265u: goto L_08984EEC;
    case 266u: goto L_08984EF8;
    case 267u: goto L_08984EFC;
    case 268u: goto L_08984F08;
    case 269u: goto L_08984F10;
    case 270u: goto L_08984F1C;
    case 271u: goto L_08984F20;
    case 272u: goto L_08984F38;
    case 273u: goto L_08984F5C;
    case 274u: goto L_08984F70;
    case 275u: goto L_08984F78;
    case 276u: goto L_08984F84;
    case 277u: goto L_08984F8C;
    case 278u: goto L_08984F98;
    case 279u: goto L_08984FA0;
    case 280u: goto L_08984FAC;
    case 281u: goto L_08984FB4;
    case 282u: goto L_08984FC0;
    case 283u: goto L_08984FCC;
    case 284u: goto L_08984FE4;
    case 285u: goto L_08984FF0;
    case 286u: goto L_08984FFC;
    case 287u: goto L_08985018;
    case 288u: goto L_08985038;
    case 289u: goto L_08985040;
    case 290u: goto L_0898504C;
    case 291u: goto L_08985054;
    case 292u: goto L_08985060;
    case 293u: goto L_08985070;
    case 294u: goto L_08985078;
    case 295u: goto L_08985094;
    case 296u: goto L_0898509C;
    case 297u: goto L_089850B8;
    case 298u: goto L_089850E4;
    case 299u: goto L_089850F0;
    case 300u: goto L_089850F8;
    case 301u: goto L_08985104;
    case 302u: goto L_08985118;
    case 303u: goto L_08985120;
    case 304u: goto L_0898512C;
    case 305u: goto L_08985148;
    case 306u: goto L_08985150;
    case 307u: goto L_0898515C;
    case 308u: goto L_08985168;
    case 309u: goto L_08985178;
    case 310u: goto L_08985184;
    case 311u: goto L_089851A0;
    case 312u: goto L_089851AC;
    case 313u: goto L_089851B8;
    case 314u: goto L_089851C4;
    case 315u: goto L_089851CC;
    case 316u: goto L_089851D8;
    case 317u: goto L_089851E4;
    case 318u: goto L_089851EC;
    case 319u: goto L_089851F8;
    case 320u: goto L_08985214;
    case 321u: goto L_08985230;
    case 322u: goto L_08985248;
    case 323u: goto L_08985254;
    case 324u: goto L_0898525C;
    case 325u: goto L_08985270;
    case 326u: goto L_08985294;
    case 327u: goto L_089852A0;
    case 328u: goto L_089852A8;
    case 329u: goto L_089852B8;
    case 330u: goto L_089852C4;
    case 331u: goto L_089852CC;
    case 332u: goto L_089852D8;
    case 333u: goto L_089852DC;
    case 334u: goto L_089852F4;
    case 335u: goto L_08985304;
    case 336u: goto L_08985310;
    case 337u: goto L_08985334;
    case 338u: goto L_08985340;
    case 339u: goto L_08985348;
    case 340u: goto L_08985354;
    case 341u: goto L_08985360;
    case 342u: goto L_08985374;
    case 343u: goto L_08985398;
    case 344u: goto L_089853A4;
    case 345u: goto L_089853AC;
    case 346u: goto L_089853C4;
    case 347u: goto L_089853C8;
    case 348u: goto L_089853D4;
    case 349u: goto L_089853DC;
    case 350u: goto L_089853E8;
    case 351u: goto L_089853EC;
    case 352u: goto L_08985404;
    case 353u: goto L_08985414;
    case 354u: goto L_08985420;
    case 355u: goto L_08985430;
    case 356u: goto L_0898543C;
    case 357u: goto L_08985458;
    case 358u: goto L_08985470;
    case 359u: goto L_0898547C;
    case 360u: goto L_08985484;
    case 361u: goto L_08985488;
    case 362u: goto L_08985494;
    case 363u: goto L_0898549C;
    case 364u: goto L_089854A8;
    case 365u: goto L_089854B0;
    case 366u: goto L_089854B4;
    case 367u: goto L_089854C0;
    case 368u: goto L_089854C8;
    case 369u: goto L_089854D4;
    case 370u: goto L_089854DC;
    case 371u: goto L_089854E0;
    case 372u: goto L_089854EC;
    case 373u: goto L_089854F4;
    case 374u: goto L_08985500;
    case 375u: goto L_08985508;
    case 376u: goto L_0898551C;
    case 377u: goto L_08985540;
    case 378u: goto L_0898554C;
    case 379u: goto L_08985554;
    case 380u: goto L_08985588;
    case 381u: goto L_08985594;
    case 382u: goto L_0898559C;
    case 383u: goto L_089855A8;
    case 384u: goto L_089855AC;
    case 385u: goto L_089855C4;
    case 386u: goto L_089855E0;
    case 387u: goto L_089855EC;
    case 388u: goto L_089855F8;
    case 389u: goto L_08985604;
    case 390u: goto L_08985618;
    case 391u: goto L_0898563C;
    case 392u: goto L_08985648;
    case 393u: goto L_08985658;
    case 394u: goto L_08985660;
    case 395u: goto L_0898566C;
    case 396u: goto L_08985678;
    case 397u: goto L_08985684;
    case 398u: goto L_08985690;
    case 399u: goto L_089856A0;
    case 400u: goto L_089856A8;
    case 401u: goto L_089856B4;
    case 402u: goto L_089856C0;
    case 403u: goto L_089856CC;
    case 404u: goto L_089856D8;
    case 405u: goto L_089856E8;
    case 406u: goto L_089856F0;
    case 407u: goto L_089856FC;
    case 408u: goto L_08985708;
    case 409u: goto L_08985714;
    case 410u: goto L_08985720;
    case 411u: goto L_08985734;
    case 412u: goto L_08985750;
    case 413u: goto L_08985768;
    case 414u: goto L_08985774;
    case 415u: goto L_0898577C;
    case 416u: goto L_08985790;
    case 417u: goto L_089857B4;
    case 418u: goto L_089857C0;
    case 419u: goto L_089857C8;
    case 420u: goto L_089857D8;
    case 421u: goto L_089857E4;
    case 422u: goto L_089857EC;
    case 423u: goto L_089857F8;
    case 424u: goto L_089857FC;
    case 425u: goto L_08985814;
    case 426u: goto L_08985824;
    case 427u: goto L_08985830;
    case 428u: goto L_08985854;
    case 429u: goto L_08985860;
    case 430u: goto L_08985868;
    case 431u: goto L_08985874;
    case 432u: goto L_08985880;
    case 433u: goto L_08985894;
    case 434u: goto L_089858AC;
    case 435u: goto L_089858EC;
    case 436u: goto L_08985908;
    case 437u: goto L_0898592C;
    case 438u: goto L_08985968;
    case 439u: goto L_0898597C;
    case 440u: goto L_089859A0;
    case 441u: goto L_089859C4;
    case 442u: goto L_089859D0;
    case 443u: goto L_089859DC;
    case 444u: goto L_089859E4;
    case 445u: goto L_089859F0;
    case 446u: goto L_089859F8;
    case 447u: goto L_08985A04;
    case 448u: goto L_08985A08;
    case 449u: goto L_08985A1C;
    case 450u: goto L_08985A48;
    case 451u: goto L_08985A60;
    case 452u: goto L_08985A6C;
    case 453u: goto L_08985A74;
    case 454u: goto L_08985A7C;
    case 455u: goto L_08985A88;
    case 456u: goto L_08985A90;
    case 457u: goto L_08985A9C;
    case 458u: goto L_08985AB0;
    case 459u: goto L_08985AB8;
    case 460u: goto L_08985AC0;
    case 461u: goto L_08985AC8;
    case 462u: goto L_08985AD0;
    case 463u: goto L_08985AD4;
    case 464u: goto L_08985AE0;
    case 465u: goto L_08985AEC;
    case 466u: goto L_08985AF8;
    case 467u: goto L_08985B00;
    case 468u: goto L_08985B14;
    case 469u: goto L_08985B28;
    case 470u: goto L_08985B30;
    case 471u: goto L_08985B38;
    case 472u: goto L_08985B50;
    case 473u: goto L_08985B58;
    case 474u: goto L_08985B5C;
    case 475u: goto L_08985B70;
    case 476u: goto L_08985B7C;
    case 477u: goto L_08985B88;
    case 478u: goto L_08985B90;
    case 479u: goto L_08985B94;
    case 480u: goto L_08985BA4;
    case 481u: goto L_08985BB0;
    case 482u: goto L_08985BB8;
    case 483u: goto L_08985BBC;
    case 484u: goto L_08985BCC;
    case 485u: goto L_08985BE8;
    case 486u: goto L_08985BEC;
    case 487u: goto L_08985C0C;
    case 488u: goto L_08985C2C;
    case 489u: goto L_08985C30;
    case 490u: goto L_08985C4C;
    case 491u: goto L_08985C54;
    case 492u: goto L_08985C60;
    case 493u: goto L_08985C64;
    case 494u: goto L_08985C6C;
    case 495u: goto L_08985C74;
    case 496u: goto L_08985C80;
    case 497u: goto L_08985C98;
    case 498u: goto L_08985CBC;
    case 499u: goto L_08985CC8;
    case 500u: goto L_08985CD0;
    case 501u: goto L_08985CD4;
    case 502u: goto L_08985CE0;
    case 503u: goto L_08985CE8;
    case 504u: goto L_08985CF4;
    case 505u: goto L_08985CF8;
    case 506u: goto L_08985D10;
    case 507u: goto L_08985D2C;
    case 508u: goto L_08985D40;
    case 509u: goto L_08985D48;
    case 510u: goto L_08985D4C;
    case 511u: goto L_08985D54;
    case 512u: goto L_08985D60;
    case 513u: goto L_08985D78;
    case 514u: goto L_08985D84;
    case 515u: goto L_08985D90;
    case 516u: goto L_08985DA4;
    case 517u: goto L_08985DB8;
    case 518u: goto L_08985DDC;
    case 519u: goto L_08985DE4;
    case 520u: goto L_08985DF4;
    case 521u: goto L_08985E1C;
    case 522u: goto L_08985E2C;
    case 523u: goto L_08985E50;
    case 524u: goto L_08985E58;
    case 525u: goto L_08985E9C;
    case 526u: goto L_08985EE0;
    case 527u: goto L_08985EF0;
    case 528u: goto L_08985EF8;
    case 529u: goto L_08985F28;
    case 530u: goto L_08985F40;
    case 531u: goto L_08985F48;
    case 532u: goto L_08985F54;
    case 533u: goto L_08985F5C;
    case 534u: goto L_08985F64;
    case 535u: goto L_08985F6C;
    case 536u: goto L_08985F74;
    case 537u: goto L_08985F98;
    case 538u: goto L_08985FA0;
    case 539u: goto L_08985FA8;
    case 540u: goto L_08985FC4;
    case 541u: goto L_08985FCC;
    case 542u: goto L_08985FD8;
    case 543u: goto L_08985FEC;
    case 544u: goto L_08985FF4;
    case 545u: goto L_0898600C;
    case 546u: goto L_08986018;
    case 547u: goto L_08986048;
    case 548u: goto L_08986064;
    case 549u: goto L_08986080;
    case 550u: goto L_0898608C;
    case 551u: goto L_08986098;
    case 552u: goto L_089860A0;
    case 553u: goto L_089860AC;
    case 554u: goto L_089860B4;
    case 555u: goto L_089860C0;
    case 556u: goto L_089860C8;
    case 557u: goto L_089860D4;
    case 558u: goto L_089860DC;
    case 559u: goto L_089860F4;
    case 560u: goto L_08986108;
    case 561u: goto L_0898612C;
    case 562u: goto L_08986144;
    case 563u: goto L_08986160;
    case 564u: goto L_08986168;
    case 565u: goto L_08986170;
    case 566u: goto L_08986194;
    case 567u: goto L_089861A0;
    case 568u: goto L_089861A8;
    case 569u: goto L_089861DC;
    case 570u: goto L_089861FC;
    case 571u: goto L_08986204;
    case 572u: goto L_0898620C;
    case 573u: goto L_08986220;
    case 574u: goto L_08986228;
    case 575u: goto L_08986240;
    case 576u: goto L_08986270;
    case 577u: goto L_08986288;
    case 578u: goto L_089862B8;
    case 579u: goto L_089862D0;
    case 580u: goto L_08986300;
    case 581u: goto L_08986318;
    case 582u: goto L_0898634C;
    case 583u: goto L_0898639C;
    case 584u: goto L_089863B4;
    case 585u: goto L_089863E4;
    case 586u: goto L_089863EC;
    case 587u: goto L_08986404;
    case 588u: goto L_0898641C;
    case 589u: goto L_0898644C;
    case 590u: goto L_08986450;
    case 591u: goto L_08986468;
    case 592u: goto L_08986480;
    case 593u: goto L_089864B4;
    case 594u: goto L_089864CC;
    case 595u: goto L_089864E4;
    case 596u: goto L_08986518;
    case 597u: goto L_08986520;
    case 598u: goto L_08986538;
    case 599u: goto L_08986568;
    case 600u: goto L_08986580;
    case 601u: goto L_089865AC;
    case 602u: goto L_089865C4;
    case 603u: goto L_089865F4;
    case 604u: goto L_08986614;
    case 605u: goto L_08986640;
    case 606u: goto L_08986648;
    case 607u: goto L_08986660;
    case 608u: goto L_08986678;
    case 609u: goto L_0898668C;
    case 610u: goto L_08986690;
    case 611u: goto L_08986698;
    case 612u: goto L_089866C4;
    case 613u: goto L_08986704;
    case 614u: goto L_0898670C;
    case 615u: goto L_08986734;
    case 616u: goto L_0898673C;
    case 617u: goto L_08986748;
    case 618u: goto L_08986750;
    case 619u: goto L_08986764;
    case 620u: goto L_08986770;
    case 621u: goto L_08986780;
    case 622u: goto L_08986788;
    case 623u: goto L_08986790;
    case 624u: goto L_08986798;
    case 625u: goto L_089867A0;
    case 626u: goto L_089867A8;
    case 627u: goto L_089867AC;
    case 628u: goto L_089867C0;
    case 629u: goto L_089867CC;
    case 630u: goto L_089867D4;
    case 631u: goto L_089867DC;
    case 632u: goto L_089867EC;
    case 633u: goto L_089867F8;
    case 634u: goto L_08986808;
    case 635u: goto L_08986810;
    case 636u: goto L_08986818;
    case 637u: goto L_08986824;
    case 638u: goto L_0898682C;
    case 639u: goto L_08986848;
    case 640u: goto L_08986850;
    case 641u: goto L_08986858;
    case 642u: goto L_08986860;
    case 643u: goto L_08986868;
    case 644u: goto L_08986870;
    case 645u: goto L_08986878;
    case 646u: goto L_08986880;
    case 647u: goto L_08986888;
    case 648u: goto L_08986890;
    case 649u: goto L_089868AC;
    case 650u: goto L_089868C4;
    case 651u: goto L_089868D0;
    case 652u: goto L_089868D8;
    case 653u: goto L_089868F8;
    case 654u: goto L_08986900;
    case 655u: goto L_0898690C;
    case 656u: goto L_0898692C;
    case 657u: goto L_08986934;
    case 658u: goto L_0898693C;
    case 659u: goto L_08986940;
    case 660u: goto L_0898694C;
    case 661u: goto L_08986968;
    case 662u: goto L_0898697C;
    case 663u: goto L_0898698C;
    case 664u: goto L_08986998;
    case 665u: goto L_089869A0;
    case 666u: goto L_089869B8;
    case 667u: goto L_089869C4;
    case 668u: goto L_089869D0;
    case 669u: goto L_089869D8;
    case 670u: goto L_089869E0;
    case 671u: goto L_089869E8;
    case 672u: goto L_089869EC;
    case 673u: goto L_08986A04;
    case 674u: goto L_08986A0C;
    case 675u: goto L_08986A18;
    case 676u: goto L_08986A20;
    case 677u: goto L_08986A28;
    case 678u: goto L_08986A30;
    case 679u: goto L_08986A38;
    case 680u: goto L_08986A40;
    case 681u: goto L_08986A4C;
    case 682u: goto L_08986A54;
    case 683u: goto L_08986A5C;
    case 684u: goto L_08986A64;
    case 685u: goto L_08986A6C;
    case 686u: goto L_08986A7C;
    case 687u: goto L_08986A84;
    case 688u: goto L_08986A8C;
    case 689u: goto L_08986A94;
    case 690u: goto L_08986A98;
    case 691u: goto L_08986AA4;
    case 692u: goto L_08986AF8;
    case 693u: goto L_08986B14;
    case 694u: goto L_08986B24;
    case 695u: goto L_08986B2C;
    case 696u: goto L_08986B50;
    case 697u: goto L_08986B8C;
    case 698u: goto L_08986BB0;
    case 699u: goto L_08986BBC;
    case 700u: goto L_08986BC8;
    case 701u: goto L_08986BD8;
    case 702u: goto L_08986C18;
    case 703u: goto L_08986C30;
    case 704u: goto L_08986C40;
    case 705u: goto L_08986C48;
    case 706u: goto L_08986C5C;
    case 707u: goto L_08986C70;
    case 708u: goto L_08986C78;
    case 709u: goto L_08986C8C;
    case 710u: goto L_08986C94;
    case 711u: goto L_08986C98;
    case 712u: goto L_08986CAC;
    case 713u: goto L_08986CBC;
    case 714u: goto L_08986CEC;
    case 715u: goto L_08986D00;
    case 716u: goto L_08986D10;
    case 717u: goto L_08986D1C;
    case 718u: goto L_08986D30;
    case 719u: goto L_08986D38;
    case 720u: goto L_08986D44;
    case 721u: goto L_08986D58;
    case 722u: goto L_08986D60;
    case 723u: goto L_08986D74;
    case 724u: goto L_08986D7C;
    case 725u: goto L_08986DB4;
    case 726u: goto L_08986DC4;
    case 727u: goto L_08986DFC;
    case 728u: goto L_08986E08;
    case 729u: goto L_08986E10;
    case 730u: goto L_08986E18;
    case 731u: goto L_08986E20;
    case 732u: goto L_08986E24;
    case 733u: goto L_08986E40;
    case 734u: goto L_08986E50;
    case 735u: goto L_08986E58;
    case 736u: goto L_08986E60;
    case 737u: goto L_08986E68;
    case 738u: goto L_08986E74;
    case 739u: goto L_08986EAC;
    case 740u: goto L_08986EBC;
    case 741u: goto L_08986F00;
    case 742u: goto L_08986F10;
    case 743u: goto L_08986F18;
    case 744u: goto L_08986F20;
    case 745u: goto L_08986F30;
    case 746u: goto L_08986F44;
    case 747u: goto L_08986F60;
    case 748u: goto L_08986F6C;
    case 749u: goto L_08986F74;
    case 750u: goto L_08986F78;
    case 751u: goto L_08986F80;
    case 752u: goto L_08986F9C;
    case 753u: goto L_08986FA4;
    case 754u: goto L_08986FAC;
    case 755u: goto L_08986FB0;
    case 756u: goto L_08986FB8;
    case 757u: goto L_08986FC0;
    case 758u: goto L_08986FC4;
    case 759u: goto L_08986FCC;
    case 760u: goto L_08986FE4;
    case 761u: goto L_08986FF0;
    case 762u: goto L_08987000;
    case 763u: goto L_08987008;
    case 764u: goto L_08987010;
    case 765u: goto L_08987018;
    case 766u: goto L_08987030;
    case 767u: goto L_08987038;
    case 768u: goto L_08987048;
    case 769u: goto L_08987068;
    case 770u: goto L_08987074;
    case 771u: goto L_08987090;
    case 772u: goto L_089870A8;
    case 773u: goto L_089870B0;
    case 774u: goto L_089870B8;
    case 775u: goto L_089870BC;
    case 776u: goto L_089870C8;
    case 777u: goto L_089870D4;
    case 778u: goto L_089870DC;
    case 779u: goto L_089870F0;
    case 780u: goto L_089870FC;
    case 781u: goto L_08987108;
    case 782u: goto L_08987118;
    case 783u: goto L_08987134;
    case 784u: goto L_0898713C;
    case 785u: goto L_08987144;
    case 786u: goto L_08987170;
    case 787u: goto L_08987184;
    case 788u: goto L_0898718C;
    case 789u: goto L_08987194;
    case 790u: goto L_0898719C;
    case 791u: goto L_089871A8;
    case 792u: goto L_089871DC;
    case 793u: goto L_08987204;
    case 794u: goto L_08987214;
    case 795u: goto L_08987228;
    case 796u: goto L_08987230;
    case 797u: goto L_08987238;
    case 798u: goto L_08987240;
    case 799u: goto L_08987264;
    case 800u: goto L_0898726C;
    case 801u: goto L_08987284;
    case 802u: goto L_08987290;
    case 803u: goto L_089872A4;
    case 804u: goto L_089872AC;
    case 805u: goto L_089872B4;
    case 806u: goto L_089872BC;
    case 807u: goto L_089872CC;
    case 808u: goto L_089872E8;
    case 809u: goto L_089872F0;
    case 810u: goto L_08987300;
    case 811u: goto L_08987308;
    case 812u: goto L_08987310;
    case 813u: goto L_08987318;
    case 814u: goto L_08987320;
    case 815u: goto L_08987374;
    case 816u: goto L_0898737C;
    case 817u: goto L_0898738C;
    case 818u: goto L_089873B0;
    case 819u: goto L_089873BC;
    case 820u: goto L_089873CC;
    case 821u: goto L_089873E0;
    case 822u: goto L_089873E8;
    case 823u: goto L_089873F0;
    case 824u: goto L_089873F8;
    case 825u: goto L_08987408;
    case 826u: goto L_08987420;
    case 827u: goto L_08987430;
    case 828u: goto L_0898744C;
    case 829u: goto L_0898745C;
    case 830u: goto L_08987478;
    case 831u: goto L_08987488;
    case 832u: goto L_089874A4;
    case 833u: goto L_089874B4;
    case 834u: goto L_089874D0;
    case 835u: goto L_089874D8;
    case 836u: goto L_089874E8;
    case 837u: goto L_089874F8;
    case 838u: goto L_08987500;
    case 839u: goto L_0898750C;
    case 840u: goto L_08987530;
    case 841u: goto L_08987544;
    case 842u: goto L_0898754C;
    case 843u: goto L_08987558;
    case 844u: goto L_0898755C;
    case 845u: goto L_0898757C;
    case 846u: goto L_08987598;
    case 847u: goto L_089877BC;
    case 848u: goto L_089877C4;
    case 849u: goto L_089877CC;
    case 850u: goto L_089877D4;
    case 851u: goto L_089877DC;
    case 852u: goto L_089877E4;
    case 853u: goto L_089877EC;
    case 854u: goto L_089877F4;
    case 855u: goto L_089877FC;
    case 856u: goto L_08987834;
    case 857u: goto L_0898784C;
    case 858u: goto L_08987850;
    case 859u: goto L_08987878;
    case 860u: goto L_08987884;
    case 861u: goto L_089878A0;
    case 862u: goto L_089878A8;
    case 863u: goto L_089878C4;
    case 864u: goto L_089878F0;
    case 865u: goto L_08987904;
    case 866u: goto L_0898790C;
    case 867u: goto L_0898791C;
    case 868u: goto L_0898792C;
    case 869u: goto L_08987940;
    case 870u: goto L_08987944;
    case 871u: goto L_08987948;
    case 872u: goto L_08987958;
    case 873u: goto L_08987968;
    case 874u: goto L_08987974;
    case 875u: goto L_08987980;
    case 876u: goto L_08987994;
    case 877u: goto L_089879A0;
    case 878u: goto L_089879A4;
    case 879u: goto L_089879B8;
    case 880u: goto L_089879C8;
    case 881u: goto L_089879D0;
    case 882u: goto L_089879D8;
    case 883u: goto L_089879E4;
    case 884u: goto L_08987A00;
    case 885u: goto L_08987A14;
    case 886u: goto L_08987A1C;
    case 887u: goto L_08987A28;
    case 888u: goto L_08987A34;
    case 889u: goto L_08987A40;
    case 890u: goto L_08987A48;
    case 891u: goto L_08987A50;
    case 892u: goto L_08987A58;
    case 893u: goto L_08987A64;
    case 894u: goto L_08987A6C;
    case 895u: goto L_08987A74;
    case 896u: goto L_08987A7C;
    case 897u: goto L_08987A88;
    case 898u: goto L_08987A90;
    case 899u: goto L_08987A98;
    case 900u: goto L_08987AA0;
    case 901u: goto L_08987AA8;
    case 902u: goto L_08987AB4;
    case 903u: goto L_08987ABC;
    case 904u: goto L_08987AC4;
    case 905u: goto L_08987AD0;
    case 906u: goto L_08987ADC;
    case 907u: goto L_08987AF0;
    case 908u: goto L_08987AFC;
    case 909u: goto L_08987B00;
    case 910u: goto L_08987B14;
    case 911u: goto L_08987B24;
    case 912u: goto L_08987B2C;
    case 913u: goto L_08987B34;
    case 914u: goto L_08987B40;
    case 915u: goto L_08987B5C;
    case 916u: goto L_08987B64;
    case 917u: goto L_08987B70;
    case 918u: goto L_08987B7C;
    case 919u: goto L_08987B84;
    case 920u: goto L_08987B8C;
    case 921u: goto L_08987B94;
    case 922u: goto L_08987B9C;
    case 923u: goto L_08987BA8;
    case 924u: goto L_08987BB0;
    case 925u: goto L_08987BB8;
    case 926u: goto L_08987BC4;
    case 927u: goto L_08987BCC;
    case 928u: goto L_08987BD4;
    case 929u: goto L_08987BE0;
    case 930u: goto L_08987BE8;
    case 931u: goto L_08987BF0;
    case 932u: goto L_08987BF8;
    case 933u: goto L_08987BFC;
    case 934u: goto L_08987C04;
    case 935u: goto L_08987C1C;
    case 936u: goto L_08987C88;
    case 937u: goto L_08987CC4;
    case 938u: goto L_08987CC8;
    case 939u: goto L_08987D00;
    case 940u: goto L_08987D2C;
    case 941u: goto L_08987D30;
    case 942u: goto L_08987D38;
    case 943u: goto L_08987D4C;
    case 944u: goto L_08987D58;
    case 945u: goto L_08987D6C;
    case 946u: goto L_08987DD0;
    case 947u: goto L_08987DF4;
    case 948u: goto L_08987DFC;
    case 949u: goto L_08987E28;
    case 950u: goto L_08987E3C;
    case 951u: goto L_08987E58;
    case 952u: goto L_08987E60;
    case 953u: goto L_08987EB4;
    case 954u: goto L_08987EC0;
    case 955u: goto L_08987ED8;
    case 956u: goto L_08987EFC;
    case 957u: goto L_08987F34;
    case 958u: goto L_08987F40;
    case 959u: goto L_08987F5C;
    case 960u: goto L_08987F68;
    case 961u: goto L_08987F80;
    case 962u: goto L_08987FC0;
    case 963u: goto L_08987FCC;
    case 964u: goto L_08987FE0;
    case 965u: goto L_08987FE8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08984004:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_08984018;
      }
      goto L_08984010;
    }
L_08984010:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2));
    goto L_08984018;
L_08984018:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
      if (branch_taken) {
          goto L_0898414C;
      }
      goto L_08984024;
    }
L_08984024:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
        goto L_08984034;
    }
    goto L_08984034;
L_08984034:
    ctx.gpr[4] = (ctx.gpr[21] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[21]);
      if (branch_taken) {
          goto L_08984058;
      }
      goto L_08984040;
    }
L_08984040:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (0u | 153u);
    ctx.gpr[31] = (0x08984050u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 924u, 0x08B576ECu>(ctx, &aot_mem) && ctx.pc == 0x08984050u) goto L_08984050;
    return;
L_08984050:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[21]);
    goto L_08984058;
L_08984058:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (0u | 35u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0898414C;
      }
      goto L_0898406C;
    }
L_0898406C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (0u | 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
        goto L_08984080;
    }
    goto L_08984080;
L_08984080:
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_089840A4;
      }
      goto L_0898408C;
    }
L_0898408C:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (0u | 153u);
    ctx.gpr[31] = (0x0898409Cu);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 924u, 0x08B576ECu>(ctx, &aot_mem) && ctx.pc == 0x0898409Cu) goto L_0898409C;
    return;
L_0898409C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[18]);
    goto L_089840A4;
L_089840A4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (0u | 120u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0898414C;
      }
      goto L_089840B4;
    }
L_089840B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_089840BC;
L_089840BC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089840CC;
      }
      goto L_089840C4;
    }
L_089840C4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    goto L_089840CC;
L_089840CC:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089842CC;
      }
      goto L_089840D8;
    }
L_089840D8:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[16]);
        goto L_089840E8;
    }
    goto L_089840E0;
L_089840E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_089840E8;
      }
      goto L_089840E8;
    }
L_089840E8:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089840F4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 188u, 0x089E8FA8u>(ctx, &aot_mem) && ctx.pc == 0x089840F4u) goto L_089840F4;
    return;
L_089840F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (0u | 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
        goto L_08984108;
    }
    goto L_08984108;
L_08984108:
    ctx.gpr[5] = (ctx.gpr[16] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_0898412C;
    }
    goto L_08984114;
L_08984114:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (0u | 153u);
    ctx.gpr[31] = (0x08984124u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 924u, 0x08B576ECu>(ctx, &aot_mem) && ctx.pc == 0x08984124u) goto L_08984124;
    return;
L_08984124:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_0898412C;
L_0898412C:
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_08984144;
      }
      goto L_0898413C;
    }
L_0898413C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089842CC;
      }
      goto L_08984144;
    }
L_08984144:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089840BC;
      }
      goto L_0898414C;
    }
L_0898414C:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (0u | 38u);
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_0898417C;
      }
      goto L_0898415C;
    }
L_0898415C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[31] = (0x08984170u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 188u, 0x089E8FA8u>(ctx, &aot_mem) && ctx.pc == 0x08984170u) goto L_08984170;
    return;
L_08984170:
    ctx.gpr[16] = (ctx.gpr[21] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089842CC;
      }
      goto L_0898417C;
    }
L_0898417C:
    ctx.gpr[4] = (0u | 60u);
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089841A4;
      }
      goto L_08984188;
    }
L_08984188:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x08984198u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 188u, 0x089E8FA8u>(ctx, &aot_mem) && ctx.pc == 0x08984198u) goto L_08984198;
    return;
L_08984198:
    ctx.gpr[16] = (ctx.gpr[21] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089842CC;
      }
      goto L_089841A4;
    }
L_089841A4:
    ctx.gpr[4] = (0u | 62u);
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089841CC;
      }
      goto L_089841B0;
    }
L_089841B0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x089841C0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 188u, 0x089E8FA8u>(ctx, &aot_mem) && ctx.pc == 0x089841C0u) goto L_089841C0;
    return;
L_089841C0:
    ctx.gpr[16] = (ctx.gpr[21] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089842CC;
      }
      goto L_089841CC;
    }
L_089841CC:
    ctx.gpr[4] = (0u | 34u);
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089841F4;
      }
      goto L_089841D8;
    }
L_089841D8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x089841E8u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 188u, 0x089E8FA8u>(ctx, &aot_mem) && ctx.pc == 0x089841E8u) goto L_089841E8;
    return;
L_089841E8:
    ctx.gpr[16] = (ctx.gpr[21] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089842CC;
      }
      goto L_089841F4;
    }
L_089841F4:
    ctx.gpr[4] = (0u | 39u);
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0898421C;
      }
      goto L_08984200;
    }
L_08984200:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x08984210u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 188u, 0x089E8FA8u>(ctx, &aot_mem) && ctx.pc == 0x08984210u) goto L_08984210;
    return;
L_08984210:
    ctx.gpr[16] = (ctx.gpr[21] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089842CC;
      }
      goto L_0898421C;
    }
L_0898421C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898425C;
      }
      goto L_08984228;
    }
L_08984228:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (ctx.gpr[19] & 255u);
    ctx.gpr[31] = (0x08984238u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x08984238u) goto L_08984238;
    return;
L_08984238:
    ctx.gpr[31] = (0x08984240u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x08984240u) goto L_08984240;
    return;
L_08984240:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08984250u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 188u, 0x089E8FA8u>(ctx, &aot_mem) && ctx.pc == 0x08984250u) goto L_08984250;
    return;
L_08984250:
    ctx.gpr[16] = (ctx.gpr[21] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089842CC;
      }
      goto L_0898425C;
    }
L_0898425C:
    ctx.gpr[4] = (ctx.gpr[19] << 24u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
    ctx.gpr[19] = (ctx.gpr[4] << 24u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 24u));
      if (branch_taken) {
          goto L_089842B0;
      }
      goto L_08984274;
    }
L_08984274:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_089842B0;
      }
      goto L_0898428C;
    }
L_0898428C:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089842C8;
      }
      goto L_089842B0;
    }
L_089842B0:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x089842C4u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 215u, 0x089E9130u>(ctx, &aot_mem) && ctx.pc == 0x089842C4u) goto L_089842C4;
    return;
L_089842C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_089842C8;
L_089842C8:
    ctx.gpr[16] = (ctx.gpr[21] | 0u);
    goto L_089842CC;
L_089842CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 675u, 0x08983FA4u>(ctx, &aot_mem); return;
      }
      goto L_089842D4;
    }
L_089842D4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08984304:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08984330;
      }
      goto L_08984328;
    }
L_08984328:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08984330;
L_08984330:
    ctx.gpr[31] = (0x08984338u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 468u, 0x08ABE29Cu>(ctx, &aot_mem) && ctx.pc == 0x08984338u) goto L_08984338;
    return;
L_08984338:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08984360;
      }
      goto L_08984344;
    }
L_08984344:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[16] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16548));
        goto L_08984358;
    }
    goto L_08984350;
L_08984350:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08984358;
      }
      goto L_08984358;
    }
L_08984358:
    ctx.gpr[31] = (0x08984360u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 63u, 0x08B5831Cu>(ctx, &aot_mem) && ctx.pc == 0x08984360u) goto L_08984360;
    return;
L_08984360:
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
L_08984378:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089843B0;
      }
      goto L_08984394;
    }
L_08984394:
    ctx.gpr[31] = (0x0898439Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem) && ctx.pc == 0x0898439Cu) goto L_0898439C;
    return;
L_0898439C:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089843B0;
      }
      goto L_089843A8;
    }
L_089843A8:
    ctx.gpr[31] = (0x089843B0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x089843B0u) goto L_089843B0;
    return;
L_089843B0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089843C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0898447C;
      }
      goto L_089843E4;
    }
L_089843E4:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24808));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08984428;
      }
      goto L_089843F8;
    }
L_089843F8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_08984420;
      }
      goto L_08984404;
    }
L_08984404:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08984420u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08984420u) goto L_08984420;
    return;
L_08984420:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_089843F8;
      }
      goto L_08984428;
    }
L_08984428:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08984454;
      }
      goto L_08984434;
    }
L_08984434:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), 0u);
        goto L_0898444C;
    }
    goto L_08984440;
L_08984440:
    ctx.gpr[31] = (0x08984448u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem) && ctx.pc == 0x08984448u) goto L_08984448;
    return;
L_08984448:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), 0u);
    goto L_0898444C;
L_0898444C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), 0u);
    goto L_08984454;
L_08984454:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_0898446C;
      }
      goto L_0898445C;
    }
L_0898445C:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27396));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_0898446C;
L_0898446C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898447C;
      }
      goto L_08984474;
    }
L_08984474:
    ctx.gpr[31] = (0x0898447Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x0898447Cu) goto L_0898447C;
    return;
L_0898447C:
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
L_08984494:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089844E0;
      }
      goto L_089844B0;
    }
L_089844B0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_089844D8;
      }
      goto L_089844BC;
    }
L_089844BC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089844D8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089844D8u) goto L_089844D8;
    return;
L_089844D8:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089844B0;
      }
      goto L_089844E0;
    }
L_089844E0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089844FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08984570;
      }
      goto L_0898451C;
    }
L_0898451C:
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x0898452Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 134u, 0x089E8C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0898452Cu) goto L_0898452C;
    return;
L_0898452C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08984538u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 169u, 0x089E8EACu>(ctx, &aot_mem) && ctx.pc == 0x08984538u) goto L_08984538;
    return;
L_08984538:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0898454C;
      }
      goto L_08984544;
    }
L_08984544:
    ctx.gpr[31] = (0x0898454Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem) && ctx.pc == 0x0898454Cu) goto L_0898454C;
    return;
L_0898454C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
      if (branch_taken) {
          goto L_08984564;
      }
      goto L_0898455C;
    }
L_0898455C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08984574;
      }
      goto L_08984564;
    }
L_08984564:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898451C;
      }
      goto L_08984570;
    }
L_08984570:
    ctx.gpr[2] = (0u | 0u);
    goto L_08984574;
L_08984574:
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
L_0898458C:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(44), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089845B0;
      }
      goto L_089845A8;
    }
L_089845A8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089845B4;
      }
      goto L_089845B0;
    }
L_089845B0:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    goto L_089845B4;
L_089845B4:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089845C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08984634;
      }
      goto L_089845E0;
    }
L_089845E0:
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x089845F0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 134u, 0x089E8C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089845F0u) goto L_089845F0;
    return;
L_089845F0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089845FCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 169u, 0x089E8EACu>(ctx, &aot_mem) && ctx.pc == 0x089845FCu) goto L_089845FC;
    return;
L_089845FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08984610;
      }
      goto L_08984608;
    }
L_08984608:
    ctx.gpr[31] = (0x08984610u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem) && ctx.pc == 0x08984610u) goto L_08984610;
    return;
L_08984610:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
      if (branch_taken) {
          goto L_08984628;
      }
      goto L_08984620;
    }
L_08984620:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08984638;
      }
      goto L_08984628;
    }
L_08984628:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_089845E0;
      }
      goto L_08984634;
    }
L_08984634:
    ctx.gpr[2] = (0u | 0u);
    goto L_08984638;
L_08984638:
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
L_08984650:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08984668u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    goto L_089845C0;
L_08984668:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_089846C8;
      }
      goto L_08984674;
    }
L_08984674:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0898468C;
      }
      goto L_0898467C;
    }
L_0898467C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0898468C;
      }
      goto L_08984688;
    }
L_08984688:
    ctx.gpr[5] = (0u < ctx.gpr[4] ? 1u : 0u);
    goto L_0898468C;
L_0898468C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089846B4;
      }
      goto L_08984694;
    }
L_08984694:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089846AC;
      }
      goto L_0898469C;
    }
L_0898469C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089846AC;
      }
      goto L_089846A8;
    }
L_089846A8:
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    goto L_089846AC;
L_089846AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089846CC;
      }
      goto L_089846B4;
    }
L_089846B4:
    ctx.gpr[31] = (0x089846BCu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_089845C0;
L_089846BC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08984674;
      }
      goto L_089846C8;
    }
L_089846C8:
    ctx.gpr[2] = (0u | 0u);
    goto L_089846CC;
L_089846CC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089846E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08984738;
      }
      goto L_089846EC;
    }
L_089846EC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08984704;
      }
      goto L_089846F4;
    }
L_089846F4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08984704;
      }
      goto L_08984700;
    }
L_08984700:
    ctx.gpr[6] = (0u < ctx.gpr[4] ? 1u : 0u);
    goto L_08984704;
L_08984704:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898472C;
      }
      goto L_0898470C;
    }
L_0898470C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08984724;
      }
      goto L_08984714;
    }
L_08984714:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08984724;
      }
      goto L_08984720;
    }
L_08984720:
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    goto L_08984724;
L_08984724:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898473C;
      }
      goto L_0898472C;
    }
L_0898472C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089846EC;
      }
      goto L_08984738;
    }
L_08984738:
    ctx.gpr[2] = (0u | 0u);
    goto L_0898473C;
L_0898473C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08984744:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898474C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089847A0;
      }
      goto L_08984754;
    }
L_08984754:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0898476C;
      }
      goto L_0898475C;
    }
L_0898475C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898476C;
      }
      goto L_08984768;
    }
L_08984768:
    ctx.gpr[5] = (0u < ctx.gpr[4] ? 1u : 0u);
    goto L_0898476C;
L_0898476C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08984794;
      }
      goto L_08984774;
    }
L_08984774:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0898478C;
      }
      goto L_0898477C;
    }
L_0898477C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898478C;
      }
      goto L_08984788;
    }
L_08984788:
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    goto L_0898478C;
L_0898478C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089847A4;
      }
      goto L_08984794;
    }
L_08984794:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08984754;
      }
      goto L_089847A0;
    }
L_089847A0:
    ctx.gpr[2] = (0u | 0u);
    goto L_089847A4;
L_089847A4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089847AC:
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (2234u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(24808));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089847F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0898481C;
      }
      goto L_08984814;
    }
L_08984814:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08984820;
      }
      goto L_0898481C;
    }
L_0898481C:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16548));
    goto L_08984820;
L_08984820:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x0898482Cu);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 141u, 0x089E8D0Cu>(ctx, &aot_mem) && ctx.pc == 0x0898482Cu) goto L_0898482C;
    return;
L_0898482C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08984848:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08984864;
      }
      goto L_0898485C;
    }
L_0898485C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    goto L_08984864;
L_08984864:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08984898;
      }
      goto L_08984870;
    }
L_08984870:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08984884;
      }
      goto L_0898487C;
    }
L_0898487C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    goto L_08984884;
L_08984884:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08984898;
      }
      goto L_08984890;
    }
L_08984890:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08984898;
      }
      goto L_08984898;
    }
L_08984898:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089848A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (0u | 34u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x089848D0u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 179u, 0x089E8F3Cu>(ctx, &aot_mem) && ctx.pc == 0x089848D0u) goto L_089848D0;
    return;
L_089848D0:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[5];
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16520));
      if (branch_taken) {
          goto L_08984924;
      }
      goto L_089848E0;
    }
L_089848E0:
    ctx.gpr[31] = (0x089848E8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 666u, 0x08983EC4u>(ctx, &aot_mem) && ctx.pc == 0x089848E8u) goto L_089848E8;
    return;
L_089848E8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089848F4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 215u, 0x089E9130u>(ctx, &aot_mem) && ctx.pc == 0x089848F4u) goto L_089848F4;
    return;
L_089848F4:
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16516));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08984904u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 215u, 0x089E9130u>(ctx, &aot_mem) && ctx.pc == 0x08984904u) goto L_08984904;
    return;
L_08984904:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08984910u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 666u, 0x08983EC4u>(ctx, &aot_mem) && ctx.pc == 0x08984910u) goto L_08984910;
    return;
L_08984910:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0898491Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 215u, 0x089E9130u>(ctx, &aot_mem) && ctx.pc == 0x0898491Cu) goto L_0898491C;
    return;
L_0898491C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08984960;
      }
      goto L_08984924;
    }
L_08984924:
    ctx.gpr[31] = (0x0898492Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 666u, 0x08983EC4u>(ctx, &aot_mem) && ctx.pc == 0x0898492Cu) goto L_0898492C;
    return;
L_0898492C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08984938u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 215u, 0x089E9130u>(ctx, &aot_mem) && ctx.pc == 0x08984938u) goto L_08984938;
    return;
L_08984938:
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16512));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08984948u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 215u, 0x089E9130u>(ctx, &aot_mem) && ctx.pc == 0x08984948u) goto L_08984948;
    return;
L_08984948:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08984954u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 666u, 0x08983EC4u>(ctx, &aot_mem) && ctx.pc == 0x08984954u) goto L_08984954;
    return;
L_08984954:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08984960u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 215u, 0x089E9130u>(ctx, &aot_mem) && ctx.pc == 0x08984960u) goto L_08984960;
    return;
L_08984960:
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
L_08984978:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (2234u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22752));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089849C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08984AB0;
      }
      goto L_089849DC;
    }
L_089849DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_089849FC;
      }
      goto L_089849E8;
    }
L_089849E8:
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[5] = (0u | 1251u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6760));
    ctx.gpr[31] = (0x089849FCu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-6724));
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 924u, 0x08B576ECu>(ctx, &aot_mem) && ctx.pc == 0x089849FCu) goto L_089849FC;
    return;
L_089849FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08984A1C;
      }
      goto L_08984A08;
    }
L_08984A08:
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[5] = (0u | 1252u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6760));
    ctx.gpr[31] = (0x08984A1Cu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-6696));
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 924u, 0x08B576ECu>(ctx, &aot_mem) && ctx.pc == 0x08984A1Cu) goto L_08984A1C;
    return;
L_08984A1C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08984AA0;
      }
      goto L_08984A24;
    }
L_08984A24:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(22752));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08984A60;
      }
      goto L_08984A3C;
    }
L_08984A3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), 0u);
        goto L_08984A54;
    }
    goto L_08984A48;
L_08984A48:
    ctx.gpr[31] = (0x08984A50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem) && ctx.pc == 0x08984A50u) goto L_08984A50;
    return;
L_08984A50:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), 0u);
    goto L_08984A54;
L_08984A54:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), 0u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(20));
    goto L_08984A60;
L_08984A60:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08984A88;
      }
      goto L_08984A68;
    }
L_08984A68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), 0u);
        goto L_08984A80;
    }
    goto L_08984A74;
L_08984A74:
    ctx.gpr[31] = (0x08984A7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem) && ctx.pc == 0x08984A7Cu) goto L_08984A7C;
    return;
L_08984A7C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), 0u);
    goto L_08984A80;
L_08984A80:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), 0u);
    goto L_08984A88;
L_08984A88:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08984AA0;
      }
      goto L_08984A90;
    }
L_08984A90:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27396));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_08984AA0;
L_08984AA0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08984AB0;
      }
      goto L_08984AA8;
    }
L_08984AA8:
    ctx.gpr[31] = (0x08984AB0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08984AB0u) goto L_08984AB0;
    return;
L_08984AB0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08984AC4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08984AEC;
      }
      goto L_08984AE4;
    }
L_08984AE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08984AF0;
      }
      goto L_08984AEC;
    }
L_08984AEC:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16548));
    goto L_08984AF0;
L_08984AF0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08984AFCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08984BA8;
L_08984AFC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08984B18;
      }
      goto L_08984B04;
    }
L_08984B04:
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[5] = (0u | 1258u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6760));
    ctx.gpr[31] = (0x08984B18u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-6668));
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 924u, 0x08B576ECu>(ctx, &aot_mem) && ctx.pc == 0x08984B18u) goto L_08984B18;
    return;
L_08984B18:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08984B40:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08984B68;
      }
      goto L_08984B54;
    }
L_08984B54:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[5];
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_08984B84;
      }
      goto L_08984B5C;
    }
L_08984B5C:
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08984B54;
      }
      goto L_08984B68;
    }
L_08984B68:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[6] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16532));
    ctx.gpr[5] = (0u | 1282u);
    ctx.gpr[31] = (0x08984B7Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6760));
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 924u, 0x08B576ECu>(ctx, &aot_mem) && ctx.pc == 0x08984B7Cu) goto L_08984B7C;
    return;
L_08984B7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08984B9C;
      }
      goto L_08984B84;
    }
L_08984B84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(44), 0u);
    goto L_08984B9C;
L_08984B9C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08984BA8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[4];
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08984C24;
      }
      goto L_08984BD0;
    }
L_08984BD0:
    ctx.gpr[18] = (ctx.gpr[19] + static_cast<std::uint32_t>(20));
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08984BE0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 134u, 0x089E8C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08984BE0u) goto L_08984BE0;
    return;
L_08984BE0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08984BECu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 169u, 0x089E8EACu>(ctx, &aot_mem) && ctx.pc == 0x08984BECu) goto L_08984BEC;
    return;
L_08984BEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08984C00;
      }
      goto L_08984BF8;
    }
L_08984BF8:
    ctx.gpr[31] = (0x08984C00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem) && ctx.pc == 0x08984C00u) goto L_08984C00;
    return;
L_08984C00:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
      if (branch_taken) {
          goto L_08984C18;
      }
      goto L_08984C10;
    }
L_08984C10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08984C28;
      }
      goto L_08984C18;
    }
L_08984C18:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08984BD0;
      }
      goto L_08984C24;
    }
L_08984C24:
    ctx.gpr[2] = (0u | 0u);
    goto L_08984C28;
L_08984C28:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08984C44:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08984C64u);
    ctx.gpr[5] = (0u | 1u);
    goto L_089847AC;
L_08984C64:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24856));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[31] = (0x08984C78u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(52));
    goto L_08984978;
L_08984C78:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08984C8Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 141u, 0x089E8D0Cu>(ctx, &aot_mem) && ctx.pc == 0x08984C8Cu) goto L_08984C8C;
    return;
L_08984C8C:
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
L_08984CA4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08984D00;
      }
      goto L_08984CC0;
    }
L_08984CC0:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24856));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[31] = (0x08984CD4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08985018;
L_08984CD4:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(52));
    ctx.gpr[31] = (0x08984CE0u);
    ctx.gpr[5] = (0u | 2u);
    goto L_089849C0;
L_08984CE0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08984CECu);
    ctx.gpr[5] = (0u | 0u);
    goto L_089843C4;
L_08984CEC:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08984D00;
      }
      goto L_08984CF8;
    }
L_08984CF8:
    ctx.gpr[31] = (0x08984D00u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08984D00u) goto L_08984D00;
    return;
L_08984D00:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08984D14:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08984D24u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(52));
    goto L_08984BA8;
L_08984D24:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08984D4C;
      }
      goto L_08984D30;
    }
L_08984D30:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16548));
      if (branch_taken) {
          goto L_08984D44;
      }
      goto L_08984D3C;
    }
L_08984D3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08984D44;
      }
      goto L_08984D44;
    }
L_08984D44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08984D50;
      }
      goto L_08984D4C;
    }
L_08984D4C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08984D50;
L_08984D50:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08984D5C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(52));
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08984D94u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08984BA8;
L_08984D94:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08984DC0;
      }
      goto L_08984DA0;
    }
L_08984DA0:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[31] = (0x08984DACu);
    ctx.gpr[4] = (0u | 52u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08984DACu) goto L_08984DAC;
    return;
L_08984DAC:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] != 0u;
    ctx.gpr[4] = (2235u << 16u);
      if (branch_taken) {
          goto L_08984DD4;
      }
      goto L_08984DB8;
    }
L_08984DB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08984E3C;
      }
      goto L_08984DC0;
    }
L_08984DC0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08984DCCu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 141u, 0x089E8D0Cu>(ctx, &aot_mem) && ctx.pc == 0x08984DCCu) goto L_08984DCC;
    return;
L_08984DCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08984E84;
      }
      goto L_08984DD4;
    }
L_08984DD4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27396));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (2234u << 16u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(22752));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(40), 0u);
    ctx.gpr[20] = (ctx.gpr[21] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08984E20u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 141u, 0x089E8D0Cu>(ctx, &aot_mem) && ctx.pc == 0x08984E20u) goto L_08984E20;
    return;
L_08984E20:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08984E2Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 141u, 0x089E8D0Cu>(ctx, &aot_mem) && ctx.pc == 0x08984E2Cu) goto L_08984E2C;
    return;
L_08984E2C:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(44), 0u);
    ctx.gpr[20] = (ctx.gpr[21] | 0u);
    goto L_08984E3C;
L_08984E3C:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08984E58;
      }
      goto L_08984E44;
    }
L_08984E44:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08984E50u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_08984AC4;
L_08984E50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08984E84;
      }
      goto L_08984E58;
    }
L_08984E58:
    ctx.gpr[31] = (0x08984E60u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0898474C;
L_08984E60:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08984E84;
      }
      goto L_08984E6C;
    }
L_08984E6C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08984E84u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 548u, 0x088FA418u>(ctx, &aot_mem) && ctx.pc == 0x08984E84u) goto L_08984E84;
    return;
L_08984E84:
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
L_08984EA8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x08984ECCu);
    ctx.gpr[4] = (0u | 104u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08984ECCu) goto L_08984ECC;
    return;
L_08984ECC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08984EFC;
      }
      goto L_08984ED8;
    }
L_08984ED8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16548));
      if (branch_taken) {
          goto L_08984EEC;
      }
      goto L_08984EE4;
    }
L_08984EE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08984EEC;
      }
      goto L_08984EEC;
    }
L_08984EEC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08984EF8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08984C44;
L_08984EF8:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_08984EFC;
L_08984EFC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08984F10;
      }
      goto L_08984F08;
    }
L_08984F08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08984F20;
      }
      goto L_08984F10;
    }
L_08984F10:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08984F1Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08984F38;
L_08984F1C:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    goto L_08984F20;
L_08984F20:
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
L_08984F38:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08984F5Cu);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    goto L_089847F4;
L_08984F5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(52));
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
        goto L_08984F70;
    }
    goto L_08984F70;
L_08984F70:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[19] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16548));
      if (branch_taken) {
          goto L_08984FC0;
      }
      goto L_08984F78;
    }
L_08984F78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08984F8C;
      }
      goto L_08984F84;
    }
L_08984F84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08984F8C;
      }
      goto L_08984F8C;
    }
L_08984F8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08984FA0;
      }
      goto L_08984F98;
    }
L_08984F98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08984FA0;
      }
      goto L_08984FA0;
    }
L_08984FA0:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08984FACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08984D5C;
L_08984FAC:
    ctx.gpr[31] = (0x08984FB4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08984848;
L_08984FB4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08984F78;
      }
      goto L_08984FC0;
    }
L_08984FC0:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08984FFC;
      }
      goto L_08984FCC;
    }
L_08984FCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(40));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08984FE4u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08984FE4u) goto L_08984FE4;
    return;
L_08984FE4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08984FF0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_0898458C;
L_08984FF0:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08984FCC;
      }
      goto L_08984FFC;
    }
L_08984FFC:
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
L_08985018:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08985038u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08984494;
L_08985038:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(52));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    goto L_08985040;
L_08985040:
    ctx.gpr[5] = (0u | 0u);
    if (ctx.gpr[4] != ctx.gpr[17]) {
    ctx.gpr[5] = (0u < ctx.gpr[4] ? 1u : 0u);
        goto L_0898504C;
    }
    goto L_0898504C;
L_0898504C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898509C;
      }
      goto L_08985054;
    }
L_08985054:
    ctx.gpr[18] = (0u | 0u);
    if (ctx.gpr[4] != ctx.gpr[17]) {
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
        goto L_08985060;
    }
    goto L_08985060;
L_08985060:
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08985070u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08984B40;
L_08985070:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08985094;
      }
      goto L_08985078;
    }
L_08985078:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08985094u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08985094u) goto L_08985094;
    return;
L_08985094:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
      if (branch_taken) {
          goto L_08985040;
      }
      goto L_0898509C;
    }
L_0898509C:
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
L_089850B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16492));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089850E4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 215u, 0x089E9130u>(ctx, &aot_mem) && ctx.pc == 0x089850E4u) goto L_089850E4;
    return;
L_089850E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16548));
      if (branch_taken) {
          goto L_089850F8;
      }
      goto L_089850F0;
    }
L_089850F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_089850F8;
      }
      goto L_089850F8;
    }
L_089850F8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08985104u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 215u, 0x089E9130u>(ctx, &aot_mem) && ctx.pc == 0x08985104u) goto L_08985104;
    return;
L_08985104:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(52));
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
        goto L_08985118;
    }
    goto L_08985118;
L_08985118:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[19] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16488));
      if (branch_taken) {
          goto L_0898515C;
      }
      goto L_08985120;
    }
L_08985120:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0898512Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 215u, 0x089E9130u>(ctx, &aot_mem) && ctx.pc == 0x0898512Cu) goto L_0898512C;
    return;
L_0898512C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08985148u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08985148u) goto L_08985148;
    return;
L_08985148:
    ctx.gpr[31] = (0x08985150u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08984848;
L_08985150:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08985120;
      }
      goto L_0898515C;
    }
L_0898515C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089851EC;
      }
      goto L_08985168;
    }
L_08985168:
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16484));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08985178u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 215u, 0x089E9130u>(ctx, &aot_mem) && ctx.pc == 0x08985178u) goto L_08985178;
    return;
L_08985178:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089851AC;
      }
      goto L_08985184;
    }
L_08985184:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089851A0u);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089851A0u) goto L_089851A0;
    return;
L_089851A0:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08985184;
      }
      goto L_089851AC;
    }
L_089851AC:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16480));
    ctx.gpr[31] = (0x089851B8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 215u, 0x089E9130u>(ctx, &aot_mem) && ctx.pc == 0x089851B8u) goto L_089851B8;
    return;
L_089851B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[16] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16548));
        goto L_089851CC;
    }
    goto L_089851C4;
L_089851C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_089851CC;
      }
      goto L_089851CC;
    }
L_089851CC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089851D8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 215u, 0x089E9130u>(ctx, &aot_mem) && ctx.pc == 0x089851D8u) goto L_089851D8;
    return;
L_089851D8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089851E4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 215u, 0x089E9130u>(ctx, &aot_mem) && ctx.pc == 0x089851E4u) goto L_089851E4;
    return;
L_089851E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089851F8;
      }
      goto L_089851EC;
    }
L_089851EC:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16476));
    ctx.gpr[31] = (0x089851F8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 215u, 0x089E9130u>(ctx, &aot_mem) && ctx.pc == 0x089851F8u) goto L_089851F8;
    return;
L_089851F8:
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
L_08985214:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0898525C;
      }
      goto L_08985230;
    }
L_08985230:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24904));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08985248u);
    ctx.gpr[5] = (0u | 0u);
    goto L_089843C4;
L_08985248:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898525C;
      }
      goto L_08985254;
    }
L_08985254:
    ctx.gpr[31] = (0x0898525Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x0898525Cu) goto L_0898525C;
    return;
L_0898525C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08985270:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x08985294u);
    ctx.gpr[4] = (0u | 52u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08985294u) goto L_08985294;
    return;
L_08985294:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_089852B8;
      }
      goto L_089852A0;
    }
L_089852A0:
    ctx.gpr[31] = (0x089852A8u);
    ctx.gpr[5] = (0u | 2u);
    goto L_089847AC;
L_089852A8:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24904));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_089852B8;
L_089852B8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089852CC;
      }
      goto L_089852C4;
    }
L_089852C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089852DC;
      }
      goto L_089852CC;
    }
L_089852CC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x089852D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089852F4;
L_089852D8:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    goto L_089852DC;
L_089852DC:
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
L_089852F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08985304u);
    // nop
    goto L_089847F4;
L_08985304:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08985310:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16472));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08985334u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 215u, 0x089E9130u>(ctx, &aot_mem) && ctx.pc == 0x08985334u) goto L_08985334;
    return;
L_08985334:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16548));
        goto L_08985348;
    }
    goto L_08985340;
L_08985340:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08985348;
      }
      goto L_08985348;
    }
L_08985348:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08985354u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 215u, 0x089E9130u>(ctx, &aot_mem) && ctx.pc == 0x08985354u) goto L_08985354;
    return;
L_08985354:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16464));
    ctx.gpr[31] = (0x08985360u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 215u, 0x089E9130u>(ctx, &aot_mem) && ctx.pc == 0x08985360u) goto L_08985360;
    return;
L_08985360:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08985374:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x08985398u);
    ctx.gpr[4] = (0u | 52u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08985398u) goto L_08985398;
    return;
L_08985398:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_089853C8;
      }
      goto L_089853A4;
    }
L_089853A4:
    ctx.gpr[31] = (0x089853ACu);
    ctx.gpr[5] = (0u | 4u);
    goto L_089847AC;
L_089853AC:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(22784));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x089853C4u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16548));
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 141u, 0x089E8D0Cu>(ctx, &aot_mem) && ctx.pc == 0x089853C4u) goto L_089853C4;
    return;
L_089853C4:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_089853C8;
L_089853C8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089853DC;
      }
      goto L_089853D4;
    }
L_089853D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089853EC;
      }
      goto L_089853DC;
    }
L_089853DC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x089853E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08985404;
L_089853E8:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    goto L_089853EC;
L_089853EC:
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
L_08985404:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08985414u);
    // nop
    goto L_089847F4;
L_08985414:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08985420:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08985430u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 666u, 0x08983EC4u>(ctx, &aot_mem) && ctx.pc == 0x08985430u) goto L_08985430;
    return;
L_08985430:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898543C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08985508;
      }
      goto L_08985458;
    }
L_08985458:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24952));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(76));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_08985494;
      }
      goto L_08985470;
    }
L_08985470:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(76), 0u);
        goto L_08985488;
    }
    goto L_0898547C;
L_0898547C:
    ctx.gpr[31] = (0x08985484u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem) && ctx.pc == 0x08985484u) goto L_08985484;
    return;
L_08985484:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(76), 0u);
    goto L_08985488;
L_08985488:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(80), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(84), 0u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(64));
    goto L_08985494;
L_08985494:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(52));
      if (branch_taken) {
          goto L_089854C0;
      }
      goto L_0898549C;
    }
L_0898549C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), 0u);
        goto L_089854B4;
    }
    goto L_089854A8;
L_089854A8:
    ctx.gpr[31] = (0x089854B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem) && ctx.pc == 0x089854B0u) goto L_089854B0;
    return;
L_089854B0:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), 0u);
    goto L_089854B4;
L_089854B4:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), 0u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(52));
    goto L_089854C0;
L_089854C0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_089854EC;
      }
      goto L_089854C8;
    }
L_089854C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), 0u);
        goto L_089854E0;
    }
    goto L_089854D4;
L_089854D4:
    ctx.gpr[31] = (0x089854DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem) && ctx.pc == 0x089854DCu) goto L_089854DC;
    return;
L_089854DC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), 0u);
    goto L_089854E0;
L_089854E0:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(60), 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089854EC;
L_089854EC:
    ctx.gpr[31] = (0x089854F4u);
    ctx.gpr[5] = (0u | 0u);
    goto L_089843C4;
L_089854F4:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08985508;
      }
      goto L_08985500;
    }
L_08985500:
    ctx.gpr[31] = (0x08985508u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08985508u) goto L_08985508;
    return;
L_08985508:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898551C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x08985540u);
    ctx.gpr[4] = (0u | 88u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08985540u) goto L_08985540;
    return;
L_08985540:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08985588;
      }
      goto L_0898554C;
    }
L_0898554C:
    ctx.gpr[31] = (0x08985554u);
    ctx.gpr[5] = (0u | 5u);
    goto L_089847AC;
L_08985554:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24952));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(60), 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(68), 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(72), 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(80), 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(76), 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(84), 0u);
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_08985588;
L_08985588:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898559C;
      }
      goto L_08985594;
    }
L_08985594:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089855AC;
      }
      goto L_0898559C;
    }
L_0898559C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x089855A8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089855C4;
L_089855A8:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    goto L_089855AC;
L_089855AC:
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
L_089855C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x089855E0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    goto L_089847F4;
L_089855E0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(52));
    ctx.gpr[31] = (0x089855ECu);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(52));
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 152u, 0x089E8DC0u>(ctx, &aot_mem) && ctx.pc == 0x089855ECu) goto L_089855EC;
    return;
L_089855EC:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x089855F8u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 152u, 0x089E8DC0u>(ctx, &aot_mem) && ctx.pc == 0x089855F8u) goto L_089855F8;
    return;
L_089855F8:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(76));
    ctx.gpr[31] = (0x08985604u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(76));
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 152u, 0x089E8DC0u>(ctx, &aot_mem) && ctx.pc == 0x08985604u) goto L_08985604;
    return;
L_08985604:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08985618:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16460));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x0898563Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 215u, 0x089E9130u>(ctx, &aot_mem) && ctx.pc == 0x0898563Cu) goto L_0898563C;
    return;
L_0898563C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08985658;
      }
      goto L_08985648;
    }
L_08985648:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    goto L_08985658;
L_08985658:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08985684;
      }
      goto L_08985660;
    }
L_08985660:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16452));
    ctx.gpr[31] = (0x0898566Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 215u, 0x089E9130u>(ctx, &aot_mem) && ctx.pc == 0x0898566Cu) goto L_0898566C;
    return;
L_0898566C:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(52));
    ctx.gpr[31] = (0x08985678u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 666u, 0x08983EC4u>(ctx, &aot_mem) && ctx.pc == 0x08985678u) goto L_08985678;
    return;
L_08985678:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16440));
    ctx.gpr[31] = (0x08985684u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 215u, 0x089E9130u>(ctx, &aot_mem) && ctx.pc == 0x08985684u) goto L_08985684;
    return;
L_08985684:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089856A0;
      }
      goto L_08985690;
    }
L_08985690:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    goto L_089856A0;
L_089856A0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089856CC;
      }
      goto L_089856A8;
    }
L_089856A8:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16436));
    ctx.gpr[31] = (0x089856B4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 215u, 0x089E9130u>(ctx, &aot_mem) && ctx.pc == 0x089856B4u) goto L_089856B4;
    return;
L_089856B4:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x089856C0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 666u, 0x08983EC4u>(ctx, &aot_mem) && ctx.pc == 0x089856C0u) goto L_089856C0;
    return;
L_089856C0:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16440));
    ctx.gpr[31] = (0x089856CCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 215u, 0x089E9130u>(ctx, &aot_mem) && ctx.pc == 0x089856CCu) goto L_089856CC;
    return;
L_089856CC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089856E8;
      }
      goto L_089856D8;
    }
L_089856D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    goto L_089856E8;
L_089856E8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08985714;
      }
      goto L_089856F0;
    }
L_089856F0:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16424));
    ctx.gpr[31] = (0x089856FCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 215u, 0x089E9130u>(ctx, &aot_mem) && ctx.pc == 0x089856FCu) goto L_089856FC;
    return;
L_089856FC:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(76));
    ctx.gpr[31] = (0x08985708u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 666u, 0x08983EC4u>(ctx, &aot_mem) && ctx.pc == 0x08985708u) goto L_08985708;
    return;
L_08985708:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16440));
    ctx.gpr[31] = (0x08985714u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 215u, 0x089E9130u>(ctx, &aot_mem) && ctx.pc == 0x08985714u) goto L_08985714;
    return;
L_08985714:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16408));
    ctx.gpr[31] = (0x08985720u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 215u, 0x089E9130u>(ctx, &aot_mem) && ctx.pc == 0x08985720u) goto L_08985720;
    return;
L_08985720:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08985734:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0898577C;
      }
      goto L_08985750;
    }
L_08985750:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25000));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08985768u);
    ctx.gpr[5] = (0u | 0u);
    goto L_089843C4;
L_08985768:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898577C;
      }
      goto L_08985774;
    }
L_08985774:
    ctx.gpr[31] = (0x0898577Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x0898577Cu) goto L_0898577C;
    return;
L_0898577C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08985790:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x089857B4u);
    ctx.gpr[4] = (0u | 52u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x089857B4u) goto L_089857B4;
    return;
L_089857B4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_089857D8;
      }
      goto L_089857C0;
    }
L_089857C0:
    ctx.gpr[31] = (0x089857C8u);
    ctx.gpr[5] = (0u | 3u);
    goto L_089847AC;
L_089857C8:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25000));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_089857D8;
L_089857D8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089857EC;
      }
      goto L_089857E4;
    }
L_089857E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089857FC;
      }
      goto L_089857EC;
    }
L_089857EC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x089857F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08985814;
L_089857F8:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    goto L_089857FC;
L_089857FC:
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
L_08985814:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08985824u);
    // nop
    goto L_089847F4;
L_08985824:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08985830:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16492));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08985854u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 215u, 0x089E9130u>(ctx, &aot_mem) && ctx.pc == 0x08985854u) goto L_08985854;
    return;
L_08985854:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16548));
        goto L_08985868;
    }
    goto L_08985860;
L_08985860:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08985868;
      }
      goto L_08985868;
    }
L_08985868:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08985874u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 215u, 0x089E9130u>(ctx, &aot_mem) && ctx.pc == 0x08985874u) goto L_08985874;
    return;
L_08985874:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16484));
    ctx.gpr[31] = (0x08985880u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 215u, 0x089E9130u>(ctx, &aot_mem) && ctx.pc == 0x08985880u) goto L_08985880;
    return;
L_08985880:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08985894:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x089858ACu);
    ctx.gpr[5] = (0u | 0u);
    goto L_089847AC;
L_089858AC:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(22832));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(60));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), 0u);
    ctx.gpr[31] = (0x089858ECu);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16548));
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 141u, 0x089E8D0Cu>(ctx, &aot_mem) && ctx.pc == 0x089858ECu) goto L_089858EC;
    return;
L_089858EC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), 0u);
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08985908:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x0898592Cu);
    ctx.gpr[5] = (0u | 0u);
    goto L_089847AC;
L_0898592C:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(22832));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(60), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(60));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08985968u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 141u, 0x089E8D0Cu>(ctx, &aot_mem) && ctx.pc == 0x08985968u) goto L_08985968;
    return;
L_08985968:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), 0u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16548));
    ctx.gpr[31] = (0x0898597Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 141u, 0x089E8D0Cu>(ctx, &aot_mem) && ctx.pc == 0x0898597Cu) goto L_0898597C;
    return;
L_0898597C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(80), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(76), 0u);
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
L_089859A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x089859C4u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    goto L_08984304;
L_089859C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089859F8;
      }
      goto L_089859D0;
    }
L_089859D0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089859DCu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08985A1C;
L_089859DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089859F8;
      }
      goto L_089859E4;
    }
L_089859E4:
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x089859F0u);
    ctx.gpr[5] = (0u | 2u);
    goto L_08984378;
L_089859F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08985A08;
      }
      goto L_089859F8;
    }
L_089859F8:
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08985A04u);
    ctx.gpr[5] = (0u | 2u);
    goto L_08984378;
L_08985A04:
    ctx.gpr[2] = (0u | 0u);
    goto L_08985A08;
L_08985A08:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08985A1C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08985A48u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    goto L_08984494;
L_08985A48:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08985A60u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 141u, 0x089E8D0Cu>(ctx, &aot_mem) && ctx.pc == 0x08985A60u) goto L_08985A60;
    return;
L_08985A60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16548));
      if (branch_taken) {
          goto L_08985A74;
      }
      goto L_08985A6C;
    }
L_08985A6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08985A74;
      }
      goto L_08985A74;
    }
L_08985A74:
    ctx.gpr[31] = (0x08985A7Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 250u, 0x08938F04u>(ctx, &aot_mem) && ctx.pc == 0x08985A7Cu) goto L_08985A7C;
    return;
L_08985A7C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08985BCC;
      }
      goto L_08985A88;
    }
L_08985A88:
    ctx.gpr[31] = (0x08985A90u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 262u, 0x08938FD8u>(ctx, &aot_mem) && ctx.pc == 0x08985A90u) goto L_08985A90;
    return;
L_08985A90:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08985AB8;
      }
      goto L_08985A9C;
    }
L_08985A9C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u != 0u;
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08985AC8;
      }
      goto L_08985AB0;
    }
L_08985AB0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08985AD4;
      }
      goto L_08985AB8;
    }
L_08985AB8:
    ctx.gpr[31] = (0x08985AC0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 254u, 0x08938F40u>(ctx, &aot_mem) && ctx.pc == 0x08985AC0u) goto L_08985AC0;
    return;
L_08985AC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08985BEC;
      }
      goto L_08985AC8;
    }
L_08985AC8:
    ctx.gpr[31] = (0x08985AD0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem) && ctx.pc == 0x08985AD0u) goto L_08985AD0;
    return;
L_08985AD0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    goto L_08985AD4;
L_08985AD4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
      if (branch_taken) {
          goto L_08985AF8;
      }
      goto L_08985AE0;
    }
L_08985AE0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[20]);
    ctx.gpr[31] = (0x08985AECu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 468u, 0x08ABE29Cu>(ctx, &aot_mem) && ctx.pc == 0x08985AECu) goto L_08985AEC;
    return;
L_08985AEC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    goto L_08985AF8;
L_08985AF8:
    ctx.gpr[31] = (0x08985B00u);
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 468u, 0x08ABE29Cu>(ctx, &aot_mem) && ctx.pc == 0x08985B00u) goto L_08985B00;
    return;
L_08985B00:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08985B14u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 270u, 0x08939050u>(ctx, &aot_mem) && ctx.pc == 0x08985B14u) goto L_08985B14;
    return;
L_08985B14:
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08985B28u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 215u, 0x089E9130u>(ctx, &aot_mem) && ctx.pc == 0x08985B28u) goto L_08985B28;
    return;
L_08985B28:
    ctx.gpr[31] = (0x08985B30u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem) && ctx.pc == 0x08985B30u) goto L_08985B30;
    return;
L_08985B30:
    ctx.gpr[31] = (0x08985B38u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 254u, 0x08938F40u>(ctx, &aot_mem) && ctx.pc == 0x08985B38u) goto L_08985B38;
    return;
L_08985B38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (ctx.gpr[17] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_08985B58;
      }
      goto L_08985B50;
    }
L_08985B50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08985B5C;
      }
      goto L_08985B58;
    }
L_08985B58:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16548));
    goto L_08985B5C;
L_08985B5C:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 0u);
    jump_target = ctx.gpr[8];
    ctx.gpr[31] = (0x08985B70u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08985B70u) goto L_08985B70;
    return;
L_08985B70:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08985BA4;
      }
      goto L_08985B7C;
    }
L_08985B7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
        goto L_08985B94;
    }
    goto L_08985B88;
L_08985B88:
    ctx.gpr[31] = (0x08985B90u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem) && ctx.pc == 0x08985B90u) goto L_08985B90;
    return;
L_08985B90:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    goto L_08985B94;
L_08985B94:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08985BEC;
      }
      goto L_08985BA4;
    }
L_08985BA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
        goto L_08985BBC;
    }
    goto L_08985BB0;
L_08985BB0:
    ctx.gpr[31] = (0x08985BB8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem) && ctx.pc == 0x08985BB8u) goto L_08985BB8;
    return;
L_08985BB8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    goto L_08985BBC;
L_08985BBC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08985BEC;
      }
      goto L_08985BCC;
    }
L_08985BCC:
    // NOT unreachable padding, despite appearances: L_08985A74 calls
    // recomp_unit_0077 entry 250 (0x08938F04, a free-list pop-or-grow pool
    // allocator delegating to recomp_unit_0044 entry 196) and falls straight
    // through into this `break` when that allocation returns NULL/0 -- i.e.
    // this is the game's own compiler-emitted `if (!ptr) trap();` assertion.
    // Faking success here (an earlier attempt at that) only turns the crash
    // into an infinite retry that burns the dispatch cap, because the real
    // bug is upstream: something is exhausting or mis-sizing that pool.
    // Surface it distinctly rather than resuming with the previous
    // catch-all "special?" wording, so it isn't re-confused with a truly
    // undecoded instruction elsewhere.
    rt.unsupported(0x08985BCCu, 0x0000000Du,
                    "pool-allocator assertion tripped (recomp_unit_0077 entry "
                    "250/0x08938F04 returned NULL) -- see generated_unit_0096.cpp "
                    "L_08985BCC");
    return;
L_08985BE8:
    ctx.gpr[2] = (0u | 0u);
    goto L_08985BEC;
L_08985BEC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08985C0C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08985C80;
      }
      goto L_08985C2C;
    }
L_08985C2C:
    ctx.gpr[17] = (0u | 1u);
    goto L_08985C30;
L_08985C30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08985C4Cu);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08985C4Cu) goto L_08985C4C;
    return;
L_08985C4C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08985C64;
      }
      goto L_08985C54;
    }
L_08985C54:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08985C64;
      }
      goto L_08985C60;
    }
L_08985C60:
    ctx.gpr[4] = (0u < ctx.gpr[18] ? 1u : 0u);
    goto L_08985C64;
L_08985C64:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08985C74;
      }
      goto L_08985C6C;
    }
L_08985C6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08985C80;
      }
      goto L_08985C74;
    }
L_08985C74:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08985C30;
      }
      goto L_08985C80;
    }
L_08985C80:
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
L_08985C98:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x08985CBCu);
    ctx.gpr[4] = (0u | 84u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08985CBCu) goto L_08985CBC;
    return;
L_08985CBC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08985CD4;
      }
      goto L_08985CC8;
    }
L_08985CC8:
    ctx.gpr[31] = (0x08985CD0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08985894;
L_08985CD0:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_08985CD4;
L_08985CD4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08985CE8;
      }
      goto L_08985CE0;
    }
L_08985CE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08985CF8;
      }
      goto L_08985CE8;
    }
L_08985CE8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08985CF4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08985D10;
L_08985CF4:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    goto L_08985CF8;
L_08985CF8:
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
L_08985D10:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08985D2Cu);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    goto L_089847F4;
L_08985D2C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(60));
      if (branch_taken) {
          goto L_08985D48;
      }
      goto L_08985D40;
    }
L_08985D40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
      if (branch_taken) {
          goto L_08985D4C;
      }
      goto L_08985D48;
    }
L_08985D48:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16548));
    goto L_08985D4C;
L_08985D4C:
    ctx.gpr[31] = (0x08985D54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 141u, 0x089E8D0Cu>(ctx, &aot_mem) && ctx.pc == 0x08985D54u) goto L_08985D54;
    return;
L_08985D54:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08985D90;
      }
      goto L_08985D60;
    }
L_08985D60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(40));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08985D78u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08985D78u) goto L_08985D78;
    return;
L_08985D78:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08985D84u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_0898458C;
L_08985D84:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08985D60;
      }
      goto L_08985D90;
    }
L_08985D90:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08985DA4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16388)));
    ctx.gpr[4] = (2247u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16392)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24912));
    goto L_08985DB8;
L_08985DB8:
    ctx.gpr[8] = (ctx.gpr[5] << 4u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < 36 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08985DB8;
      }
      goto L_08985DDC;
    }
L_08985DDC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08985DE4:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(23772), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(23773), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(23774), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (0u | 0u);
    goto L_08985DF4;
L_08985DF4:
    ctx.gpr[5] = (ctx.gpr[6] << 4u);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(23776), 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08985DF4;
      }
      goto L_08985E1C;
    }
L_08985E1C:
    ctx.gpr[5] = (2247u << 16u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-16400), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(25488));
    goto L_08985E2C;
L_08985E2C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(26344)));
    ctx.gpr[8] = (ctx.gpr[6] << 2u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08985E2C;
      }
      goto L_08985E50;
    }
L_08985E50:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08985E58:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(23528)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 272u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 10u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08985E9Cu);
    ctx.gpr[5] = (0u | 272u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 514u, 0x0880A400u>(ctx, &aot_mem) && ctx.pc == 0x08985E9Cu) goto L_08985E9C;
    return;
L_08985E9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26328)));
    ctx.gpr[5] = (0u | 25u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 63u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(114), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.hi);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(20));
    ctx.gpr[31] = (0x08985EE0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[6]));
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem) && ctx.pc == 0x08985EE0u) goto L_08985EE0;
    return;
L_08985EE0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08985EF0:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-16399)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08985EF8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 10u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08986048;
      }
      goto L_08985F28;
    }
L_08985F28:
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1008));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1400)));
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08985F5C;
      }
      goto L_08985F40;
    }
L_08985F40:
    ctx.gpr[31] = (0x08985F48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08985F48u) goto L_08985F48;
    return;
L_08985F48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2320)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_08985F64;
      }
      goto L_08985F54;
    }
L_08985F54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08986048;
      }
      goto L_08985F5C;
    }
L_08985F5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08986048;
      }
      goto L_08985F64;
    }
L_08985F64:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) > 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 20 ? 1u : 0u);
      if (branch_taken) {
          goto L_08985F74;
      }
      goto L_08985F6C;
    }
L_08985F6C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08986048;
      }
      goto L_08985F74;
    }
L_08985F74:
    ctx.gpr[4] = (2247u << 16u);
    ctx.gpr[6] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25488));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(26344)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08985FA0;
      }
      goto L_08985F98;
    }
L_08985F98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08985FA8;
      }
      goto L_08985FA0;
    }
L_08985FA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08986048;
      }
      goto L_08985FA8;
    }
L_08985FA8:
    ctx.gpr[4] = (ctx.gpr[5] << 4u);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(23776)));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08985FCC;
      }
      goto L_08985FC4;
    }
L_08985FC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08985FD8;
      }
      goto L_08985FCC;
    }
L_08985FCC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(23776)));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08985FF4;
      }
      goto L_08985FD8;
    }
L_08985FD8:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08985FA8;
      }
      goto L_08985FEC;
    }
L_08985FEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898600C;
      }
      goto L_08985FF4;
    }
L_08985FF4:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(23792));
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(23808), static_cast<std::uint16_t>(0u));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08986048;
      }
      goto L_0898600C;
    }
L_0898600C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08986048;
      }
      goto L_08986018;
    }
L_08986018:
    ctx.gpr[4] = (ctx.gpr[19] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(23776), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(23792));
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(23808), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(26344)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(500));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08986048;
L_08986048:
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
L_08986064:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089860F4;
      }
      goto L_08986080;
    }
L_08986080:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
      if (branch_taken) {
          goto L_089860B4;
      }
      goto L_0898608C;
    }
L_0898608C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08986098u);
    ctx.gpr[5] = (0u | 18u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 542u, 0x0880A5E0u>(ctx, &aot_mem) && ctx.pc == 0x08986098u) goto L_08986098;
    return;
L_08986098:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089860D4;
      }
      goto L_089860A0;
    }
L_089860A0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089860ACu);
    ctx.gpr[5] = (0u | 18u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 550u, 0x0880A680u>(ctx, &aot_mem) && ctx.pc == 0x089860ACu) goto L_089860AC;
    return;
L_089860AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089860D4;
      }
      goto L_089860B4;
    }
L_089860B4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089860C0u);
    ctx.gpr[5] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 542u, 0x0880A5E0u>(ctx, &aot_mem) && ctx.pc == 0x089860C0u) goto L_089860C0;
    return;
L_089860C0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089860D4;
      }
      goto L_089860C8;
    }
L_089860C8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089860D4u);
    ctx.gpr[5] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 550u, 0x0880A680u>(ctx, &aot_mem) && ctx.pc == 0x089860D4u) goto L_089860D4;
    return;
L_089860D4:
    ctx.gpr[31] = (0x089860DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08985DE4;
L_089860DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16352)));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-16398), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6028));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9276), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9280), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-16397), static_cast<std::uint8_t>(0u));
    goto L_089860F4;
L_089860F4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986108:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08986648;
      }
      goto L_0898612C;
    }
L_0898612C:
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1008));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1400)));
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08986168;
      }
      goto L_08986144;
    }
L_08986144:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(23772)));
    ctx.gpr[18] = (0u | 60u);
    ctx.gpr[4] = (ctx.gpr[18] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08986170;
      }
      goto L_08986160;
    }
L_08986160:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08986648;
      }
      goto L_08986168;
    }
L_08986168:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08986648;
      }
      goto L_08986170;
    }
L_08986170:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    ctx.gpr[31] = (0x08986194u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 518u, 0x08A8EAACu>(ctx, &aot_mem) && ctx.pc == 0x08986194u) goto L_08986194;
    return;
L_08986194:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 36 ? 1u : 0u);
      if (branch_taken) {
          goto L_08986648;
      }
      goto L_089861A0;
    }
L_089861A0:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08986648;
      }
      goto L_089861A8;
    }
L_089861A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(36))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[7] = (2247u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(24912));
    goto L_089861DC;
L_089861DC:
    ctx.gpr[8] = (ctx.gpr[5] << 4u);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0898620C;
      }
      goto L_089861FC;
    }
L_089861FC:
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0898620C;
      }
      goto L_08986204;
    }
L_08986204:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08986220;
      }
      goto L_0898620C;
    }
L_0898620C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 36 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089861DC;
      }
      goto L_08986220;
    }
L_08986220:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08986648;
      }
      goto L_08986228;
    }
L_08986228:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(23772)));
    ctx.gpr[5] = (ctx.gpr[5] ^ 60u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08986270;
      }
      goto L_08986240;
    }
L_08986240:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(23773)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[18]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (0u | 277u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(23772)));
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(23532), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(23772), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.hi);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(23773), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08986270;
L_08986270:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(23772)));
    ctx.gpr[5] = (ctx.gpr[5] ^ 60u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089862B8;
      }
      goto L_08986288;
    }
L_08986288:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(23773)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[18]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (0u | 279u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(23772)));
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(23532), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(23772), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.hi);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(23773), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_089862B8;
L_089862B8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(23772)));
    ctx.gpr[5] = (ctx.gpr[5] ^ 60u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08986300;
      }
      goto L_089862D0;
    }
L_089862D0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(23773)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[18]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (0u | 275u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(23772)));
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(23532), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(23772), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.hi);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(23773), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08986300;
L_08986300:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(23772)));
    ctx.gpr[5] = (ctx.gpr[5] ^ 60u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (ctx.gpr[5] != 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
        goto L_0898634C;
    }
    goto L_08986318;
L_08986318:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(23773)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[18]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (0u | 221u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(23772)));
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(23532), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(23772), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.hi);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(23773), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    goto L_0898634C;
L_0898634C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[15] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[12];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[17];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[13] + ctx.fpr[15];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[19] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
      if (branch_taken) {
          goto L_089863EC;
      }
      goto L_0898639C;
    }
L_0898639C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(23772)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 60u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089863E4;
      }
      goto L_089863B4;
    }
L_089863B4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(23773)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[18]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (0u | 258u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(23772)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(23532), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(23772), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.hi);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(23773), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089863E4;
L_089863E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08986450;
      }
      goto L_089863EC;
    }
L_089863EC:
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08986450;
      }
      goto L_08986404;
    }
L_08986404:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(23772)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 60u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898644C;
      }
      goto L_0898641C;
    }
L_0898641C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(23773)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[18]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (0u | 316u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(23772)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(23532), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(23772), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.hi);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(23773), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0898644C;
L_0898644C:
    ctx.gpr[17] = (0u | 1u);
    goto L_08986450;
L_08986450:
    ctx.fpr[13] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089864B4;
      }
      goto L_08986468;
    }
L_08986468:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(23772)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 60u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08986568;
      }
      goto L_08986480;
    }
L_08986480:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(23773)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[18]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (0u | 168u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(23772)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(23532), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(23772), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.hi);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(23773), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08986568;
      }
      goto L_089864B4;
    }
L_089864B4:
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08986518;
      }
      goto L_089864CC;
    }
L_089864CC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(23772)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 60u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08986568;
      }
      goto L_089864E4;
    }
L_089864E4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(23773)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[18]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (0u | 346u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(23772)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(23532), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(23772), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.hi);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(23773), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08986568;
      }
      goto L_08986518;
    }
L_08986518:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08986568;
      }
      goto L_08986520;
    }
L_08986520:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(23772)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 60u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08986568;
      }
      goto L_08986538;
    }
L_08986538:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(23773)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[18]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (0u | 107u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(23772)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(23532), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(23772), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.hi);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(23773), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08986568;
L_08986568:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(23772)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 60u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089865AC;
      }
      goto L_08986580;
    }
L_08986580:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(23773)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[18]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(23772)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(23532), ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(23772), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.hi);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(23773), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089865AC;
L_089865AC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(23772)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 60u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089865F4;
      }
      goto L_089865C4;
    }
L_089865C4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(23773)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[18]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (0u | 277u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(23772)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(23532), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(23772), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.hi);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(23773), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089865F4;
L_089865F4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(23772)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16352)));
    ctx.gpr[6] = (ctx.gpr[4] ^ 60u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(6028));
    ctx.gpr[5] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08986640;
      }
      goto L_08986614;
    }
L_08986614:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(23773)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[18]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(23772)));
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(23532), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(23772), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.hi);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(23773), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08986640;
L_08986640:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-16400), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08986648;
L_08986648:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986660:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16352)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6028));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9272), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9276), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9280), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986678:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16324)));
    ctx.gpr[5] = (0u | 7u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16324), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08986690;
      }
      goto L_0898668C;
    }
L_0898668C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16324), 0u);
    goto L_08986690;
L_08986690:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986698:
    ctx.gpr[8] = (2237u << 16u);
    ctx.gpr[6] = (2246u << 16u);
    ctx.gpr[5] = (2246u << 16u);
    ctx.gpr[4] = (2246u << 16u);
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(23168));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(30640));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(30664));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(30688));
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    goto L_089866C4;
L_089866C4:
    ctx.gpr[10] = (ctx.gpr[9] + ctx.gpr[28]);
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(8656), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(8624), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(8640), static_cast<std::uint8_t>(ctx.gpr[2]));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(8648), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[9]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089866C4;
      }
      goto L_08986704;
    }
L_08986704:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898670C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5664));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    ctx.gpr[31] = (0x08986734u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-5640));
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x08986734u) goto L_08986734;
    return;
L_08986734:
    ctx.gpr[31] = (0x0898673Cu);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 250u, 0x08938F04u>(ctx, &aot_mem) && ctx.pc == 0x0898673Cu) goto L_0898673C;
    return;
L_0898673C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08986798;
      }
      goto L_08986748;
    }
L_08986748:
    ctx.gpr[31] = (0x08986750u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 262u, 0x08938FD8u>(ctx, &aot_mem) && ctx.pc == 0x08986750u) goto L_08986750;
    return;
L_08986750:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] >> 2u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16352), ctx.gpr[4]);
    ctx.gpr[31] = (0x08986764u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 468u, 0x08ABE29Cu>(ctx, &aot_mem) && ctx.pc == 0x08986764u) goto L_08986764;
    return;
L_08986764:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16356), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08986790;
      }
      goto L_08986770;
    }
L_08986770:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08986780u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 270u, 0x08939050u>(ctx, &aot_mem) && ctx.pc == 0x08986780u) goto L_08986780;
    return;
L_08986780:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089867A0;
      }
      goto L_08986788;
    }
L_08986788:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089867AC;
      }
      goto L_08986790;
    }
L_08986790:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089867AC;
      }
      goto L_08986798;
    }
L_08986798:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089867AC;
      }
      goto L_089867A0;
    }
L_089867A0:
    ctx.gpr[31] = (0x089867A8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 254u, 0x08938F40u>(ctx, &aot_mem) && ctx.pc == 0x089867A8u) goto L_089867A8;
    return;
L_089867A8:
    ctx.gpr[2] = (0u | 1u);
    goto L_089867AC;
L_089867AC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089867C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16328)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089867D4;
      }
      goto L_089867CC;
    }
L_089867CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089867D4;
      }
      goto L_089867D4;
    }
L_089867D4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089867DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x089867ECu);
    ctx.gpr[4] = (0u | 1u);
    goto L_0898757C;
L_089867EC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089867F8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16340)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 68 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08986888;
      }
      goto L_08986808;
    }
L_08986808:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08986888;
      }
      goto L_08986810;
    }
L_08986810:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[2];
    ctx.gpr[6] = (0u | 255u);
      if (branch_taken) {
          goto L_08986824;
      }
      goto L_08986818;
    }
L_08986818:
    ctx.gpr[2] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08986860;
      }
      goto L_08986824;
    }
L_08986824:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08986858;
      }
      goto L_0898682C;
    }
L_0898682C:
    ctx.gpr[5] = (2279u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17408));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08986850;
      }
      goto L_08986848;
    }
L_08986848:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08986888;
      }
      goto L_08986850;
    }
L_08986850:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08986888;
      }
      goto L_08986858;
    }
L_08986858:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08986888;
      }
      goto L_08986860;
    }
L_08986860:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08986880;
      }
      goto L_08986868;
    }
L_08986868:
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08986878;
      }
      goto L_08986870;
    }
L_08986870:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08986888;
      }
      goto L_08986878;
    }
L_08986878:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08986888;
      }
      goto L_08986880;
    }
L_08986880:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08986888;
      }
      goto L_08986888;
    }
L_08986888:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986890:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16344)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_0898693C;
      }
      goto L_089868AC;
    }
L_089868AC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16340)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16320)));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08986934;
      }
      goto L_089868C4;
    }
L_089868C4:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 350 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 5876 ? 1u : 0u);
      if (branch_taken) {
          goto L_08986900;
      }
      goto L_089868D0;
    }
L_089868D0:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08986900;
      }
      goto L_089868D8;
    }
L_089868D8:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16320), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16316), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16340), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16336), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16312), ctx.gpr[4]);
    ctx.gpr[31] = (0x089868F8u);
    ctx.gpr[4] = (0u | 1u);
    goto L_089871DC;
L_089868F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898692C;
      }
      goto L_08986900;
    }
L_08986900:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 6027 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898692C;
      }
      goto L_0898690C;
    }
L_0898690C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16320), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16316), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 67u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16340), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16336), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16312), ctx.gpr[4]);
    ctx.gpr[31] = (0x0898692Cu);
    ctx.gpr[4] = (0u | 1u);
    goto L_089871DC;
L_0898692C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08986940;
      }
      goto L_08986934;
    }
L_08986934:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08986940;
      }
      goto L_0898693C;
    }
L_0898693C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08986940;
L_08986940:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898694C:
    ctx.gpr[5] = (2279u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17408));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[4] << 24u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 24u));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986968:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16344)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08986A94;
      }
      goto L_0898697C;
    }
L_0898697C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16340)));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08986A8C;
      }
      goto L_0898698C;
    }
L_0898698C:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 68 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08986A84;
      }
      goto L_08986998;
    }
L_08986998:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08986A84;
      }
      goto L_089869A0;
    }
L_089869A0:
    ctx.gpr[6] = (2279u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(17408));
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08986A7C;
      }
      goto L_089869B8;
    }
L_089869B8:
    ctx.gpr[7] = (0u | 255u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_089869D8;
      }
      goto L_089869C4;
    }
L_089869C4:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 40 ? 1u : 0u);
      if (branch_taken) {
          goto L_089869E0;
      }
      goto L_089869D0;
    }
L_089869D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08986A0C;
      }
      goto L_089869D8;
    }
L_089869D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08986A98;
      }
      goto L_089869E0;
    }
L_089869E0:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08986A0C;
      }
      goto L_089869E8;
    }
L_089869E8:
    ctx.gpr[5] = (0u | 4u);
    goto L_089869EC;
L_089869EC:
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 40 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_089869EC;
      }
      goto L_08986A04;
    }
L_08986A04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08986A6C;
      }
      goto L_08986A0C;
    }
L_08986A0C:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 61 ? 1u : 0u);
      if (branch_taken) {
          goto L_08986A20;
      }
      goto L_08986A18;
    }
L_08986A18:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08986A30;
      }
      goto L_08986A20;
    }
L_08986A20:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 67 ? 1u : 0u);
      if (branch_taken) {
          goto L_08986A38;
      }
      goto L_08986A28;
    }
L_08986A28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08986A6C;
      }
      goto L_08986A30;
    }
L_08986A30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08986A98;
      }
      goto L_08986A38;
    }
L_08986A38:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08986A6C;
      }
      goto L_08986A40;
    }
L_08986A40:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16296)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08986A5C;
      }
      goto L_08986A4C;
    }
L_08986A4C:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08986A64;
      }
      goto L_08986A54;
    }
L_08986A54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08986A6C;
      }
      goto L_08986A5C;
    }
L_08986A5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08986A98;
      }
      goto L_08986A64;
    }
L_08986A64:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_08986A6C;
L_08986A6C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16340), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16336), ctx.gpr[4]);
    ctx.gpr[31] = (0x08986A7Cu);
    ctx.gpr[4] = (0u | 1u);
    goto L_089871DC;
L_08986A7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08986A98;
      }
      goto L_08986A84;
    }
L_08986A84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08986A98;
      }
      goto L_08986A8C;
    }
L_08986A8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08986A98;
      }
      goto L_08986A94;
    }
L_08986A94:
    ctx.gpr[2] = (0u | 0u);
    goto L_08986A98;
L_08986A98:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986AA4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16328)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[8] = (2234u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4968));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    goto L_08986AF8;
L_08986AF8:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (ctx.gpr[29] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08986AF8;
      }
      goto L_08986B14;
    }
L_08986B14:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (ctx.gpr[6] + static_cast<std::uint32_t>(64));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986B24:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986B2C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
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
L_08986B50:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-224));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16268));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[31]);
    ctx.gpr[31] = (0x08986B8Cu);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x08986B8Cu) goto L_08986B8C;
    return;
L_08986B8C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(7712));
    ctx.gpr[19] = (2234u << 16u);
    ctx.gpr[20] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[5]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4968));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08986BBC;
      }
      goto L_08986BB0;
    }
L_08986BB0:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x08986BBCu);
    ctx.gpr[5] = (0u | 99u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 598u, 0x0888A1F8u>(ctx, &aot_mem) && ctx.pc == 0x08986BBCu) goto L_08986BBC;
    return;
L_08986BBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16336)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08986CBC;
      }
      goto L_08986BC8;
    }
L_08986BC8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-16280)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08986CEC;
      }
      goto L_08986BD8;
    }
L_08986BD8:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-16280), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16264));
    ctx.gpr[18] = (ctx.gpr[28] | 0u);
    ctx.gpr[30] = (2232u << 16u);
    ctx.gpr[23] = (2232u << 16u);
    ctx.gpr[20] = (2232u << 16u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[21] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16248));
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-16272));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-6616));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-5616));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-5640));
    goto L_08986C18;
L_08986C18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16336)));
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[30]);
      if (branch_taken) {
          goto L_08986C48;
      }
      goto L_08986C30;
    }
L_08986C30:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[31] = (0x08986C40u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x08986C40u) goto L_08986C40;
    return;
L_08986C40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08986C5C;
      }
      goto L_08986C48;
    }
L_08986C48:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08986C5Cu);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x08986C5Cu) goto L_08986C5C;
    return;
L_08986C5C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08986C70u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 369u, 0x08871440u>(ctx, &aot_mem) && ctx.pc == 0x08986C70u) goto L_08986C70;
    return;
L_08986C70:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08986C98;
      }
      goto L_08986C78;
    }
L_08986C78:
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08986C8Cu);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x08986C8Cu) goto L_08986C8C;
    return;
L_08986C8C:
    ctx.gpr[31] = (0x08986C94u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 250u, 0x08938F04u>(ctx, &aot_mem) && ctx.pc == 0x08986C94u) goto L_08986C94;
    return;
L_08986C94:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-16276), ctx.gpr[2]);
    goto L_08986C98;
L_08986C98:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08986C18;
      }
      goto L_08986CAC;
    }
L_08986CAC:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[20] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08986CEC;
      }
      goto L_08986CBC;
    }
L_08986CBC:
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6616));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5596));
    ctx.gpr[31] = (0x08986CECu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-5640));
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x08986CECu) goto L_08986CEC;
    return;
L_08986CEC:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16240));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08986D00u);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    goto L_08986B2C;
L_08986D00:
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08986D58;
      }
      goto L_08986D10;
    }
L_08986D10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16336)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08986D30;
      }
      goto L_08986D1C;
    }
L_08986D1C:
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16276)));
    ctx.gpr[17] = (ctx.gpr[5] + ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08986D74;
      }
      goto L_08986D30;
    }
L_08986D30:
    ctx.gpr[31] = (0x08986D38u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 250u, 0x08938F04u>(ctx, &aot_mem) && ctx.pc == 0x08986D38u) goto L_08986D38;
    return;
L_08986D38:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08986D44u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 593u, 0x0888A1B0u>(ctx, &aot_mem) && ctx.pc == 0x08986D44u) goto L_08986D44;
    return;
L_08986D44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16336)));
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[17] = (ctx.gpr[5] + ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08986D74;
      }
      goto L_08986D58;
    }
L_08986D58:
    ctx.gpr[31] = (0x08986D60u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 250u, 0x08938F04u>(ctx, &aot_mem) && ctx.pc == 0x08986D60u) goto L_08986D60;
    return;
L_08986D60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16336)));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[17] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08986D74;
L_08986D74:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08986E68;
      }
      goto L_08986D7C;
    }
L_08986D7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16316)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16328)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08986DB4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5576));
    goto L_08986B2C;
L_08986DB4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08986DC4u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 258u, 0x08938F7Cu>(ctx, &aot_mem) && ctx.pc == 0x08986DC4u) goto L_08986DC4;
    return;
L_08986DC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16316)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16336)));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16312)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16328)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (ctx.gpr[7] + ctx.gpr[19]);
    ctx.gpr[5] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08986E20;
      }
      goto L_08986DFC;
    }
L_08986DFC:
    ctx.gpr[7] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08986E20;
      }
      goto L_08986E08;
    }
L_08986E08:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[20];
    ctx.gpr[7] = (0u | 3u);
      if (branch_taken) {
          goto L_08986E20;
      }
      goto L_08986E10;
    }
L_08986E10:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[7] = (0u | 4u);
      if (branch_taken) {
          goto L_08986E20;
      }
      goto L_08986E18;
    }
L_08986E18:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08986E24;
      }
      goto L_08986E20;
    }
L_08986E20:
    ctx.gpr[5] = (0u | 50u);
    goto L_08986E24;
L_08986E24:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08986E40u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 274u, 0x089390ACu>(ctx, &aot_mem) && ctx.pc == 0x08986E40u) goto L_08986E40;
    return;
L_08986E40:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16224));
    ctx.gpr[31] = (0x08986E50u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 314u, 0x08939328u>(ctx, &aot_mem) && ctx.pc == 0x08986E50u) goto L_08986E50;
    return;
L_08986E50:
    ctx.gpr[31] = (0x08986E58u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 286u, 0x089391C0u>(ctx, &aot_mem) && ctx.pc == 0x08986E58u) goto L_08986E58;
    return;
L_08986E58:
    ctx.gpr[31] = (0x08986E60u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 593u, 0x0888A1B0u>(ctx, &aot_mem) && ctx.pc == 0x08986E60u) goto L_08986E60;
    return;
L_08986E60:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16336)));
      if (branch_taken) {
          goto L_08986FB0;
      }
      goto L_08986E68;
    }
L_08986E68:
    ctx.gpr[5] = (0u | 67u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08986F20;
      }
      goto L_08986E74;
    }
L_08986E74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16316)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16328)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08986EACu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5576));
    goto L_08986B2C;
L_08986EAC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08986EBCu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 258u, 0x08938F7Cu>(ctx, &aot_mem) && ctx.pc == 0x08986EBCu) goto L_08986EBC;
    return;
L_08986EBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16336)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16316)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16328)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (0u | 50u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08986F00u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 274u, 0x089390ACu>(ctx, &aot_mem) && ctx.pc == 0x08986F00u) goto L_08986F00;
    return;
L_08986F00:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16224));
    ctx.gpr[31] = (0x08986F10u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 314u, 0x08939328u>(ctx, &aot_mem) && ctx.pc == 0x08986F10u) goto L_08986F10;
    return;
L_08986F10:
    ctx.gpr[31] = (0x08986F18u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 286u, 0x089391C0u>(ctx, &aot_mem) && ctx.pc == 0x08986F18u) goto L_08986F18;
    return;
L_08986F18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16336)));
      if (branch_taken) {
          goto L_08986FB0;
      }
      goto L_08986F20;
    }
L_08986F20:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08986F30u);
    ctx.gpr[18] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5532));
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 262u, 0x08938FD8u>(ctx, &aot_mem) && ctx.pc == 0x08986F30u) goto L_08986F30;
    return;
L_08986F30:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08986F44u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    goto L_08986B2C;
L_08986F44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16336)));
    ctx.gpr[5] = (0u | 23u);
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[17] = (ctx.gpr[6] + ctx.gpr[19]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08986F74;
      }
      goto L_08986F60;
    }
L_08986F60:
    ctx.gpr[5] = (0u | 22u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 25u);
      if (branch_taken) {
          goto L_08986F74;
      }
      goto L_08986F6C;
    }
L_08986F6C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08986F78;
      }
      goto L_08986F74;
    }
L_08986F74:
    ctx.gpr[18] = (0u | 1u);
    goto L_08986F78;
L_08986F78:
    ctx.gpr[31] = (0x08986F80u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 262u, 0x08938FD8u>(ctx, &aot_mem) && ctx.pc == 0x08986F80u) goto L_08986F80;
    return;
L_08986F80:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08986F9Cu);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 274u, 0x089390ACu>(ctx, &aot_mem) && ctx.pc == 0x08986F9Cu) goto L_08986F9C;
    return;
L_08986F9C:
    ctx.gpr[31] = (0x08986FA4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 286u, 0x089391C0u>(ctx, &aot_mem) && ctx.pc == 0x08986FA4u) goto L_08986FA4;
    return;
L_08986FA4:
    ctx.gpr[31] = (0x08986FACu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 593u, 0x0888A1B0u>(ctx, &aot_mem) && ctx.pc == 0x08986FACu) goto L_08986FAC;
    return;
L_08986FAC:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16336)));
    goto L_08986FB0;
L_08986FB0:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08986FC4;
      }
      goto L_08986FB8;
    }
L_08986FB8:
    ctx.gpr[31] = (0x08986FC0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 254u, 0x08938F40u>(ctx, &aot_mem) && ctx.pc == 0x08986FC0u) goto L_08986FC0;
    return;
L_08986FC0:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16336)));
    goto L_08986FC4;
L_08986FC4:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08986FF0;
      }
      goto L_08986FCC;
    }
L_08986FCC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16316)));
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-439));
    ctx.gpr[31] = (0x08986FE4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5496));
    goto L_08986B2C;
L_08986FE4:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16336)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 40 ? 1u : 0u);
      if (branch_taken) {
          goto L_08987008;
      }
      goto L_08986FF0;
    }
L_08986FF0:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16216));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08987000u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_08986B2C;
L_08987000:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16336)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 40 ? 1u : 0u);
    goto L_08987008;
L_08987008:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 61 ? 1u : 0u);
      if (branch_taken) {
          goto L_08987030;
      }
      goto L_08987010;
    }
L_08987010:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08987030;
      }
      goto L_08987018;
    }
L_08987018:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16332)));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16332), ctx.gpr[22]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[28] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(6620), ctx.gpr[17]);
      if (branch_taken) {
          goto L_0898713C;
      }
      goto L_08987030;
    }
L_08987030:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_089870C8;
      }
      goto L_08987038;
    }
L_08987038:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16312)));
    ctx.gpr[4] = (0u | 255u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08987068;
      }
      goto L_08987048;
    }
L_08987048:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (2237u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16316)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(23216));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089870BC;
      }
      goto L_08987068;
    }
L_08987068:
    ctx.gpr[4] = (ctx.gpr[5] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089870BC;
      }
      goto L_08987074;
    }
L_08987074:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[5]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-5088)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    jump_target = ctx.gpr[1];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16320)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987090:
    ctx.gpr[6] = (2237u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(23192));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089870BC;
      }
      goto L_089870A8;
    }
L_089870A8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16308), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089870BC;
      }
      goto L_089870B0;
    }
L_089870B0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16304), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089870BC;
      }
      goto L_089870B8;
    }
L_089870B8:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16300), ctx.gpr[4]);
    goto L_089870BC;
L_089870BC:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16316), ctx.gpr[22]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16320), ctx.gpr[22]);
      if (branch_taken) {
          goto L_0898713C;
      }
      goto L_089870C8;
    }
L_089870C8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 61 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 67 ? 1u : 0u);
      if (branch_taken) {
          goto L_089870FC;
      }
      goto L_089870D4;
    }
L_089870D4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089870FC;
      }
      goto L_089870DC;
    }
L_089870DC:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089870F0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5472));
    goto L_08986B2C;
L_089870F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16336)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16296), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0898713C;
      }
      goto L_089870FC;
    }
L_089870FC:
    ctx.gpr[4] = (0u | 67u);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0898713C;
      }
      goto L_08987108;
    }
L_08987108:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16312)));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08987134;
      }
      goto L_08987118;
    }
L_08987118:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16320)));
    ctx.gpr[6] = (2237u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(23192));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08987134;
      }
      goto L_08987134;
    }
L_08987134:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16316), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16320), ctx.gpr[22]);
    goto L_0898713C;
L_0898713C:
    ctx.gpr[31] = (0x08987144u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 593u, 0x0888A1B0u>(ctx, &aot_mem) && ctx.pc == 0x08987144u) goto L_08987144;
    return;
L_08987144:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16336)));
    ctx.gpr[5] = (2279u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17408));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16340), ctx.gpr[22]);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16336), ctx.gpr[22]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08987194;
      }
      goto L_08987170;
    }
L_08987170:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16284), ctx.gpr[22]);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x08987184u);
    ctx.gpr[5] = (0u | 99u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 599u, 0x0888A200u>(ctx, &aot_mem) && ctx.pc == 0x08987184u) goto L_08987184;
    return;
L_08987184:
    ctx.gpr[31] = (0x0898718Cu);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B734F4u;
    return;
L_0898718C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_08987194;
L_08987194:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089871A8;
      }
      goto L_0898719C;
    }
L_0898719C:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x089871A8u);
    ctx.gpr[5] = (0u | 99u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 599u, 0x0888A200u>(ctx, &aot_mem) && ctx.pc == 0x089871A8u) goto L_089871A8;
    return;
L_089871A8:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089871DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08987214;
      }
      goto L_08987204;
    }
L_08987204:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16284)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08987230;
      }
      goto L_08987214;
    }
L_08987214:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16336)));
    ctx.gpr[17] = (0u | 2u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 68 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[28] + static_cast<std::uint32_t>(7712));
      if (branch_taken) {
          goto L_08987240;
      }
      goto L_08987228;
    }
L_08987228:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08987238;
      }
      goto L_08987230;
    }
L_08987230:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0898755C;
      }
      goto L_08987238;
    }
L_08987238:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08987264;
      }
      goto L_08987240;
    }
L_08987240:
    ctx.gpr[7] = (2279u << 16u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(17408));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16340), ctx.gpr[5]);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16336), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08987264;
L_08987264:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08987290;
      }
      goto L_0898726C;
    }
L_0898726C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16316)));
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-439));
    ctx.gpr[31] = (0x08987284u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5444));
    goto L_08986B2C;
L_08987284:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16336)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 40 ? 1u : 0u);
      if (branch_taken) {
          goto L_089872AC;
      }
      goto L_08987290;
    }
L_08987290:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089872A4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5408));
    goto L_08986B2C;
L_089872A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16336)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 40 ? 1u : 0u);
    goto L_089872AC;
L_089872AC:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 61 ? 1u : 0u);
      if (branch_taken) {
          goto L_089872E8;
      }
      goto L_089872B4;
    }
L_089872B4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089872E8;
      }
      goto L_089872BC;
    }
L_089872BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16332)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089874D0;
      }
      goto L_089872CC;
    }
L_089872CC:
    ctx.gpr[7] = (2234u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16360)));
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4968));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089874D0;
      }
      goto L_089872E8;
    }
L_089872E8:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089873B0;
      }
      goto L_089872F0;
    }
L_089872F0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16312)));
    ctx.gpr[6] = (0u | 255u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 7u);
      if (branch_taken) {
          goto L_08987320;
      }
      goto L_08987300;
    }
L_08987300:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 6u);
      if (branch_taken) {
          goto L_0898737C;
      }
      goto L_08987308;
    }
L_08987308:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 5u);
      if (branch_taken) {
          goto L_08987374;
      }
      goto L_08987310;
    }
L_08987310:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089874D0;
      }
      goto L_08987318;
    }
L_08987318:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089874D0;
      }
      goto L_08987320;
    }
L_08987320:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16324)));
    ctx.gpr[5] = (2248u << 16u);
    ctx.gpr[6] = (ctx.gpr[19] << 11u);
    ctx.gpr[7] = (0u - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 1u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21504));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (2234u << 16u);
    ctx.gpr[7] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4968));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (2237u << 16u);
    ctx.gpr[7] = (ctx.gpr[19] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(560));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089874D0;
      }
      goto L_08987374;
    }
L_08987374:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089874D0;
      }
      goto L_0898737C;
    }
L_0898737C:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0898738Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5388));
    goto L_08986B2C;
L_0898738C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16336)));
    ctx.gpr[5] = (2234u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4968));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (2237u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(640));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
      if (branch_taken) {
          goto L_089874D0;
      }
      goto L_089873B0;
    }
L_089873B0:
    ctx.gpr[5] = (0u | 67u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089874D0;
      }
      goto L_089873BC;
    }
L_089873BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16312)));
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[20] = (2234u << 16u);
      if (branch_taken) {
          goto L_089874D0;
      }
      goto L_089873CC;
    }
L_089873CC:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4968));
    ctx.gpr[19] = (2237u << 16u);
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08987420;
      }
      goto L_089873E0;
    }
L_089873E0:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0898744C;
      }
      goto L_089873E8;
    }
L_089873E8:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08987478;
      }
      goto L_089873F0;
    }
L_089873F0:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_089874A4;
      }
      goto L_089873F8;
    }
L_089873F8:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08987408u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5360));
    goto L_08986B2C;
L_08987408:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16336)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(23168)));
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089874D0;
      }
      goto L_08987420;
    }
L_08987420:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08987430u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5324));
    goto L_08986B2C;
L_08987430:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16336)));
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(23168));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089874D0;
      }
      goto L_0898744C;
    }
L_0898744C:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0898745Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5288));
    goto L_08986B2C;
L_0898745C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16336)));
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(23168));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089874D0;
      }
      goto L_08987478;
    }
L_08987478:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08987488u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5252));
    goto L_08986B2C;
L_08987488:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16336)));
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(23168));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089874D0;
      }
      goto L_089874A4;
    }
L_089874A4:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089874B4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5216));
    goto L_08986B2C;
L_089874B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16336)));
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(23168));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089874D0;
      }
      goto L_089874D0;
    }
L_089874D0:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08987500;
      }
      goto L_089874D8;
    }
L_089874D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16312)));
    ctx.gpr[5] = (0u | 255u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08987500;
      }
      goto L_089874E8;
    }
L_089874E8:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089874F8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5180));
    goto L_08986B2C;
L_089874F8:
    ctx.gpr[31] = (0x08987500u);
    // nop
    goto L_08986678;
L_08987500:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[18]));
      if (branch_taken) {
          goto L_0898754C;
      }
      goto L_0898750C;
    }
L_0898750C:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (2200u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(4148)));
    ctx.gpr[7] = (0u | 2048u);
    ctx.gpr[8] = (0u | 16384u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5156));
    ctx.gpr[31] = (0x08987530u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(27472));
    ctx.pc = 0x08B734B4u;
    return;
L_08987530:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16284), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[31] = (0x08987544u);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    ctx.pc = 0x08B73464u;
    return;
L_08987544:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08987558;
      }
      goto L_0898754C;
    }
L_0898754C:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x08987558u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    goto L_08986B50;
L_08987558:
    ctx.gpr[2] = (0u | 0u);
    goto L_0898755C;
L_0898755C:
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
L_0898757C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16344)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2237u << 16u);
      if (branch_taken) {
          goto L_08987944;
      }
      goto L_08987598;
    }
L_08987598:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-1280), 0u);
    ctx.gpr[5] = (0u | 349u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1280));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 350u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5876u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5884u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5887u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5890u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5893u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5896u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5899u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5902u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5905u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5908u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5911u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5914u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5917u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5920u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5923u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5926u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5928u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(76), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5929u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5933u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(84), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5937u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(88), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5941u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(92), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5945u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(96), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5948u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5952u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(104), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5953u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(108), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5954u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(112), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5955u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(116), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5956u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(120), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5960u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(124), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5961u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(128), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5962u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(132), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5963u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(136), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5964u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(140), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5969u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(144), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5970u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(148), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5971u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(152), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5972u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(156), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5973u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(160), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5974u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(164), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5975u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(168), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5976u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(172), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5977u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(176), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5978u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(180), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5979u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(184), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5980u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(188), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5981u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(192), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5982u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(196), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5983u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(200), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5984u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(204), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5985u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(208), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5986u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(212), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5987u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(216), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5990u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(220), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5991u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(224), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5995u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(228), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5996u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(232), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5997u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(236), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5998u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(240), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5999u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(244), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 6004u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(248), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 6009u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(252), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 6014u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(256), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 6019u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(260), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 6023u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(264), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 6027u);
    ctx.gpr[31] = (0x089877BCu);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(268), ctx.gpr[5]);
    goto L_0898670C;
L_089877BC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089877F4;
      }
      goto L_089877C4;
    }
L_089877C4:
    ctx.gpr[31] = (0x089877CCu);
    // nop
    goto L_08986698;
L_089877CC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089877EC;
      }
      goto L_089877D4;
    }
L_089877D4:
    ctx.gpr[31] = (0x089877DCu);
    // nop
    goto L_089867C0;
L_089877DC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089877FC;
      }
      goto L_089877E4;
    }
L_089877E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08987948;
      }
      goto L_089877EC;
    }
L_089877EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08987948;
      }
      goto L_089877F4;
    }
L_089877F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08987948;
      }
      goto L_089877FC;
    }
L_089877FC:
    ctx.gpr[4] = (0u | 127u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16292), ctx.gpr[4]);
    ctx.gpr[5] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16288), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-18896));
    ctx.gpr[8] = (2236u << 16u);
    ctx.gpr[9] = (2237u << 16u);
    ctx.gpr[10] = (2237u << 16u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-19168));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(23216));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(560));
    goto L_08987834;
L_08987834:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08987834;
      }
      goto L_0898784C;
    }
L_0898784C:
    ctx.gpr[4] = (0u | 0u);
    goto L_08987850;
L_08987850:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(128), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(352), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(464), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(576), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(688), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 28 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08987850;
      }
      goto L_08987878;
    }
L_08987878:
    ctx.gpr[5] = (2279u << 16u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17408));
    goto L_08987884;
L_08987884:
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 68 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08987884;
      }
      goto L_089878A0;
    }
L_089878A0:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    goto L_089878A8;
L_089878A8:
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089878A8;
      }
      goto L_089878C4;
    }
L_089878C4:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16324), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16320), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16316), ctx.gpr[7]);
    ctx.gpr[4] = (2237u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(23192), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(23192));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16332), ctx.gpr[7]);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[4] = (0u | 69u);
    ctx.gpr[5] = (ctx.gpr[28] | 0u);
    goto L_089878F0;
L_089878F0:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(6620), ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[7]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089878F0;
      }
      goto L_08987904;
    }
L_08987904:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08987944;
      }
      goto L_0898790C;
    }
L_0898790C:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7712));
    ctx.gpr[31] = (0x0898791Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5132));
    goto L_08986B2C;
L_0898791C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16340), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16336), 0u);
    ctx.gpr[31] = (0x0898792Cu);
    ctx.gpr[4] = (0u | 0u);
    goto L_089871DC;
L_0898792C:
    ctx.gpr[16] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16340), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16336), ctx.gpr[16]);
    ctx.gpr[31] = (0x08987940u);
    ctx.gpr[4] = (0u | 0u);
    goto L_089871DC;
L_08987940:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-16344), ctx.gpr[16]);
    goto L_08987944;
L_08987944:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16344)));
    goto L_08987948;
L_08987948:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987958:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16320)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08987AA0;
      }
      goto L_08987968;
    }
L_08987968:
    ctx.gpr[6] = (0u | 255u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089879D8;
      }
      goto L_08987974;
    }
L_08987974:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5875 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089879C8;
      }
      goto L_08987980;
    }
L_08987980:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16324)));
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23216));
    goto L_08987994;
L_08987994:
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089879A4;
      }
      goto L_089879A0;
    }
L_089879A0:
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(7));
    goto L_089879A4;
L_089879A4:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089879D0;
      }
      goto L_089879B8;
    }
L_089879B8:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[8]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08987994;
      }
      goto L_089879C8;
    }
L_089879C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08987BFC;
      }
      goto L_089879D0;
    }
L_089879D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08987BFC;
      }
      goto L_089879D8;
    }
L_089879D8:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08987A1C;
      }
      goto L_089879E4;
    }
L_089879E4:
    ctx.gpr[6] = (2237u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(23192));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (2279u << 16u);
      if (branch_taken) {
          goto L_08987BF8;
      }
      goto L_08987A00;
    }
L_08987A00:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(17408));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(67)));
    ctx.gpr[2] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08987BF8;
      }
      goto L_08987A14;
    }
L_08987A14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08987BFC;
      }
      goto L_08987A1C;
    }
L_08987A1C:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 7 ? 1u : 0u);
      if (branch_taken) {
          goto L_08987A48;
      }
      goto L_08987A28;
    }
L_08987A28:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08987A6C;
      }
      goto L_08987A34;
    }
L_08987A34:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16308)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08987A74;
      }
      goto L_08987A40;
    }
L_08987A40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08987BFC;
      }
      goto L_08987A48;
    }
L_08987A48:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 8 ? 1u : 0u);
      if (branch_taken) {
          goto L_08987A7C;
      }
      goto L_08987A50;
    }
L_08987A50:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08987A6C;
      }
      goto L_08987A58;
    }
L_08987A58:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16300)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08987A98;
      }
      goto L_08987A64;
    }
L_08987A64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08987BFC;
      }
      goto L_08987A6C;
    }
L_08987A6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08987BFC;
      }
      goto L_08987A74;
    }
L_08987A74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08987BFC;
      }
      goto L_08987A7C;
    }
L_08987A7C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16304)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08987A90;
      }
      goto L_08987A88;
    }
L_08987A88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08987BFC;
      }
      goto L_08987A90;
    }
L_08987A90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08987BFC;
      }
      goto L_08987A98;
    }
L_08987A98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08987BFC;
      }
      goto L_08987AA0;
    }
L_08987AA0:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08987AC4;
      }
      goto L_08987AA8;
    }
L_08987AA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16312)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08987ABC;
      }
      goto L_08987AB4;
    }
L_08987AB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 2u);
      if (branch_taken) {
          goto L_08987BFC;
      }
      goto L_08987ABC;
    }
L_08987ABC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08987BFC;
      }
      goto L_08987AC4;
    }
L_08987AC4:
    ctx.gpr[6] = (0u | 255u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08987B34;
      }
      goto L_08987AD0;
    }
L_08987AD0:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5875 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08987B24;
      }
      goto L_08987ADC;
    }
L_08987ADC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16324)));
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23216));
    goto L_08987AF0;
L_08987AF0:
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08987B00;
      }
      goto L_08987AFC;
    }
L_08987AFC:
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(7));
    goto L_08987B00;
L_08987B00:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08987B2C;
      }
      goto L_08987B14;
    }
L_08987B14:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[8]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08987AF0;
      }
      goto L_08987B24;
    }
L_08987B24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08987BFC;
      }
      goto L_08987B2C;
    }
L_08987B2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08987BFC;
      }
      goto L_08987B34;
    }
L_08987B34:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08987B64;
      }
      goto L_08987B40;
    }
L_08987B40:
    ctx.gpr[6] = (2237u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(23192));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08987BF0;
      }
      goto L_08987B5C;
    }
L_08987B5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08987BFC;
      }
      goto L_08987B64;
    }
L_08987B64:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 7 ? 1u : 0u);
      if (branch_taken) {
          goto L_08987B84;
      }
      goto L_08987B70;
    }
L_08987B70:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08987BF0;
      }
      goto L_08987B7C;
    }
L_08987B7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08987B9C;
      }
      goto L_08987B84;
    }
L_08987B84:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 8 ? 1u : 0u);
      if (branch_taken) {
          goto L_08987BB8;
      }
      goto L_08987B8C;
    }
L_08987B8C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08987BD4;
      }
      goto L_08987B94;
    }
L_08987B94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08987BF0;
      }
      goto L_08987B9C;
    }
L_08987B9C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16308)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08987BB0;
      }
      goto L_08987BA8;
    }
L_08987BA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08987BF0;
      }
      goto L_08987BB0;
    }
L_08987BB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08987BFC;
      }
      goto L_08987BB8;
    }
L_08987BB8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16304)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08987BCC;
      }
      goto L_08987BC4;
    }
L_08987BC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08987BF0;
      }
      goto L_08987BCC;
    }
L_08987BCC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08987BFC;
      }
      goto L_08987BD4;
    }
L_08987BD4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16300)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08987BE8;
      }
      goto L_08987BE0;
    }
L_08987BE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08987BFC;
      }
      goto L_08987BE8;
    }
L_08987BE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08987BFC;
      }
      goto L_08987BF0;
    }
L_08987BF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08987BFC;
      }
      goto L_08987BF8;
    }
L_08987BF8:
    ctx.gpr[2] = (0u | 0u);
    goto L_08987BFC;
L_08987BFC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987C04:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7712));
    ctx.gpr[5] = (0u | 16384u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08987C1Cu);
    ctx.gpr[6] = (0u | 32u);
    goto L_08986B24;
L_08987C1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16360)));
    ctx.gpr[5] = (2234u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4968));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(160), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(164), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(168), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(172), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(176), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(180), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(184), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(188), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(192), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(196), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(200), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(204), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(208), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(212), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(216), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(220), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(224), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(228), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(232), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(236), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(240), ctx.gpr[4]);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987C88:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
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
    ctx.execute_vfpu_vdot_ct<4u, 0u, 1u, 4u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<4u>());
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08987CC8;
      }
      goto L_08987CC4;
    }
L_08987CC4:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08987CC8;
L_08987CC8:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
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
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[14]) || std::isnan(ctx.fpr[12])) && ctx.fpr[14] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08987D2C;
      }
      goto L_08987D00;
    }
L_08987D00:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
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
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[14];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08987D30;
      }
      goto L_08987D2C;
    }
L_08987D2C:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08987D30;
L_08987D30:
    ctx.gpr[31] = (0x08987D38u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem) && ctx.pc == 0x08987D38u) goto L_08987D38;
    return;
L_08987D38:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16164)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16168)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08987D4Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem) && ctx.pc == 0x08987D4Cu) goto L_08987D4C;
    return;
L_08987D4C:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08987D58u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem) && ctx.pc == 0x08987D58u) goto L_08987D58;
    return;
L_08987D58:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987D6C:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vf2h(64u, 0u, 2u);
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<64u>());
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987DD0:
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[6]);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[5]);
    ctx.execute_vfpu_vh2f(1u, 0u, 2u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
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
L_08987DF4:
    { const bool branch_taken = ctx.gpr[24] != 0u;
    // nop
      if (branch_taken) {
          goto L_08987E28;
      }
      goto L_08987DFC;
    }
L_08987DFC:
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<35u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = -vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<35u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<99u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = -vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<99u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<3u, 4u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 4u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<60u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<3u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<3u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = -vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<3u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<35u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<124u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<67u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<92u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<99u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<99u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = -vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<99u, 1u>(vfpu_d); }
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987E28:
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<67u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = -vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<67u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<99u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = -vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<99u, 1u>(vfpu_d); }
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[24] != ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08987E58;
      }
      goto L_08987E3C;
    }
L_08987E3C:
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<3u, 4u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 4u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<124u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<3u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<3u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = -vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<3u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<92u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<35u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<60u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<67u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<67u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = -vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<67u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<99u, 1u>(vfpu_d); }
    goto L_08987E58;
L_08987E58:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987E60:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08987EB4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    goto L_08987F80;
L_08987EB4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (0x08987EC0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 1u, 0x08988000u>(ctx, &aot_mem) && ctx.pc == 0x08987EC0u) goto L_08987EC0;
    return;
L_08987EC0:
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
L_08987ED8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987EFC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(31984));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(31984)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[7] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08987F40;
      }
      goto L_08987F34;
    }
L_08987F34:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(20));
    ctx.gpr[31] = (0x08987F40u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 736u, 0x0887F6B4u>(ctx, &aot_mem) && ctx.pc == 0x08987F40u) goto L_08987F40;
    return;
L_08987F40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(31984)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08987F68;
      }
      goto L_08987F5C;
    }
L_08987F5C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
    ctx.gpr[31] = (0x08987F68u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 736u, 0x0887F6B4u>(ctx, &aot_mem) && ctx.pc == 0x08987F68u) goto L_08987F68;
    return;
L_08987F68:
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
L_08987F80:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (2236u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(31984));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(31984)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[6] = (ctx.gpr[6] < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08987FCC;
      }
      goto L_08987FC0;
    }
L_08987FC0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08987FCCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 736u, 0x0887F6B4u>(ctx, &aot_mem) && ctx.pc == 0x08987FCCu) goto L_08987FCC;
    return;
L_08987FCC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08987FE0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 728u, 0x0887F5E4u>(ctx, &aot_mem) && ctx.pc == 0x08987FE0u) goto L_08987FE0;
    return;
L_08987FE0:
    ctx.gpr[31] = (0x08987FE8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 744u, 0x0887F7E8u>(ctx, &aot_mem) && ctx.pc == 0x08987FE8u) goto L_08987FE8;
    return;
L_08987FE8:
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
}

void recomp_unit_0096(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0096_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_96(Runtime &runtime) {
    runtime.register_generated_unit(96u, 0x08984000u, 16384u, &recomp_unit_0096, &recomp_unit_0096_entry);
    runtime.register_function(0x08984004u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984010u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984018u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984024u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984034u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984040u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984050u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984058u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898406Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984080u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898408Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898409Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089840A4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089840B4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089840BCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089840C4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089840CCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089840D8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089840E0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089840E8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089840F4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984108u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984114u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984124u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898412Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898413Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984144u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898414Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898415Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984170u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898417Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984188u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984198u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089841A4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089841B0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089841C0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089841CCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089841D8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089841E8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089841F4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984200u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984210u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898421Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984228u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984238u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984240u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984250u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898425Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984274u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898428Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089842B0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089842C4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089842C8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089842CCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089842D4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984304u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984328u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984330u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984338u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984344u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984350u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984358u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984360u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984378u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984394u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898439Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089843A8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089843B0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089843C4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089843E4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089843F8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984404u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984420u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984428u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984434u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984440u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984448u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898444Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984454u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898445Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898446Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984474u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898447Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984494u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089844B0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089844BCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089844D8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089844E0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089844FCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898451Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898452Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984538u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984544u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898454Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898455Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984564u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984570u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984574u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898458Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089845A8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089845B0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089845B4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089845C0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089845E0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089845F0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089845FCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984608u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984610u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984620u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984628u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984634u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984638u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984650u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984668u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984674u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898467Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984688u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898468Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984694u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898469Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089846A8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089846ACu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089846B4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089846BCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089846C8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089846CCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089846E0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089846ECu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089846F4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984700u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984704u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898470Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984714u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984720u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984724u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898472Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984738u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898473Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984744u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898474Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984754u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898475Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984768u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898476Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984774u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898477Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984788u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898478Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984794u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089847A0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089847A4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089847ACu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089847F4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984814u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898481Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984820u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898482Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984848u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898485Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984864u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984870u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898487Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984884u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984890u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984898u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089848A0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089848D0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089848E0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089848E8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089848F4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984904u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984910u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898491Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984924u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898492Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984938u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984948u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984954u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984960u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984978u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089849C0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089849DCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089849E8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089849FCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984A08u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984A1Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984A24u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984A3Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984A48u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984A50u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984A54u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984A60u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984A68u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984A74u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984A7Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984A80u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984A88u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984A90u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984AA0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984AA8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984AB0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984AC4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984AE4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984AECu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984AF0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984AFCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984B04u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984B18u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984B40u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984B54u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984B5Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984B68u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984B7Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984B84u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984B9Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984BA8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984BD0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984BE0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984BECu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984BF8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984C00u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984C10u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984C18u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984C24u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984C28u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984C44u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984C64u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984C78u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984C8Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984CA4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984CC0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984CD4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984CE0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984CECu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984CF8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984D00u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984D14u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984D24u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984D30u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984D3Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984D44u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984D4Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984D50u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984D5Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984D94u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984DA0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984DACu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984DB8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984DC0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984DCCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984DD4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984E20u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984E2Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984E3Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984E44u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984E50u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984E58u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984E60u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984E6Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984E84u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984EA8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984ECCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984ED8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984EE4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984EECu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984EF8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984EFCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984F08u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984F10u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984F1Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984F20u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984F38u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984F5Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984F70u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984F78u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984F84u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984F8Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984F98u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984FA0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984FACu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984FB4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984FC0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984FCCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984FE4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984FF0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984FFCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985018u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985038u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985040u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898504Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985054u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985060u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985070u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985078u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985094u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898509Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089850B8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089850E4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089850F0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089850F8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985104u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985118u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985120u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898512Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985148u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985150u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898515Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985168u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985178u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985184u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089851A0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089851ACu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089851B8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089851C4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089851CCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089851D8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089851E4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089851ECu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089851F8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985214u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985230u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985248u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985254u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898525Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985270u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985294u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089852A0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089852A8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089852B8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089852C4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089852CCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089852D8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089852DCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089852F4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985304u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985310u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985334u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985340u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985348u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985354u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985360u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985374u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985398u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089853A4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089853ACu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089853C4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089853C8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089853D4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089853DCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089853E8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089853ECu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985404u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985414u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985420u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985430u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898543Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985458u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985470u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898547Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985484u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985488u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985494u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898549Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089854A8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089854B0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089854B4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089854C0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089854C8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089854D4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089854DCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089854E0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089854ECu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089854F4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985500u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985508u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898551Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985540u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898554Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985554u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985588u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985594u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898559Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089855A8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089855ACu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089855C4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089855E0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089855ECu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089855F8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985604u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985618u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898563Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985648u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985658u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985660u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898566Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985678u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985684u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985690u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089856A0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089856A8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089856B4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089856C0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089856CCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089856D8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089856E8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089856F0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089856FCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985708u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985714u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985720u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985734u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985750u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985768u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985774u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898577Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985790u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089857B4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089857C0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089857C8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089857D8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089857E4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089857ECu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089857F8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089857FCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985814u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985824u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985830u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985854u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985860u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985868u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985874u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985880u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985894u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089858ACu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089858ECu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985908u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898592Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985968u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898597Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089859A0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089859C4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089859D0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089859DCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089859E4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089859F0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089859F8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985A04u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985A08u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985A1Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985A48u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985A60u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985A6Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985A74u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985A7Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985A88u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985A90u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985A9Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985AB0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985AB8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985AC0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985AC8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985AD0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985AD4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985AE0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985AECu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985AF8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985B00u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985B14u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985B28u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985B30u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985B38u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985B50u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985B58u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985B5Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985B70u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985B7Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985B88u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985B90u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985B94u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985BA4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985BB0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985BB8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985BBCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985BCCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985BE8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985BECu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985C0Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985C2Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985C30u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985C4Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985C54u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985C60u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985C64u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985C6Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985C74u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985C80u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985C98u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985CBCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985CC8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985CD0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985CD4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985CE0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985CE8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985CF4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985CF8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985D10u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985D2Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985D40u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985D48u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985D4Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985D54u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985D60u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985D78u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985D84u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985D90u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985DA4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985DB8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985DDCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985DE4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985DF4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985E1Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985E2Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985E50u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985E58u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985E9Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985EE0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985EF0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985EF8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985F28u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985F40u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985F48u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985F54u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985F5Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985F64u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985F6Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985F74u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985F98u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985FA0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985FA8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985FC4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985FCCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985FD8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985FECu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985FF4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898600Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986018u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986048u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986064u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986080u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898608Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986098u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089860A0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089860ACu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089860B4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089860C0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089860C8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089860D4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089860DCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089860F4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986108u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898612Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986144u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986160u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986168u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986170u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986194u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089861A0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089861A8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089861DCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089861FCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986204u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898620Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986220u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986228u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986240u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986270u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986288u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089862B8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089862D0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986300u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986318u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898634Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898639Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089863B4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089863E4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089863ECu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986404u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898641Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898644Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986450u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986468u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986480u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089864B4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089864CCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089864E4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986518u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986520u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986538u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986568u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986580u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089865ACu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089865C4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089865F4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986614u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986640u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986648u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986660u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986678u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898668Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986690u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986698u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089866C4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986704u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898670Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986734u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898673Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986748u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986750u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986764u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986770u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986780u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986788u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986790u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986798u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089867A0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089867A8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089867ACu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089867C0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089867CCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089867D4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089867DCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089867ECu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089867F8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986808u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986810u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986818u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986824u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898682Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986848u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986850u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986858u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986860u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986868u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986870u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986878u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986880u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986888u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986890u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089868ACu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089868C4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089868D0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089868D8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089868F8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986900u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898690Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898692Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986934u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898693Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986940u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898694Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986968u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898697Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898698Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986998u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089869A0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089869B8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089869C4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089869D0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089869D8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089869E0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089869E8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089869ECu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986A04u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986A0Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986A18u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986A20u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986A28u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986A30u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986A38u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986A40u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986A4Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986A54u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986A5Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986A64u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986A6Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986A7Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986A84u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986A8Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986A94u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986A98u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986AA4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986AF8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986B14u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986B24u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986B2Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986B50u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986B8Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986BB0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986BBCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986BC8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986BD8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986C18u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986C30u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986C40u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986C48u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986C5Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986C70u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986C78u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986C8Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986C94u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986C98u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986CACu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986CBCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986CECu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986D00u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986D10u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986D1Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986D30u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986D38u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986D44u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986D58u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986D60u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986D74u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986D7Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986DB4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986DC4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986DFCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986E08u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986E10u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986E18u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986E20u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986E24u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986E40u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986E50u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986E58u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986E60u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986E68u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986E74u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986EACu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986EBCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986F00u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986F10u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986F18u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986F20u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986F30u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986F44u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986F60u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986F6Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986F74u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986F78u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986F80u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986F9Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986FA4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986FACu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986FB0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986FB8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986FC0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986FC4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986FCCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986FE4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986FF0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987000u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987008u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987010u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987018u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987030u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987038u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987048u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987068u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987074u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987090u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089870A8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089870B0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089870B8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089870BCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089870C8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089870D4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089870DCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089870F0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089870FCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987108u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987118u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987134u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898713Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987144u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987170u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987184u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898718Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987194u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898719Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089871A8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089871DCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987204u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987214u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987228u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987230u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987238u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987240u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987264u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898726Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987284u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987290u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089872A4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089872ACu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089872B4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089872BCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089872CCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089872E8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089872F0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987300u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987308u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987310u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987318u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987320u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987374u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898737Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898738Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089873B0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089873BCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089873CCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089873E0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089873E8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089873F0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089873F8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987408u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987420u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987430u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898744Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898745Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987478u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987488u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089874A4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089874B4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089874D0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089874D8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089874E8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089874F8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987500u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898750Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987530u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987544u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898754Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987558u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898755Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898757Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987598u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089877BCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089877C4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089877CCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089877D4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089877DCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089877E4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089877ECu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089877F4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089877FCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987834u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898784Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987850u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987878u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987884u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089878A0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089878A8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089878C4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089878F0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987904u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898790Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898791Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898792Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987940u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987944u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987948u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987958u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987968u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987974u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987980u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987994u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089879A0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089879A4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089879B8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089879C8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089879D0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089879D8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089879E4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987A00u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987A14u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987A1Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987A28u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987A34u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987A40u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987A48u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987A50u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987A58u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987A64u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987A6Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987A74u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987A7Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987A88u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987A90u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987A98u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987AA0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987AA8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987AB4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987ABCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987AC4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987AD0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987ADCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987AF0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987AFCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987B00u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987B14u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987B24u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987B2Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987B34u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987B40u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987B5Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987B64u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987B70u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987B7Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987B84u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987B8Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987B94u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987B9Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987BA8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987BB0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987BB8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987BC4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987BCCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987BD4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987BE0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987BE8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987BF0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987BF8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987BFCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987C04u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987C1Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987C88u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987CC4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987CC8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987D00u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987D2Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987D30u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987D38u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987D4Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987D58u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987D6Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987DD0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987DF4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987DFCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987E28u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987E3Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987E58u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987E60u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987EB4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987EC0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987ED8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987EFCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987F34u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987F40u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987F5Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987F68u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987F80u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987FC0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987FCCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987FE0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987FE8u, &recomp_unit_0096, "recomp_unit_0096");
}
} // namespace psprecomp
