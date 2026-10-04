#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0058[4096] = {
    1, 0, 2, 0, 0, 0, 3, 0, 0, 4, 0, 0, 0, 0, 0, 5, 0, 6, 0, 7, 0, 0, 8, 0, 0, 0, 0, 0, 9, 0, 10, 0,
    11, 0, 0, 12, 0, 0, 0, 0, 0, 13, 0, 14, 0, 15, 0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 18, 0, 19, 0, 0, 0, 0, 20,
    0, 0, 21, 0, 22, 0, 0, 0, 0, 23, 0, 0, 24, 0, 25, 0, 26, 0, 27, 0, 28, 0, 29, 0, 30, 0, 0, 0, 0, 0, 0, 0,
    0, 31, 0, 32, 0, 0, 0, 33, 0, 0, 0, 0, 34, 0, 0, 35, 0, 0, 0, 0, 36, 0, 0, 37, 0, 0, 0, 0, 38, 0, 0, 39,
    0, 0, 0, 0, 40, 0, 0, 41, 0, 0, 0, 0, 42, 0, 0, 0, 0, 43, 0, 44, 0, 0, 0, 0, 45, 0, 0, 46, 0, 47, 0, 48,
    0, 49, 0, 50, 0, 0, 51, 0, 52, 0, 53, 0, 54, 0, 0, 55, 0, 0, 56, 57, 0, 58, 0, 59, 0, 60, 0, 0, 61, 0, 62, 0,
    0, 0, 0, 0, 0, 63, 0, 0, 0, 64, 0, 65, 0, 66, 0, 67, 0, 68, 0, 69, 0, 70, 0, 0, 71, 0, 72, 0, 0, 73, 0, 0,
    74, 75, 0, 76, 0, 77, 0, 78, 0, 0, 79, 0, 80, 0, 81, 0, 82, 0, 83, 84, 0, 85, 0, 0, 0, 86, 0, 87, 88, 0, 89, 0,
    0, 90, 0, 0, 91, 92, 0, 93, 0, 94, 0, 95, 0, 0, 96, 0, 97, 0, 98, 0, 99, 0, 100, 101, 0, 102, 0, 0, 0, 103, 0, 104,
    105, 0, 106, 0, 107, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 110, 0, 0, 0, 0, 111, 0, 0, 112, 113, 0, 0, 0, 114, 115, 0, 116, 0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 119, 0,
    120, 0, 121, 0, 122, 0, 123, 0, 0, 124, 0, 125, 0, 126, 0, 127, 0, 0, 128, 0, 0, 129, 130, 0, 131, 0, 0, 0, 0, 0, 0, 0,
    132, 0, 133, 0, 134, 0, 135, 0, 136, 0, 137, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 140, 0, 0, 0,
    141, 0, 0, 0, 142, 0, 0, 0, 143, 0, 144, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0, 148, 0,
    0, 149, 0, 0, 0, 0, 0, 0, 150, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 153, 0,
    0, 0, 154, 0, 155, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 159, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 162, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 166, 0, 167,
    0, 0, 0, 168, 0, 169, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 172, 0, 0, 0, 173, 0, 174, 0, 175,
    0, 176, 0, 177, 0, 0, 0, 0, 0, 178, 0, 0, 179, 0, 0, 0, 0, 0, 180, 0, 181, 0, 182, 0, 183, 0, 184, 0, 185, 0, 186, 0,
    0, 0, 187, 188, 0, 0, 0, 0, 0, 189, 0, 190, 0, 191, 0, 192, 0, 193, 0, 194, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 197, 0, 198, 0, 0, 199, 0, 200, 0, 0, 0, 0, 0, 201, 0, 202, 0, 0, 203,
    0, 0, 204, 0, 205, 0, 206, 0, 0, 207, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0,
    0, 0, 212, 0, 0, 0, 213, 0, 214, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 218, 0, 0, 0, 219, 0, 0, 0, 220, 0,
    0, 221, 0, 0, 0, 222, 0, 223, 0, 0, 0, 224, 0, 225, 0, 226, 0, 0, 227, 0, 228, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0,
    230, 0, 231, 0, 232, 0, 0, 233, 0, 0, 234, 0, 235, 0, 236, 0, 0, 0, 237, 0, 238, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 241,
    0, 0, 0, 0, 242, 0, 0, 0, 0, 243, 0, 0, 0, 0, 244, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 246, 0, 247, 0, 0, 0,
    248, 0, 249, 0, 0, 250, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 253, 0, 254, 0, 0, 255, 0, 0, 256, 0, 0, 0, 0, 257, 0, 258, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0,
    260, 0, 0, 0, 261, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 264, 0, 0, 265, 0, 266, 0, 0, 0, 267, 0,
    268, 0, 0, 0, 269, 0, 0, 0, 270, 0, 271, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 273, 0, 274, 0, 275, 0, 276, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 278, 0, 0, 279, 0, 280, 0, 281, 0, 282, 0, 283, 0, 0, 284, 0, 0, 285,
    0, 0, 0, 0, 0, 286, 0, 0, 287, 0, 0, 288, 0, 289, 0, 0, 290, 0, 291, 0, 292, 0, 293, 0, 294, 0, 295, 0, 0, 0, 296, 0,
    297, 0, 0, 298, 0, 299, 0, 0, 300, 0, 0, 301, 0, 302, 0, 303, 0, 0, 0, 304, 0, 305, 0, 306, 307, 308, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0,
    0, 0, 311, 0, 0, 0, 312, 0, 313, 0, 314, 0, 0, 0, 315, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 317, 0, 0, 0, 318, 0, 319,
    0, 0, 0, 0, 0, 320, 0, 321, 0, 0, 0, 322, 0, 323, 0, 324, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 326, 0, 0, 0, 327,
    0, 328, 0, 329, 0, 0, 0, 330, 0, 0, 0, 331, 0, 332, 0, 0, 0, 0, 333, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    335, 0, 336, 0, 337, 0, 0, 0, 0, 0, 338, 0, 339, 0, 0, 0, 0, 0, 340, 341, 0, 0, 0, 342, 0, 343, 0, 0, 0, 344, 0, 0,
    345, 0, 0, 0, 0, 346, 0, 0, 0, 347, 0, 0, 348, 0, 349, 0, 0, 0, 0, 0, 350, 0, 351, 0, 0, 0, 352, 0, 353, 0, 354, 0,
    0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 356, 0, 0, 0, 0, 357, 0, 0, 0, 0, 358, 0, 0, 0, 359, 0, 0, 0, 360, 0, 0, 0,
    0, 0, 361, 0, 0, 0, 0, 362, 0, 363, 0, 364, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 366, 0, 367, 0, 0, 0, 368, 369, 0, 370,
    0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 373, 0, 374, 0, 375, 0, 0, 0, 376, 0, 0, 0,
    0, 0, 0, 377, 0, 0, 0, 0, 378, 0, 379, 0, 0, 0, 380, 381, 0, 0, 382, 0, 383, 0, 384, 0, 0, 0, 385, 0, 0, 0, 386, 0,
    387, 0, 388, 0, 0, 0, 0, 0, 0, 0, 389, 0, 390, 0, 0, 391, 0, 0, 0, 392, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0,
    395, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 398, 0, 0, 0, 399, 0, 400, 0, 401, 0, 0, 0, 0, 0, 0, 0, 402, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    403, 0, 404, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 407, 0, 0, 0, 0, 0, 408, 0, 409, 0, 410, 0, 411, 0, 412, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 415, 0, 416, 417,
    0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 420, 0, 421,
    422, 0, 0, 0, 423, 0, 424, 0, 425, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 427, 0, 428, 0, 429, 0, 430, 0, 431, 0, 432, 0,
    433, 0, 434, 0, 0, 0, 435, 0, 0, 0, 436, 0, 0, 0, 437, 0, 438, 0, 0, 0, 439, 0, 0, 0, 0, 0, 440, 0, 441, 0, 0, 442,
    0, 443, 0, 0, 0, 444, 0, 0, 0, 445, 0, 0, 446, 0, 447, 0, 448, 0, 449, 0, 450, 0, 451, 0, 0, 452, 0, 453, 0, 454, 0, 0,
    455, 0, 0, 0, 456, 0, 0, 0, 457, 0, 458, 0, 459, 0, 0, 460, 0, 0, 0, 461, 0, 462, 0, 0, 0, 463, 0, 0, 0, 464, 0, 0,
    0, 0, 465, 0, 0, 0, 466, 0, 0, 0, 467, 0, 468, 0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 471, 0, 0, 0, 472, 0, 0,
    0, 0, 473, 0, 0, 0, 474, 0, 0, 0, 475, 0, 0, 0, 476, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 0, 478, 0, 479, 0, 480, 0,
    481, 0, 0, 0, 0, 0, 0, 0, 482, 0, 483, 0, 484, 0, 485, 0, 486, 487, 0, 0, 488, 0, 0, 0, 489, 490, 0, 0, 491, 0, 0, 492,
    493, 0, 0, 494, 0, 0, 495, 0, 496, 0, 0, 0, 0, 0, 0, 0, 497, 0, 0, 0, 0, 0, 0, 0, 498, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 499, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 500, 0, 501, 0, 502, 503, 0, 504, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 505, 0, 506, 0, 507, 508, 0, 0, 0, 509, 0,
    510, 0, 511, 0, 0, 0, 0, 0, 0, 512, 0, 0, 0, 0, 513, 0, 514, 0, 515, 0, 0, 0, 0, 0, 0, 0, 0, 0, 516, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 517, 0, 0, 0, 518, 0, 0, 0, 519, 0, 520, 521, 0, 522, 0, 523, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 524, 0, 0, 0, 525, 0, 0, 0, 526,
    0, 527, 528, 0, 529, 0, 0, 0, 530, 0, 0, 0, 531, 0, 532, 533, 0, 534, 0, 535, 0, 0, 0, 0, 536, 0, 0, 0, 0, 0, 0, 537,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 538, 0, 0, 0, 0, 0, 0, 539, 0, 540, 0, 0, 0, 541, 0, 0, 0, 542, 0, 0, 543, 0, 0,
    544, 0, 0, 0, 545, 546, 0, 0, 0, 547, 0, 548, 0, 0, 0, 549, 0, 0, 0, 550, 0, 551, 0, 552, 0, 553, 0, 0, 0, 554, 0, 0,
    0, 0, 0, 0, 0, 0, 555, 0, 556, 0, 557, 0, 0, 0, 0, 558, 0, 0, 0, 0, 0, 559, 0, 560, 0, 0, 0, 0, 0, 0, 561, 0,
    0, 0, 0, 0, 0, 562, 0, 563, 0, 564, 0, 0, 0, 0, 0, 0, 0, 0, 0, 565, 0, 0, 0, 0, 566, 0, 0, 0, 0, 567, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 568, 0, 0, 0, 0, 569, 0, 0, 0, 0, 570, 0, 0, 0, 0, 571, 0, 572, 0, 573, 0, 0, 0, 574, 0,
    0, 0, 0, 0, 575, 0, 0, 0, 0, 0, 0, 0, 0, 576, 0, 0, 0, 577, 0, 0, 0, 578, 0, 0, 0, 579, 0, 0, 0, 0, 0, 0,
    0, 0, 580, 0, 0, 0, 581, 0, 0, 582, 0, 583, 0, 0, 584, 0, 0, 585, 0, 586, 0, 0, 0, 0, 587, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 588, 0, 0, 589, 0, 590, 0, 0, 0, 591, 0, 0, 0, 592, 0, 0, 0, 593, 0, 594, 0, 595, 0, 596,
    0, 597, 0, 598, 0, 0, 599, 0, 0, 0, 600, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 601, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 602, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 603, 0, 0, 0, 0, 0, 0, 0, 604, 0, 0, 0, 0,
    605, 0, 0, 0, 0, 0, 0, 0, 606, 0, 0, 0, 607, 0, 608, 0, 0, 0, 609, 0, 0, 610, 0, 611, 0, 612, 0, 613, 0, 0, 0, 614,
    0, 0, 0, 615, 616, 0, 617, 0, 0, 0, 618, 0, 0, 0, 0, 0, 0, 619, 0, 620, 0, 0, 0, 621, 0, 0, 0, 0, 0, 0, 622, 0,
    0, 0, 0, 0, 623, 0, 0, 624, 0, 0, 0, 0, 0, 625, 0, 626, 0, 0, 0, 627, 0, 0, 0, 628, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 629, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 630, 0, 0, 631, 0, 632, 0, 633, 0, 0,
    0, 0, 0, 0, 0, 634, 0, 0, 0, 0, 635, 0, 636, 0, 637, 0, 0, 638, 0, 0, 0, 0, 0, 0, 0, 639, 0, 0, 0, 0, 640, 0,
    641, 0, 0, 0, 0, 0, 0, 0, 642, 0, 0, 0, 643, 0, 644, 0, 0, 645, 0, 646, 0, 647, 0, 0, 0, 0, 0, 0, 0, 0, 648, 0,
    649, 0, 650, 0, 0, 651, 0, 0, 0, 652, 0, 653, 0, 654, 0, 0, 0, 0, 0, 0, 655, 0, 0, 0, 656, 0, 657, 0, 0, 658, 0, 659,
    0, 0, 660, 0, 661, 0, 662, 0, 0, 0, 0, 0, 663, 0, 0, 664, 0, 0, 0, 0, 0, 0, 0, 0, 0, 665, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 666, 0, 0, 0, 667, 0, 0, 668, 0, 0, 0, 669, 670, 0, 671, 0,
    0, 0, 672, 0, 0, 673, 0, 674, 0, 675, 0, 0, 0, 0, 0, 0, 676, 0, 0, 0, 0, 677, 0, 0, 0, 0, 678, 0, 679, 0, 680, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 681, 0, 682, 0, 683, 0, 684, 0, 0, 685, 0, 686, 0, 687, 0, 0, 688, 0, 0, 0, 0,
    689, 0, 0, 0, 0, 0, 0, 0, 0, 0, 690, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    691, 0, 0, 0, 0, 0, 0, 0, 0, 0, 692, 0, 0, 0, 0, 693, 694, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 695, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 696, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 697, 0, 698, 0, 699, 700, 0, 0, 701, 0, 0, 0, 0, 0, 702, 0, 703, 0, 0, 0, 0, 0, 0, 0, 0, 0, 704, 0, 0, 0,
    0, 0, 0, 0, 0, 705, 0, 0, 0, 706, 0, 0, 0, 707, 0, 0, 708, 0, 709, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 710, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 711, 0, 0, 712,
    0, 713, 714, 0, 0, 715, 0, 0, 0, 0, 0, 716, 0, 717, 0, 0, 0, 0, 0, 0, 718, 0, 719, 0, 720, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 721, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 722, 0, 0, 0, 0, 723, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 724, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 725, 0, 726, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 727, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 728, 0, 0, 729, 0, 0, 0, 0, 730, 0, 0, 0, 0, 731, 0, 0, 0, 732, 0, 0, 0, 0, 733, 0, 0,
    734, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 735, 0, 0, 736, 0, 0, 0, 0, 0,
    0, 737, 0, 0, 738, 0, 0, 0, 0, 739, 0, 0, 0, 740, 0, 0, 0, 0, 0, 0, 0, 741, 0, 0, 0, 0, 742, 0, 0, 0, 743, 744,
    0, 0, 0, 0, 0, 0, 745, 0, 0, 746, 0, 747, 0, 0, 748, 0, 749, 0, 0, 0, 0, 0, 750, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 751, 0, 752, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 753, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 754, 755, 0, 0, 0, 0, 0, 0,
    0, 756, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 757, 0, 0, 758, 0, 759, 760, 0, 0,
    761, 0, 0, 0, 0, 0, 762, 0, 0, 0, 0, 0, 0, 763, 0, 0, 0, 764, 0, 0, 0, 765, 0, 0, 0, 0, 0, 766, 0, 767, 0, 0,
    0, 0, 0, 768, 0, 0, 0, 769, 0, 0, 0, 770, 0, 0, 0, 0, 0, 0, 0, 771, 0, 772, 0, 0, 773, 0, 0, 0, 774, 0, 0, 0,
    0, 0, 0, 775, 0, 776, 0, 0, 0, 0, 0, 0, 0, 777, 0, 778, 0, 0, 0, 0, 0, 0, 0, 779, 0, 0, 0, 780, 0, 0, 0, 781,
    782, 0, 0, 0, 783, 0, 0, 784, 785, 0, 0, 0, 786, 0, 0, 0, 787, 0, 0, 788, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 789, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 790, 0, 0, 791, 0, 792, 0, 0, 0, 0, 0, 0, 0, 793, 0,
    0, 0, 0, 0, 794, 795, 0, 0, 0, 0, 796, 0, 797, 0, 798, 0, 0, 0, 0, 799, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    800, 0, 0, 801, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 802, 0, 0, 803, 0, 0, 0, 0, 0, 0, 0, 0, 804, 0, 805, 806, 0,
    0, 0, 0, 0, 0, 0, 807, 0, 0, 0, 0, 808, 0, 0, 0, 809, 0, 0, 0, 810, 0, 0, 0, 811, 812, 0, 813, 0, 814, 0, 815, 0,
    0, 0, 816, 0, 0, 817, 0, 0, 0, 0, 818, 819, 0, 0, 0, 0, 0, 0, 0, 0, 820, 0, 0, 0, 821, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 822, 0, 0, 0, 823, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 824, 0, 0, 0, 0, 0,
    0, 0, 825, 0, 0, 0, 0, 0, 0, 826, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 827, 0, 0, 0, 0, 828, 0, 0, 0, 0, 0, 0, 0, 829, 0, 0, 0, 0, 0, 0, 830, 0, 0,
    0, 0, 831, 0, 0, 0, 0, 0, 0, 0, 0, 832, 0, 0, 0, 0, 0, 833, 0, 0, 0, 0, 834, 0, 0, 835, 0, 0, 836, 0, 837, 0,
    838, 0, 0, 839, 0, 840, 0, 841, 0, 0, 842, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 843, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 844, 0, 0, 0, 0, 845, 0, 0,
    0, 846, 0, 0, 0, 847, 0, 0, 848, 0, 0, 849, 0, 0, 0, 850, 0, 0, 0, 0, 851, 852, 0, 0, 853, 0, 0, 0, 854, 0, 0, 0,
    0, 855, 0, 0, 856, 0, 0, 0, 857, 858, 0, 859, 0, 0, 0, 860, 861, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 862, 0, 0, 0, 0, 0, 863, 0, 0, 864, 0, 865, 0, 0, 866, 0, 0, 0, 0, 0, 867, 0, 868, 0, 869, 0, 0, 0, 0,
    0, 0, 0, 870, 0, 0, 871, 0, 0, 0, 0, 0, 872, 0, 0, 0, 0, 0, 873, 0, 0, 0, 0, 0, 0, 0, 0, 874, 0, 0, 875, 0,
    0, 0, 0, 0, 0, 876, 0, 0, 877, 0, 0, 0, 878, 0, 0, 0, 0, 0, 0, 0, 0, 879, 0, 0, 880, 0, 0, 0, 0, 0, 0, 881,
    0, 0, 0, 0, 0, 882, 0, 0, 883, 0, 884, 0, 0, 885, 0, 0, 0, 0, 0, 886, 0, 887, 0, 0, 0, 0, 0, 888, 0, 0, 0, 889,
    0, 0, 0, 0, 890, 0, 0, 0, 0, 891, 0, 0, 0, 0, 892, 0, 0, 893, 0, 894, 0, 0, 0, 0, 0, 895, 0, 0, 0, 0, 0, 896,
    897, 0, 0, 0, 0, 0, 0, 0, 898, 0, 0, 899, 0, 0, 0, 0, 0, 0, 900, 0, 0, 901, 0, 0, 902, 0, 903, 0, 0, 0, 0, 904,
};
void recomp_unit_0058_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088EC000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0058[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088EC000;
    case 2u: goto L_088EC008;
    case 3u: goto L_088EC018;
    case 4u: goto L_088EC024;
    case 5u: goto L_088EC03C;
    case 6u: goto L_088EC044;
    case 7u: goto L_088EC04C;
    case 8u: goto L_088EC058;
    case 9u: goto L_088EC070;
    case 10u: goto L_088EC078;
    case 11u: goto L_088EC080;
    case 12u: goto L_088EC08C;
    case 13u: goto L_088EC0A4;
    case 14u: goto L_088EC0AC;
    case 15u: goto L_088EC0B4;
    case 16u: goto L_088EC0C0;
    case 17u: goto L_088EC0D8;
    case 18u: goto L_088EC0E0;
    case 19u: goto L_088EC0E8;
    case 20u: goto L_088EC0FC;
    case 21u: goto L_088EC108;
    case 22u: goto L_088EC110;
    case 23u: goto L_088EC124;
    case 24u: goto L_088EC130;
    case 25u: goto L_088EC138;
    case 26u: goto L_088EC140;
    case 27u: goto L_088EC148;
    case 28u: goto L_088EC150;
    case 29u: goto L_088EC158;
    case 30u: goto L_088EC160;
    case 31u: goto L_088EC184;
    case 32u: goto L_088EC18C;
    case 33u: goto L_088EC19C;
    case 34u: goto L_088EC1B0;
    case 35u: goto L_088EC1BC;
    case 36u: goto L_088EC1D0;
    case 37u: goto L_088EC1DC;
    case 38u: goto L_088EC1F0;
    case 39u: goto L_088EC1FC;
    case 40u: goto L_088EC210;
    case 41u: goto L_088EC21C;
    case 42u: goto L_088EC230;
    case 43u: goto L_088EC244;
    case 44u: goto L_088EC24C;
    case 45u: goto L_088EC260;
    case 46u: goto L_088EC26C;
    case 47u: goto L_088EC274;
    case 48u: goto L_088EC27C;
    case 49u: goto L_088EC284;
    case 50u: goto L_088EC28C;
    case 51u: goto L_088EC298;
    case 52u: goto L_088EC2A0;
    case 53u: goto L_088EC2A8;
    case 54u: goto L_088EC2B0;
    case 55u: goto L_088EC2BC;
    case 56u: goto L_088EC2C8;
    case 57u: goto L_088EC2CC;
    case 58u: goto L_088EC2D4;
    case 59u: goto L_088EC2DC;
    case 60u: goto L_088EC2E4;
    case 61u: goto L_088EC2F0;
    case 62u: goto L_088EC2F8;
    case 63u: goto L_088EC314;
    case 64u: goto L_088EC324;
    case 65u: goto L_088EC32C;
    case 66u: goto L_088EC334;
    case 67u: goto L_088EC33C;
    case 68u: goto L_088EC344;
    case 69u: goto L_088EC34C;
    case 70u: goto L_088EC354;
    case 71u: goto L_088EC360;
    case 72u: goto L_088EC368;
    case 73u: goto L_088EC374;
    case 74u: goto L_088EC380;
    case 75u: goto L_088EC384;
    case 76u: goto L_088EC38C;
    case 77u: goto L_088EC394;
    case 78u: goto L_088EC39C;
    case 79u: goto L_088EC3A8;
    case 80u: goto L_088EC3B0;
    case 81u: goto L_088EC3B8;
    case 82u: goto L_088EC3C0;
    case 83u: goto L_088EC3C8;
    case 84u: goto L_088EC3CC;
    case 85u: goto L_088EC3D4;
    case 86u: goto L_088EC3E4;
    case 87u: goto L_088EC3EC;
    case 88u: goto L_088EC3F0;
    case 89u: goto L_088EC3F8;
    case 90u: goto L_088EC404;
    case 91u: goto L_088EC410;
    case 92u: goto L_088EC414;
    case 93u: goto L_088EC41C;
    case 94u: goto L_088EC424;
    case 95u: goto L_088EC42C;
    case 96u: goto L_088EC438;
    case 97u: goto L_088EC440;
    case 98u: goto L_088EC448;
    case 99u: goto L_088EC450;
    case 100u: goto L_088EC458;
    case 101u: goto L_088EC45C;
    case 102u: goto L_088EC464;
    case 103u: goto L_088EC474;
    case 104u: goto L_088EC47C;
    case 105u: goto L_088EC480;
    case 106u: goto L_088EC488;
    case 107u: goto L_088EC490;
    case 108u: goto L_088EC49C;
    case 109u: goto L_088EC4C4;
    case 110u: goto L_088EC50C;
    case 111u: goto L_088EC520;
    case 112u: goto L_088EC52C;
    case 113u: goto L_088EC530;
    case 114u: goto L_088EC540;
    case 115u: goto L_088EC544;
    case 116u: goto L_088EC54C;
    case 117u: goto L_088EC558;
    case 118u: goto L_088EC56C;
    case 119u: goto L_088EC578;
    case 120u: goto L_088EC580;
    case 121u: goto L_088EC588;
    case 122u: goto L_088EC590;
    case 123u: goto L_088EC598;
    case 124u: goto L_088EC5A4;
    case 125u: goto L_088EC5AC;
    case 126u: goto L_088EC5B4;
    case 127u: goto L_088EC5BC;
    case 128u: goto L_088EC5C8;
    case 129u: goto L_088EC5D4;
    case 130u: goto L_088EC5D8;
    case 131u: goto L_088EC5E0;
    case 132u: goto L_088EC600;
    case 133u: goto L_088EC608;
    case 134u: goto L_088EC610;
    case 135u: goto L_088EC618;
    case 136u: goto L_088EC620;
    case 137u: goto L_088EC628;
    case 138u: goto L_088EC630;
    case 139u: goto L_088EC65C;
    case 140u: goto L_088EC670;
    case 141u: goto L_088EC680;
    case 142u: goto L_088EC690;
    case 143u: goto L_088EC6A0;
    case 144u: goto L_088EC6A8;
    case 145u: goto L_088EC6B0;
    case 146u: goto L_088EC6DC;
    case 147u: goto L_088EC6EC;
    case 148u: goto L_088EC6F8;
    case 149u: goto L_088EC704;
    case 150u: goto L_088EC720;
    case 151u: goto L_088EC72C;
    case 152u: goto L_088EC758;
    case 153u: goto L_088EC778;
    case 154u: goto L_088EC788;
    case 155u: goto L_088EC790;
    case 156u: goto L_088EC798;
    case 157u: goto L_088EC810;
    case 158u: goto L_088EC838;
    case 159u: goto L_088EC840;
    case 160u: goto L_088EC848;
    case 161u: goto L_088EC870;
    case 162u: goto L_088EC898;
    case 163u: goto L_088EC8A0;
    case 164u: goto L_088EC8B0;
    case 165u: goto L_088EC8E4;
    case 166u: goto L_088EC8F4;
    case 167u: goto L_088EC8FC;
    case 168u: goto L_088EC90C;
    case 169u: goto L_088EC914;
    case 170u: goto L_088EC928;
    case 171u: goto L_088EC948;
    case 172u: goto L_088EC95C;
    case 173u: goto L_088EC96C;
    case 174u: goto L_088EC974;
    case 175u: goto L_088EC97C;
    case 176u: goto L_088EC984;
    case 177u: goto L_088EC98C;
    case 178u: goto L_088EC9A4;
    case 179u: goto L_088EC9B0;
    case 180u: goto L_088EC9C8;
    case 181u: goto L_088EC9D0;
    case 182u: goto L_088EC9D8;
    case 183u: goto L_088EC9E0;
    case 184u: goto L_088EC9E8;
    case 185u: goto L_088EC9F0;
    case 186u: goto L_088EC9F8;
    case 187u: goto L_088ECA08;
    case 188u: goto L_088ECA0C;
    case 189u: goto L_088ECA24;
    case 190u: goto L_088ECA2C;
    case 191u: goto L_088ECA34;
    case 192u: goto L_088ECA3C;
    case 193u: goto L_088ECA44;
    case 194u: goto L_088ECA4C;
    case 195u: goto L_088ECA5C;
    case 196u: goto L_088ECAA8;
    case 197u: goto L_088ECAB4;
    case 198u: goto L_088ECABC;
    case 199u: goto L_088ECAC8;
    case 200u: goto L_088ECAD0;
    case 201u: goto L_088ECAE8;
    case 202u: goto L_088ECAF0;
    case 203u: goto L_088ECAFC;
    case 204u: goto L_088ECB08;
    case 205u: goto L_088ECB10;
    case 206u: goto L_088ECB18;
    case 207u: goto L_088ECB24;
    case 208u: goto L_088ECB40;
    case 209u: goto L_088ECB50;
    case 210u: goto L_088ECB60;
    case 211u: goto L_088ECB70;
    case 212u: goto L_088ECB88;
    case 213u: goto L_088ECB98;
    case 214u: goto L_088ECBA0;
    case 215u: goto L_088ECBAC;
    case 216u: goto L_088ECBBC;
    case 217u: goto L_088ECBCC;
    case 218u: goto L_088ECBD8;
    case 219u: goto L_088ECBE8;
    case 220u: goto L_088ECBF8;
    case 221u: goto L_088ECC04;
    case 222u: goto L_088ECC14;
    case 223u: goto L_088ECC1C;
    case 224u: goto L_088ECC2C;
    case 225u: goto L_088ECC34;
    case 226u: goto L_088ECC3C;
    case 227u: goto L_088ECC48;
    case 228u: goto L_088ECC50;
    case 229u: goto L_088ECC68;
    case 230u: goto L_088ECC80;
    case 231u: goto L_088ECC88;
    case 232u: goto L_088ECC90;
    case 233u: goto L_088ECC9C;
    case 234u: goto L_088ECCA8;
    case 235u: goto L_088ECCB0;
    case 236u: goto L_088ECCB8;
    case 237u: goto L_088ECCC8;
    case 238u: goto L_088ECCD0;
    case 239u: goto L_088ECCDC;
    case 240u: goto L_088ECCEC;
    case 241u: goto L_088ECCFC;
    case 242u: goto L_088ECD10;
    case 243u: goto L_088ECD24;
    case 244u: goto L_088ECD38;
    case 245u: goto L_088ECD4C;
    case 246u: goto L_088ECD68;
    case 247u: goto L_088ECD70;
    case 248u: goto L_088ECD80;
    case 249u: goto L_088ECD88;
    case 250u: goto L_088ECD94;
    case 251u: goto L_088ECDAC;
    case 252u: goto L_088ECDCC;
    case 253u: goto L_088ECE14;
    case 254u: goto L_088ECE1C;
    case 255u: goto L_088ECE28;
    case 256u: goto L_088ECE34;
    case 257u: goto L_088ECE48;
    case 258u: goto L_088ECE50;
    case 259u: goto L_088ECE64;
    case 260u: goto L_088ECE80;
    case 261u: goto L_088ECE90;
    case 262u: goto L_088ECE98;
    case 263u: goto L_088ECECC;
    case 264u: goto L_088ECED4;
    case 265u: goto L_088ECEE0;
    case 266u: goto L_088ECEE8;
    case 267u: goto L_088ECEF8;
    case 268u: goto L_088ECF00;
    case 269u: goto L_088ECF10;
    case 270u: goto L_088ECF20;
    case 271u: goto L_088ECF28;
    case 272u: goto L_088ECF40;
    case 273u: goto L_088ECF58;
    case 274u: goto L_088ECF60;
    case 275u: goto L_088ECF68;
    case 276u: goto L_088ECF70;
    case 277u: goto L_088ECFB4;
    case 278u: goto L_088ECFB8;
    case 279u: goto L_088ECFC4;
    case 280u: goto L_088ECFCC;
    case 281u: goto L_088ECFD4;
    case 282u: goto L_088ECFDC;
    case 283u: goto L_088ECFE4;
    case 284u: goto L_088ECFF0;
    case 285u: goto L_088ECFFC;
    case 286u: goto L_088ED014;
    case 287u: goto L_088ED020;
    case 288u: goto L_088ED02C;
    case 289u: goto L_088ED034;
    case 290u: goto L_088ED040;
    case 291u: goto L_088ED048;
    case 292u: goto L_088ED050;
    case 293u: goto L_088ED058;
    case 294u: goto L_088ED060;
    case 295u: goto L_088ED068;
    case 296u: goto L_088ED078;
    case 297u: goto L_088ED080;
    case 298u: goto L_088ED08C;
    case 299u: goto L_088ED094;
    case 300u: goto L_088ED0A0;
    case 301u: goto L_088ED0AC;
    case 302u: goto L_088ED0B4;
    case 303u: goto L_088ED0BC;
    case 304u: goto L_088ED0CC;
    case 305u: goto L_088ED0D4;
    case 306u: goto L_088ED0DC;
    case 307u: goto L_088ED0E0;
    case 308u: goto L_088ED0E4;
    case 309u: goto L_088ED12C;
    case 310u: goto L_088ED174;
    case 311u: goto L_088ED188;
    case 312u: goto L_088ED198;
    case 313u: goto L_088ED1A0;
    case 314u: goto L_088ED1A8;
    case 315u: goto L_088ED1B8;
    case 316u: goto L_088ED1D0;
    case 317u: goto L_088ED1E4;
    case 318u: goto L_088ED1F4;
    case 319u: goto L_088ED1FC;
    case 320u: goto L_088ED214;
    case 321u: goto L_088ED21C;
    case 322u: goto L_088ED22C;
    case 323u: goto L_088ED234;
    case 324u: goto L_088ED23C;
    case 325u: goto L_088ED258;
    case 326u: goto L_088ED26C;
    case 327u: goto L_088ED27C;
    case 328u: goto L_088ED284;
    case 329u: goto L_088ED28C;
    case 330u: goto L_088ED29C;
    case 331u: goto L_088ED2AC;
    case 332u: goto L_088ED2B4;
    case 333u: goto L_088ED2C8;
    case 334u: goto L_088ED2D8;
    case 335u: goto L_088ED300;
    case 336u: goto L_088ED308;
    case 337u: goto L_088ED310;
    case 338u: goto L_088ED328;
    case 339u: goto L_088ED330;
    case 340u: goto L_088ED348;
    case 341u: goto L_088ED34C;
    case 342u: goto L_088ED35C;
    case 343u: goto L_088ED364;
    case 344u: goto L_088ED374;
    case 345u: goto L_088ED380;
    case 346u: goto L_088ED394;
    case 347u: goto L_088ED3A4;
    case 348u: goto L_088ED3B0;
    case 349u: goto L_088ED3B8;
    case 350u: goto L_088ED3D0;
    case 351u: goto L_088ED3D8;
    case 352u: goto L_088ED3E8;
    case 353u: goto L_088ED3F0;
    case 354u: goto L_088ED3F8;
    case 355u: goto L_088ED414;
    case 356u: goto L_088ED428;
    case 357u: goto L_088ED43C;
    case 358u: goto L_088ED450;
    case 359u: goto L_088ED460;
    case 360u: goto L_088ED470;
    case 361u: goto L_088ED488;
    case 362u: goto L_088ED49C;
    case 363u: goto L_088ED4A4;
    case 364u: goto L_088ED4AC;
    case 365u: goto L_088ED4C8;
    case 366u: goto L_088ED4D8;
    case 367u: goto L_088ED4E0;
    case 368u: goto L_088ED4F0;
    case 369u: goto L_088ED4F4;
    case 370u: goto L_088ED4FC;
    case 371u: goto L_088ED51C;
    case 372u: goto L_088ED534;
    case 373u: goto L_088ED550;
    case 374u: goto L_088ED558;
    case 375u: goto L_088ED560;
    case 376u: goto L_088ED570;
    case 377u: goto L_088ED58C;
    case 378u: goto L_088ED5A0;
    case 379u: goto L_088ED5A8;
    case 380u: goto L_088ED5B8;
    case 381u: goto L_088ED5BC;
    case 382u: goto L_088ED5C8;
    case 383u: goto L_088ED5D0;
    case 384u: goto L_088ED5D8;
    case 385u: goto L_088ED5E8;
    case 386u: goto L_088ED5F8;
    case 387u: goto L_088ED600;
    case 388u: goto L_088ED608;
    case 389u: goto L_088ED628;
    case 390u: goto L_088ED630;
    case 391u: goto L_088ED63C;
    case 392u: goto L_088ED64C;
    case 393u: goto L_088ED654;
    case 394u: goto L_088ED678;
    case 395u: goto L_088ED680;
    case 396u: goto L_088ED68C;
    case 397u: goto L_088ED6AC;
    case 398u: goto L_088ED6B8;
    case 399u: goto L_088ED6C8;
    case 400u: goto L_088ED6D0;
    case 401u: goto L_088ED6D8;
    case 402u: goto L_088ED6F8;
    case 403u: goto L_088ED780;
    case 404u: goto L_088ED788;
    case 405u: goto L_088ED78C;
    case 406u: goto L_088ED7B8;
    case 407u: goto L_088ED7C0;
    case 408u: goto L_088ED7D8;
    case 409u: goto L_088ED7E0;
    case 410u: goto L_088ED7E8;
    case 411u: goto L_088ED7F0;
    case 412u: goto L_088ED7F8;
    case 413u: goto L_088ED820;
    case 414u: goto L_088ED868;
    case 415u: goto L_088ED870;
    case 416u: goto L_088ED878;
    case 417u: goto L_088ED87C;
    case 418u: goto L_088ED884;
    case 419u: goto L_088ED8EC;
    case 420u: goto L_088ED8F4;
    case 421u: goto L_088ED8FC;
    case 422u: goto L_088ED900;
    case 423u: goto L_088ED910;
    case 424u: goto L_088ED918;
    case 425u: goto L_088ED920;
    case 426u: goto L_088ED93C;
    case 427u: goto L_088ED950;
    case 428u: goto L_088ED958;
    case 429u: goto L_088ED960;
    case 430u: goto L_088ED968;
    case 431u: goto L_088ED970;
    case 432u: goto L_088ED978;
    case 433u: goto L_088ED980;
    case 434u: goto L_088ED988;
    case 435u: goto L_088ED998;
    case 436u: goto L_088ED9A8;
    case 437u: goto L_088ED9B8;
    case 438u: goto L_088ED9C0;
    case 439u: goto L_088ED9D0;
    case 440u: goto L_088ED9E8;
    case 441u: goto L_088ED9F0;
    case 442u: goto L_088ED9FC;
    case 443u: goto L_088EDA04;
    case 444u: goto L_088EDA14;
    case 445u: goto L_088EDA24;
    case 446u: goto L_088EDA30;
    case 447u: goto L_088EDA38;
    case 448u: goto L_088EDA40;
    case 449u: goto L_088EDA48;
    case 450u: goto L_088EDA50;
    case 451u: goto L_088EDA58;
    case 452u: goto L_088EDA64;
    case 453u: goto L_088EDA6C;
    case 454u: goto L_088EDA74;
    case 455u: goto L_088EDA80;
    case 456u: goto L_088EDA90;
    case 457u: goto L_088EDAA0;
    case 458u: goto L_088EDAA8;
    case 459u: goto L_088EDAB0;
    case 460u: goto L_088EDABC;
    case 461u: goto L_088EDACC;
    case 462u: goto L_088EDAD4;
    case 463u: goto L_088EDAE4;
    case 464u: goto L_088EDAF4;
    case 465u: goto L_088EDB08;
    case 466u: goto L_088EDB18;
    case 467u: goto L_088EDB28;
    case 468u: goto L_088EDB30;
    case 469u: goto L_088EDB38;
    case 470u: goto L_088EDB5C;
    case 471u: goto L_088EDB64;
    case 472u: goto L_088EDB74;
    case 473u: goto L_088EDB88;
    case 474u: goto L_088EDB98;
    case 475u: goto L_088EDBA8;
    case 476u: goto L_088EDBB8;
    case 477u: goto L_088EDBC8;
    case 478u: goto L_088EDBE8;
    case 479u: goto L_088EDBF0;
    case 480u: goto L_088EDBF8;
    case 481u: goto L_088EDC00;
    case 482u: goto L_088EDC20;
    case 483u: goto L_088EDC28;
    case 484u: goto L_088EDC30;
    case 485u: goto L_088EDC38;
    case 486u: goto L_088EDC40;
    case 487u: goto L_088EDC44;
    case 488u: goto L_088EDC50;
    case 489u: goto L_088EDC60;
    case 490u: goto L_088EDC64;
    case 491u: goto L_088EDC70;
    case 492u: goto L_088EDC7C;
    case 493u: goto L_088EDC80;
    case 494u: goto L_088EDC8C;
    case 495u: goto L_088EDC98;
    case 496u: goto L_088EDCA0;
    case 497u: goto L_088EDCC0;
    case 498u: goto L_088EDCE0;
    case 499u: goto L_088EDD08;
    case 500u: goto L_088EDD50;
    case 501u: goto L_088EDD58;
    case 502u: goto L_088EDD60;
    case 503u: goto L_088EDD64;
    case 504u: goto L_088EDD6C;
    case 505u: goto L_088EDDD4;
    case 506u: goto L_088EDDDC;
    case 507u: goto L_088EDDE4;
    case 508u: goto L_088EDDE8;
    case 509u: goto L_088EDDF8;
    case 510u: goto L_088EDE00;
    case 511u: goto L_088EDE08;
    case 512u: goto L_088EDE24;
    case 513u: goto L_088EDE38;
    case 514u: goto L_088EDE40;
    case 515u: goto L_088EDE48;
    case 516u: goto L_088EDE70;
    case 517u: goto L_088EDEB8;
    case 518u: goto L_088EDEC8;
    case 519u: goto L_088EDED8;
    case 520u: goto L_088EDEE0;
    case 521u: goto L_088EDEE4;
    case 522u: goto L_088EDEEC;
    case 523u: goto L_088EDEF4;
    case 524u: goto L_088EDF5C;
    case 525u: goto L_088EDF6C;
    case 526u: goto L_088EDF7C;
    case 527u: goto L_088EDF84;
    case 528u: goto L_088EDF88;
    case 529u: goto L_088EDF90;
    case 530u: goto L_088EDFA0;
    case 531u: goto L_088EDFB0;
    case 532u: goto L_088EDFB8;
    case 533u: goto L_088EDFBC;
    case 534u: goto L_088EDFC4;
    case 535u: goto L_088EDFCC;
    case 536u: goto L_088EDFE0;
    case 537u: goto L_088EDFFC;
    case 538u: goto L_088EE024;
    case 539u: goto L_088EE040;
    case 540u: goto L_088EE048;
    case 541u: goto L_088EE058;
    case 542u: goto L_088EE068;
    case 543u: goto L_088EE074;
    case 544u: goto L_088EE080;
    case 545u: goto L_088EE090;
    case 546u: goto L_088EE094;
    case 547u: goto L_088EE0A4;
    case 548u: goto L_088EE0AC;
    case 549u: goto L_088EE0BC;
    case 550u: goto L_088EE0CC;
    case 551u: goto L_088EE0D4;
    case 552u: goto L_088EE0DC;
    case 553u: goto L_088EE0E4;
    case 554u: goto L_088EE0F4;
    case 555u: goto L_088EE118;
    case 556u: goto L_088EE120;
    case 557u: goto L_088EE128;
    case 558u: goto L_088EE13C;
    case 559u: goto L_088EE154;
    case 560u: goto L_088EE15C;
    case 561u: goto L_088EE178;
    case 562u: goto L_088EE194;
    case 563u: goto L_088EE19C;
    case 564u: goto L_088EE1A4;
    case 565u: goto L_088EE1CC;
    case 566u: goto L_088EE1E0;
    case 567u: goto L_088EE1F4;
    case 568u: goto L_088EE21C;
    case 569u: goto L_088EE230;
    case 570u: goto L_088EE244;
    case 571u: goto L_088EE258;
    case 572u: goto L_088EE260;
    case 573u: goto L_088EE268;
    case 574u: goto L_088EE278;
    case 575u: goto L_088EE290;
    case 576u: goto L_088EE2B4;
    case 577u: goto L_088EE2C4;
    case 578u: goto L_088EE2D4;
    case 579u: goto L_088EE2E4;
    case 580u: goto L_088EE308;
    case 581u: goto L_088EE318;
    case 582u: goto L_088EE324;
    case 583u: goto L_088EE32C;
    case 584u: goto L_088EE338;
    case 585u: goto L_088EE344;
    case 586u: goto L_088EE34C;
    case 587u: goto L_088EE360;
    case 588u: goto L_088EE3A0;
    case 589u: goto L_088EE3AC;
    case 590u: goto L_088EE3B4;
    case 591u: goto L_088EE3C4;
    case 592u: goto L_088EE3D4;
    case 593u: goto L_088EE3E4;
    case 594u: goto L_088EE3EC;
    case 595u: goto L_088EE3F4;
    case 596u: goto L_088EE3FC;
    case 597u: goto L_088EE404;
    case 598u: goto L_088EE40C;
    case 599u: goto L_088EE418;
    case 600u: goto L_088EE428;
    case 601u: goto L_088EE494;
    case 602u: goto L_088EE520;
    case 603u: goto L_088EE54C;
    case 604u: goto L_088EE56C;
    case 605u: goto L_088EE580;
    case 606u: goto L_088EE5A0;
    case 607u: goto L_088EE5B0;
    case 608u: goto L_088EE5B8;
    case 609u: goto L_088EE5C8;
    case 610u: goto L_088EE5D4;
    case 611u: goto L_088EE5DC;
    case 612u: goto L_088EE5E4;
    case 613u: goto L_088EE5EC;
    case 614u: goto L_088EE5FC;
    case 615u: goto L_088EE60C;
    case 616u: goto L_088EE610;
    case 617u: goto L_088EE618;
    case 618u: goto L_088EE628;
    case 619u: goto L_088EE644;
    case 620u: goto L_088EE64C;
    case 621u: goto L_088EE65C;
    case 622u: goto L_088EE678;
    case 623u: goto L_088EE690;
    case 624u: goto L_088EE69C;
    case 625u: goto L_088EE6B4;
    case 626u: goto L_088EE6BC;
    case 627u: goto L_088EE6CC;
    case 628u: goto L_088EE6DC;
    case 629u: goto L_088EE748;
    case 630u: goto L_088EE7D8;
    case 631u: goto L_088EE7E4;
    case 632u: goto L_088EE7EC;
    case 633u: goto L_088EE7F4;
    case 634u: goto L_088EE814;
    case 635u: goto L_088EE828;
    case 636u: goto L_088EE830;
    case 637u: goto L_088EE838;
    case 638u: goto L_088EE844;
    case 639u: goto L_088EE864;
    case 640u: goto L_088EE878;
    case 641u: goto L_088EE880;
    case 642u: goto L_088EE8A0;
    case 643u: goto L_088EE8B0;
    case 644u: goto L_088EE8B8;
    case 645u: goto L_088EE8C4;
    case 646u: goto L_088EE8CC;
    case 647u: goto L_088EE8D4;
    case 648u: goto L_088EE8F8;
    case 649u: goto L_088EE900;
    case 650u: goto L_088EE908;
    case 651u: goto L_088EE914;
    case 652u: goto L_088EE924;
    case 653u: goto L_088EE92C;
    case 654u: goto L_088EE934;
    case 655u: goto L_088EE950;
    case 656u: goto L_088EE960;
    case 657u: goto L_088EE968;
    case 658u: goto L_088EE974;
    case 659u: goto L_088EE97C;
    case 660u: goto L_088EE988;
    case 661u: goto L_088EE990;
    case 662u: goto L_088EE998;
    case 663u: goto L_088EE9B0;
    case 664u: goto L_088EE9BC;
    case 665u: goto L_088EE9E4;
    case 666u: goto L_088EEA40;
    case 667u: goto L_088EEA50;
    case 668u: goto L_088EEA5C;
    case 669u: goto L_088EEA6C;
    case 670u: goto L_088EEA70;
    case 671u: goto L_088EEA78;
    case 672u: goto L_088EEA88;
    case 673u: goto L_088EEA94;
    case 674u: goto L_088EEA9C;
    case 675u: goto L_088EEAA4;
    case 676u: goto L_088EEAC0;
    case 677u: goto L_088EEAD4;
    case 678u: goto L_088EEAE8;
    case 679u: goto L_088EEAF0;
    case 680u: goto L_088EEAF8;
    case 681u: goto L_088EEB2C;
    case 682u: goto L_088EEB34;
    case 683u: goto L_088EEB3C;
    case 684u: goto L_088EEB44;
    case 685u: goto L_088EEB50;
    case 686u: goto L_088EEB58;
    case 687u: goto L_088EEB60;
    case 688u: goto L_088EEB6C;
    case 689u: goto L_088EEB80;
    case 690u: goto L_088EEBA8;
    case 691u: goto L_088EEC00;
    case 692u: goto L_088EEC28;
    case 693u: goto L_088EEC3C;
    case 694u: goto L_088EEC40;
    case 695u: goto L_088EEC74;
    case 696u: goto L_088EECC8;
    case 697u: goto L_088EED08;
    case 698u: goto L_088EED10;
    case 699u: goto L_088EED18;
    case 700u: goto L_088EED1C;
    case 701u: goto L_088EED28;
    case 702u: goto L_088EED40;
    case 703u: goto L_088EED48;
    case 704u: goto L_088EED70;
    case 705u: goto L_088EED94;
    case 706u: goto L_088EEDA4;
    case 707u: goto L_088EEDB4;
    case 708u: goto L_088EEDC0;
    case 709u: goto L_088EEDC8;
    case 710u: goto L_088EEE20;
    case 711u: goto L_088EEE70;
    case 712u: goto L_088EEE7C;
    case 713u: goto L_088EEE84;
    case 714u: goto L_088EEE88;
    case 715u: goto L_088EEE94;
    case 716u: goto L_088EEEAC;
    case 717u: goto L_088EEEB4;
    case 718u: goto L_088EEED0;
    case 719u: goto L_088EEED8;
    case 720u: goto L_088EEEE0;
    case 721u: goto L_088EEF64;
    case 722u: goto L_088EEFCC;
    case 723u: goto L_088EEFE0;
    case 724u: goto L_088EF058;
    case 725u: goto L_088EF090;
    case 726u: goto L_088EF098;
    case 727u: goto L_088EF0EC;
    case 728u: goto L_088EF11C;
    case 729u: goto L_088EF128;
    case 730u: goto L_088EF13C;
    case 731u: goto L_088EF150;
    case 732u: goto L_088EF160;
    case 733u: goto L_088EF174;
    case 734u: goto L_088EF180;
    case 735u: goto L_088EF1DC;
    case 736u: goto L_088EF1E8;
    case 737u: goto L_088EF204;
    case 738u: goto L_088EF210;
    case 739u: goto L_088EF224;
    case 740u: goto L_088EF234;
    case 741u: goto L_088EF254;
    case 742u: goto L_088EF268;
    case 743u: goto L_088EF278;
    case 744u: goto L_088EF27C;
    case 745u: goto L_088EF298;
    case 746u: goto L_088EF2A4;
    case 747u: goto L_088EF2AC;
    case 748u: goto L_088EF2B8;
    case 749u: goto L_088EF2C0;
    case 750u: goto L_088EF2D8;
    case 751u: goto L_088EF338;
    case 752u: goto L_088EF340;
    case 753u: goto L_088EF3A0;
    case 754u: goto L_088EF3E0;
    case 755u: goto L_088EF3E4;
    case 756u: goto L_088EF404;
    case 757u: goto L_088EF45C;
    case 758u: goto L_088EF468;
    case 759u: goto L_088EF470;
    case 760u: goto L_088EF474;
    case 761u: goto L_088EF480;
    case 762u: goto L_088EF498;
    case 763u: goto L_088EF4B4;
    case 764u: goto L_088EF4C4;
    case 765u: goto L_088EF4D4;
    case 766u: goto L_088EF4EC;
    case 767u: goto L_088EF4F4;
    case 768u: goto L_088EF50C;
    case 769u: goto L_088EF51C;
    case 770u: goto L_088EF52C;
    case 771u: goto L_088EF54C;
    case 772u: goto L_088EF554;
    case 773u: goto L_088EF560;
    case 774u: goto L_088EF570;
    case 775u: goto L_088EF58C;
    case 776u: goto L_088EF594;
    case 777u: goto L_088EF5B4;
    case 778u: goto L_088EF5BC;
    case 779u: goto L_088EF5DC;
    case 780u: goto L_088EF5EC;
    case 781u: goto L_088EF5FC;
    case 782u: goto L_088EF600;
    case 783u: goto L_088EF610;
    case 784u: goto L_088EF61C;
    case 785u: goto L_088EF620;
    case 786u: goto L_088EF630;
    case 787u: goto L_088EF640;
    case 788u: goto L_088EF64C;
    case 789u: goto L_088EF68C;
    case 790u: goto L_088EF6C4;
    case 791u: goto L_088EF6D0;
    case 792u: goto L_088EF6D8;
    case 793u: goto L_088EF6F8;
    case 794u: goto L_088EF710;
    case 795u: goto L_088EF714;
    case 796u: goto L_088EF728;
    case 797u: goto L_088EF730;
    case 798u: goto L_088EF738;
    case 799u: goto L_088EF74C;
    case 800u: goto L_088EF780;
    case 801u: goto L_088EF78C;
    case 802u: goto L_088EF7BC;
    case 803u: goto L_088EF7C8;
    case 804u: goto L_088EF7EC;
    case 805u: goto L_088EF7F4;
    case 806u: goto L_088EF7F8;
    case 807u: goto L_088EF818;
    case 808u: goto L_088EF82C;
    case 809u: goto L_088EF83C;
    case 810u: goto L_088EF84C;
    case 811u: goto L_088EF85C;
    case 812u: goto L_088EF860;
    case 813u: goto L_088EF868;
    case 814u: goto L_088EF870;
    case 815u: goto L_088EF878;
    case 816u: goto L_088EF888;
    case 817u: goto L_088EF894;
    case 818u: goto L_088EF8A8;
    case 819u: goto L_088EF8AC;
    case 820u: goto L_088EF8D0;
    case 821u: goto L_088EF8E0;
    case 822u: goto L_088EF908;
    case 823u: goto L_088EF918;
    case 824u: goto L_088EF968;
    case 825u: goto L_088EF988;
    case 826u: goto L_088EF9A4;
    case 827u: goto L_088EFA24;
    case 828u: goto L_088EFA38;
    case 829u: goto L_088EFA58;
    case 830u: goto L_088EFA74;
    case 831u: goto L_088EFA88;
    case 832u: goto L_088EFAAC;
    case 833u: goto L_088EFAC4;
    case 834u: goto L_088EFAD8;
    case 835u: goto L_088EFAE4;
    case 836u: goto L_088EFAF0;
    case 837u: goto L_088EFAF8;
    case 838u: goto L_088EFB00;
    case 839u: goto L_088EFB0C;
    case 840u: goto L_088EFB14;
    case 841u: goto L_088EFB1C;
    case 842u: goto L_088EFB28;
    case 843u: goto L_088EFB70;
    case 844u: goto L_088EFBE0;
    case 845u: goto L_088EFBF4;
    case 846u: goto L_088EFC04;
    case 847u: goto L_088EFC14;
    case 848u: goto L_088EFC20;
    case 849u: goto L_088EFC2C;
    case 850u: goto L_088EFC3C;
    case 851u: goto L_088EFC50;
    case 852u: goto L_088EFC54;
    case 853u: goto L_088EFC60;
    case 854u: goto L_088EFC70;
    case 855u: goto L_088EFC84;
    case 856u: goto L_088EFC90;
    case 857u: goto L_088EFCA0;
    case 858u: goto L_088EFCA4;
    case 859u: goto L_088EFCAC;
    case 860u: goto L_088EFCBC;
    case 861u: goto L_088EFCC0;
    case 862u: goto L_088EFD0C;
    case 863u: goto L_088EFD24;
    case 864u: goto L_088EFD30;
    case 865u: goto L_088EFD38;
    case 866u: goto L_088EFD44;
    case 867u: goto L_088EFD5C;
    case 868u: goto L_088EFD64;
    case 869u: goto L_088EFD6C;
    case 870u: goto L_088EFD8C;
    case 871u: goto L_088EFD98;
    case 872u: goto L_088EFDB0;
    case 873u: goto L_088EFDC8;
    case 874u: goto L_088EFDEC;
    case 875u: goto L_088EFDF8;
    case 876u: goto L_088EFE14;
    case 877u: goto L_088EFE20;
    case 878u: goto L_088EFE30;
    case 879u: goto L_088EFE54;
    case 880u: goto L_088EFE60;
    case 881u: goto L_088EFE7C;
    case 882u: goto L_088EFE94;
    case 883u: goto L_088EFEA0;
    case 884u: goto L_088EFEA8;
    case 885u: goto L_088EFEB4;
    case 886u: goto L_088EFECC;
    case 887u: goto L_088EFED4;
    case 888u: goto L_088EFEEC;
    case 889u: goto L_088EFEFC;
    case 890u: goto L_088EFF10;
    case 891u: goto L_088EFF24;
    case 892u: goto L_088EFF38;
    case 893u: goto L_088EFF44;
    case 894u: goto L_088EFF4C;
    case 895u: goto L_088EFF64;
    case 896u: goto L_088EFF7C;
    case 897u: goto L_088EFF80;
    case 898u: goto L_088EFFA0;
    case 899u: goto L_088EFFAC;
    case 900u: goto L_088EFFC8;
    case 901u: goto L_088EFFD4;
    case 902u: goto L_088EFFE0;
    case 903u: goto L_088EFFE8;
    case 904u: goto L_088EFFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088EC000:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(120), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088EC0E0;
      }
      goto L_088EC008;
    }
L_088EC008:
    ctx.gpr[20] = (0u | 21u);
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(120), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088EC0E0;
      }
      goto L_088EC018;
    }
L_088EC018:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EC044;
      }
      goto L_088EC024;
    }
L_088EC024:
    ctx.gpr[20] = (0u | 22u);
    ctx.gpr[6] = (ctx.gpr[22] << 24u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 24u));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088EC03Cu);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 547u, 0x088E3C60u>(ctx, &aot_mem) && ctx.pc == 0x088EC03Cu) goto L_088EC03C;
    return;
L_088EC03C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(120), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088EC044;
L_088EC044:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EC0E0;
      }
      goto L_088EC04C;
    }
L_088EC04C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EC078;
      }
      goto L_088EC058;
    }
L_088EC058:
    ctx.gpr[20] = (0u | 23u);
    ctx.gpr[6] = (ctx.gpr[22] << 24u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 24u));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088EC070u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 547u, 0x088E3C60u>(ctx, &aot_mem) && ctx.pc == 0x088EC070u) goto L_088EC070;
    return;
L_088EC070:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(120), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088EC078;
L_088EC078:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EC0E0;
      }
      goto L_088EC080;
    }
L_088EC080:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EC0AC;
      }
      goto L_088EC08C;
    }
L_088EC08C:
    ctx.gpr[20] = (0u | 24u);
    ctx.gpr[6] = (ctx.gpr[22] << 24u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 24u));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088EC0A4u);
    ctx.gpr[5] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 547u, 0x088E3C60u>(ctx, &aot_mem) && ctx.pc == 0x088EC0A4u) goto L_088EC0A4;
    return;
L_088EC0A4:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(120), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088EC0AC;
L_088EC0AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EC0E0;
      }
      goto L_088EC0B4;
    }
L_088EC0B4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EC0E0;
      }
      goto L_088EC0C0;
    }
L_088EC0C0:
    ctx.gpr[20] = (0u | 25u);
    ctx.gpr[6] = (ctx.gpr[22] << 24u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 24u));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088EC0D8u);
    ctx.gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 547u, 0x088E3C60u>(ctx, &aot_mem) && ctx.pc == 0x088EC0D8u) goto L_088EC0D8;
    return;
L_088EC0D8:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(120), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088EC0E0;
L_088EC0E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EC5E0;
      }
      goto L_088EC0E8;
    }
L_088EC0E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (2048u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EC108;
      }
      goto L_088EC0FC;
    }
L_088EC0FC:
    ctx.gpr[20] = (0u | 16u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EC5E0;
      }
      goto L_088EC108;
    }
L_088EC108:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088ED0E4;
      }
      goto L_088EC110;
    }
L_088EC110:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (4u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EC138;
      }
      goto L_088EC124;
    }
L_088EC124:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-1040)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EC140;
      }
      goto L_088EC130;
    }
L_088EC130:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EC24C;
      }
      goto L_088EC138;
    }
L_088EC138:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088ED0E4;
      }
      goto L_088EC140;
    }
L_088EC140:
    ctx.gpr[31] = (0x088EC148u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x088EC148u) goto L_088EC148;
    return;
L_088EC148:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EC24C;
      }
      goto L_088EC150;
    }
L_088EC150:
    ctx.gpr[31] = (0x088EC158u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x088EC158u) goto L_088EC158;
    return;
L_088EC158:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (16256u << 16u);
      if (branch_taken) {
          goto L_088EC24C;
      }
      goto L_088EC160;
    }
L_088EC160:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1256)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1252)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088EC24C;
      }
      goto L_088EC184;
    }
L_088EC184:
    ctx.gpr[31] = (0x088EC18Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x088EC18Cu) goto L_088EC18C;
    return;
L_088EC18C:
    ctx.gpr[16] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EC1B0;
      }
      goto L_088EC19C;
    }
L_088EC19C:
    ctx.gpr[6] = (ctx.gpr[22] << 24u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 24u));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088EC1B0u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 547u, 0x088E3C60u>(ctx, &aot_mem) && ctx.pc == 0x088EC1B0u) goto L_088EC1B0;
    return;
L_088EC1B0:
    ctx.gpr[4] = (ctx.gpr[16] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EC1D0;
      }
      goto L_088EC1BC;
    }
L_088EC1BC:
    ctx.gpr[6] = (ctx.gpr[22] << 24u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 24u));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088EC1D0u);
    ctx.gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 547u, 0x088E3C60u>(ctx, &aot_mem) && ctx.pc == 0x088EC1D0u) goto L_088EC1D0;
    return;
L_088EC1D0:
    ctx.gpr[4] = (ctx.gpr[16] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EC1F0;
      }
      goto L_088EC1DC;
    }
L_088EC1DC:
    ctx.gpr[6] = (ctx.gpr[22] << 24u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 24u));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088EC1F0u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 547u, 0x088E3C60u>(ctx, &aot_mem) && ctx.pc == 0x088EC1F0u) goto L_088EC1F0;
    return;
L_088EC1F0:
    ctx.gpr[4] = (ctx.gpr[16] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EC210;
      }
      goto L_088EC1FC;
    }
L_088EC1FC:
    ctx.gpr[6] = (ctx.gpr[22] << 24u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 24u));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088EC210u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 547u, 0x088E3C60u>(ctx, &aot_mem) && ctx.pc == 0x088EC210u) goto L_088EC210;
    return;
L_088EC210:
    ctx.gpr[4] = (ctx.gpr[16] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EC230;
      }
      goto L_088EC21C;
    }
L_088EC21C:
    ctx.gpr[6] = (ctx.gpr[22] << 24u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 24u));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088EC230u);
    ctx.gpr[5] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 547u, 0x088E3C60u>(ctx, &aot_mem) && ctx.pc == 0x088EC230u) goto L_088EC230;
    return;
L_088EC230:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (64u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EC24C;
      }
      goto L_088EC244;
    }
L_088EC244:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(120), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088EC24C;
L_088EC24C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (4u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EC274;
      }
      goto L_088EC260;
    }
L_088EC260:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EC27C;
      }
      goto L_088EC26C;
    }
L_088EC26C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088EC298;
      }
      goto L_088EC274;
    }
L_088EC274:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088ED0E4;
      }
      goto L_088EC27C;
    }
L_088EC27C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) < 0;
    // nop
      if (branch_taken) {
          goto L_088EC2CC;
      }
      goto L_088EC284;
    }
L_088EC284:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) > 0;
    // nop
      if (branch_taken) {
          goto L_088EC2B0;
      }
      goto L_088EC28C;
    }
L_088EC28C:
    ctx.gpr[20] = (0u | 28u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EC2CC;
      }
      goto L_088EC298;
    }
L_088EC298:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_088EC2BC;
      }
      goto L_088EC2A0;
    }
L_088EC2A0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EC2C8;
      }
      goto L_088EC2A8;
    }
L_088EC2A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EC2CC;
      }
      goto L_088EC2B0;
    }
L_088EC2B0:
    ctx.gpr[20] = (0u | 29u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EC2CC;
      }
      goto L_088EC2BC;
    }
L_088EC2BC:
    ctx.gpr[20] = (0u | 30u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EC2CC;
      }
      goto L_088EC2C8;
    }
L_088EC2C8:
    ctx.gpr[20] = (0u | 31u);
    goto L_088EC2CC;
L_088EC2CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EC5E0;
      }
      goto L_088EC2D4;
    }
L_088EC2D4:
    ctx.gpr[31] = (0x088EC2DCu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 266u, 0x08895454u>(ctx, &aot_mem) && ctx.pc == 0x088EC2DCu) goto L_088EC2DC;
    return;
L_088EC2DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EC2F0;
      }
      goto L_088EC2E4;
    }
L_088EC2E4:
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    goto L_088EC2F0;
L_088EC2F0:
    ctx.gpr[31] = (0x088EC2F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x088EC2F8u) goto L_088EC2F8;
    return;
L_088EC2F8:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (4096u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EC32C;
      }
      goto L_088EC314;
    }
L_088EC314:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[22]) < 2 ? 1u : 0u);
    ctx.gpr[6] = (16384u << 16u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[6]);
      if (branch_taken) {
          goto L_088EC334;
      }
      goto L_088EC324;
    }
L_088EC324:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[22]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088EC34C;
      }
      goto L_088EC32C;
    }
L_088EC32C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088ED0E4;
      }
      goto L_088EC334;
    }
L_088EC334:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) < 0;
    // nop
      if (branch_taken) {
          goto L_088EC480;
      }
      goto L_088EC33C;
    }
L_088EC33C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088EC368;
      }
      goto L_088EC344;
    }
L_088EC344:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EC3D4;
      }
      goto L_088EC34C;
    }
L_088EC34C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EC3F8;
      }
      goto L_088EC354;
    }
L_088EC354:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EC464;
      }
      goto L_088EC360;
    }
L_088EC360:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EC480;
      }
      goto L_088EC368;
    }
L_088EC368:
    ctx.gpr[6] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[30] != ctx.gpr[6];
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_088EC384;
      }
      goto L_088EC374;
    }
L_088EC374:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EC394;
      }
      goto L_088EC380;
    }
L_088EC380:
    ctx.gpr[5] = (0u | 1u);
    goto L_088EC384;
L_088EC384:
    { const bool branch_taken = ctx.gpr[30] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088EC39C;
      }
      goto L_088EC38C;
    }
L_088EC38C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088EC39C;
      }
      goto L_088EC394;
    }
L_088EC394:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 29u);
      if (branch_taken) {
          goto L_088EC3CC;
      }
      goto L_088EC39C;
    }
L_088EC39C:
    ctx.gpr[7] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[30] != ctx.gpr[7];
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_088EC3B0;
      }
      goto L_088EC3A8;
    }
L_088EC3A8:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EC3C0;
      }
      goto L_088EC3B0;
    }
L_088EC3B0:
    { const bool branch_taken = ctx.gpr[30] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088EC3C8;
      }
      goto L_088EC3B8;
    }
L_088EC3B8:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088EC3C8;
      }
      goto L_088EC3C0;
    }
L_088EC3C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 31u);
      if (branch_taken) {
          goto L_088EC3CC;
      }
      goto L_088EC3C8;
    }
L_088EC3C8:
    ctx.gpr[20] = (0u | 28u);
    goto L_088EC3CC;
L_088EC3CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EC480;
      }
      goto L_088EC3D4;
    }
L_088EC3D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 48u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088EC3EC;
      }
      goto L_088EC3E4;
    }
L_088EC3E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 26u);
      if (branch_taken) {
          goto L_088EC3F0;
      }
      goto L_088EC3EC;
    }
L_088EC3EC:
    ctx.gpr[20] = (0u | 29u);
    goto L_088EC3F0;
L_088EC3F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EC480;
      }
      goto L_088EC3F8;
    }
L_088EC3F8:
    ctx.gpr[6] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[30] != ctx.gpr[6];
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_088EC414;
      }
      goto L_088EC404;
    }
L_088EC404:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EC424;
      }
      goto L_088EC410;
    }
L_088EC410:
    ctx.gpr[5] = (0u | 1u);
    goto L_088EC414;
L_088EC414:
    { const bool branch_taken = ctx.gpr[30] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088EC42C;
      }
      goto L_088EC41C;
    }
L_088EC41C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088EC42C;
      }
      goto L_088EC424;
    }
L_088EC424:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 26u);
      if (branch_taken) {
          goto L_088EC45C;
      }
      goto L_088EC42C;
    }
L_088EC42C:
    ctx.gpr[7] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[30] != ctx.gpr[7];
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_088EC440;
      }
      goto L_088EC438;
    }
L_088EC438:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EC450;
      }
      goto L_088EC440;
    }
L_088EC440:
    { const bool branch_taken = ctx.gpr[30] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088EC458;
      }
      goto L_088EC448;
    }
L_088EC448:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088EC458;
      }
      goto L_088EC450;
    }
L_088EC450:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 27u);
      if (branch_taken) {
          goto L_088EC45C;
      }
      goto L_088EC458;
    }
L_088EC458:
    ctx.gpr[20] = (0u | 30u);
    goto L_088EC45C;
L_088EC45C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EC480;
      }
      goto L_088EC464;
    }
L_088EC464:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 48u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088EC47C;
      }
      goto L_088EC474;
    }
L_088EC474:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 27u);
      if (branch_taken) {
          goto L_088EC480;
      }
      goto L_088EC47C;
    }
L_088EC47C:
    ctx.gpr[20] = (0u | 31u);
    goto L_088EC480;
L_088EC480:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EC530;
      }
      goto L_088EC488;
    }
L_088EC488:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EC530;
      }
      goto L_088EC490;
    }
L_088EC490:
    ctx.gpr[5] = (0u | 42u);
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(320));
      if (branch_taken) {
          goto L_088EC4C4;
      }
      goto L_088EC49C;
    }
L_088EC49C:
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (16640u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[22];
      if (branch_taken) {
          goto L_088EC530;
      }
      goto L_088EC4C4;
    }
L_088EC4C4:
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16704u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[22];
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (16768u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x088EC50Cu);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem) && ctx.pc == 0x088EC50Cu) goto L_088EC50C;
    return;
L_088EC50C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23156)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23160)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x088EC520u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 390u, 0x08B61EF4u>(ctx, &aot_mem) && ctx.pc == 0x088EC520u) goto L_088EC520;
    return;
L_088EC520:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x088EC52Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem) && ctx.pc == 0x088EC52Cu) goto L_088EC52C;
    return;
L_088EC52C:
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_088EC530;
L_088EC530:
    ctx.set_fpu_condition((ctx.fpr[28] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088EC544;
      }
      goto L_088EC540;
    }
L_088EC540:
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    goto L_088EC544;
L_088EC544:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EC5E0;
      }
      goto L_088EC54C;
    }
L_088EC54C:
    ctx.gpr[20] = (0u | 152u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EC5E0;
      }
      goto L_088EC558;
    }
L_088EC558:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (4096u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EC580;
      }
      goto L_088EC56C;
    }
L_088EC56C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EC588;
      }
      goto L_088EC578;
    }
L_088EC578:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088EC5A4;
      }
      goto L_088EC580;
    }
L_088EC580:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088ED0E4;
      }
      goto L_088EC588;
    }
L_088EC588:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) < 0;
    // nop
      if (branch_taken) {
          goto L_088EC5D8;
      }
      goto L_088EC590;
    }
L_088EC590:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) > 0;
    // nop
      if (branch_taken) {
          goto L_088EC5BC;
      }
      goto L_088EC598;
    }
L_088EC598:
    ctx.gpr[20] = (0u | 28u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EC5D8;
      }
      goto L_088EC5A4;
    }
L_088EC5A4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_088EC5C8;
      }
      goto L_088EC5AC;
    }
L_088EC5AC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EC5D4;
      }
      goto L_088EC5B4;
    }
L_088EC5B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EC5D8;
      }
      goto L_088EC5BC;
    }
L_088EC5BC:
    ctx.gpr[20] = (0u | 29u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EC5D8;
      }
      goto L_088EC5C8;
    }
L_088EC5C8:
    ctx.gpr[20] = (0u | 30u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EC5D8;
      }
      goto L_088EC5D4;
    }
L_088EC5D4:
    ctx.gpr[20] = (0u | 31u);
    goto L_088EC5D8;
L_088EC5D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EC5E0;
      }
      goto L_088EC5E0;
    }
L_088EC5E0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1256)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (0u | 47u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[26])) && ctx.fpr[12] == ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[30] = (0u | 46u);
      if (branch_taken) {
          goto L_088EC690;
      }
      goto L_088EC600;
    }
L_088EC600:
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_088EC610;
      }
      goto L_088EC608;
    }
L_088EC608:
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[18];
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088EC618;
      }
      goto L_088EC610;
    }
L_088EC610:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088EC618;
      }
      goto L_088EC618;
    }
L_088EC618:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EC690;
      }
      goto L_088EC620;
    }
L_088EC620:
    ctx.gpr[31] = (0x088EC628u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x088EC628u) goto L_088EC628;
    return;
L_088EC628:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088EC65C;
      }
      goto L_088EC630;
    }
L_088EC630:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[6] = (ctx.gpr[5] << 8u);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (2238u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-6992));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(228), ctx.gpr[4]);
    goto L_088EC65C;
L_088EC65C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1256)));
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088EC680;
      }
      goto L_088EC670;
    }
L_088EC670:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1256)));
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1256), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
      if (branch_taken) {
          goto L_088EC690;
      }
      goto L_088EC680;
    }
L_088EC680:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1256)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    goto L_088EC690;
L_088EC690:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[20]) || std::isnan(ctx.fpr[26])) && ctx.fpr[20] == ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088EC6EC;
      }
      goto L_088EC6A0;
    }
L_088EC6A0:
    ctx.gpr[31] = (0x088EC6A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x088EC6A8u) goto L_088EC6A8;
    return;
L_088EC6A8:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088EC6DC;
      }
      goto L_088EC6B0;
    }
L_088EC6B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[6] = (ctx.gpr[5] << 8u);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (2238u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-6992));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(224), ctx.gpr[4]);
    goto L_088EC6DC;
L_088EC6DC:
    ctx.gpr[4] = (ctx.gpr[23] << 24u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(91), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1864), ctx.gpr[21]);
    goto L_088EC6EC;
L_088EC6EC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-1040)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EC8E4;
      }
      goto L_088EC6F8;
    }
L_088EC6F8:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EC8E4;
      }
      goto L_088EC704;
    }
L_088EC704:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EC8E4;
      }
      goto L_088EC720;
    }
L_088EC720:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EC8E4;
      }
      goto L_088EC72C;
    }
L_088EC72C:
    ctx.gpr[17] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-1040)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EC8E4;
      }
      goto L_088EC758;
    }
L_088EC758:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[31] = (0x088EC778u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem) && ctx.pc == 0x088EC778u) goto L_088EC778;
    return;
L_088EC778:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088EC8E4;
      }
      goto L_088EC788;
    }
L_088EC788:
    ctx.gpr[31] = (0x088EC790u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 50u, 0x08AD0530u>(ctx, &aot_mem) && ctx.pc == 0x088EC790u) goto L_088EC790;
    return;
L_088EC790:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EC8E4;
      }
      goto L_088EC798;
    }
L_088EC798:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[4]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088EC810u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem) && ctx.pc == 0x088EC810u) goto L_088EC810;
    return;
L_088EC810:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088EC838u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem) && ctx.pc == 0x088EC838u) goto L_088EC838;
    return;
L_088EC838:
    ctx.gpr[31] = (0x088EC840u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x088EC840u) goto L_088EC840;
    return;
L_088EC840:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
      if (branch_taken) {
          goto L_088EC898;
      }
      goto L_088EC848;
    }
L_088EC848:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088EC870u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem) && ctx.pc == 0x088EC870u) goto L_088EC870;
    return;
L_088EC870:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088EC898u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem) && ctx.pc == 0x088EC898u) goto L_088EC898;
    return;
L_088EC898:
    ctx.gpr[31] = (0x088EC8A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x088EC8A0u) goto L_088EC8A0;
    return;
L_088EC8A0:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EC8E4;
      }
      goto L_088EC8B0;
    }
L_088EC8B0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (0u | 81u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088EC8E4u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem) && ctx.pc == 0x088EC8E4u) goto L_088EC8E4;
    return;
L_088EC8E4:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x088EC8F4u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 113u, 0x088E4910u>(ctx, &aot_mem) && ctx.pc == 0x088EC8F4u) goto L_088EC8F4;
    return;
L_088EC8F4:
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_088EC98C;
      }
      goto L_088EC8FC;
    }
L_088EC8FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088EC90Cu);
    ctx.gpr[6] = (0u | 130u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x088EC90Cu) goto L_088EC90C;
    return;
L_088EC90C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EC98C;
      }
      goto L_088EC914;
    }
L_088EC914:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1252)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088EC98C;
      }
      goto L_088EC928;
    }
L_088EC928:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1252)));
    ctx.fpr[13] = ctx.fpr[12] - ctx.fpr[20];
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088EC98C;
      }
      goto L_088EC948;
    }
L_088EC948:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1252)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1252)));
        goto L_088EC95C;
    }
    goto L_088EC95C;
L_088EC95C:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EC984;
      }
      goto L_088EC96C;
    }
L_088EC96C:
    ctx.gpr[31] = (0x088EC974u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x088EC974u) goto L_088EC974;
    return;
L_088EC974:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088EC984;
      }
      goto L_088EC97C;
    }
L_088EC97C:
    ctx.gpr[31] = (0x088EC984u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 617u, 0x08A17A88u>(ctx, &aot_mem) && ctx.pc == 0x088EC984u) goto L_088EC984;
    return;
L_088EC984:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088ED0E0;
      }
      goto L_088EC98C;
    }
L_088EC98C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1252)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088EC9E8;
      }
      goto L_088EC9A4;
    }
L_088EC9A4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EC9E8;
      }
      goto L_088EC9B0;
    }
L_088EC9B0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1252)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ED0E0;
      }
      goto L_088EC9C8;
    }
L_088EC9C8:
    ctx.gpr[31] = (0x088EC9D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x088EC9D0u) goto L_088EC9D0;
    return;
L_088EC9D0:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088ED0E0;
      }
      goto L_088EC9D8;
    }
L_088EC9D8:
    ctx.gpr[31] = (0x088EC9E0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 617u, 0x08A17A88u>(ctx, &aot_mem) && ctx.pc == 0x088EC9E0u) goto L_088EC9E0;
    return;
L_088EC9E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088ED0E0;
      }
      goto L_088EC9E8;
    }
L_088EC9E8:
    ctx.gpr[31] = (0x088EC9F0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x088EC9F0u) goto L_088EC9F0;
    return;
L_088EC9F0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088ECC34;
      }
      goto L_088EC9F8;
    }
L_088EC9F8:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (0u | 152u);
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[4];
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_088ECA0C;
      }
      goto L_088ECA08;
    }
L_088ECA08:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(2092), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    goto L_088ECA0C;
L_088ECA0C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[31] = (0x088ECA24u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 653u, 0x0891F338u>(ctx, &aot_mem) && ctx.pc == 0x088ECA24u) goto L_088ECA24;
    return;
L_088ECA24:
    ctx.gpr[31] = (0x088ECA2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x088ECA2Cu) goto L_088ECA2C;
    return;
L_088ECA2C:
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088ECA4C;
      }
      goto L_088ECA34;
    }
L_088ECA34:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ECABC;
      }
      goto L_088ECA3C;
    }
L_088ECA3C:
    ctx.gpr[31] = (0x088ECA44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x088ECA44u) goto L_088ECA44;
    return;
L_088ECA44:
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088ECABC;
      }
      goto L_088ECA4C;
    }
L_088ECA4C:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(121)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088ECA5Cu);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 510u, 0x08A360ECu>(ctx, &aot_mem) && ctx.pc == 0x088ECA5Cu) goto L_088ECA5C;
    return;
L_088ECA5C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] << 8u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (2238u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6992));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(316)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(316), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(320)));
    ctx.gpr[5] = (16544u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x088ECAA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x088ECAA8u) goto L_088ECAA8;
    return;
L_088ECAA8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088ECAB4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 69u, 0x08910440u>(ctx, &aot_mem) && ctx.pc == 0x088ECAB4u) goto L_088ECAB4;
    return;
L_088ECAB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088ECAC8;
      }
      goto L_088ECABC;
    }
L_088ECABC:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088ECAC8u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 543u, 0x08A362ACu>(ctx, &aot_mem) && ctx.pc == 0x088ECAC8u) goto L_088ECAC8;
    return;
L_088ECAC8:
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_088ECAFC;
      }
      goto L_088ECAD0;
    }
L_088ECAD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-4097));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[31] = (0x088ECAE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x088ECAE8u) goto L_088ECAE8;
    return;
L_088ECAE8:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088ECAFC;
      }
      goto L_088ECAF0;
    }
L_088ECAF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8684)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8684), ctx.gpr[4]);
    goto L_088ECAFC;
L_088ECAFC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ECC2C;
      }
      goto L_088ECB08;
    }
L_088ECB08:
    ctx.gpr[31] = (0x088ECB10u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x088ECB10u) goto L_088ECB10;
    return;
L_088ECB10:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ECC2C;
      }
      goto L_088ECB18;
    }
L_088ECB18:
    ctx.gpr[4] = (0u | 42u);
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088ECC1C;
      }
      goto L_088ECB24;
    }
L_088ECB24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 14u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ECC1C;
      }
      goto L_088ECB40;
    }
L_088ECB40:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(352)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
        goto L_088ECB70;
    }
    goto L_088ECB50;
L_088ECB50:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x088ECB60u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x088ECB60u) goto L_088ECB60;
    return;
L_088ECB60:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    goto L_088ECB70;
L_088ECB70:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(204))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ECBA0;
      }
      goto L_088ECB88;
    }
L_088ECB88:
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[31] = (0x088ECB98u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(3))))));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 183u, 0x08ADC994u>(ctx, &aot_mem) && ctx.pc == 0x088ECB98u) goto L_088ECB98;
    return;
L_088ECB98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088ECC14;
      }
      goto L_088ECBA0;
    }
L_088ECBA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
        goto L_088ECBCC;
    }
    goto L_088ECBAC;
L_088ECBAC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(113));
    ctx.gpr[31] = (0x088ECBBCu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x088ECBBCu) goto L_088ECBBC;
    return;
L_088ECBBC:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(113)));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    goto L_088ECBCC;
L_088ECBCC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(208))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_088ECC14;
      }
      goto L_088ECBD8;
    }
L_088ECBD8:
    ctx.gpr[17] = (2237u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28736));
      if (branch_taken) {
          goto L_088ECC04;
      }
      goto L_088ECBE8;
    }
L_088ECBE8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(114));
    ctx.gpr[31] = (0x088ECBF8u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x088ECBF8u) goto L_088ECBF8;
    return;
L_088ECBF8:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(114)));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088ECC04;
L_088ECC04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(208))))));
    ctx.gpr[31] = (0x088ECC14u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 183u, 0x08ADC994u>(ctx, &aot_mem) && ctx.pc == 0x088ECC14u) goto L_088ECC14;
    return;
L_088ECC14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088ECC2C;
      }
      goto L_088ECC1C;
    }
L_088ECC1C:
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[31] = (0x088ECC2Cu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 173u, 0x08ADC8D4u>(ctx, &aot_mem) && ctx.pc == 0x088ECC2Cu) goto L_088ECC2C;
    return;
L_088ECC2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_088ED0E4;
      }
      goto L_088ECC34;
    }
L_088ECC34:
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_088ECCD0;
      }
      goto L_088ECC3C;
    }
L_088ECC3C:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x088ECC48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x088ECC48u) goto L_088ECC48;
    return;
L_088ECC48:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_088ECC68;
      }
      goto L_088ECC50;
    }
L_088ECC50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] | 80u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    goto L_088ECC68;
L_088ECC68:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 173u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x088ECC80u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 653u, 0x0891F338u>(ctx, &aot_mem) && ctx.pc == 0x088ECC80u) goto L_088ECC80;
    return;
L_088ECC80:
    ctx.gpr[31] = (0x088ECC88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x088ECC88u) goto L_088ECC88;
    return;
L_088ECC88:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088ECC9C;
      }
      goto L_088ECC90;
    }
L_088ECC90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8684)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8684), ctx.gpr[4]);
    goto L_088ECC9C;
L_088ECC9C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ECCC8;
      }
      goto L_088ECCA8;
    }
L_088ECCA8:
    ctx.gpr[31] = (0x088ECCB0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x088ECCB0u) goto L_088ECCB0;
    return;
L_088ECCB0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ECCC8;
      }
      goto L_088ECCB8;
    }
L_088ECCB8:
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[31] = (0x088ECCC8u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 173u, 0x08ADC8D4u>(ctx, &aot_mem) && ctx.pc == 0x088ECCC8u) goto L_088ECCC8;
    return;
L_088ECCC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_088ED0E4;
      }
      goto L_088ECCD0;
    }
L_088ECCD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ED0DC;
      }
      goto L_088ECCDC;
    }
L_088ECCDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(464)));
    ctx.gpr[5] = (ctx.gpr[4] & 512u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 6u);
      if (branch_taken) {
          goto L_088ECD24;
      }
      goto L_088ECCEC;
    }
L_088ECCEC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088ECD24;
      }
      goto L_088ECCFC;
    }
L_088ECCFC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(852)));
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088ED0DC;
      }
      goto L_088ECD10;
    }
L_088ECD10:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1252)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088ED0DC;
      }
      goto L_088ECD24;
    }
L_088ECD24:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088ECD4C;
      }
      goto L_088ECD38;
    }
L_088ECD38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    ctx.gpr[16] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088ECD70;
      }
      goto L_088ECD4C;
    }
L_088ECD4C:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088ECD68u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 212u, 0x08B04D14u>(ctx, &aot_mem) && ctx.pc == 0x088ECD68u) goto L_088ECD68;
    return;
L_088ECD68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_088ECFB4;
      }
      goto L_088ECD70;
    }
L_088ECD70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_088ECED4;
      }
      goto L_088ECD80;
    }
L_088ECD80:
    ctx.gpr[31] = (0x088ECD88u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1152)));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem) && ctx.pc == 0x088ECD88u) goto L_088ECD88;
    return;
L_088ECD88:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088ECE14;
      }
      goto L_088ECD94;
    }
L_088ECD94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    ctx.gpr[4] = (ctx.gpr[4] >> 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088ECDCC;
      }
      goto L_088ECDAC;
    }
L_088ECDAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] | 48u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    ctx.gpr[31] = (0x088ECDCCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1152)));
    if (rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 365u, 0x08B41608u>(ctx, &aot_mem) && ctx.pc == 0x088ECDCCu) goto L_088ECDCC;
    return;
L_088ECDCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(384));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(151), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(384));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(384));
    ctx.gpr[5] = (0u | 5u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(150), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(384));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2000));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(128), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088ECED4;
      }
      goto L_088ECE14;
    }
L_088ECE14:
    ctx.gpr[31] = (0x088ECE1Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1152)));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem) && ctx.pc == 0x088ECE1Cu) goto L_088ECE1C;
    return;
L_088ECE1C:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088ECED4;
      }
      goto L_088ECE28;
    }
L_088ECE28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ECED4;
      }
      goto L_088ECE34;
    }
L_088ECE34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088ECED4;
      }
      goto L_088ECE48;
    }
L_088ECE48:
    ctx.gpr[31] = (0x088ECE50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x088ECE50u) goto L_088ECE50;
    return;
L_088ECE50:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23300)));
    ctx.gpr[31] = (0x088ECE64u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23304)));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x088ECE64u) goto L_088ECE64;
    return;
L_088ECE64:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (48460u << 16u);
      if (branch_taken) {
          goto L_088ECE90;
      }
      goto L_088ECE80;
    }
L_088ECE80:
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088ECE98;
      }
      goto L_088ECE90;
    }
L_088ECE90:
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_088ECE98;
L_088ECE98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1152)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1720), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1152)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1969), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(328));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x088ECECCu);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088ECECCu) goto L_088ECECC;
    return;
L_088ECECC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_088ED0E4;
      }
      goto L_088ECED4;
    }
L_088ECED4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[31] = (0x088ECEE0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 339u, 0x08B012BCu>(ctx, &aot_mem) && ctx.pc == 0x088ECEE0u) goto L_088ECEE0;
    return;
L_088ECEE0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ECF00;
      }
      goto L_088ECEE8;
    }
L_088ECEE8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088ECEF8u);
    ctx.gpr[5] = (0u | 38u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem) && ctx.pc == 0x088ECEF8u) goto L_088ECEF8;
    return;
L_088ECEF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088ECFB4;
      }
      goto L_088ECF00;
    }
L_088ECF00:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ECF40;
      }
      goto L_088ECF10;
    }
L_088ECF10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_088ECF40;
      }
      goto L_088ECF20;
    }
L_088ECF20:
    ctx.gpr[31] = (0x088ECF28u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 264u, 0x08910F00u>(ctx, &aot_mem) && ctx.pc == 0x088ECF28u) goto L_088ECF28;
    return;
L_088ECF28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] | 64u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    goto L_088ECF40;
L_088ECF40:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[31] = (0x088ECF58u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 653u, 0x0891F338u>(ctx, &aot_mem) && ctx.pc == 0x088ECF58u) goto L_088ECF58;
    return;
L_088ECF58:
    ctx.gpr[31] = (0x088ECF60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x088ECF60u) goto L_088ECF60;
    return;
L_088ECF60:
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088ECFB4;
      }
      goto L_088ECF68;
    }
L_088ECF68:
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_088ECFB4;
      }
      goto L_088ECF70;
    }
L_088ECF70:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] << 8u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (2238u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6992));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(316)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(316), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(320)));
    ctx.gpr[5] = (16544u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088ECFB4;
L_088ECFB4:
    ctx.gpr[16] = (0u | 0u);
    goto L_088ECFB8;
L_088ECFB8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088ECFC4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x088ECFC4u) goto L_088ECFC4;
    return;
L_088ECFC4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_088ECFFC;
      }
      goto L_088ECFCC;
    }
L_088ECFCC:
    ctx.gpr[31] = (0x088ECFD4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x088ECFD4u) goto L_088ECFD4;
    return;
L_088ECFD4:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_088ECFFC;
      }
      goto L_088ECFDC;
    }
L_088ECFDC:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ECFFC;
      }
      goto L_088ECFE4;
    }
L_088ECFE4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088ECFF0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x088ECFF0u) goto L_088ECFF0;
    return;
L_088ECFF0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088ECFFCu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 108u, 0x089387ACu>(ctx, &aot_mem) && ctx.pc == 0x088ECFFCu) goto L_088ECFFC;
    return;
L_088ECFFC:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[4] << 16u);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088ECFB8;
      }
      goto L_088ED014;
    }
L_088ED014:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ED040;
      }
      goto L_088ED020;
    }
L_088ED020:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_088ED040;
      }
      goto L_088ED02C;
    }
L_088ED02C:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ED040;
      }
      goto L_088ED034;
    }
L_088ED034:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(900)));
    ctx.gpr[31] = (0x088ED040u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 108u, 0x089387ACu>(ctx, &aot_mem) && ctx.pc == 0x088ED040u) goto L_088ED040;
    return;
L_088ED040:
    ctx.gpr[31] = (0x088ED048u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x088ED048u) goto L_088ED048;
    return;
L_088ED048:
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088ED068;
      }
      goto L_088ED050;
    }
L_088ED050:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ED094;
      }
      goto L_088ED058;
    }
L_088ED058:
    ctx.gpr[31] = (0x088ED060u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x088ED060u) goto L_088ED060;
    return;
L_088ED060:
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088ED094;
      }
      goto L_088ED068;
    }
L_088ED068:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(121)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088ED078u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 510u, 0x08A360ECu>(ctx, &aot_mem) && ctx.pc == 0x088ED078u) goto L_088ED078;
    return;
L_088ED078:
    ctx.gpr[31] = (0x088ED080u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x088ED080u) goto L_088ED080;
    return;
L_088ED080:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088ED08Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 69u, 0x08910440u>(ctx, &aot_mem) && ctx.pc == 0x088ED08Cu) goto L_088ED08C;
    return;
L_088ED08C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088ED0A0;
      }
      goto L_088ED094;
    }
L_088ED094:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088ED0A0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 543u, 0x08A362ACu>(ctx, &aot_mem) && ctx.pc == 0x088ED0A0u) goto L_088ED0A0;
    return;
L_088ED0A0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ED0CC;
      }
      goto L_088ED0AC;
    }
L_088ED0AC:
    ctx.gpr[31] = (0x088ED0B4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x088ED0B4u) goto L_088ED0B4;
    return;
L_088ED0B4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ED0CC;
      }
      goto L_088ED0BC;
    }
L_088ED0BC:
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[31] = (0x088ED0CCu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 173u, 0x08ADC8D4u>(ctx, &aot_mem) && ctx.pc == 0x088ED0CCu) goto L_088ED0CC;
    return;
L_088ED0CC:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ED0DC;
      }
      goto L_088ED0D4;
    }
L_088ED0D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088ED0E4;
      }
      goto L_088ED0DC;
    }
L_088ED0DC:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    goto L_088ED0E0;
L_088ED0E0:
    ctx.gpr[2] = (0u | 0u);
    goto L_088ED0E4;
L_088ED0E4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088ED12C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[31] = (0x088ED174u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem) && ctx.pc == 0x088ED174u) goto L_088ED174;
    return;
L_088ED174:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088ED284;
      }
      goto L_088ED188;
    }
L_088ED188:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & 8192u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ED27C;
      }
      goto L_088ED198;
    }
L_088ED198:
    ctx.gpr[31] = (0x088ED1A0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem) && ctx.pc == 0x088ED1A0u) goto L_088ED1A0;
    return;
L_088ED1A0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ED27C;
      }
      goto L_088ED1A8;
    }
L_088ED1A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088ED27C;
      }
      goto L_088ED1B8;
    }
L_088ED1B8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] & 32768u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ED1FC;
      }
      goto L_088ED1D0;
    }
L_088ED1D0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[18] = (0u | 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[18] = (0u | 217u);
        goto L_088ED1E4;
    }
    goto L_088ED1E4;
L_088ED1E4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088ED1F4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x088ED1F4u) goto L_088ED1F4;
    return;
L_088ED1F4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_088ED1FC;
L_088ED1FC:
    ctx.gpr[4] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.gpr[5] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ED27C;
      }
      goto L_088ED214;
    }
L_088ED214:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ED27C;
      }
      goto L_088ED21C;
    }
L_088ED21C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[19] = (0u | 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[19] = (0u | 215u);
        goto L_088ED22C;
    }
    goto L_088ED22C;
L_088ED22C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_088ED27C;
      }
      goto L_088ED234;
    }
L_088ED234:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_088ED27C;
      }
      goto L_088ED23C;
    }
L_088ED23C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (16640u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x088ED258u);
    ctx.gpr[7] = (0u | 155u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem) && ctx.pc == 0x088ED258u) goto L_088ED258;
    return;
L_088ED258:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x088ED26Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 73u, 0x08890474u>(ctx, &aot_mem) && ctx.pc == 0x088ED26Cu) goto L_088ED26C;
    return;
L_088ED26C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_088ED27C;
L_088ED27C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088ED6D8;
      }
      goto L_088ED284;
    }
L_088ED284:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ED364;
      }
      goto L_088ED28C;
    }
L_088ED28C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (0u | 216u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088ED364;
      }
      goto L_088ED29C;
    }
L_088ED29C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (0u | 22u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088ED364;
      }
      goto L_088ED2AC;
    }
L_088ED2AC:
    ctx.gpr[31] = (0x088ED2B4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x088ED2B4u) goto L_088ED2B4;
    return;
L_088ED2B4:
    ctx.gpr[4] = (50298u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (2191u << 16u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-11988));
      if (branch_taken) {
          goto L_088ED300;
      }
      goto L_088ED2C8;
    }
L_088ED2C8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3261))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088ED300;
      }
      goto L_088ED2D8;
    }
L_088ED2D8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 14u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088ED310;
      }
      goto L_088ED300;
    }
L_088ED300:
    ctx.gpr[31] = (0x088ED308u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x088ED308u) goto L_088ED308;
    return;
L_088ED308:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088ED330;
      }
      goto L_088ED310;
    }
L_088ED310:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088ED328u);
    ctx.gpr[7] = (0u | 214u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 175u, 0x089089B8u>(ctx, &aot_mem) && ctx.pc == 0x088ED328u) goto L_088ED328;
    return;
L_088ED328:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088ED34C;
      }
      goto L_088ED330;
    }
L_088ED330:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088ED348u);
    ctx.gpr[7] = (0u | 215u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 175u, 0x089089B8u>(ctx, &aot_mem) && ctx.pc == 0x088ED348u) goto L_088ED348;
    return;
L_088ED348:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    goto L_088ED34C;
L_088ED34C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088ED35Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem) && ctx.pc == 0x088ED35Cu) goto L_088ED35C;
    return;
L_088ED35C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088ED6D8;
      }
      goto L_088ED364;
    }
L_088ED364:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[6] = (ctx.gpr[5] & 8192u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088ED43C;
      }
      goto L_088ED374;
    }
L_088ED374:
    ctx.gpr[5] = (ctx.gpr[5] & 4096u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ED43C;
      }
      goto L_088ED380;
    }
L_088ED380:
    ctx.gpr[5] = (ctx.gpr[4] & 32768u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088ED3B8;
      }
      goto L_088ED394;
    }
L_088ED394:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (0u | 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (0u | 217u);
        goto L_088ED3A4;
    }
    goto L_088ED3A4;
L_088ED3A4:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088ED3B0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x088ED3B0u) goto L_088ED3B0;
    return;
L_088ED3B0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_088ED3B8;
L_088ED3B8:
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ED6B8;
      }
      goto L_088ED3D0;
    }
L_088ED3D0:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088ED6B8;
      }
      goto L_088ED3D8;
    }
L_088ED3D8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[19] = (0u | 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[19] = (0u | 215u);
        goto L_088ED3E8;
    }
    goto L_088ED3E8;
L_088ED3E8:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_088ED6B8;
      }
      goto L_088ED3F0;
    }
L_088ED3F0:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_088ED6B8;
      }
      goto L_088ED3F8;
    }
L_088ED3F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (16640u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x088ED414u);
    ctx.gpr[7] = (0u | 155u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem) && ctx.pc == 0x088ED414u) goto L_088ED414;
    return;
L_088ED414:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x088ED428u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 73u, 0x08890474u>(ctx, &aot_mem) && ctx.pc == 0x088ED428u) goto L_088ED428;
    return;
L_088ED428:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088ED6B8;
      }
      goto L_088ED43C;
    }
L_088ED43C:
    ctx.gpr[5] = (ctx.gpr[4] & 4096u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ED5D0;
      }
      goto L_088ED450;
    }
L_088ED450:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (ctx.gpr[5] & 4u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ED5D0;
      }
      goto L_088ED460;
    }
L_088ED460:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    ctx.gpr[6] = (0u | 22u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088ED5D0;
      }
      goto L_088ED470;
    }
L_088ED470:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[4] & 8192u);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
      if (branch_taken) {
          goto L_088ED49C;
      }
      goto L_088ED488;
    }
L_088ED488:
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    goto L_088ED49C;
L_088ED49C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ED4E0;
      }
      goto L_088ED4A4;
    }
L_088ED4A4:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 215u);
      if (branch_taken) {
          goto L_088ED4C8;
      }
      goto L_088ED4AC;
    }
L_088ED4AC:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (8u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (0u | 218u);
        goto L_088ED4C8;
    }
    goto L_088ED4C8;
L_088ED4C8:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088ED4D8u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x088ED4D8u) goto L_088ED4D8;
    return;
L_088ED4D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088ED4F4;
      }
      goto L_088ED4E0;
    }
L_088ED4E0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[31] = (0x088ED4F0u);
    ctx.gpr[6] = (0u | 57u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x088ED4F0u) goto L_088ED4F0;
    return;
L_088ED4F0:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_088ED4F4;
L_088ED4F4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ED534;
      }
      goto L_088ED4FC;
    }
L_088ED4FC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (16243u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088ED558;
      }
      goto L_088ED51C;
    }
L_088ED51C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088ED558;
      }
      goto L_088ED534;
    }
L_088ED534:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (16640u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    ctx.gpr[18] = (2191u << 16u);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-11988));
      if (branch_taken) {
          goto L_088ED560;
      }
      goto L_088ED550;
    }
L_088ED550:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088ED5A8;
      }
      goto L_088ED558;
    }
L_088ED558:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088ED6D8;
      }
      goto L_088ED560;
    }
L_088ED560:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[7] = (0u | 214u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088ED5A8;
      }
      goto L_088ED570;
    }
L_088ED570:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] & 4096u);
    ctx.gpr[7] = (0u < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (0u | 215u);
        goto L_088ED58C;
    }
    goto L_088ED58C;
L_088ED58C:
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088ED5A0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem) && ctx.pc == 0x088ED5A0u) goto L_088ED5A0;
    return;
L_088ED5A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088ED5BC;
      }
      goto L_088ED5A8;
    }
L_088ED5A8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088ED5B8u);
    ctx.gpr[7] = (0u | 214u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem) && ctx.pc == 0x088ED5B8u) goto L_088ED5B8;
    return;
L_088ED5B8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_088ED5BC;
L_088ED5BC:
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088ED5C8u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem) && ctx.pc == 0x088ED5C8u) goto L_088ED5C8;
    return;
L_088ED5C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088ED6D8;
      }
      goto L_088ED5D0;
    }
L_088ED5D0:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ED5F8;
      }
      goto L_088ED5D8;
    }
L_088ED5D8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (0u | 214u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088ED5F8;
      }
      goto L_088ED5E8;
    }
L_088ED5E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088ED608;
      }
      goto L_088ED5F8;
    }
L_088ED5F8:
    if (ctx.gpr[19] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
        goto L_088ED630;
    }
    goto L_088ED600;
L_088ED600:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088ED6B8;
      }
      goto L_088ED608;
    }
L_088ED608:
    ctx.gpr[4] = (49408u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[31] = (0x088ED628u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 261u, 0x088E29C0u>(ctx, &aot_mem) && ctx.pc == 0x088ED628u) goto L_088ED628;
    return;
L_088ED628:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088ED6D8;
      }
      goto L_088ED630;
    }
L_088ED630:
    ctx.gpr[5] = (0u | 22u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088ED6B8;
      }
      goto L_088ED63C;
    }
L_088ED63C:
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[4] = (0u | 214u);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 215u);
      if (branch_taken) {
          goto L_088ED654;
      }
      goto L_088ED64C;
    }
L_088ED64C:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088ED6B8;
      }
      goto L_088ED654;
    }
L_088ED654:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088ED6B8;
      }
      goto L_088ED678;
    }
L_088ED678:
    ctx.gpr[31] = (0x088ED680u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem) && ctx.pc == 0x088ED680u) goto L_088ED680;
    return;
L_088ED680:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (0x088ED68Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 922u, 0x08907F9Cu>(ctx, &aot_mem) && ctx.pc == 0x088ED68Cu) goto L_088ED68C;
    return;
L_088ED68C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[31] = (0x088ED6ACu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem) && ctx.pc == 0x088ED6ACu) goto L_088ED6AC;
    return;
L_088ED6AC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (0x088ED6B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 897u, 0x08907E38u>(ctx, &aot_mem) && ctx.pc == 0x088ED6B8u) goto L_088ED6B8;
    return;
L_088ED6B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ED6D0;
      }
      goto L_088ED6C8;
    }
L_088ED6C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088ED6D8;
      }
      goto L_088ED6D0;
    }
L_088ED6D0:
    ctx.gpr[31] = (0x088ED6D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 261u, 0x088E29C0u>(ctx, &aot_mem) && ctx.pc == 0x088ED6D8u) goto L_088ED6D8;
    return;
L_088ED6D8:
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
L_088ED6F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-752));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(720), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(724), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(728), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(732), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(736), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(740), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(744), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(748), ctx.gpr[31]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2276)));
    ctx.gpr[18] = (ctx.gpr[6] ^ 2u);
    ctx.gpr[18] = (ctx.gpr[18] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(2276)));
    ctx.gpr[19] = (ctx.gpr[6] ^ 2u);
    ctx.gpr[19] = (ctx.gpr[19] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
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
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
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
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088ED788;
      }
      goto L_088ED780;
    }
L_088ED780:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_088ED78C;
      }
      goto L_088ED788;
    }
L_088ED788:
    ctx.gpr[20] = (0u | 0u);
    goto L_088ED78C;
L_088ED78C:
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
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
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_088ED7C0;
      }
      goto L_088ED7B8;
    }
L_088ED7B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u | 1u);
      if (branch_taken) {
          goto L_088ED7C0;
      }
      goto L_088ED7C0;
    }
L_088ED7C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088ED7D8u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088ED7D8u) goto L_088ED7D8;
    return;
L_088ED7D8:
    ctx.gpr[31] = (0x088ED7E0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 563u, 0x0881F274u>(ctx, &aot_mem) && ctx.pc == 0x088ED7E0u) goto L_088ED7E0;
    return;
L_088ED7E0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ED950;
      }
      goto L_088ED7E8;
    }
L_088ED7E8:
    ctx.gpr[31] = (0x088ED7F0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 321u, 0x08911220u>(ctx, &aot_mem) && ctx.pc == 0x088ED7F0u) goto L_088ED7F0;
    return;
L_088ED7F0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088ED950;
      }
      goto L_088ED7F8;
    }
L_088ED7F8:
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    // nop
      if (branch_taken) {
          goto L_088ED884;
      }
      goto L_088ED820;
    }
L_088ED820:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x088ED868u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 600u, 0x08A66CD8u>(ctx, &aot_mem) && ctx.pc == 0x088ED868u) goto L_088ED868;
    return;
L_088ED868:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ED878;
      }
      goto L_088ED870;
    }
L_088ED870:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 29u);
      if (branch_taken) {
          goto L_088ED87C;
      }
      goto L_088ED878;
    }
L_088ED878:
    ctx.gpr[22] = (0u | 26u);
    goto L_088ED87C;
L_088ED87C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088ED900;
      }
      goto L_088ED884;
    }
L_088ED884:
    ctx.gpr[4] = (49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[13] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (15820u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (0x088ED8ECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 600u, 0x08A66CD8u>(ctx, &aot_mem) && ctx.pc == 0x088ED8ECu) goto L_088ED8EC;
    return;
L_088ED8EC:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ED8FC;
      }
      goto L_088ED8F4;
    }
L_088ED8F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 31u);
      if (branch_taken) {
          goto L_088ED900;
      }
      goto L_088ED8FC;
    }
L_088ED8FC:
    ctx.gpr[22] = (0u | 27u);
    goto L_088ED900;
L_088ED900:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088ED93C;
      }
      goto L_088ED910;
    }
L_088ED910:
    ctx.gpr[31] = (0x088ED918u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem) && ctx.pc == 0x088ED918u) goto L_088ED918;
    return;
L_088ED918:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ED93C;
      }
      goto L_088ED920;
    }
L_088ED920:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[6] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x088ED93Cu);
    ctx.gpr[6] = (0u | 49u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem) && ctx.pc == 0x088ED93Cu) goto L_088ED93C;
    return;
L_088ED93C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 3000u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x088ED950u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 14u, 0x0891C0E8u>(ctx, &aot_mem) && ctx.pc == 0x088ED950u) goto L_088ED950;
    return;
L_088ED950:
    ctx.gpr[31] = (0x088ED958u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 327u, 0x08911284u>(ctx, &aot_mem) && ctx.pc == 0x088ED958u) goto L_088ED958;
    return;
L_088ED958:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ED970;
      }
      goto L_088ED960;
    }
L_088ED960:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088ED978;
      }
      goto L_088ED968;
    }
L_088ED968:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EDA04;
      }
      goto L_088ED970;
    }
L_088ED970:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EE9BC;
      }
      goto L_088ED978;
    }
L_088ED978:
    ctx.gpr[31] = (0x088ED980u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x088ED980u) goto L_088ED980;
    return;
L_088ED980:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EDA04;
      }
      goto L_088ED988;
    }
L_088ED988:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 19u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088EDA04;
      }
      goto L_088ED998;
    }
L_088ED998:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2244)));
    ctx.gpr[6] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088ED9B8;
      }
      goto L_088ED9A8;
    }
L_088ED9A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2244)));
    ctx.gpr[6] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[18] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_088ED9C0;
      }
      goto L_088ED9B8;
    }
L_088ED9B8:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[18] = (ctx.gpr[4] & 255u);
    goto L_088ED9C0;
L_088ED9C0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088ED9D0u);
    ctx.gpr[6] = (0u | 5000u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 803u, 0x0890B27Cu>(ctx, &aot_mem) && ctx.pc == 0x088ED9D0u) goto L_088ED9D0;
    return;
L_088ED9D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (16384u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[31] = (0x088ED9E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 887u, 0x0890FF64u>(ctx, &aot_mem) && ctx.pc == 0x088ED9E8u) goto L_088ED9E8;
    return;
L_088ED9E8:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_088ED9FC;
      }
      goto L_088ED9F0;
    }
L_088ED9F0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088ED9FCu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x088ED9FCu) goto L_088ED9FC;
    return;
L_088ED9FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EE9BC;
      }
      goto L_088EDA04;
    }
L_088EDA04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2236)));
    ctx.gpr[5] = (0u | 28u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088EDA48;
      }
      goto L_088EDA14;
    }
L_088EDA14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2236)));
    ctx.gpr[5] = (0u | 28u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088EDA38;
      }
      goto L_088EDA24;
    }
L_088EDA24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2244)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EDA64;
      }
      goto L_088EDA30;
    }
L_088EDA30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2244)));
      if (branch_taken) {
          goto L_088EDA58;
      }
      goto L_088EDA38;
    }
L_088EDA38:
    ctx.gpr[31] = (0x088EDA40u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 70u, 0x0891C44Cu>(ctx, &aot_mem) && ctx.pc == 0x088EDA40u) goto L_088EDA40;
    return;
L_088EDA40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EE9BC;
      }
      goto L_088EDA48;
    }
L_088EDA48:
    ctx.gpr[31] = (0x088EDA50u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 70u, 0x0891C44Cu>(ctx, &aot_mem) && ctx.pc == 0x088EDA50u) goto L_088EDA50;
    return;
L_088EDA50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EE9BC;
      }
      goto L_088EDA58;
    }
L_088EDA58:
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088EDBF0;
      }
      goto L_088EDA64;
    }
L_088EDA64:
    ctx.gpr[31] = (0x088EDA6Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem) && ctx.pc == 0x088EDA6Cu) goto L_088EDA6C;
    return;
L_088EDA6C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EDAA8;
      }
      goto L_088EDA74;
    }
L_088EDA74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2244)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EDAA8;
      }
      goto L_088EDA80;
    }
L_088EDA80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2244)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088EDAA8;
      }
      goto L_088EDA90;
    }
L_088EDA90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1360)));
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1360)));
        goto L_088EDAB0;
    }
    goto L_088EDAA0;
L_088EDAA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EDB28;
      }
      goto L_088EDAA8;
    }
L_088EDAA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EE9BC;
      }
      goto L_088EDAB0;
    }
L_088EDAB0:
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088EDB28;
      }
      goto L_088EDABC;
    }
L_088EDABC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088EDB28;
      }
      goto L_088EDACC;
    }
L_088EDACC:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EE988;
      }
      goto L_088EDAD4;
    }
L_088EDAD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 31u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088EE988;
      }
      goto L_088EDAE4;
    }
L_088EDAE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 31u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088EE988;
      }
      goto L_088EDAF4;
    }
L_088EDAF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2072)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EE988;
      }
      goto L_088EDB08;
    }
L_088EDB08:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088EDB18u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 480u, 0x0891E8B4u>(ctx, &aot_mem) && ctx.pc == 0x088EDB18u) goto L_088EDB18;
    return;
L_088EDB18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3000));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2072), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088EE988;
      }
      goto L_088EDB28;
    }
L_088EDB28:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EE988;
      }
      goto L_088EDB30;
    }
L_088EDB30:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EE988;
      }
      goto L_088EDB38;
    }
L_088EDB38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1364)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(23))))));
    ctx.gpr[5] = (0u | 100u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1364)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(22))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EE988;
      }
      goto L_088EDB5C;
    }
L_088EDB5C:
    ctx.gpr[31] = (0x088EDB64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x088EDB64u) goto L_088EDB64;
    return;
L_088EDB64:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EDBA8;
      }
      goto L_088EDB74;
    }
L_088EDB74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2072)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EDBA8;
      }
      goto L_088EDB88;
    }
L_088EDB88:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088EDB98u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 480u, 0x0891E8B4u>(ctx, &aot_mem) && ctx.pc == 0x088EDB98u) goto L_088EDB98;
    return;
L_088EDB98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3000));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2072), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088EE988;
      }
      goto L_088EDBA8;
    }
L_088EDBA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2244)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EE988;
      }
      goto L_088EDBB8;
    }
L_088EDBB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2244)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EE988;
      }
      goto L_088EDBC8;
    }
L_088EDBC8:
    ctx.gpr[4] = (0u | 2000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 14u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088EDBE8u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 613u, 0x0892F140u>(ctx, &aot_mem) && ctx.pc == 0x088EDBE8u) goto L_088EDBE8;
    return;
L_088EDBE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EE988;
      }
      goto L_088EDBF0;
    }
L_088EDBF0:
    ctx.gpr[31] = (0x088EDBF8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x088EDBF8u) goto L_088EDBF8;
    return;
L_088EDBF8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EDC20;
      }
      goto L_088EDC00;
    }
L_088EDC00:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3156)));
    ctx.gpr[4] = (16358u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088EDC98;
      }
      goto L_088EDC20;
    }
L_088EDC20:
    ctx.gpr[31] = (0x088EDC28u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x088EDC28u) goto L_088EDC28;
    return;
L_088EDC28:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EE048;
      }
      goto L_088EDC30;
    }
L_088EDC30:
    if (ctx.gpr[19] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2244)));
        goto L_088EDC44;
    }
    goto L_088EDC38;
L_088EDC38:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EE048;
      }
      goto L_088EDC40;
    }
L_088EDC40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2244)));
    goto L_088EDC44;
L_088EDC44:
    ctx.gpr[5] = (0u | 4u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2196)));
        goto L_088EDC64;
    }
    goto L_088EDC50;
L_088EDC50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2244)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088EE048;
      }
      goto L_088EDC60;
    }
L_088EDC60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2196)));
    goto L_088EDC64;
L_088EDC64:
    ctx.gpr[5] = (0u | 15u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2196)));
        goto L_088EDC80;
    }
    goto L_088EDC70;
L_088EDC70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088EE048;
      }
      goto L_088EDC7C;
    }
L_088EDC7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2196)));
    goto L_088EDC80;
L_088EDC80:
    ctx.gpr[5] = (0u | 15u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088EDC98;
      }
      goto L_088EDC8C;
    }
L_088EDC8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2192)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088EE048;
      }
      goto L_088EDC98;
    }
L_088EDC98:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EDE40;
      }
      goto L_088EDCA0;
    }
L_088EDCA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1364)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (16320u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088EDE40;
      }
      goto L_088EDCC0;
    }
L_088EDCC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1364)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1364)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088EDE40;
      }
      goto L_088EDCE0;
    }
L_088EDCE0:
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    // nop
      if (branch_taken) {
          goto L_088EDD6C;
      }
      goto L_088EDD08;
    }
L_088EDD08:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[31] = (0x088EDD50u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 600u, 0x08A66CD8u>(ctx, &aot_mem) && ctx.pc == 0x088EDD50u) goto L_088EDD50;
    return;
L_088EDD50:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EDD60;
      }
      goto L_088EDD58;
    }
L_088EDD58:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 29u);
      if (branch_taken) {
          goto L_088EDD64;
      }
      goto L_088EDD60;
    }
L_088EDD60:
    ctx.gpr[18] = (0u | 26u);
    goto L_088EDD64;
L_088EDD64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EDDE8;
      }
      goto L_088EDD6C;
    }
L_088EDD6C:
    ctx.gpr[4] = (49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[13] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (15820u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[31] = (0x088EDDD4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 600u, 0x08A66CD8u>(ctx, &aot_mem) && ctx.pc == 0x088EDDD4u) goto L_088EDDD4;
    return;
L_088EDDD4:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EDDE4;
      }
      goto L_088EDDDC;
    }
L_088EDDDC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 31u);
      if (branch_taken) {
          goto L_088EDDE8;
      }
      goto L_088EDDE4;
    }
L_088EDDE4:
    ctx.gpr[18] = (0u | 27u);
    goto L_088EDDE8;
L_088EDDE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088EDE24;
      }
      goto L_088EDDF8;
    }
L_088EDDF8:
    ctx.gpr[31] = (0x088EDE00u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem) && ctx.pc == 0x088EDE00u) goto L_088EDE00;
    return;
L_088EDE00:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EDE24;
      }
      goto L_088EDE08;
    }
L_088EDE08:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[6] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x088EDE24u);
    ctx.gpr[6] = (0u | 49u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem) && ctx.pc == 0x088EDE24u) goto L_088EDE24;
    return;
L_088EDE24:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 3000u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088EDE38u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 14u, 0x0891C0E8u>(ctx, &aot_mem) && ctx.pc == 0x088EDE38u) goto L_088EDE38;
    return;
L_088EDE38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EE988;
      }
      goto L_088EDE40;
    }
L_088EDE40:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EDEEC;
      }
      goto L_088EDE48;
    }
L_088EDE48:
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    // nop
      if (branch_taken) {
          goto L_088EDEEC;
      }
      goto L_088EDE70;
    }
L_088EDE70:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[31] = (0x088EDEB8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 600u, 0x08A66CD8u>(ctx, &aot_mem) && ctx.pc == 0x088EDEB8u) goto L_088EDEB8;
    return;
L_088EDEB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2244)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088EDED8;
      }
      goto L_088EDEC8;
    }
L_088EDEC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2244)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088EDEE0;
      }
      goto L_088EDED8;
    }
L_088EDED8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 33u);
      if (branch_taken) {
          goto L_088EDEE4;
      }
      goto L_088EDEE0;
    }
L_088EDEE0:
    ctx.gpr[18] = (0u | 37u);
    goto L_088EDEE4;
L_088EDEE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EDFBC;
      }
      goto L_088EDEEC;
    }
L_088EDEEC:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EDF90;
      }
      goto L_088EDEF4;
    }
L_088EDEF4:
    ctx.gpr[4] = (49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[13] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (15820u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[31] = (0x088EDF5Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 600u, 0x08A66CD8u>(ctx, &aot_mem) && ctx.pc == 0x088EDF5Cu) goto L_088EDF5C;
    return;
L_088EDF5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2244)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088EDF7C;
      }
      goto L_088EDF6C;
    }
L_088EDF6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2244)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088EDF84;
      }
      goto L_088EDF7C;
    }
L_088EDF7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 35u);
      if (branch_taken) {
          goto L_088EDF88;
      }
      goto L_088EDF84;
    }
L_088EDF84:
    ctx.gpr[18] = (0u | 39u);
    goto L_088EDF88;
L_088EDF88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EDFBC;
      }
      goto L_088EDF90;
    }
L_088EDF90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2244)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088EDFB0;
      }
      goto L_088EDFA0;
    }
L_088EDFA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2244)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088EDFB8;
      }
      goto L_088EDFB0;
    }
L_088EDFB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 34u);
      if (branch_taken) {
          goto L_088EDFBC;
      }
      goto L_088EDFB8;
    }
L_088EDFB8:
    ctx.gpr[18] = (0u | 38u);
    goto L_088EDFBC;
L_088EDFBC:
    ctx.gpr[31] = (0x088EDFC4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem) && ctx.pc == 0x088EDFC4u) goto L_088EDFC4;
    return;
L_088EDFC4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EE988;
      }
      goto L_088EDFCC;
    }
L_088EDFCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2072)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EE988;
      }
      goto L_088EDFE0;
    }
L_088EDFE0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (16640u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x088EDFFCu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem) && ctx.pc == 0x088EDFFCu) goto L_088EDFFC;
    return;
L_088EDFFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2072), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088EE988;
      }
      goto L_088EE024;
    }
L_088EE024:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[6] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x088EE040u);
    ctx.gpr[6] = (0u | 49u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem) && ctx.pc == 0x088EE040u) goto L_088EE040;
    return;
L_088EE040:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EE988;
      }
      goto L_088EE048;
    }
L_088EE048:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[5] = (0u | 15u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088EE068;
      }
      goto L_088EE058;
    }
L_088EE058:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[5] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088EE244;
      }
      goto L_088EE068;
    }
L_088EE068:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EE0CC;
      }
      goto L_088EE074;
    }
L_088EE074:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    if (ctx.gpr[17] == ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2072)));
        goto L_088EE094;
    }
    goto L_088EE080;
L_088EE080:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088EE0CC;
      }
      goto L_088EE090;
    }
L_088EE090:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2072)));
    goto L_088EE094;
L_088EE094:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EE0CC;
      }
      goto L_088EE0A4;
    }
L_088EE0A4:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EE988;
      }
      goto L_088EE0AC;
    }
L_088EE0AC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088EE0BCu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 480u, 0x0891E8B4u>(ctx, &aot_mem) && ctx.pc == 0x088EE0BCu) goto L_088EE0BC;
    return;
L_088EE0BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3000));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2072), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088EE988;
      }
      goto L_088EE0CC;
    }
L_088EE0CC:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EE988;
      }
      goto L_088EE0D4;
    }
L_088EE0D4:
    ctx.gpr[31] = (0x088EE0DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem) && ctx.pc == 0x088EE0DCu) goto L_088EE0DC;
    return;
L_088EE0DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EE988;
      }
      goto L_088EE0E4;
    }
L_088EE0E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1364)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1364)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088EE988;
      }
      goto L_088EE0F4;
    }
L_088EE0F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1364)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(23))))));
    ctx.gpr[5] = (0u | 100u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1364)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(22))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EE194;
      }
      goto L_088EE118;
    }
L_088EE118:
    ctx.gpr[31] = (0x088EE120u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x088EE120u) goto L_088EE120;
    return;
L_088EE120:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EE194;
      }
      goto L_088EE128;
    }
L_088EE128:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2072)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EE194;
      }
      goto L_088EE13C;
    }
L_088EE13C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088EE154u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 442u, 0x08909A64u>(ctx, &aot_mem) && ctx.pc == 0x088EE154u) goto L_088EE154;
    return;
L_088EE154:
    ctx.gpr[31] = (0x088EE15Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 332u, 0x0890932Cu>(ctx, &aot_mem) && ctx.pc == 0x088EE15Cu) goto L_088EE15C;
    return;
L_088EE15C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (16640u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x088EE178u);
    ctx.gpr[7] = (0u | 56u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem) && ctx.pc == 0x088EE178u) goto L_088EE178;
    return;
L_088EE178:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2000));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2072), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088EE988;
      }
      goto L_088EE194;
    }
L_088EE194:
    ctx.gpr[31] = (0x088EE19Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x088EE19Cu) goto L_088EE19C;
    return;
L_088EE19C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EE1F4;
      }
      goto L_088EE1A4;
    }
L_088EE1A4:
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    // nop
      if (branch_taken) {
          goto L_088EE1E0;
      }
      goto L_088EE1CC;
    }
L_088EE1CC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2256)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2264)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088EE988;
      }
      goto L_088EE1E0;
    }
L_088EE1E0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2256)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2264)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088EE988;
      }
      goto L_088EE1F4;
    }
L_088EE1F4:
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088EE230;
      }
      goto L_088EE21C;
    }
L_088EE21C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2256)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2264)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088EE988;
      }
      goto L_088EE230;
    }
L_088EE230:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2256)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2264)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088EE988;
      }
      goto L_088EE244;
    }
L_088EE244:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2072)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EE988;
      }
      goto L_088EE258;
    }
L_088EE258:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EE3A0;
      }
      goto L_088EE260;
    }
L_088EE260:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EE278;
      }
      goto L_088EE268;
    }
L_088EE268:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2244)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088EE3A0;
      }
      goto L_088EE278;
    }
L_088EE278:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1364)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(22))))));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(23))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EE32C;
      }
      goto L_088EE290;
    }
L_088EE290:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EE32C;
      }
      goto L_088EE2B4;
    }
L_088EE2B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2276)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088EE32C;
      }
      goto L_088EE2C4;
    }
L_088EE2C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088EE32C;
      }
      goto L_088EE2D4;
    }
L_088EE2D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1360)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088EE32C;
      }
      goto L_088EE2E4;
    }
L_088EE2E4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EE32C;
      }
      goto L_088EE308;
    }
L_088EE308:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[31] = (0x088EE318u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem) && ctx.pc == 0x088EE318u) goto L_088EE318;
    return;
L_088EE318:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088EE324u);
    ctx.gpr[5] = (0u | 2000u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1084u, 0x08AC7F30u>(ctx, &aot_mem) && ctx.pc == 0x088EE324u) goto L_088EE324;
    return;
L_088EE324:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EE344;
      }
      goto L_088EE32C;
    }
L_088EE32C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088EE338u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 213u, 0x0892D2E4u>(ctx, &aot_mem) && ctx.pc == 0x088EE338u) goto L_088EE338;
    return;
L_088EE338:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088EE344u);
    ctx.gpr[5] = (0u | 155u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem) && ctx.pc == 0x088EE344u) goto L_088EE344;
    return;
L_088EE344:
    ctx.gpr[31] = (0x088EE34Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x088EE34Cu) goto L_088EE34C;
    return;
L_088EE34C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23148)));
    ctx.gpr[31] = (0x088EE360u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23152)));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x088EE360u) goto L_088EE360;
    return;
L_088EE360:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23140)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23144)));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2072), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088EE988;
      }
      goto L_088EE3A0;
    }
L_088EE3A0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4199)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EE5DC;
      }
      goto L_088EE3AC;
    }
L_088EE3AC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EE5DC;
      }
      goto L_088EE3B4;
    }
L_088EE3B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088EE3D4;
      }
      goto L_088EE3C4;
    }
L_088EE3C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088EE5DC;
      }
      goto L_088EE3D4;
    }
L_088EE3D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2244)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088EE5B8;
      }
      goto L_088EE3E4;
    }
L_088EE3E4:
    ctx.gpr[31] = (0x088EE3ECu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x088EE3ECu) goto L_088EE3EC;
    return;
L_088EE3EC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EE418;
      }
      goto L_088EE3F4;
    }
L_088EE3F4:
    ctx.gpr[31] = (0x088EE3FCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x088EE3FCu) goto L_088EE3FC;
    return;
L_088EE3FC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EE5B8;
      }
      goto L_088EE404;
    }
L_088EE404:
    ctx.gpr[31] = (0x088EE40Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x088EE40Cu) goto L_088EE40C;
    return;
L_088EE40C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(154)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EE5B8;
      }
      goto L_088EE418;
    }
L_088EE418:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088EE428u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 10u, 0x08910074u>(ctx, &aot_mem) && ctx.pc == 0x088EE428u) goto L_088EE428;
    return;
L_088EE428:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(608), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(612), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[5]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088EE494u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 10u, 0x08910074u>(ctx, &aot_mem) && ctx.pc == 0x088EE494u) goto L_088EE494;
    return;
L_088EE494:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(640), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(644), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[5]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088EE54C;
      }
      goto L_088EE520;
    }
L_088EE520:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (16320u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088EE580;
      }
      goto L_088EE54C;
    }
L_088EE54C:
    ctx.gpr[4] = (0u | 500u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088EE56Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 613u, 0x0892F140u>(ctx, &aot_mem) && ctx.pc == 0x088EE56Cu) goto L_088EE56C;
    return;
L_088EE56C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2072), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088EE5B0;
      }
      goto L_088EE580;
    }
L_088EE580:
    ctx.gpr[4] = (0u | 1000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088EE5A0u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 613u, 0x0892F140u>(ctx, &aot_mem) && ctx.pc == 0x088EE5A0u) goto L_088EE5A0;
    return;
L_088EE5A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2072), ctx.gpr[4]);
    goto L_088EE5B0;
L_088EE5B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EE988;
      }
      goto L_088EE5B8;
    }
L_088EE5B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2244)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088EE988;
      }
      goto L_088EE5C8;
    }
L_088EE5C8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088EE5D4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 213u, 0x0892D2E4u>(ctx, &aot_mem) && ctx.pc == 0x088EE5D4u) goto L_088EE5D4;
    return;
L_088EE5D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EE988;
      }
      goto L_088EE5DC;
    }
L_088EE5DC:
    ctx.gpr[31] = (0x088EE5E4u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x088EE5E4u) goto L_088EE5E4;
    return;
L_088EE5E4:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088EE8CC;
      }
      goto L_088EE5EC;
    }
L_088EE5EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[5] = (0u | 8u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
        goto L_088EE610;
    }
    goto L_088EE5FC;
L_088EE5FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088EE8CC;
      }
      goto L_088EE60C;
    }
L_088EE60C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    goto L_088EE610;
L_088EE610:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088EE8CC;
      }
      goto L_088EE618;
    }
L_088EE618:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2244)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088EE8B8;
      }
      goto L_088EE628;
    }
L_088EE628:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[31] = (0x088EE644u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 159u, 0x08A40D34u>(ctx, &aot_mem) && ctx.pc == 0x088EE644u) goto L_088EE644;
    return;
L_088EE644:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EE8B8;
      }
      goto L_088EE64C;
    }
L_088EE64C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088EE8B8;
      }
      goto L_088EE65C;
    }
L_088EE65C:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[20] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EE6CC;
      }
      goto L_088EE678;
    }
L_088EE678:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(3292)));
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(6288)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088EE69C;
      }
      goto L_088EE690;
    }
L_088EE690:
    ctx.gpr[19] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 16u));
      if (branch_taken) {
          goto L_088EE6BC;
      }
      goto L_088EE69C;
    }
L_088EE69C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(3292)));
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(6288)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088EE6BC;
      }
      goto L_088EE6B4;
    }
L_088EE6B4:
    ctx.gpr[20] = (ctx.gpr[4] << 16u);
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 16u));
    goto L_088EE6BC;
L_088EE6BC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EE678;
      }
      goto L_088EE6CC;
    }
L_088EE6CC:
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088EE6DCu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 10u, 0x08910074u>(ctx, &aot_mem) && ctx.pc == 0x088EE6DCu) goto L_088EE6DC;
    return;
L_088EE6DC:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(672), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(676), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(416), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(420), ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(416)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(420)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), ctx.gpr[5]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(404), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088EE748u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 10u, 0x08910074u>(ctx, &aot_mem) && ctx.pc == 0x088EE748u) goto L_088EE748;
    return;
L_088EE748:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(388)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(704), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(708), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(428), ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(428)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), ctx.gpr[5]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(412), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(400)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(404)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (0u | 1u);
        goto L_088EE7D8;
    }
    goto L_088EE7D8;
L_088EE7D8:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088EE878;
      }
      goto L_088EE7E4;
    }
L_088EE7E4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EE878;
      }
      goto L_088EE7EC;
    }
L_088EE7EC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088EE828;
      }
      goto L_088EE7F4;
    }
L_088EE7F4:
    ctx.gpr[4] = (0u | 300u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088EE814u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 613u, 0x0892F140u>(ctx, &aot_mem) && ctx.pc == 0x088EE814u) goto L_088EE814;
    return;
L_088EE814:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2072), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088EE8B0;
      }
      goto L_088EE828;
    }
L_088EE828:
    ctx.gpr[31] = (0x088EE830u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2192)));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x088EE830u) goto L_088EE830;
    return;
L_088EE830:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088EE8B0;
      }
      goto L_088EE838;
    }
L_088EE838:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088EE844u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 649u, 0x08947420u>(ctx, &aot_mem) && ctx.pc == 0x088EE844u) goto L_088EE844;
    return;
L_088EE844:
    ctx.gpr[4] = (0u | 500u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088EE864u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 613u, 0x0892F140u>(ctx, &aot_mem) && ctx.pc == 0x088EE864u) goto L_088EE864;
    return;
L_088EE864:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2072), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088EE8B0;
      }
      goto L_088EE878;
    }
L_088EE878:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EE8B0;
      }
      goto L_088EE880;
    }
L_088EE880:
    ctx.gpr[4] = (0u | 300u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088EE8A0u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 613u, 0x0892F140u>(ctx, &aot_mem) && ctx.pc == 0x088EE8A0u) goto L_088EE8A0;
    return;
L_088EE8A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2072), ctx.gpr[4]);
    goto L_088EE8B0;
L_088EE8B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EE988;
      }
      goto L_088EE8B8;
    }
L_088EE8B8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088EE8C4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 213u, 0x0892D2E4u>(ctx, &aot_mem) && ctx.pc == 0x088EE8C4u) goto L_088EE8C4;
    return;
L_088EE8C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EE988;
      }
      goto L_088EE8CC;
    }
L_088EE8CC:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EE968;
      }
      goto L_088EE8D4;
    }
L_088EE8D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1364)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(23))))));
    ctx.gpr[5] = (0u | 100u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1364)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(22))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EE968;
      }
      goto L_088EE8F8;
    }
L_088EE8F8:
    ctx.gpr[31] = (0x088EE900u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x088EE900u) goto L_088EE900;
    return;
L_088EE900:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EE924;
      }
      goto L_088EE908;
    }
L_088EE908:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2244)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EE924;
      }
      goto L_088EE914;
    }
L_088EE914:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2244)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088EE950;
      }
      goto L_088EE924;
    }
L_088EE924:
    ctx.gpr[31] = (0x088EE92Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x088EE92Cu) goto L_088EE92C;
    return;
L_088EE92C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EE968;
      }
      goto L_088EE934;
    }
L_088EE934:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3156)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088EE968;
      }
      goto L_088EE950;
    }
L_088EE950:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088EE960u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 480u, 0x0891E8B4u>(ctx, &aot_mem) && ctx.pc == 0x088EE960u) goto L_088EE960;
    return;
L_088EE960:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EE988;
      }
      goto L_088EE968;
    }
L_088EE968:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088EE974u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 213u, 0x0892D2E4u>(ctx, &aot_mem) && ctx.pc == 0x088EE974u) goto L_088EE974;
    return;
L_088EE974:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EE988;
      }
      goto L_088EE97C;
    }
L_088EE97C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088EE988u);
    ctx.gpr[5] = (0u | 155u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem) && ctx.pc == 0x088EE988u) goto L_088EE988;
    return;
L_088EE988:
    ctx.gpr[31] = (0x088EE990u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x088EE990u) goto L_088EE990;
    return;
L_088EE990:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EE9BC;
      }
      goto L_088EE998;
    }
L_088EE998:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088EE9B0u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 442u, 0x08909A64u>(ctx, &aot_mem) && ctx.pc == 0x088EE9B0u) goto L_088EE9B0;
    return;
L_088EE9B0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088EE9BCu);
    ctx.gpr[5] = (0u | 800u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 326u, 0x089092DCu>(ctx, &aot_mem) && ctx.pc == 0x088EE9BCu) goto L_088EE9BC;
    return;
L_088EE9BC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(720)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(724)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(728)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(732)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(736)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(740)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(744)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(748)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(752));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EE9E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1200));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1128), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1132), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1136), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1140), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1144), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1148), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1152), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1156), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1160), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1164), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1168), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1172), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1176), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1180), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1184), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1188), ctx.gpr[31]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[7] = (0u | 45u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088EEA50;
      }
      goto L_088EEA40;
    }
L_088EEA40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 57u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088EEA78;
      }
      goto L_088EEA50;
    }
L_088EEA50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2116)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EEA6C;
      }
      goto L_088EEA5C;
    }
L_088EEA5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EEA70;
      }
      goto L_088EEA6C;
    }
L_088EEA6C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2116), ctx.gpr[19]);
    goto L_088EEA70;
L_088EEA70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EFB28;
      }
      goto L_088EEA78;
    }
L_088EEA78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 58u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088EEA9C;
      }
      goto L_088EEA88;
    }
L_088EEA88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1328)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1328)));
        goto L_088EEAA4;
    }
    goto L_088EEA94;
L_088EEA94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EEAF8;
      }
      goto L_088EEA9C;
    }
L_088EEA9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EFB28;
      }
      goto L_088EEAA4;
    }
L_088EEAA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 4u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EEAF8;
      }
      goto L_088EEAC0;
    }
L_088EEAC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1328)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088EEB3C;
      }
      goto L_088EEAD4;
    }
L_088EEAD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1328)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088EEB3C;
      }
      goto L_088EEAE8;
    }
L_088EEAE8:
    ctx.gpr[31] = (0x088EEAF0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x088EEAF0u) goto L_088EEAF0;
    return;
L_088EEAF0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EEB34;
      }
      goto L_088EEAF8;
    }
L_088EEAF8:
    ctx.gpr[30] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
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
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1108), ctx.gpr[4]);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (16704u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088EEB50;
      }
      goto L_088EEB2C;
    }
L_088EEB2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(86))))));
      if (branch_taken) {
          goto L_088EEB44;
      }
      goto L_088EEB34;
    }
L_088EEB34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EFB28;
      }
      goto L_088EEB3C;
    }
L_088EEB3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EFB28;
      }
      goto L_088EEB44;
    }
L_088EEB44:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-939));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088EF6D8;
      }
      goto L_088EEB50;
    }
L_088EEB50:
    ctx.gpr[31] = (0x088EEB58u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x088EEB58u) goto L_088EEB58;
    return;
L_088EEB58:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EF6D8;
      }
      goto L_088EEB60;
    }
L_088EEB60:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x088EEB6Cu);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1104), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x088EEB6Cu) goto L_088EEB6C;
    return;
L_088EEB6C:
    ctx.gpr[22] = (ctx.gpr[2] & 65535u);
    ctx.gpr[22] = (ctx.gpr[22] & 3u);
    ctx.gpr[4] = (0u | 42u);
    ctx.gpr[31] = (0x088EEB80u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1116), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x088EEB80u) goto L_088EEB80;
    return;
L_088EEB80:
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-939));
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(320));
    ctx.gpr[23] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
    ctx.fpr[28] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17530u << 16u);
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088EEC40;
      }
      goto L_088EEBA8;
    }
L_088EEBA8:
    ctx.gpr[4] = (17274u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (17658u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(208)));
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[16];
    ctx.gpr[4] = (17056u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_088EEC00;
    }
    goto L_088EEC00;
L_088EEC00:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1120), ctx.gpr[21]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[18] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (0u | 40000u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[18]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[21] = (ctx.gpr[4] & 65535u);
    ctx.gpr[31] = (0x088EEC28u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x088EEC28u) goto L_088EEC28;
    return;
L_088EEC28:
    ctx.gpr[5] = (ctx.gpr[21] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088EEC3Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 954u, 0x0898BB3Cu>(ctx, &aot_mem) && ctx.pc == 0x088EEC3Cu) goto L_088EEC3C;
    return;
L_088EEC3C:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1120)));
    goto L_088EEC40;
L_088EEC40:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(456)));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(320)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(324)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[31] = (0x088EEC74u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 618u, 0x08906DC4u>(ctx, &aot_mem) && ctx.pc == 0x088EEC74u) goto L_088EEC74;
    return;
L_088EEC74:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088EED48;
      }
      goto L_088EECC8;
    }
L_088EECC8:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[5] = (0u | 43u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1104), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1116), ctx.gpr[5]);
    ctx.gpr[4] = (16230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[31] = (0x088EED08u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem) && ctx.pc == 0x088EED08u) goto L_088EED08;
    return;
L_088EED08:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[21];
    ctx.gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_088EED18;
      }
      goto L_088EED10;
    }
L_088EED10:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088EED1C;
      }
      goto L_088EED18;
    }
L_088EED18:
    ctx.gpr[18] = (0u | 2u);
    goto L_088EED1C;
L_088EED1C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-1040)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EED40;
      }
      goto L_088EED28;
    }
L_088EED28:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (0u | 166u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x088EED40u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem) && ctx.pc == 0x088EED40u) goto L_088EED40;
    return;
L_088EED40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EF498;
      }
      goto L_088EED48;
    }
L_088EED48:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[21] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1108)));
      if (branch_taken) {
          goto L_088EF498;
      }
      goto L_088EED70;
    }
L_088EED70:
    ctx.gpr[4] = (16253u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 28836u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[28]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]) ^ 0x80000000u);
        goto L_088EED94;
    }
    goto L_088EED94;
L_088EED94:
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088EEEB4;
      }
      goto L_088EEDA4;
    }
L_088EEDA4:
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088EEDC0;
      }
      goto L_088EEDB4;
    }
L_088EEDB4:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1104), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088EEDC8;
      }
      goto L_088EEDC0;
    }
L_088EEDC0:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1104), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088EEDC8;
L_088EEDC8:
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (16217u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088EF498;
      }
      goto L_088EEE20;
    }
L_088EEE20:
    ctx.gpr[4] = (0u | 43u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1116), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (16230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
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
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[31] = (0x088EEE70u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem) && ctx.pc == 0x088EEE70u) goto L_088EEE70;
    return;
L_088EEE70:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_088EEE84;
      }
      goto L_088EEE7C;
    }
L_088EEE7C:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088EEE88;
      }
      goto L_088EEE84;
    }
L_088EEE84:
    ctx.gpr[18] = (0u | 2u);
    goto L_088EEE88;
L_088EEE88:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-1040)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EEEAC;
      }
      goto L_088EEE94;
    }
L_088EEE94:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (0u | 166u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x088EEEACu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem) && ctx.pc == 0x088EEEACu) goto L_088EEEAC;
    return;
L_088EEEAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EF498;
      }
      goto L_088EEEB4;
    }
L_088EEEB4:
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_088EEED8;
      }
      goto L_088EEED0;
    }
L_088EEED0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EEEE0;
      }
      goto L_088EEED8;
    }
L_088EEED8:
    { const bool branch_taken = ctx.gpr[22] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EF404;
      }
      goto L_088EEEE0;
    }
L_088EEEE0:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(86))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1104), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (48716u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[16]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
      if (branch_taken) {
          goto L_088EEFCC;
      }
      goto L_088EEF64;
    }
L_088EEF64:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.fpr[13] = ctx.fpr[12] - ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1124), ctx.gpr[17]);
      if (branch_taken) {
          goto L_088EF0EC;
      }
      goto L_088EEFCC;
    }
L_088EEFCC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088EF098;
      }
      goto L_088EEFE0;
    }
L_088EEFE0:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = ctx.fpr[14] - ctx.fpr[15];
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088EF090;
      }
      goto L_088EF058;
    }
L_088EF058:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = ctx.fpr[14] - ctx.fpr[15];
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[12];
    goto L_088EF090;
L_088EF090:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1124), ctx.gpr[17]);
      if (branch_taken) {
          goto L_088EF0EC;
      }
      goto L_088EF098;
    }
L_088EF098:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1124), ctx.gpr[17]);
    goto L_088EF0EC;
L_088EF0EC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1120), ctx.gpr[16]);
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    ctx.fpr[30] = ctx.fpr[14] / ctx.fpr[12];
    ctx.gpr[31] = (0x088EF11Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x088EF11Cu) goto L_088EF11C;
    return;
L_088EF11C:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[31] = (0x088EF128u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 482u, 0x08B625C8u>(ctx, &aot_mem) && ctx.pc == 0x088EF128u) goto L_088EF128;
    return;
L_088EF128:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23132)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23136)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x088EF13Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem) && ctx.pc == 0x088EF13Cu) goto L_088EF13C;
    return;
L_088EF13C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23124)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23128)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x088EF150u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 390u, 0x08B61EF4u>(ctx, &aot_mem) && ctx.pc == 0x088EF150u) goto L_088EF150;
    return;
L_088EF150:
    ctx.gpr[17] = (ctx.gpr[3] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088EF160u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem) && ctx.pc == 0x088EF160u) goto L_088EF160;
    return;
L_088EF160:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x088EF174u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem) && ctx.pc == 0x088EF174u) goto L_088EF174;
    return;
L_088EF174:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x088EF180u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem) && ctx.pc == 0x088EF180u) goto L_088EF180;
    return;
L_088EF180:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1120)));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1124)));
      if (branch_taken) {
          goto L_088EF1E8;
      }
      goto L_088EF1DC;
    }
L_088EF1DC:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088EF204;
      }
      goto L_088EF1E8;
    }
L_088EF1E8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (16320u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088EF210;
      }
      goto L_088EF204;
    }
L_088EF204:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088EF210;
L_088EF210:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
        goto L_088EF224;
    }
    goto L_088EF224;
L_088EF224:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088EF234u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem) && ctx.pc == 0x088EF234u) goto L_088EF234;
    return;
L_088EF234:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (17076u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[26] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
        goto L_088EF254;
    }
    goto L_088EF254;
L_088EF254:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[31] = (0x088EF268u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 600u, 0x08A66CD8u>(ctx, &aot_mem) && ctx.pc == 0x088EF268u) goto L_088EF268;
    return;
L_088EF268:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EF27C;
      }
      goto L_088EF278;
    }
L_088EF278:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-4));
    goto L_088EF27C;
L_088EF27C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 4u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EF3E4;
      }
      goto L_088EF298;
    }
L_088EF298:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EF3E4;
      }
      goto L_088EF2A4;
    }
L_088EF2A4:
    ctx.gpr[31] = (0x088EF2ACu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 385u, 0x08831B44u>(ctx, &aot_mem) && ctx.pc == 0x088EF2ACu) goto L_088EF2AC;
    return;
L_088EF2AC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EF3E0;
      }
      goto L_088EF2B8;
    }
L_088EF2B8:
    ctx.gpr[31] = (0x088EF2C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x088EF2C0u) goto L_088EF2C0;
    return;
L_088EF2C0:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[5] = (ctx.gpr[4] & 1u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(320));
    ctx.gpr[6] = (16128u << 16u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
      if (branch_taken) {
          goto L_088EF340;
      }
      goto L_088EF2D8;
    }
L_088EF2D8:
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x088EF338u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem) && ctx.pc == 0x088EF338u) goto L_088EF338;
    return;
L_088EF338:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EF3A0;
      }
      goto L_088EF340;
    }
L_088EF340:
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(416));
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(432));
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x088EF3A0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem) && ctx.pc == 0x088EF3A0u) goto L_088EF3A0;
    return;
L_088EF3A0:
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x088EF3E0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 611u, 0x08A66E08u>(ctx, &aot_mem) && ctx.pc == 0x088EF3E0u) goto L_088EF3E0;
    return;
L_088EF3E0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1108)));
    goto L_088EF3E4;
L_088EF3E4:
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
          goto L_088EF498;
      }
      goto L_088EF404;
    }
L_088EF404:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[5] = (0u | 43u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1104), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1116), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(464));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (16230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(448));
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
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(472), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[31] = (0x088EF45Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem) && ctx.pc == 0x088EF45Cu) goto L_088EF45C;
    return;
L_088EF45C:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_088EF470;
      }
      goto L_088EF468;
    }
L_088EF468:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088EF474;
      }
      goto L_088EF470;
    }
L_088EF470:
    ctx.gpr[18] = (0u | 2u);
    goto L_088EF474;
L_088EF474:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-1040)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EF498;
      }
      goto L_088EF480;
    }
L_088EF480:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (0u | 166u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x088EF498u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem) && ctx.pc == 0x088EF498u) goto L_088EF498;
    return;
L_088EF498:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 4u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_088EF50C;
      }
      goto L_088EF4B4;
    }
L_088EF4B4:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EF50C;
      }
      goto L_088EF4C4;
    }
L_088EF4C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[6] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088EF4F4;
      }
      goto L_088EF4D4;
    }
L_088EF4D4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(900)));
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088EF4ECu);
    ctx.gpr[8] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 24u, 0x0898019Cu>(ctx, &aot_mem) && ctx.pc == 0x088EF4ECu) goto L_088EF4EC;
    return;
L_088EF4EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EF50C;
      }
      goto L_088EF4F4;
    }
L_088EF4F4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(900)));
    ctx.gpr[4] = (0u | 9u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088EF50Cu);
    ctx.gpr[8] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 24u, 0x0898019Cu>(ctx, &aot_mem) && ctx.pc == 0x088EF50Cu) goto L_088EF50C;
    return;
L_088EF50C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(1104)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(1104)));
        goto L_088EF554;
    }
    goto L_088EF51C;
L_088EF51C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(1104)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EF5BC;
      }
      goto L_088EF52C;
    }
L_088EF52C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1116)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[7] = (0u | 6u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088EF54Cu);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 692u, 0x088EB674u>(ctx, &aot_mem) && ctx.pc == 0x088EF54Cu) goto L_088EF54C;
    return;
L_088EF54C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EF5DC;
      }
      goto L_088EF554;
    }
L_088EF554:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1116)));
      if (branch_taken) {
          goto L_088EF594;
      }
      goto L_088EF560;
    }
L_088EF560:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(1104)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088EF5BC;
      }
      goto L_088EF570;
    }
L_088EF570:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[7] = (0u | 3u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088EF58Cu);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 692u, 0x088EB674u>(ctx, &aot_mem) && ctx.pc == 0x088EF58Cu) goto L_088EF58C;
    return;
L_088EF58C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EF5DC;
      }
      goto L_088EF594;
    }
L_088EF594:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[7] = (0u | 2u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088EF5B4u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 692u, 0x088EB674u>(ctx, &aot_mem) && ctx.pc == 0x088EF5B4u) goto L_088EF5B4;
    return;
L_088EF5B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EF5DC;
      }
      goto L_088EF5BC;
    }
L_088EF5BC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1116)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088EF5DCu);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 692u, 0x088EB674u>(ctx, &aot_mem) && ctx.pc == 0x088EF5DCu) goto L_088EF5DC;
    return;
L_088EF5DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 57u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(456)));
        goto L_088EF600;
    }
    goto L_088EF5EC;
L_088EF5EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 58u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088EF620;
      }
      goto L_088EF5FC;
    }
L_088EF5FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(456)));
    goto L_088EF600;
L_088EF600:
    ctx.gpr[5] = (8192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EF620;
      }
      goto L_088EF610;
    }
L_088EF610:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2116)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EF620;
      }
      goto L_088EF61C;
    }
L_088EF61C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2116), ctx.gpr[19]);
    goto L_088EF620;
L_088EF620:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(1104)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_088EF640;
      }
      goto L_088EF630;
    }
L_088EF630:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(464)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(464), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088EF64C;
      }
      goto L_088EF640;
    }
L_088EF640:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(464)));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(464), ctx.gpr[4]);
    goto L_088EF64C;
L_088EF64C:
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (17583u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[26] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
        goto L_088EF68C;
    }
    goto L_088EF68C;
L_088EF68C:
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x088EF6C4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 600u, 0x08A66CD8u>(ctx, &aot_mem) && ctx.pc == 0x088EF6C4u) goto L_088EF6C4;
    return;
L_088EF6C4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088EF6D0u);
    ctx.gpr[5] = (0u | 138u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem) && ctx.pc == 0x088EF6D0u) goto L_088EF6D0;
    return;
L_088EF6D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EFAE4;
      }
      goto L_088EF6D8;
    }
L_088EF6D8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(296)));
    ctx.gpr[4] = (48972u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16576u << 16u);
      if (branch_taken) {
          goto L_088EF714;
      }
      goto L_088EF6F8;
    }
L_088EF6F8:
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088EF74C;
      }
      goto L_088EF710;
    }
L_088EF710:
    ctx.gpr[4] = (16576u << 16u);
    goto L_088EF714;
L_088EF714:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088EFAE4;
      }
      goto L_088EF728;
    }
L_088EF728:
    ctx.gpr[31] = (0x088EF730u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x088EF730u) goto L_088EF730;
    return;
L_088EF730:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (16672u << 16u);
      if (branch_taken) {
          goto L_088EF74C;
      }
      goto L_088EF738;
    }
L_088EF738:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088EFAE4;
      }
      goto L_088EF74C;
    }
L_088EF74C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(456)));
    ctx.gpr[23] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(320)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(324)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(528), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(532), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(528));
    ctx.gpr[31] = (0x088EF780u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 618u, 0x08906DC4u>(ctx, &aot_mem) && ctx.pc == 0x088EF780u) goto L_088EF780;
    return;
L_088EF780:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088EF78Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x088EF78Cu) goto L_088EF78C;
    return;
L_088EF78C:
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-939));
    ctx.gpr[30] = (ctx.gpr[19] + static_cast<std::uint32_t>(320));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(320));
    ctx.gpr[4] = (ctx.gpr[16] & 255u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(544));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1112), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(560));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(496));
      if (branch_taken) {
          goto L_088EF7F4;
      }
      goto L_088EF7BC;
    }
L_088EF7BC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[20];
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088EF7F8;
      }
      goto L_088EF7C8;
    }
L_088EF7C8:
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (17174u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 42u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088EF7ECu);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 692u, 0x088EB674u>(ctx, &aot_mem) && ctx.pc == 0x088EF7ECu) goto L_088EF7EC;
    return;
L_088EF7EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088EF818;
      }
      goto L_088EF7F4;
    }
L_088EF7F4:
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    goto L_088EF7F8;
L_088EF7F8:
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 42u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088EF818u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 692u, 0x088EB674u>(ctx, &aot_mem) && ctx.pc == 0x088EF818u) goto L_088EF818;
    return;
L_088EF818:
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 1000u);
    ctx.gpr[31] = (0x088EF82Cu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 14u, 0x0891C0E8u>(ctx, &aot_mem) && ctx.pc == 0x088EF82Cu) goto L_088EF82C;
    return;
L_088EF82C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 45u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2116)));
        goto L_088EF860;
    }
    goto L_088EF83C;
L_088EF83C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 57u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2116)));
        goto L_088EF860;
    }
    goto L_088EF84C;
L_088EF84C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 58u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088EF8AC;
      }
      goto L_088EF85C;
    }
L_088EF85C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2116)));
    goto L_088EF860;
L_088EF860:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EF8AC;
      }
      goto L_088EF868;
    }
L_088EF868:
    ctx.gpr[31] = (0x088EF870u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x088EF870u) goto L_088EF870;
    return;
L_088EF870:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EF8A8;
      }
      goto L_088EF878;
    }
L_088EF878:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EF8A8;
      }
      goto L_088EF888;
    }
L_088EF888:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_088EF8A8;
      }
      goto L_088EF894;
    }
L_088EF894:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(296)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088EF8AC;
      }
      goto L_088EF8A8;
    }
L_088EF8A8:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2116), ctx.gpr[19]);
    goto L_088EF8AC;
L_088EF8AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(464)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(464), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1112)));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_088EF908;
      }
      goto L_088EF8D0;
    }
L_088EF8D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EF908;
      }
      goto L_088EF8E0;
    }
L_088EF8E0:
    ctx.gpr[4] = (16192u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(592));
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
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_088EF908;
L_088EF908:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(552), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088EF918u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem) && ctx.pc == 0x088EF918u) goto L_088EF918;
    return;
L_088EF918:
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(568), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088EF988;
      }
      goto L_088EF968;
    }
L_088EF968:
    ctx.fpr[13] = ctx.fpr[22] / ctx.fpr[12];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088EF9A4;
      }
      goto L_088EF988;
    }
L_088EF988:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(608), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(612), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(616), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(608));
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
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088EF9A4;
L_088EF9A4:
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(480));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (16243u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 13107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(576));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (16320u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (15820u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_088EFA24;
    }
    goto L_088EFA24;
L_088EFA24:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
        goto L_088EFA38;
    }
    goto L_088EFA38;
L_088EFA38:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(208)));
    ctx.gpr[5] = (17076u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[22]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
        goto L_088EFA58;
    }
    goto L_088EFA58;
L_088EFA58:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x088EFA74u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 243u, 0x088E2880u>(ctx, &aot_mem) && ctx.pc == 0x088EFA74u) goto L_088EFA74;
    return;
L_088EFA74:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(496)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(500)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(504)));
    ctx.gpr[31] = (0x088EFA88u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 600u, 0x08A66CD8u>(ctx, &aot_mem) && ctx.pc == 0x088EFA88u) goto L_088EFA88;
    return;
L_088EFA88:
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(496));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
        goto L_088EFAAC;
    }
    goto L_088EFAAC;
L_088EFAAC:
    ctx.gpr[4] = (49776u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x088EFAC4u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 243u, 0x088E2880u>(ctx, &aot_mem) && ctx.pc == 0x088EFAC4u) goto L_088EFAC4;
    return;
L_088EFAC4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(496)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(500)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(504)));
    ctx.gpr[31] = (0x088EFAD8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 600u, 0x08A66CD8u>(ctx, &aot_mem) && ctx.pc == 0x088EFAD8u) goto L_088EFAD8;
    return;
L_088EFAD8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088EFAE4u);
    ctx.gpr[5] = (0u | 138u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem) && ctx.pc == 0x088EFAE4u) goto L_088EFAE4;
    return;
L_088EFAE4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EFB28;
      }
      goto L_088EFAF0;
    }
L_088EFAF0:
    ctx.gpr[31] = (0x088EFAF8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 319u, 0x0890D46Cu>(ctx, &aot_mem) && ctx.pc == 0x088EFAF8u) goto L_088EFAF8;
    return;
L_088EFAF8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EFB28;
      }
      goto L_088EFB00;
    }
L_088EFB00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EFB28;
      }
      goto L_088EFB0C;
    }
L_088EFB0C:
    ctx.gpr[31] = (0x088EFB14u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(900)));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x088EFB14u) goto L_088EFB14;
    return;
L_088EFB14:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EFB28;
      }
      goto L_088EFB1C;
    }
L_088EFB1C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(900)));
    ctx.gpr[31] = (0x088EFB28u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 119u, 0x089B4624u>(ctx, &aot_mem) && ctx.pc == 0x088EFB28u) goto L_088EFB28;
    return;
L_088EFB28:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1128)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1132)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1136)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1140)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1144)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1148)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1156)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1160)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1164)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1168)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1172)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1176)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1180)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1184)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1188)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1200));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088EFB70:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[31]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088EFBE0u);
    ctx.gpr[6] = (0u | 189u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x088EFBE0u) goto L_088EFBE0;
    return;
L_088EFBE0:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088EFBF4u);
    ctx.gpr[6] = (0u | 190u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x088EFBF4u) goto L_088EFBF4;
    return;
L_088EFBF4:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088EFC04u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 307u, 0x08A59578u>(ctx, &aot_mem) && ctx.pc == 0x088EFC04u) goto L_088EFC04;
    return;
L_088EFC04:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088EFC14u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x088EFC14u) goto L_088EFC14;
    return;
L_088EFC14:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088EFC20u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x088EFC20u) goto L_088EFC20;
    return;
L_088EFC20:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088EFC54;
      }
      goto L_088EFC2C;
    }
L_088EFC2C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088EFC3Cu);
    ctx.gpr[6] = (0u | 192u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x088EFC3Cu) goto L_088EFC3C;
    return;
L_088EFC3C:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088EFC50u);
    ctx.gpr[6] = (0u | 191u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x088EFC50u) goto L_088EFC50;
    return;
L_088EFC50:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    goto L_088EFC54;
L_088EFC54:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088EFC60u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 303u, 0x08A59554u>(ctx, &aot_mem) && ctx.pc == 0x088EFC60u) goto L_088EFC60;
    return;
L_088EFC60:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088EFC70u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x088EFC70u) goto L_088EFC70;
    return;
L_088EFC70:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088EFC84u);
    ctx.gpr[6] = (0u | 201u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x088EFC84u) goto L_088EFC84;
    return;
L_088EFC84:
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[30] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EFCA4;
      }
      goto L_088EFC90;
    }
L_088EFC90:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088EFCA0u);
    ctx.gpr[6] = (0u | 202u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x088EFCA0u) goto L_088EFCA0;
    return;
L_088EFCA0:
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    goto L_088EFCA4;
L_088EFCA4:
    { const bool branch_taken = ctx.gpr[30] != 0u;
    // nop
      if (branch_taken) {
          goto L_088EFCC0;
      }
      goto L_088EFCAC;
    }
L_088EFCAC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088EFCBCu);
    ctx.gpr[6] = (0u | 203u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x088EFCBCu) goto L_088EFCBC;
    return;
L_088EFCBC:
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    goto L_088EFCC0;
L_088EFCC0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(112));
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
    ctx.gpr[4] = (15800u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 20972u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088EFD64;
      }
      goto L_088EFD0C;
    }
L_088EFD0C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 47u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088EFD24u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 212u, 0x08B04D14u>(ctx, &aot_mem) && ctx.pc == 0x088EFD24u) goto L_088EFD24;
    return;
L_088EFD24:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088EFD30u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x088EFD30u) goto L_088EFD30;
    return;
L_088EFD30:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EFD5C;
      }
      goto L_088EFD38;
    }
L_088EFD38:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088EFD44u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x088EFD44u) goto L_088EFD44;
    return;
L_088EFD44:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 47u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088EFD5Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 212u, 0x08B04D14u>(ctx, &aot_mem) && ctx.pc == 0x088EFD5Cu) goto L_088EFD5C;
    return;
L_088EFD5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 155u, 0x088F0C30u>(ctx, &aot_mem); return;
      }
      goto L_088EFD64;
    }
L_088EFD64:
    if (ctx.gpr[30] != 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
        goto L_088EFE20;
    }
    goto L_088EFD6C;
L_088EFD6C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (15523u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
        goto L_088EFE20;
    }
    goto L_088EFD8C;
L_088EFD8C:
    ctx.gpr[4] = (49024u << 16u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088EFDC8;
      }
      goto L_088EFD98;
    }
L_088EFD98:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 18u, 0x088F00F0u>(ctx, &aot_mem); return;
      }
      goto L_088EFDB0;
    }
L_088EFDB0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 18u, 0x088F00F0u>(ctx, &aot_mem); return;
      }
      goto L_088EFDC8;
    }
L_088EFDC8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(376));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088EFDECu);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088EFDECu) goto L_088EFDEC;
    return;
L_088EFDEC:
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088EFDF8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 307u, 0x08A59578u>(ctx, &aot_mem) && ctx.pc == 0x088EFDF8u) goto L_088EFDF8;
    return;
L_088EFDF8:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x088EFE14u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem) && ctx.pc == 0x088EFE14u) goto L_088EFE14;
    return;
L_088EFE14:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 18u, 0x088F00F0u>(ctx, &aot_mem); return;
      }
      goto L_088EFE20;
    }
L_088EFE20:
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 12u, 0x088F009Cu>(ctx, &aot_mem); return;
      }
      goto L_088EFE30;
    }
L_088EFE30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(352)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (16480u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088EFED4;
      }
      goto L_088EFE54;
    }
L_088EFE54:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1493)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_088EFE7C;
      }
      goto L_088EFE60;
    }
L_088EFE60:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (48896u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088EFED4;
      }
      goto L_088EFE7C;
    }
L_088EFE7C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 47u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088EFE94u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 212u, 0x08B04D14u>(ctx, &aot_mem) && ctx.pc == 0x088EFE94u) goto L_088EFE94;
    return;
L_088EFE94:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088EFEA0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x088EFEA0u) goto L_088EFEA0;
    return;
L_088EFEA0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088EFECC;
      }
      goto L_088EFEA8;
    }
L_088EFEA8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088EFEB4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x088EFEB4u) goto L_088EFEB4;
    return;
L_088EFEB4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 47u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088EFECCu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 212u, 0x08B04D14u>(ctx, &aot_mem) && ctx.pc == 0x088EFECCu) goto L_088EFECC;
    return;
L_088EFECC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 155u, 0x088F0C30u>(ctx, &aot_mem); return;
      }
      goto L_088EFED4;
    }
L_088EFED4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    ctx.gpr[4] = (49024u << 16u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088EFFD4;
      }
      goto L_088EFEEC;
    }
L_088EFEEC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[19]);
    ctx.gpr[31] = (0x088EFEFCu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem) && ctx.pc == 0x088EFEFCu) goto L_088EFEFC;
    return;
L_088EFEFC:
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(352)));
    ctx.gpr[31] = (0x088EFF10u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem) && ctx.pc == 0x088EFF10u) goto L_088EFF10;
    return;
L_088EFF10:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23124)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23128)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x088EFF24u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem) && ctx.pc == 0x088EFF24u) goto L_088EFF24;
    return;
L_088EFF24:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x088EFF38u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem) && ctx.pc == 0x088EFF38u) goto L_088EFF38;
    return;
L_088EFF38:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
      if (branch_taken) {
          goto L_088EFFD4;
      }
      goto L_088EFF44;
    }
L_088EFF44:
    if (ctx.gpr[19] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[30]);
        goto L_088EFF80;
    }
    goto L_088EFF4C;
L_088EFF4C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 18u, 0x088F00F0u>(ctx, &aot_mem); return;
      }
      goto L_088EFF64;
    }
L_088EFF64:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 18u, 0x088F00F0u>(ctx, &aot_mem); return;
      }
      goto L_088EFF7C;
    }
L_088EFF7C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[30]);
    goto L_088EFF80;
L_088EFF80:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(376));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088EFFA0u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088EFFA0u) goto L_088EFFA0;
    return;
L_088EFFA0:
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088EFFACu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 303u, 0x08A59554u>(ctx, &aot_mem) && ctx.pc == 0x088EFFACu) goto L_088EFFAC;
    return;
L_088EFFAC:
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x088EFFC8u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem) && ctx.pc == 0x088EFFC8u) goto L_088EFFC8;
    return;
L_088EFFC8:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 18u, 0x088F00F0u>(ctx, &aot_mem); return;
      }
      goto L_088EFFD4;
    }
L_088EFFD4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x088EFFE0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x088EFFE0u) goto L_088EFFE0;
    return;
L_088EFFE0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 6u, 0x088F0048u>(ctx, &aot_mem); return;
      }
      goto L_088EFFE8;
    }
L_088EFFE8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x088EFFFCu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem) && ctx.pc == 0x088EFFFCu) goto L_088EFFFC;
    return;
L_088EFFFC:
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    ctx.pc = 0x088F0000u; return;
}

void recomp_unit_0058(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0058_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_58(Runtime &runtime) {
    runtime.register_generated_unit(58u, 0x088EC000u, 16384u, &recomp_unit_0058, &recomp_unit_0058_entry);
    runtime.register_function(0x088EC000u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC008u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC018u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC024u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC03Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC044u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC04Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC058u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC070u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC078u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC080u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC08Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC0A4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC0ACu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC0B4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC0C0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC0D8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC0E0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC0E8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC0FCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC108u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC110u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC124u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC130u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC138u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC140u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC148u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC150u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC158u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC160u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC184u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC18Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC19Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC1B0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC1BCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC1D0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC1DCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC1F0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC1FCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC210u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC21Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC230u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC244u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC24Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC260u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC26Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC274u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC27Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC284u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC28Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC298u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC2A0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC2A8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC2B0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC2BCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC2C8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC2CCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC2D4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC2DCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC2E4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC2F0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC2F8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC314u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC324u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC32Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC334u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC33Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC344u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC34Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC354u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC360u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC368u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC374u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC380u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC384u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC38Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC394u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC39Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC3A8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC3B0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC3B8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC3C0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC3C8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC3CCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC3D4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC3E4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC3ECu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC3F0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC3F8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC404u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC410u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC414u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC41Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC424u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC42Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC438u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC440u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC448u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC450u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC458u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC45Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC464u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC474u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC47Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC480u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC488u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC490u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC49Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC4C4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC50Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC520u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC52Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC530u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC540u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC544u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC54Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC558u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC56Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC578u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC580u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC588u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC590u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC598u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC5A4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC5ACu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC5B4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC5BCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC5C8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC5D4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC5D8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC5E0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC600u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC608u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC610u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC618u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC620u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC628u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC630u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC65Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC670u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC680u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC690u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC6A0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC6A8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC6B0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC6DCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC6ECu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC6F8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC704u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC720u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC72Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC758u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC778u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC788u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC790u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC798u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC810u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC838u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC840u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC848u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC870u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC898u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC8A0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC8B0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC8E4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC8F4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC8FCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC90Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC914u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC928u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC948u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC95Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC96Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC974u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC97Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC984u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC98Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC9A4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC9B0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC9C8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC9D0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC9D8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC9E0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC9E8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC9F0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EC9F8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECA08u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECA0Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECA24u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECA2Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECA34u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECA3Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECA44u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECA4Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECA5Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECAA8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECAB4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECABCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECAC8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECAD0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECAE8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECAF0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECAFCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECB08u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECB10u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECB18u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECB24u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECB40u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECB50u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECB60u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECB70u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECB88u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECB98u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECBA0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECBACu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECBBCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECBCCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECBD8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECBE8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECBF8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECC04u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECC14u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECC1Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECC2Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECC34u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECC3Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECC48u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECC50u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECC68u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECC80u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECC88u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECC90u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECC9Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECCA8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECCB0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECCB8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECCC8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECCD0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECCDCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECCECu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECCFCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECD10u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECD24u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECD38u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECD4Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECD68u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECD70u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECD80u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECD88u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECD94u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECDACu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECDCCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECE14u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECE1Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECE28u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECE34u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECE48u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECE50u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECE64u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECE80u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECE90u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECE98u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECECCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECED4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECEE0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECEE8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECEF8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECF00u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECF10u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECF20u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECF28u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECF40u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECF58u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECF60u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECF68u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECF70u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECFB4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECFB8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECFC4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECFCCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECFD4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECFDCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECFE4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECFF0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ECFFCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED014u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED020u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED02Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED034u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED040u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED048u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED050u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED058u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED060u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED068u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED078u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED080u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED08Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED094u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED0A0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED0ACu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED0B4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED0BCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED0CCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED0D4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED0DCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED0E0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED0E4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED12Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED174u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED188u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED198u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED1A0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED1A8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED1B8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED1D0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED1E4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED1F4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED1FCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED214u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED21Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED22Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED234u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED23Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED258u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED26Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED27Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED284u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED28Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED29Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED2ACu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED2B4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED2C8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED2D8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED300u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED308u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED310u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED328u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED330u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED348u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED34Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED35Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED364u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED374u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED380u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED394u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED3A4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED3B0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED3B8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED3D0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED3D8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED3E8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED3F0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED3F8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED414u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED428u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED43Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED450u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED460u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED470u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED488u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED49Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED4A4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED4ACu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED4C8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED4D8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED4E0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED4F0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED4F4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED4FCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED51Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED534u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED550u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED558u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED560u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED570u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED58Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED5A0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED5A8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED5B8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED5BCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED5C8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED5D0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED5D8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED5E8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED5F8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED600u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED608u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED628u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED630u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED63Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED64Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED654u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED678u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED680u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED68Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED6ACu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED6B8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED6C8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED6D0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED6D8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED6F8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED780u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED788u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED78Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED7B8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED7C0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED7D8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED7E0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED7E8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED7F0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED7F8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED820u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED868u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED870u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED878u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED87Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED884u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED8ECu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED8F4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED8FCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED900u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED910u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED918u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED920u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED93Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED950u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED958u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED960u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED968u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED970u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED978u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED980u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED988u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED998u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED9A8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED9B8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED9C0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED9D0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED9E8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED9F0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088ED9FCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDA04u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDA14u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDA24u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDA30u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDA38u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDA40u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDA48u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDA50u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDA58u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDA64u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDA6Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDA74u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDA80u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDA90u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDAA0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDAA8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDAB0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDABCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDACCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDAD4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDAE4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDAF4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDB08u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDB18u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDB28u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDB30u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDB38u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDB5Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDB64u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDB74u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDB88u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDB98u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDBA8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDBB8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDBC8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDBE8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDBF0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDBF8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDC00u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDC20u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDC28u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDC30u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDC38u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDC40u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDC44u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDC50u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDC60u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDC64u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDC70u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDC7Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDC80u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDC8Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDC98u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDCA0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDCC0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDCE0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDD08u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDD50u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDD58u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDD60u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDD64u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDD6Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDDD4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDDDCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDDE4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDDE8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDDF8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDE00u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDE08u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDE24u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDE38u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDE40u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDE48u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDE70u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDEB8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDEC8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDED8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDEE0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDEE4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDEECu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDEF4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDF5Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDF6Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDF7Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDF84u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDF88u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDF90u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDFA0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDFB0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDFB8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDFBCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDFC4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDFCCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDFE0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EDFFCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE024u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE040u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE048u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE058u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE068u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE074u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE080u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE090u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE094u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE0A4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE0ACu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE0BCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE0CCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE0D4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE0DCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE0E4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE0F4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE118u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE120u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE128u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE13Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE154u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE15Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE178u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE194u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE19Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE1A4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE1CCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE1E0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE1F4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE21Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE230u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE244u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE258u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE260u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE268u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE278u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE290u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE2B4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE2C4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE2D4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE2E4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE308u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE318u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE324u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE32Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE338u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE344u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE34Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE360u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE3A0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE3ACu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE3B4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE3C4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE3D4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE3E4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE3ECu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE3F4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE3FCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE404u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE40Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE418u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE428u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE494u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE520u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE54Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE56Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE580u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE5A0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE5B0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE5B8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE5C8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE5D4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE5DCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE5E4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE5ECu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE5FCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE60Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE610u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE618u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE628u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE644u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE64Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE65Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE678u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE690u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE69Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE6B4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE6BCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE6CCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE6DCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE748u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE7D8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE7E4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE7ECu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE7F4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE814u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE828u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE830u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE838u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE844u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE864u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE878u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE880u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE8A0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE8B0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE8B8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE8C4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE8CCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE8D4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE8F8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE900u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE908u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE914u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE924u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE92Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE934u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE950u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE960u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE968u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE974u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE97Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE988u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE990u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE998u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE9B0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE9BCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EE9E4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEA40u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEA50u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEA5Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEA6Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEA70u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEA78u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEA88u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEA94u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEA9Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEAA4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEAC0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEAD4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEAE8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEAF0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEAF8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEB2Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEB34u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEB3Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEB44u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEB50u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEB58u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEB60u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEB6Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEB80u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEBA8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEC00u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEC28u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEC3Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEC40u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEC74u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EECC8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EED08u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EED10u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EED18u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EED1Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EED28u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EED40u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EED48u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EED70u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EED94u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEDA4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEDB4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEDC0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEDC8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEE20u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEE70u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEE7Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEE84u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEE88u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEE94u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEEACu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEEB4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEED0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEED8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEEE0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEF64u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEFCCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EEFE0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF058u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF090u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF098u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF0ECu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF11Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF128u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF13Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF150u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF160u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF174u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF180u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF1DCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF1E8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF204u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF210u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF224u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF234u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF254u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF268u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF278u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF27Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF298u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF2A4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF2ACu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF2B8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF2C0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF2D8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF338u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF340u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF3A0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF3E0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF3E4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF404u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF45Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF468u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF470u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF474u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF480u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF498u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF4B4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF4C4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF4D4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF4ECu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF4F4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF50Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF51Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF52Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF54Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF554u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF560u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF570u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF58Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF594u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF5B4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF5BCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF5DCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF5ECu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF5FCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF600u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF610u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF61Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF620u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF630u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF640u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF64Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF68Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF6C4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF6D0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF6D8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF6F8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF710u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF714u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF728u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF730u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF738u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF74Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF780u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF78Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF7BCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF7C8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF7ECu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF7F4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF7F8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF818u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF82Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF83Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF84Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF85Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF860u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF868u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF870u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF878u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF888u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF894u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF8A8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF8ACu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF8D0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF8E0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF908u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF918u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF968u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF988u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EF9A4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFA24u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFA38u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFA58u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFA74u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFA88u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFAACu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFAC4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFAD8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFAE4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFAF0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFAF8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFB00u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFB0Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFB14u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFB1Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFB28u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFB70u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFBE0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFBF4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFC04u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFC14u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFC20u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFC2Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFC3Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFC50u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFC54u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFC60u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFC70u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFC84u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFC90u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFCA0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFCA4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFCACu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFCBCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFCC0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFD0Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFD24u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFD30u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFD38u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFD44u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFD5Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFD64u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFD6Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFD8Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFD98u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFDB0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFDC8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFDECu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFDF8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFE14u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFE20u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFE30u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFE54u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFE60u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFE7Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFE94u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFEA0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFEA8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFEB4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFECCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFED4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFEECu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFEFCu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFF10u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFF24u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFF38u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFF44u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFF4Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFF64u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFF7Cu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFF80u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFFA0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFFACu, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFFC8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFFD4u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFFE0u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFFE8u, &recomp_unit_0058, "recomp_unit_0058");
    runtime.register_function(0x088EFFFCu, &recomp_unit_0058, "recomp_unit_0058");
}
} // namespace psprecomp
