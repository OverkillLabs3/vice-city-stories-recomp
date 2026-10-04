#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0067[3758] = {
    1, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 5, 0, 6, 0, 7, 0, 8, 9, 0, 0, 10, 0, 0,
    0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 13, 0, 0, 14, 0, 0, 15, 0, 0, 0, 0, 0, 0, 16, 0, 0, 17, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 22,
    0, 23, 0, 24, 0, 25, 26, 0, 0, 27, 0, 28, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 31, 0,
    32, 0, 0, 33, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 38,
    0, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 41, 0, 42, 0, 43, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0,
    0, 0, 0, 0, 46, 0, 0, 0, 0, 47, 0, 48, 0, 0, 49, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 51, 0, 52, 0, 53,
    0, 0, 54, 0, 0, 55, 0, 56, 0, 0, 57, 0, 58, 0, 59, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 61, 0, 62, 0, 0,
    63, 0, 64, 0, 65, 0, 0, 66, 0, 67, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 70, 0, 71, 0, 0, 72, 0, 73,
    0, 74, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 76, 0, 77, 0, 78, 0, 0, 79, 0, 80, 0, 0, 0, 0, 81, 0, 0, 82,
    0, 83, 84, 0, 85, 0, 0, 86, 0, 0, 0, 0, 87, 0, 88, 0, 0, 0, 0, 0, 0, 89, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 0, 0,
    0, 95, 0, 0, 0, 96, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 99, 0, 0, 100, 0, 101, 0, 102, 0, 103, 0, 0, 104, 0, 105, 0,
    106, 0, 0, 107, 0, 108, 0, 109, 0, 0, 110, 0, 0, 111, 0, 112, 0, 113, 0, 114, 0, 0, 115, 0, 116, 117, 0, 118, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 119, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 122, 0, 123, 124, 0, 0, 0, 0, 125,
    0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 128, 0, 129, 0, 0, 130, 0, 0, 0, 131, 132, 0, 133, 0, 0, 134, 0,
    0, 135, 0, 136, 0, 0, 0, 137, 0, 0, 0, 138, 0, 0, 0, 0, 139, 140, 141, 0, 142, 0, 0, 143, 0, 0, 144, 0, 145, 0, 0, 146,
    0, 0, 147, 0, 148, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 150, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0,
    153, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 158, 0,
    159, 0, 160, 0, 161, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 165, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 167, 0, 168,
    0, 0, 0, 0, 0, 169, 0, 170, 0, 171, 0, 0, 0, 0, 0, 0, 0, 172, 0, 173, 0, 174, 0, 0, 175, 0, 176, 0, 177, 0, 178, 179,
    0, 180, 0, 181, 182, 0, 0, 183, 0, 184, 0, 185, 0, 0, 186, 0, 187, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 189, 0, 190,
    0, 191, 0, 0, 192, 0, 193, 0, 0, 0, 0, 194, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 0, 197, 0, 198, 0, 0, 0, 0, 0, 199,
    0, 200, 0, 201, 0, 0, 0, 202, 0, 203, 0, 0, 0, 204, 0, 0, 205, 206, 0, 207, 208, 0, 0, 209, 0, 210, 0, 0, 0, 0, 0, 0,
    211, 0, 0, 0, 0, 212, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0, 215, 0, 216, 217, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 220, 0, 221, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 224, 0,
    225, 0, 0, 0, 226, 0, 227, 0, 228, 0, 0, 229, 0, 230, 0, 0, 0, 231, 232, 0, 233, 0, 234, 0, 0, 0, 235, 236, 0, 237, 0, 238,
    0, 0, 0, 239, 0, 0, 240, 0, 0, 241, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 244,
    0, 0, 0, 245, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 249, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 252,
    0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 0, 255, 0, 0, 0, 256, 0, 257, 0, 258, 0, 259, 0, 260, 0, 261, 0, 262, 263, 0, 0, 0,
    264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 266, 0, 267, 0, 268, 0, 0, 269, 0, 0, 270, 0, 0, 0, 271, 0, 272,
    0, 273, 0, 274, 0, 275, 0, 0, 0, 276, 0, 0, 277, 0, 0, 278, 0, 279, 0, 280, 0, 281, 0, 282, 0, 0, 0, 0, 283, 0, 0, 0,
    0, 0, 0, 284, 0, 285, 0, 286, 287, 0, 288, 0, 0, 0, 0, 289, 0, 0, 0, 290, 0, 291, 0, 292, 0, 0, 0, 0, 0, 293, 0, 0,
    0, 0, 0, 294, 0, 0, 0, 295, 0, 296, 0, 0, 0, 297, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 300, 0, 301, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 303, 0, 304, 0, 305, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 307, 0, 0, 308, 0,
    309, 310, 0, 0, 311, 0, 312, 0, 0, 0, 0, 0, 313, 0, 0, 0, 314, 0, 0, 0, 0, 0, 315, 0, 316, 0, 317, 0, 318, 0, 0, 319,
    0, 0, 0, 0, 0, 0, 320, 0, 321, 0, 0, 0, 0, 0, 322, 0, 0, 323, 0, 0, 0, 0, 0, 324, 0, 325, 0, 0, 326, 0, 0, 0,
    0, 327, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 332,
    0, 0, 0, 0, 333, 0, 0, 0, 334, 0, 0, 335, 0, 0, 336, 0, 0, 0, 337, 0, 338, 0, 339, 0, 0, 340, 341, 0, 342, 0, 0, 0,
    0, 0, 0, 0, 343, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 346, 0, 0,
    347, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 350, 0, 0, 351, 0, 352, 353, 0, 0, 0,
    354, 0, 0, 355, 0, 0, 356, 0, 357, 0, 358, 0, 359, 0, 360, 0, 0, 0, 361, 0, 362, 0, 0, 0, 0, 0, 363, 0, 364, 365, 0, 0,
    0, 0, 0, 366, 0, 0, 367, 0, 368, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 371,
    0, 372, 0, 0, 0, 373, 0, 374, 0, 0, 375, 0, 0, 376, 0, 377, 378, 0, 0, 0, 0, 379, 0, 0, 380, 0, 381, 0, 382, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 384, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 386, 0, 387, 0, 0, 0, 388, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 392, 0, 0, 0, 393, 0, 394, 0, 395,
    0, 396, 0, 397, 0, 398, 0, 399, 0, 400, 0, 401, 402, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0,
    405, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 408, 0, 0, 409, 0, 0, 0, 0, 410, 0, 411, 0, 412, 0, 0,
    0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 416, 0, 0,
    0, 417, 0, 0, 418, 0, 419, 0, 420, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 427,
    0, 0, 0, 0, 428, 0, 0, 0, 0, 429, 0, 0, 0, 0, 430, 0, 0, 0, 0, 431, 0, 0, 0, 0, 432, 0, 0, 0, 0, 433, 0, 0,
    0, 0, 434, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 437, 0, 438, 0, 0, 439, 0, 440, 0, 441, 0, 0, 0, 442, 0, 0, 0,
    0, 0, 443, 0, 0, 444, 0, 0, 445, 0, 0, 446, 0, 0, 447, 0, 0, 448, 0, 0, 0, 449, 0, 0, 0, 450, 0, 0, 0, 0, 0, 451,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 453, 0, 0, 0, 454, 0, 0, 455, 0, 456, 0, 0, 0, 457, 0, 0, 0,
    0, 0, 458, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 460, 0, 0, 0, 461, 0, 0, 462, 0, 0, 0, 0, 463, 0, 0, 464, 0, 0,
    0, 465, 0, 466, 0, 467, 0, 468, 0, 0, 469, 0, 470, 0, 0, 0, 0, 0, 0, 0, 471, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    473, 474, 0, 0, 0, 475, 0, 0, 0, 0, 0, 476, 0, 0, 0, 477, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0,
    0, 0, 0, 0, 480, 0, 0, 0, 481, 0, 0, 0, 0, 482, 0, 483, 0, 484, 485, 0, 486, 0, 0, 0, 487, 488, 0, 489, 0, 490, 0, 491,
    492, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0, 494, 0, 0, 0, 495, 0, 0, 0, 496, 0, 0, 0, 497, 498, 499, 0, 500, 501, 0, 502, 0,
    503, 0, 504, 505, 0, 506, 0, 507, 0, 508, 0, 509, 0, 0, 0, 0, 510, 0, 0, 0, 511, 0, 512, 0, 0, 0, 0, 513, 0, 514, 0, 0,
    515, 0, 516, 0, 0, 0, 517, 0, 518, 0, 0, 519, 0, 520, 0, 521, 0, 0, 522, 0, 523, 0, 524, 0, 525, 0, 526, 0, 0, 0, 527, 0,
    528, 0, 0, 0, 0, 0, 529, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 530, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 532, 0, 0, 0, 0, 0, 0, 0, 533, 0, 0, 534, 0, 0, 0, 535, 0, 0, 536, 0, 537, 0, 0, 0, 0, 538, 539, 0, 0, 0,
    0, 0, 0, 540, 0, 0, 0, 0, 0, 0, 541, 0, 542, 0, 543, 0, 0, 0, 544, 0, 0, 545, 0, 546, 0, 0, 0, 0, 547, 548, 0, 0,
    0, 0, 0, 0, 549, 0, 0, 0, 0, 0, 0, 550, 0, 551, 0, 0, 0, 552, 0, 0, 553, 0, 554, 0, 0, 0, 0, 555, 556, 0, 0, 0,
    0, 0, 0, 557, 0, 0, 0, 0, 0, 0, 558, 0, 0, 0, 0, 0, 0, 559, 0, 0, 560, 0, 561, 0, 0, 0, 0, 0, 0, 0, 0, 562,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 563, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    564, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 565, 0, 0, 0,
    0, 0, 0, 566, 0, 0, 567, 0, 0, 0, 568, 0, 569, 0, 0, 0, 0, 0, 0, 0, 570, 571, 0, 0, 572, 0, 0, 573, 0, 574, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 575, 0, 0, 0, 0, 0, 0, 0, 0, 0, 576, 0, 0, 0, 577, 0, 0, 0, 578, 0, 0, 0, 0, 579, 0,
    0, 0, 0, 580, 0, 581, 0, 0, 582, 0, 583, 0, 0, 584, 0, 585, 0, 0, 0, 586, 0, 0, 0, 0, 0, 0, 587, 0, 0, 0, 0, 0,
    0, 588, 0, 589, 0, 0, 0, 0, 0, 0, 590, 591, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 592, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 593, 0, 0, 594, 0, 0, 0, 595, 0, 0, 0, 596, 0, 0, 597, 0, 598, 0, 599, 0, 0, 600, 0, 601, 0, 0, 0, 0, 0,
    0, 0, 0, 602, 0, 0, 603, 0, 604, 0, 605, 0, 606, 0, 607, 0, 0, 0, 0, 608, 0, 0, 0, 0, 609, 0, 0, 610, 0, 0, 0, 0,
    0, 0, 0, 611, 0, 0, 0, 612, 0, 613, 0, 0, 0, 0, 614, 0, 0, 0, 0, 0, 0, 0, 0, 615, 0, 0, 0, 0, 0, 0, 616, 0,
    0, 0, 0, 0, 0, 0, 617, 0, 0, 0, 0, 0, 0, 0, 0, 618, 0, 0, 0, 0, 0, 0, 0, 0, 619, 0, 0, 620, 0, 0, 0, 0,
    621, 0, 0, 0, 0, 622, 0, 0, 623, 0, 0, 0, 0, 0, 0, 0, 0, 624, 0, 625, 0, 0, 0, 0, 626, 0, 0, 0, 0, 0, 0, 0,
    0, 627, 0, 0, 0, 0, 0, 0, 628, 0, 0, 0, 0, 0, 0, 629, 0, 0, 0, 0, 630, 0, 0, 0, 631, 0, 0, 0, 632, 0, 633, 0,
    634, 0, 635, 0, 0, 636, 0, 637, 638, 0, 0, 639, 0, 0, 0, 0, 0, 0, 0, 0, 0, 640, 0, 0, 641, 0, 642, 0, 643, 0, 644, 0,
    645, 0, 0, 0, 0, 0, 0, 646, 647, 0, 0, 0, 0, 0, 648, 0, 0, 0, 0, 0, 0, 0, 0, 0, 649, 0, 0, 650, 0, 651, 0, 652,
    0, 653, 0, 654, 0, 0, 0, 655, 0, 0, 656, 657, 0, 658, 0, 659, 0, 660, 0, 0, 0, 661, 662, 0, 0, 0, 0, 0, 663, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 664, 0, 0, 665, 0, 666, 0, 667, 0, 668, 0, 669, 0, 0, 0, 670, 671, 0, 0, 0, 0, 0, 672, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 673, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 674, 0, 675, 0, 676, 0, 677, 0, 678, 0, 0,
    679, 0, 680, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 681, 0, 0, 0, 682, 0, 0, 0, 0,
    0, 0, 0, 683, 0, 0, 0, 684, 0, 0, 0, 0, 685, 0, 0, 0, 0, 686, 0, 687, 0, 0, 0, 0, 688, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 689, 0, 0, 690, 0, 691, 0, 692, 0, 693, 0, 0, 0, 694, 0, 695, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 696, 0,
    0, 697, 0, 0, 0, 698, 0, 0, 0, 0, 0, 0, 699, 0, 0, 0, 0, 0, 700, 0, 0, 0, 701, 0, 0, 0, 0, 702, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 703, 0, 0, 0, 0, 0, 704, 0, 0, 0, 0, 0, 705, 0, 0, 0, 0, 0, 706, 0, 0, 0, 0, 0, 0,
    0, 707, 0, 0, 0, 0, 708, 0, 709, 0, 710, 0, 711, 0, 0, 0, 0, 712, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    713, 0, 0, 0, 714, 0, 715, 0, 0, 0, 0, 716, 0, 717, 0, 0, 718, 0, 0, 0, 0, 719, 0, 0, 0, 0, 0, 0, 0, 0, 720, 0,
    0, 0, 0, 0, 0, 0, 0, 721, 0, 0, 722, 0, 723, 0, 0, 0, 0, 724, 0, 0, 0, 0, 0, 0, 725, 0, 726, 727, 0, 728, 0, 729,
    0, 730, 0, 0, 0, 731, 0, 732, 0, 0, 0, 0, 0, 0, 733, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 734, 735, 0, 736, 0, 0,
    0, 737, 0, 0, 738, 739, 740, 0, 0, 0, 0, 0, 741, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 742, 0, 0, 743, 0, 0, 0, 0,
    0, 744, 0, 0, 0, 0, 0, 0, 0, 745, 0, 0, 0, 0, 0, 746, 0, 0, 0, 0, 747, 0, 0, 0, 748, 749, 0, 750, 0, 751, 0, 752,
    0, 753, 0, 754, 0, 0, 755, 0, 0, 0, 0, 0, 756, 0, 0, 0, 0, 0, 0, 0, 757, 0, 0, 0, 0, 0, 758, 0, 0, 759, 0, 0,
    0, 760, 0, 0, 761, 0, 0, 0, 762, 0, 0, 0, 763, 0, 764, 0, 765, 0, 0, 766, 0, 0, 0, 0, 0, 767, 0, 0, 0, 0, 0, 768,
    0, 0, 0, 0, 0, 0, 769, 0, 0, 0, 0, 0, 770, 0, 771, 0, 0, 0, 0, 0, 772, 0, 0, 0, 0, 0, 773, 0, 0, 0, 0, 0,
    0, 774, 0, 0, 0, 0, 0, 0, 775, 0, 0, 0, 0, 0, 0, 776, 0, 777, 0, 0, 0, 0, 0, 0, 778, 0, 0, 0, 0, 779, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 780, 0, 0, 0, 781, 0, 782, 0, 783, 0, 0, 784, 0, 0, 0, 785, 0, 0, 786, 0, 0, 0, 787, 0,
    788, 0, 789, 0, 0, 0, 790, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 791, 0, 792, 0, 0,
    0, 793, 0, 794, 0, 795, 0, 796, 0, 797, 0, 798, 0, 0, 0, 0, 0, 0, 0, 0, 799, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 800, 0, 0, 0, 801, 0, 0, 802, 0, 803, 0, 0, 0, 804, 0, 0, 805, 0, 0, 0, 0, 0, 0, 806, 0,
    0, 0, 0, 0, 0, 0, 807, 0, 0, 808, 0, 809, 0, 810, 0, 811, 812, 0, 813, 0, 0, 814, 0, 0, 0, 0, 0, 815, 0, 0, 0, 816,
    0, 0, 817, 0, 0, 0, 0, 818, 0, 819, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 820, 0, 0, 821, 0, 0, 822, 0,
    0, 823, 0, 0, 824, 825, 0, 826, 0, 0, 0, 0, 0, 827, 0, 828, 0, 0, 829, 0, 0, 0, 830, 0, 0, 0, 0, 0, 831, 0, 832, 0,
    0, 0, 0, 0, 833, 0, 0, 0, 0, 0, 834, 0, 835, 0, 0, 0, 0, 0, 836, 837, 0, 0, 0, 0, 0, 0, 0, 0, 838, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 839,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 840, 0, 841, 0, 0, 0, 0, 0, 842, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 843, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 844, 0, 0, 0, 0, 0, 0, 0, 0, 845, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 846, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 847, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 848,
    0, 0, 0, 0, 849, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 850, 0, 0, 851, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 852, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 853, 0, 0, 854, 0, 0, 855, 0, 0, 856, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 857, 0, 0, 0, 0, 858,
};
void recomp_unit_0067_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08910000u;
        entry_id = (entry_delta < 15032u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0067[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08910000;
    case 2u: goto L_08910004;
    case 3u: goto L_08910020;
    case 4u: goto L_08910034;
    case 5u: goto L_0891004C;
    case 6u: goto L_08910054;
    case 7u: goto L_0891005C;
    case 8u: goto L_08910064;
    case 9u: goto L_08910068;
    case 10u: goto L_08910074;
    case 11u: goto L_08910090;
    case 12u: goto L_089100A0;
    case 13u: goto L_089100A8;
    case 14u: goto L_089100B4;
    case 15u: goto L_089100C0;
    case 16u: goto L_089100DC;
    case 17u: goto L_089100E8;
    case 18u: goto L_08910124;
    case 19u: goto L_08910140;
    case 20u: goto L_08910150;
    case 21u: goto L_08910164;
    case 22u: goto L_0891017C;
    case 23u: goto L_08910184;
    case 24u: goto L_0891018C;
    case 25u: goto L_08910194;
    case 26u: goto L_08910198;
    case 27u: goto L_089101A4;
    case 28u: goto L_089101AC;
    case 29u: goto L_089101CC;
    case 30u: goto L_089101E8;
    case 31u: goto L_089101F8;
    case 32u: goto L_08910200;
    case 33u: goto L_0891020C;
    case 34u: goto L_08910218;
    case 35u: goto L_08910244;
    case 36u: goto L_08910250;
    case 37u: goto L_08910268;
    case 38u: goto L_0891027C;
    case 39u: goto L_08910294;
    case 40u: goto L_089102A4;
    case 41u: goto L_089102B0;
    case 42u: goto L_089102B8;
    case 43u: goto L_089102C0;
    case 44u: goto L_089102D4;
    case 45u: goto L_089102F8;
    case 46u: goto L_08910310;
    case 47u: goto L_08910324;
    case 48u: goto L_0891032C;
    case 49u: goto L_08910338;
    case 50u: goto L_0891034C;
    case 51u: goto L_0891036C;
    case 52u: goto L_08910374;
    case 53u: goto L_0891037C;
    case 54u: goto L_08910388;
    case 55u: goto L_08910394;
    case 56u: goto L_0891039C;
    case 57u: goto L_089103A8;
    case 58u: goto L_089103B0;
    case 59u: goto L_089103B8;
    case 60u: goto L_089103CC;
    case 61u: goto L_089103EC;
    case 62u: goto L_089103F4;
    case 63u: goto L_08910400;
    case 64u: goto L_08910408;
    case 65u: goto L_08910410;
    case 66u: goto L_0891041C;
    case 67u: goto L_08910424;
    case 68u: goto L_0891042C;
    case 69u: goto L_08910440;
    case 70u: goto L_08910460;
    case 71u: goto L_08910468;
    case 72u: goto L_08910474;
    case 73u: goto L_0891047C;
    case 74u: goto L_08910484;
    case 75u: goto L_08910498;
    case 76u: goto L_089104B8;
    case 77u: goto L_089104C0;
    case 78u: goto L_089104C8;
    case 79u: goto L_089104D4;
    case 80u: goto L_089104DC;
    case 81u: goto L_089104F0;
    case 82u: goto L_089104FC;
    case 83u: goto L_08910504;
    case 84u: goto L_08910508;
    case 85u: goto L_08910510;
    case 86u: goto L_0891051C;
    case 87u: goto L_08910530;
    case 88u: goto L_08910538;
    case 89u: goto L_08910554;
    case 90u: goto L_08910560;
    case 91u: goto L_0891059C;
    case 92u: goto L_089105B4;
    case 93u: goto L_089105D8;
    case 94u: goto L_089105E8;
    case 95u: goto L_08910604;
    case 96u: goto L_08910614;
    case 97u: goto L_0891061C;
    case 98u: goto L_08910634;
    case 99u: goto L_08910640;
    case 100u: goto L_0891064C;
    case 101u: goto L_08910654;
    case 102u: goto L_0891065C;
    case 103u: goto L_08910664;
    case 104u: goto L_08910670;
    case 105u: goto L_08910678;
    case 106u: goto L_08910680;
    case 107u: goto L_0891068C;
    case 108u: goto L_08910694;
    case 109u: goto L_0891069C;
    case 110u: goto L_089106A8;
    case 111u: goto L_089106B4;
    case 112u: goto L_089106BC;
    case 113u: goto L_089106C4;
    case 114u: goto L_089106CC;
    case 115u: goto L_089106D8;
    case 116u: goto L_089106E0;
    case 117u: goto L_089106E4;
    case 118u: goto L_089106EC;
    case 119u: goto L_08910718;
    case 120u: goto L_08910720;
    case 121u: goto L_08910750;
    case 122u: goto L_0891075C;
    case 123u: goto L_08910764;
    case 124u: goto L_08910768;
    case 125u: goto L_0891077C;
    case 126u: goto L_08910788;
    case 127u: goto L_089107B8;
    case 128u: goto L_089107BC;
    case 129u: goto L_089107C4;
    case 130u: goto L_089107D0;
    case 131u: goto L_089107E0;
    case 132u: goto L_089107E4;
    case 133u: goto L_089107EC;
    case 134u: goto L_089107F8;
    case 135u: goto L_08910804;
    case 136u: goto L_0891080C;
    case 137u: goto L_0891081C;
    case 138u: goto L_0891082C;
    case 139u: goto L_08910840;
    case 140u: goto L_08910844;
    case 141u: goto L_08910848;
    case 142u: goto L_08910850;
    case 143u: goto L_0891085C;
    case 144u: goto L_08910868;
    case 145u: goto L_08910870;
    case 146u: goto L_0891087C;
    case 147u: goto L_08910888;
    case 148u: goto L_08910890;
    case 149u: goto L_089108B0;
    case 150u: goto L_089108BC;
    case 151u: goto L_089108D4;
    case 152u: goto L_089108E8;
    case 153u: goto L_08910900;
    case 154u: goto L_0891090C;
    case 155u: goto L_08910934;
    case 156u: goto L_08910944;
    case 157u: goto L_0891096C;
    case 158u: goto L_08910978;
    case 159u: goto L_08910980;
    case 160u: goto L_08910988;
    case 161u: goto L_08910990;
    case 162u: goto L_08910998;
    case 163u: goto L_089109AC;
    case 164u: goto L_089109BC;
    case 165u: goto L_089109C8;
    case 166u: goto L_089109E4;
    case 167u: goto L_089109F4;
    case 168u: goto L_089109FC;
    case 169u: goto L_08910A14;
    case 170u: goto L_08910A1C;
    case 171u: goto L_08910A24;
    case 172u: goto L_08910A44;
    case 173u: goto L_08910A4C;
    case 174u: goto L_08910A54;
    case 175u: goto L_08910A60;
    case 176u: goto L_08910A68;
    case 177u: goto L_08910A70;
    case 178u: goto L_08910A78;
    case 179u: goto L_08910A7C;
    case 180u: goto L_08910A84;
    case 181u: goto L_08910A8C;
    case 182u: goto L_08910A90;
    case 183u: goto L_08910A9C;
    case 184u: goto L_08910AA4;
    case 185u: goto L_08910AAC;
    case 186u: goto L_08910AB8;
    case 187u: goto L_08910AC0;
    case 188u: goto L_08910AD4;
    case 189u: goto L_08910AF4;
    case 190u: goto L_08910AFC;
    case 191u: goto L_08910B04;
    case 192u: goto L_08910B10;
    case 193u: goto L_08910B18;
    case 194u: goto L_08910B2C;
    case 195u: goto L_08910B38;
    case 196u: goto L_08910B4C;
    case 197u: goto L_08910B5C;
    case 198u: goto L_08910B64;
    case 199u: goto L_08910B7C;
    case 200u: goto L_08910B84;
    case 201u: goto L_08910B8C;
    case 202u: goto L_08910B9C;
    case 203u: goto L_08910BA4;
    case 204u: goto L_08910BB4;
    case 205u: goto L_08910BC0;
    case 206u: goto L_08910BC4;
    case 207u: goto L_08910BCC;
    case 208u: goto L_08910BD0;
    case 209u: goto L_08910BDC;
    case 210u: goto L_08910BE4;
    case 211u: goto L_08910C00;
    case 212u: goto L_08910C14;
    case 213u: goto L_08910C20;
    case 214u: goto L_08910C30;
    case 215u: goto L_08910C40;
    case 216u: goto L_08910C48;
    case 217u: goto L_08910C4C;
    case 218u: goto L_08910C64;
    case 219u: goto L_08910CA4;
    case 220u: goto L_08910CB0;
    case 221u: goto L_08910CB8;
    case 222u: goto L_08910CCC;
    case 223u: goto L_08910CEC;
    case 224u: goto L_08910CF8;
    case 225u: goto L_08910D00;
    case 226u: goto L_08910D10;
    case 227u: goto L_08910D18;
    case 228u: goto L_08910D20;
    case 229u: goto L_08910D2C;
    case 230u: goto L_08910D34;
    case 231u: goto L_08910D44;
    case 232u: goto L_08910D48;
    case 233u: goto L_08910D50;
    case 234u: goto L_08910D58;
    case 235u: goto L_08910D68;
    case 236u: goto L_08910D6C;
    case 237u: goto L_08910D74;
    case 238u: goto L_08910D7C;
    case 239u: goto L_08910D8C;
    case 240u: goto L_08910D98;
    case 241u: goto L_08910DA4;
    case 242u: goto L_08910DB8;
    case 243u: goto L_08910DEC;
    case 244u: goto L_08910DFC;
    case 245u: goto L_08910E0C;
    case 246u: goto L_08910E1C;
    case 247u: goto L_08910E2C;
    case 248u: goto L_08910E3C;
    case 249u: goto L_08910E4C;
    case 250u: goto L_08910E5C;
    case 251u: goto L_08910E6C;
    case 252u: goto L_08910E7C;
    case 253u: goto L_08910E8C;
    case 254u: goto L_08910E9C;
    case 255u: goto L_08910EAC;
    case 256u: goto L_08910EBC;
    case 257u: goto L_08910EC4;
    case 258u: goto L_08910ECC;
    case 259u: goto L_08910ED4;
    case 260u: goto L_08910EDC;
    case 261u: goto L_08910EE4;
    case 262u: goto L_08910EEC;
    case 263u: goto L_08910EF0;
    case 264u: goto L_08910F00;
    case 265u: goto L_08910F2C;
    case 266u: goto L_08910F3C;
    case 267u: goto L_08910F44;
    case 268u: goto L_08910F4C;
    case 269u: goto L_08910F58;
    case 270u: goto L_08910F64;
    case 271u: goto L_08910F74;
    case 272u: goto L_08910F7C;
    case 273u: goto L_08910F84;
    case 274u: goto L_08910F8C;
    case 275u: goto L_08910F94;
    case 276u: goto L_08910FA4;
    case 277u: goto L_08910FB0;
    case 278u: goto L_08910FBC;
    case 279u: goto L_08910FC4;
    case 280u: goto L_08910FCC;
    case 281u: goto L_08910FD4;
    case 282u: goto L_08910FDC;
    case 283u: goto L_08910FF0;
    case 284u: goto L_0891100C;
    case 285u: goto L_08911014;
    case 286u: goto L_0891101C;
    case 287u: goto L_08911020;
    case 288u: goto L_08911028;
    case 289u: goto L_0891103C;
    case 290u: goto L_0891104C;
    case 291u: goto L_08911054;
    case 292u: goto L_0891105C;
    case 293u: goto L_08911074;
    case 294u: goto L_0891108C;
    case 295u: goto L_0891109C;
    case 296u: goto L_089110A4;
    case 297u: goto L_089110B4;
    case 298u: goto L_089110BC;
    case 299u: goto L_089110E0;
    case 300u: goto L_089110EC;
    case 301u: goto L_089110F4;
    case 302u: goto L_0891111C;
    case 303u: goto L_08911130;
    case 304u: goto L_08911138;
    case 305u: goto L_08911140;
    case 306u: goto L_08911160;
    case 307u: goto L_0891116C;
    case 308u: goto L_08911178;
    case 309u: goto L_08911180;
    case 310u: goto L_08911184;
    case 311u: goto L_08911190;
    case 312u: goto L_08911198;
    case 313u: goto L_089111B0;
    case 314u: goto L_089111C0;
    case 315u: goto L_089111D8;
    case 316u: goto L_089111E0;
    case 317u: goto L_089111E8;
    case 318u: goto L_089111F0;
    case 319u: goto L_089111FC;
    case 320u: goto L_08911218;
    case 321u: goto L_08911220;
    case 322u: goto L_08911238;
    case 323u: goto L_08911244;
    case 324u: goto L_0891125C;
    case 325u: goto L_08911264;
    case 326u: goto L_08911270;
    case 327u: goto L_08911284;
    case 328u: goto L_089112A0;
    case 329u: goto L_089112B8;
    case 330u: goto L_089112D0;
    case 331u: goto L_089112F8;
    case 332u: goto L_089112FC;
    case 333u: goto L_08911310;
    case 334u: goto L_08911320;
    case 335u: goto L_0891132C;
    case 336u: goto L_08911338;
    case 337u: goto L_08911348;
    case 338u: goto L_08911350;
    case 339u: goto L_08911358;
    case 340u: goto L_08911364;
    case 341u: goto L_08911368;
    case 342u: goto L_08911370;
    case 343u: goto L_08911390;
    case 344u: goto L_0891139C;
    case 345u: goto L_08911468;
    case 346u: goto L_08911474;
    case 347u: goto L_08911480;
    case 348u: goto L_08911494;
    case 349u: goto L_089114D0;
    case 350u: goto L_089114D8;
    case 351u: goto L_089114E4;
    case 352u: goto L_089114EC;
    case 353u: goto L_089114F0;
    case 354u: goto L_08911500;
    case 355u: goto L_0891150C;
    case 356u: goto L_08911518;
    case 357u: goto L_08911520;
    case 358u: goto L_08911528;
    case 359u: goto L_08911530;
    case 360u: goto L_08911538;
    case 361u: goto L_08911548;
    case 362u: goto L_08911550;
    case 363u: goto L_08911568;
    case 364u: goto L_08911570;
    case 365u: goto L_08911574;
    case 366u: goto L_0891158C;
    case 367u: goto L_08911598;
    case 368u: goto L_089115A0;
    case 369u: goto L_089115A8;
    case 370u: goto L_089115F0;
    case 371u: goto L_089115FC;
    case 372u: goto L_08911604;
    case 373u: goto L_08911614;
    case 374u: goto L_0891161C;
    case 375u: goto L_08911628;
    case 376u: goto L_08911634;
    case 377u: goto L_0891163C;
    case 378u: goto L_08911640;
    case 379u: goto L_08911654;
    case 380u: goto L_08911660;
    case 381u: goto L_08911668;
    case 382u: goto L_08911670;
    case 383u: goto L_0891169C;
    case 384u: goto L_089116B0;
    case 385u: goto L_089116BC;
    case 386u: goto L_089116DC;
    case 387u: goto L_089116E4;
    case 388u: goto L_089116F4;
    case 389u: goto L_0891171C;
    case 390u: goto L_08911728;
    case 391u: goto L_08911750;
    case 392u: goto L_0891175C;
    case 393u: goto L_0891176C;
    case 394u: goto L_08911774;
    case 395u: goto L_0891177C;
    case 396u: goto L_08911784;
    case 397u: goto L_0891178C;
    case 398u: goto L_08911794;
    case 399u: goto L_0891179C;
    case 400u: goto L_089117A4;
    case 401u: goto L_089117AC;
    case 402u: goto L_089117B0;
    case 403u: goto L_089117B8;
    case 404u: goto L_089117F4;
    case 405u: goto L_08911800;
    case 406u: goto L_0891180C;
    case 407u: goto L_08911830;
    case 408u: goto L_08911844;
    case 409u: goto L_08911850;
    case 410u: goto L_08911864;
    case 411u: goto L_0891186C;
    case 412u: goto L_08911874;
    case 413u: goto L_08911894;
    case 414u: goto L_089118C8;
    case 415u: goto L_089118E8;
    case 416u: goto L_089118F4;
    case 417u: goto L_08911904;
    case 418u: goto L_08911910;
    case 419u: goto L_08911918;
    case 420u: goto L_08911920;
    case 421u: goto L_08911938;
    case 422u: goto L_08911954;
    case 423u: goto L_08911978;
    case 424u: goto L_089119A0;
    case 425u: goto L_089119D0;
    case 426u: goto L_089119E4;
    case 427u: goto L_089119FC;
    case 428u: goto L_08911A10;
    case 429u: goto L_08911A24;
    case 430u: goto L_08911A38;
    case 431u: goto L_08911A4C;
    case 432u: goto L_08911A60;
    case 433u: goto L_08911A74;
    case 434u: goto L_08911A88;
    case 435u: goto L_08911A90;
    case 436u: goto L_08911AB4;
    case 437u: goto L_08911ABC;
    case 438u: goto L_08911AC4;
    case 439u: goto L_08911AD0;
    case 440u: goto L_08911AD8;
    case 441u: goto L_08911AE0;
    case 442u: goto L_08911AF0;
    case 443u: goto L_08911B08;
    case 444u: goto L_08911B14;
    case 445u: goto L_08911B20;
    case 446u: goto L_08911B2C;
    case 447u: goto L_08911B38;
    case 448u: goto L_08911B44;
    case 449u: goto L_08911B54;
    case 450u: goto L_08911B64;
    case 451u: goto L_08911B7C;
    case 452u: goto L_08911BA8;
    case 453u: goto L_08911BBC;
    case 454u: goto L_08911BCC;
    case 455u: goto L_08911BD8;
    case 456u: goto L_08911BE0;
    case 457u: goto L_08911BF0;
    case 458u: goto L_08911C08;
    case 459u: goto L_08911C24;
    case 460u: goto L_08911C38;
    case 461u: goto L_08911C48;
    case 462u: goto L_08911C54;
    case 463u: goto L_08911C68;
    case 464u: goto L_08911C74;
    case 465u: goto L_08911C84;
    case 466u: goto L_08911C8C;
    case 467u: goto L_08911C94;
    case 468u: goto L_08911C9C;
    case 469u: goto L_08911CA8;
    case 470u: goto L_08911CB0;
    case 471u: goto L_08911CD0;
    case 472u: goto L_08911CD8;
    case 473u: goto L_08911D00;
    case 474u: goto L_08911D04;
    case 475u: goto L_08911D14;
    case 476u: goto L_08911D2C;
    case 477u: goto L_08911D3C;
    case 478u: goto L_08911D4C;
    case 479u: goto L_08911D6C;
    case 480u: goto L_08911D90;
    case 481u: goto L_08911DA0;
    case 482u: goto L_08911DB4;
    case 483u: goto L_08911DBC;
    case 484u: goto L_08911DC4;
    case 485u: goto L_08911DC8;
    case 486u: goto L_08911DD0;
    case 487u: goto L_08911DE0;
    case 488u: goto L_08911DE4;
    case 489u: goto L_08911DEC;
    case 490u: goto L_08911DF4;
    case 491u: goto L_08911DFC;
    case 492u: goto L_08911E00;
    case 493u: goto L_08911E1C;
    case 494u: goto L_08911E2C;
    case 495u: goto L_08911E3C;
    case 496u: goto L_08911E4C;
    case 497u: goto L_08911E5C;
    case 498u: goto L_08911E60;
    case 499u: goto L_08911E64;
    case 500u: goto L_08911E6C;
    case 501u: goto L_08911E70;
    case 502u: goto L_08911E78;
    case 503u: goto L_08911E80;
    case 504u: goto L_08911E88;
    case 505u: goto L_08911E8C;
    case 506u: goto L_08911E94;
    case 507u: goto L_08911E9C;
    case 508u: goto L_08911EA4;
    case 509u: goto L_08911EAC;
    case 510u: goto L_08911EC0;
    case 511u: goto L_08911ED0;
    case 512u: goto L_08911ED8;
    case 513u: goto L_08911EEC;
    case 514u: goto L_08911EF4;
    case 515u: goto L_08911F00;
    case 516u: goto L_08911F08;
    case 517u: goto L_08911F18;
    case 518u: goto L_08911F20;
    case 519u: goto L_08911F2C;
    case 520u: goto L_08911F34;
    case 521u: goto L_08911F3C;
    case 522u: goto L_08911F48;
    case 523u: goto L_08911F50;
    case 524u: goto L_08911F58;
    case 525u: goto L_08911F60;
    case 526u: goto L_08911F68;
    case 527u: goto L_08911F78;
    case 528u: goto L_08911F80;
    case 529u: goto L_08911F98;
    case 530u: goto L_08911FEC;
    case 531u: goto L_08912018;
    case 532u: goto L_08912088;
    case 533u: goto L_089120A8;
    case 534u: goto L_089120B4;
    case 535u: goto L_089120C4;
    case 536u: goto L_089120D0;
    case 537u: goto L_089120D8;
    case 538u: goto L_089120EC;
    case 539u: goto L_089120F0;
    case 540u: goto L_0891210C;
    case 541u: goto L_08912128;
    case 542u: goto L_08912130;
    case 543u: goto L_08912138;
    case 544u: goto L_08912148;
    case 545u: goto L_08912154;
    case 546u: goto L_0891215C;
    case 547u: goto L_08912170;
    case 548u: goto L_08912174;
    case 549u: goto L_08912190;
    case 550u: goto L_089121AC;
    case 551u: goto L_089121B4;
    case 552u: goto L_089121C4;
    case 553u: goto L_089121D0;
    case 554u: goto L_089121D8;
    case 555u: goto L_089121EC;
    case 556u: goto L_089121F0;
    case 557u: goto L_0891220C;
    case 558u: goto L_08912228;
    case 559u: goto L_08912244;
    case 560u: goto L_08912250;
    case 561u: goto L_08912258;
    case 562u: goto L_0891227C;
    case 563u: goto L_089122D4;
    case 564u: goto L_08912300;
    case 565u: goto L_08912370;
    case 566u: goto L_0891238C;
    case 567u: goto L_08912398;
    case 568u: goto L_089123A8;
    case 569u: goto L_089123B0;
    case 570u: goto L_089123D0;
    case 571u: goto L_089123D4;
    case 572u: goto L_089123E0;
    case 573u: goto L_089123EC;
    case 574u: goto L_089123F4;
    case 575u: goto L_0891241C;
    case 576u: goto L_08912444;
    case 577u: goto L_08912454;
    case 578u: goto L_08912464;
    case 579u: goto L_08912478;
    case 580u: goto L_0891248C;
    case 581u: goto L_08912494;
    case 582u: goto L_089124A0;
    case 583u: goto L_089124A8;
    case 584u: goto L_089124B4;
    case 585u: goto L_089124BC;
    case 586u: goto L_089124CC;
    case 587u: goto L_089124E8;
    case 588u: goto L_08912504;
    case 589u: goto L_0891250C;
    case 590u: goto L_08912528;
    case 591u: goto L_0891252C;
    case 592u: goto L_08912560;
    case 593u: goto L_0891258C;
    case 594u: goto L_08912598;
    case 595u: goto L_089125A8;
    case 596u: goto L_089125B8;
    case 597u: goto L_089125C4;
    case 598u: goto L_089125CC;
    case 599u: goto L_089125D4;
    case 600u: goto L_089125E0;
    case 601u: goto L_089125E8;
    case 602u: goto L_0891260C;
    case 603u: goto L_08912618;
    case 604u: goto L_08912620;
    case 605u: goto L_08912628;
    case 606u: goto L_08912630;
    case 607u: goto L_08912638;
    case 608u: goto L_0891264C;
    case 609u: goto L_08912660;
    case 610u: goto L_0891266C;
    case 611u: goto L_0891268C;
    case 612u: goto L_0891269C;
    case 613u: goto L_089126A4;
    case 614u: goto L_089126B8;
    case 615u: goto L_089126DC;
    case 616u: goto L_089126F8;
    case 617u: goto L_08912718;
    case 618u: goto L_0891273C;
    case 619u: goto L_08912760;
    case 620u: goto L_0891276C;
    case 621u: goto L_08912780;
    case 622u: goto L_08912794;
    case 623u: goto L_089127A0;
    case 624u: goto L_089127C4;
    case 625u: goto L_089127CC;
    case 626u: goto L_089127E0;
    case 627u: goto L_08912804;
    case 628u: goto L_08912820;
    case 629u: goto L_0891283C;
    case 630u: goto L_08912850;
    case 631u: goto L_08912860;
    case 632u: goto L_08912870;
    case 633u: goto L_08912878;
    case 634u: goto L_08912880;
    case 635u: goto L_08912888;
    case 636u: goto L_08912894;
    case 637u: goto L_0891289C;
    case 638u: goto L_089128A0;
    case 639u: goto L_089128AC;
    case 640u: goto L_089128D4;
    case 641u: goto L_089128E0;
    case 642u: goto L_089128E8;
    case 643u: goto L_089128F0;
    case 644u: goto L_089128F8;
    case 645u: goto L_08912900;
    case 646u: goto L_0891291C;
    case 647u: goto L_08912920;
    case 648u: goto L_08912938;
    case 649u: goto L_08912960;
    case 650u: goto L_0891296C;
    case 651u: goto L_08912974;
    case 652u: goto L_0891297C;
    case 653u: goto L_08912984;
    case 654u: goto L_0891298C;
    case 655u: goto L_0891299C;
    case 656u: goto L_089129A8;
    case 657u: goto L_089129AC;
    case 658u: goto L_089129B4;
    case 659u: goto L_089129BC;
    case 660u: goto L_089129C4;
    case 661u: goto L_089129D4;
    case 662u: goto L_089129D8;
    case 663u: goto L_089129F0;
    case 664u: goto L_08912A18;
    case 665u: goto L_08912A24;
    case 666u: goto L_08912A2C;
    case 667u: goto L_08912A34;
    case 668u: goto L_08912A3C;
    case 669u: goto L_08912A44;
    case 670u: goto L_08912A54;
    case 671u: goto L_08912A58;
    case 672u: goto L_08912A70;
    case 673u: goto L_08912A9C;
    case 674u: goto L_08912AD4;
    case 675u: goto L_08912ADC;
    case 676u: goto L_08912AE4;
    case 677u: goto L_08912AEC;
    case 678u: goto L_08912AF4;
    case 679u: goto L_08912B00;
    case 680u: goto L_08912B08;
    case 681u: goto L_08912B5C;
    case 682u: goto L_08912B6C;
    case 683u: goto L_08912B8C;
    case 684u: goto L_08912B9C;
    case 685u: goto L_08912BB0;
    case 686u: goto L_08912BC4;
    case 687u: goto L_08912BCC;
    case 688u: goto L_08912BE0;
    case 689u: goto L_08912C08;
    case 690u: goto L_08912C14;
    case 691u: goto L_08912C1C;
    case 692u: goto L_08912C24;
    case 693u: goto L_08912C2C;
    case 694u: goto L_08912C3C;
    case 695u: goto L_08912C44;
    case 696u: goto L_08912C78;
    case 697u: goto L_08912C84;
    case 698u: goto L_08912C94;
    case 699u: goto L_08912CB0;
    case 700u: goto L_08912CC8;
    case 701u: goto L_08912CD8;
    case 702u: goto L_08912CEC;
    case 703u: goto L_08912D1C;
    case 704u: goto L_08912D34;
    case 705u: goto L_08912D4C;
    case 706u: goto L_08912D64;
    case 707u: goto L_08912D84;
    case 708u: goto L_08912D98;
    case 709u: goto L_08912DA0;
    case 710u: goto L_08912DA8;
    case 711u: goto L_08912DB0;
    case 712u: goto L_08912DC4;
    case 713u: goto L_08912E00;
    case 714u: goto L_08912E10;
    case 715u: goto L_08912E18;
    case 716u: goto L_08912E2C;
    case 717u: goto L_08912E34;
    case 718u: goto L_08912E40;
    case 719u: goto L_08912E54;
    case 720u: goto L_08912E78;
    case 721u: goto L_08912E9C;
    case 722u: goto L_08912EA8;
    case 723u: goto L_08912EB0;
    case 724u: goto L_08912EC4;
    case 725u: goto L_08912EE0;
    case 726u: goto L_08912EE8;
    case 727u: goto L_08912EEC;
    case 728u: goto L_08912EF4;
    case 729u: goto L_08912EFC;
    case 730u: goto L_08912F04;
    case 731u: goto L_08912F14;
    case 732u: goto L_08912F1C;
    case 733u: goto L_08912F38;
    case 734u: goto L_08912F68;
    case 735u: goto L_08912F6C;
    case 736u: goto L_08912F74;
    case 737u: goto L_08912F84;
    case 738u: goto L_08912F90;
    case 739u: goto L_08912F94;
    case 740u: goto L_08912F98;
    case 741u: goto L_08912FB0;
    case 742u: goto L_08912FE0;
    case 743u: goto L_08912FEC;
    case 744u: goto L_08913004;
    case 745u: goto L_08913024;
    case 746u: goto L_0891303C;
    case 747u: goto L_08913050;
    case 748u: goto L_08913060;
    case 749u: goto L_08913064;
    case 750u: goto L_0891306C;
    case 751u: goto L_08913074;
    case 752u: goto L_0891307C;
    case 753u: goto L_08913084;
    case 754u: goto L_0891308C;
    case 755u: goto L_08913098;
    case 756u: goto L_089130B0;
    case 757u: goto L_089130D0;
    case 758u: goto L_089130E8;
    case 759u: goto L_089130F4;
    case 760u: goto L_08913104;
    case 761u: goto L_08913110;
    case 762u: goto L_08913120;
    case 763u: goto L_08913130;
    case 764u: goto L_08913138;
    case 765u: goto L_08913140;
    case 766u: goto L_0891314C;
    case 767u: goto L_08913164;
    case 768u: goto L_0891317C;
    case 769u: goto L_08913198;
    case 770u: goto L_089131B0;
    case 771u: goto L_089131B8;
    case 772u: goto L_089131D0;
    case 773u: goto L_089131E8;
    case 774u: goto L_08913204;
    case 775u: goto L_08913220;
    case 776u: goto L_0891323C;
    case 777u: goto L_08913244;
    case 778u: goto L_08913260;
    case 779u: goto L_08913274;
    case 780u: goto L_089132A0;
    case 781u: goto L_089132B0;
    case 782u: goto L_089132B8;
    case 783u: goto L_089132C0;
    case 784u: goto L_089132CC;
    case 785u: goto L_089132DC;
    case 786u: goto L_089132E8;
    case 787u: goto L_089132F8;
    case 788u: goto L_08913300;
    case 789u: goto L_08913308;
    case 790u: goto L_08913318;
    case 791u: goto L_0891336C;
    case 792u: goto L_08913374;
    case 793u: goto L_08913384;
    case 794u: goto L_0891338C;
    case 795u: goto L_08913394;
    case 796u: goto L_0891339C;
    case 797u: goto L_089133A4;
    case 798u: goto L_089133AC;
    case 799u: goto L_089133D0;
    case 800u: goto L_0891341C;
    case 801u: goto L_0891342C;
    case 802u: goto L_08913438;
    case 803u: goto L_08913440;
    case 804u: goto L_08913450;
    case 805u: goto L_0891345C;
    case 806u: goto L_08913478;
    case 807u: goto L_08913498;
    case 808u: goto L_089134A4;
    case 809u: goto L_089134AC;
    case 810u: goto L_089134B4;
    case 811u: goto L_089134BC;
    case 812u: goto L_089134C0;
    case 813u: goto L_089134C8;
    case 814u: goto L_089134D4;
    case 815u: goto L_089134EC;
    case 816u: goto L_089134FC;
    case 817u: goto L_08913508;
    case 818u: goto L_0891351C;
    case 819u: goto L_08913524;
    case 820u: goto L_08913560;
    case 821u: goto L_0891356C;
    case 822u: goto L_08913578;
    case 823u: goto L_08913584;
    case 824u: goto L_08913590;
    case 825u: goto L_08913594;
    case 826u: goto L_0891359C;
    case 827u: goto L_089135B4;
    case 828u: goto L_089135BC;
    case 829u: goto L_089135C8;
    case 830u: goto L_089135D8;
    case 831u: goto L_089135F0;
    case 832u: goto L_089135F8;
    case 833u: goto L_08913610;
    case 834u: goto L_08913628;
    case 835u: goto L_08913630;
    case 836u: goto L_08913648;
    case 837u: goto L_0891364C;
    case 838u: goto L_08913670;
    case 839u: goto L_089136FC;
    case 840u: goto L_08913734;
    case 841u: goto L_0891373C;
    case 842u: goto L_08913754;
    case 843u: goto L_08913798;
    case 844u: goto L_089137D4;
    case 845u: goto L_089137F8;
    case 846u: goto L_0891385C;
    case 847u: goto L_08913938;
    case 848u: goto L_0891397C;
    case 849u: goto L_08913990;
    case 850u: goto L_089139C8;
    case 851u: goto L_089139D4;
    case 852u: goto L_08913A0C;
    case 853u: goto L_08913A48;
    case 854u: goto L_08913A54;
    case 855u: goto L_08913A60;
    case 856u: goto L_08913A6C;
    case 857u: goto L_08913AA0;
    case 858u: goto L_08913AB4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08910000:
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    goto L_08910004;
L_08910004:
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
L_08910020:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4199)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08910064;
      }
      goto L_08910034;
    }
L_08910034:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(900))))));
    ctx.gpr[5] = (ctx.gpr[5] & 30u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891005C;
      }
      goto L_0891004C;
    }
L_0891004C:
    ctx.gpr[31] = (0x08910054u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(864));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 614u, 0x08A9FD14u>(ctx, &aot_mem) && ctx.pc == 0x08910054u) goto L_08910054;
    return;
L_08910054:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08910068;
      }
      goto L_0891005C;
    }
L_0891005C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08910068;
      }
      goto L_08910064;
    }
L_08910064:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1104)));
    goto L_08910068;
L_08910068:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08910074:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4199)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_089100A8;
      }
      goto L_08910090;
    }
L_08910090:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(864));
    ctx.gpr[31] = (0x089100A0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 621u, 0x08A9FD80u>(ctx, &aot_mem) && ctx.pc == 0x089100A0u) goto L_089100A0;
    return;
L_089100A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089100B4;
      }
      goto L_089100A8;
    }
L_089100A8:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1088));
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
    goto L_089100B4;
L_089100B4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089100C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4199)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08910124;
      }
      goto L_089100DC;
    }
L_089100DC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(864));
    ctx.gpr[31] = (0x089100E8u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 621u, 0x08A9FD80u>(ctx, &aot_mem) && ctx.pc == 0x089100E8u) goto L_089100E8;
    return;
L_089100E8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08910140;
      }
      goto L_08910124;
    }
L_08910124:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1108));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    goto L_08910140;
L_08910140:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08910150:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4199)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08910194;
      }
      goto L_08910164;
    }
L_08910164:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(900))))));
    ctx.gpr[5] = (ctx.gpr[5] & 30u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891018C;
      }
      goto L_0891017C;
    }
L_0891017C:
    ctx.gpr[31] = (0x08910184u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(864));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 614u, 0x08A9FD14u>(ctx, &aot_mem) && ctx.pc == 0x08910184u) goto L_08910184;
    return;
L_08910184:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08910198;
      }
      goto L_0891018C;
    }
L_0891018C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08910198;
      }
      goto L_08910194;
    }
L_08910194:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1116)));
    goto L_08910198;
L_08910198:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089101A4:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1128)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089101AC:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1120));
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
L_089101CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4199)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08910200;
      }
      goto L_089101E8;
    }
L_089101E8:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(864));
    ctx.gpr[31] = (0x089101F8u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 565u, 0x08A9F948u>(ctx, &aot_mem) && ctx.pc == 0x089101F8u) goto L_089101F8;
    return;
L_089101F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891020C;
      }
      goto L_08910200;
    }
L_08910200:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1040));
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
    goto L_0891020C;
L_0891020C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08910218:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1088));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x08910244u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 778u, 0x0890F644u>(ctx, &aot_mem) && ctx.pc == 0x08910244u) goto L_08910244;
    return;
L_08910244:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4199)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089102C0;
      }
      goto L_08910250;
    }
L_08910250:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891027C;
      }
      goto L_08910268;
    }
L_08910268:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089102B8;
      }
      goto L_0891027C;
    }
L_0891027C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(900))))));
    ctx.gpr[4] = (ctx.gpr[4] & 30u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089102C0;
      }
      goto L_08910294;
    }
L_08910294:
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(864));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089102A4u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 565u, 0x08A9F948u>(ctx, &aot_mem) && ctx.pc == 0x089102A4u) goto L_089102A4;
    return;
L_089102A4:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x089102B0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 621u, 0x08A9FD80u>(ctx, &aot_mem) && ctx.pc == 0x089102B0u) goto L_089102B0;
    return;
L_089102B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089102C0;
      }
      goto L_089102B8;
    }
L_089102B8:
    ctx.gpr[31] = (0x089102C0u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(864));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 563u, 0x08A9F908u>(ctx, &aot_mem) && ctx.pc == 0x089102C0u) goto L_089102C0;
    return;
L_089102C0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089102D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1108), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4199)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891032C;
      }
      goto L_089102F8;
    }
L_089102F8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891032C;
      }
      goto L_08910310;
    }
L_08910310:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891032C;
      }
      goto L_08910324;
    }
L_08910324:
    ctx.gpr[31] = (0x0891032Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(864));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 563u, 0x08A9F908u>(ctx, &aot_mem) && ctx.pc == 0x0891032Cu) goto L_0891032C;
    return;
L_0891032C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08910338:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1124), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891034C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1104)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08910374;
      }
      goto L_0891036C;
    }
L_0891036C:
    ctx.gpr[31] = (0x08910374u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(1104));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 430u, 0x08A93004u>(ctx, &aot_mem) && ctx.pc == 0x08910374u) goto L_08910374;
    return;
L_08910374:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1104), ctx.gpr[16]);
      if (branch_taken) {
          goto L_0891039C;
      }
      goto L_0891037C;
    }
L_0891037C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08910388u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 778u, 0x0890F644u>(ctx, &aot_mem) && ctx.pc == 0x08910388u) goto L_08910388;
    return;
L_08910388:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1104)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891039C;
      }
      goto L_08910394;
    }
L_08910394:
    ctx.gpr[31] = (0x0891039Cu);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(1104));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem) && ctx.pc == 0x0891039Cu) goto L_0891039C;
    return;
L_0891039C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4199)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089103B8;
      }
      goto L_089103A8;
    }
L_089103A8:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_089103B8;
      }
      goto L_089103B0;
    }
L_089103B0:
    ctx.gpr[31] = (0x089103B8u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(864));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 563u, 0x08A9F908u>(ctx, &aot_mem) && ctx.pc == 0x089103B8u) goto L_089103B8;
    return;
L_089103B8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089103CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1116)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089103F4;
      }
      goto L_089103EC;
    }
L_089103EC:
    ctx.gpr[31] = (0x089103F4u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(1116));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 430u, 0x08A93004u>(ctx, &aot_mem) && ctx.pc == 0x089103F4u) goto L_089103F4;
    return;
L_089103F4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1116), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08910410;
      }
      goto L_08910400;
    }
L_08910400:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08910410;
      }
      goto L_08910408;
    }
L_08910408:
    ctx.gpr[31] = (0x08910410u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(1116));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem) && ctx.pc == 0x08910410u) goto L_08910410;
    return;
L_08910410:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4199)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891042C;
      }
      goto L_0891041C;
    }
L_0891041C:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891042C;
      }
      goto L_08910424;
    }
L_08910424:
    ctx.gpr[31] = (0x0891042Cu);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(864));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 563u, 0x08A9F908u>(ctx, &aot_mem) && ctx.pc == 0x0891042Cu) goto L_0891042C;
    return;
L_0891042C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08910440:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1128)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08910468;
      }
      goto L_08910460;
    }
L_08910460:
    ctx.gpr[31] = (0x08910468u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(1128));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 430u, 0x08A93004u>(ctx, &aot_mem) && ctx.pc == 0x08910468u) goto L_08910468;
    return;
L_08910468:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1128), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08910484;
      }
      goto L_08910474;
    }
L_08910474:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08910484;
      }
      goto L_0891047C;
    }
L_0891047C:
    ctx.gpr[31] = (0x08910484u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(1128));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem) && ctx.pc == 0x08910484u) goto L_08910484;
    return;
L_08910484:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08910498:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(940)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089104C0;
      }
      goto L_089104B8;
    }
L_089104B8:
    ctx.gpr[31] = (0x089104C0u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(940));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 430u, 0x08A93004u>(ctx, &aot_mem) && ctx.pc == 0x089104C0u) goto L_089104C0;
    return;
L_089104C0:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(940), ctx.gpr[16]);
      if (branch_taken) {
          goto L_089104DC;
      }
      goto L_089104C8;
    }
L_089104C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(940)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089104DC;
      }
      goto L_089104D4;
    }
L_089104D4:
    ctx.gpr[31] = (0x089104DCu);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(940));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem) && ctx.pc == 0x089104DCu) goto L_089104DC;
    return;
L_089104DC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089104F0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4199)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08910504;
      }
      goto L_089104FC;
    }
L_089104FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08910508;
      }
      goto L_08910504;
    }
L_08910504:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(940)));
    goto L_08910508;
L_08910508:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08910510:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4199)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08910530;
      }
      goto L_0891051C;
    }
L_0891051C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1104)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1088));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_08910530;
L_08910530:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08910538:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4199)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0891059C;
      }
      goto L_08910554;
    }
L_08910554:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(864));
    ctx.gpr[31] = (0x08910560u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 565u, 0x08A9F948u>(ctx, &aot_mem) && ctx.pc == 0x08910560u) goto L_08910560;
    return;
L_08910560:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089105D8;
      }
      goto L_0891059C;
    }
L_0891059C:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(906))))));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[31] = (0x089105B4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(908)));
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 398u, 0x08905E50u>(ctx, &aot_mem) && ctx.pc == 0x089105B4u) goto L_089105B4;
    return;
L_089105B4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089105D8;
      }
      goto L_089105D8;
    }
L_089105D8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089105E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4199)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_0891061C;
      }
      goto L_08910604;
    }
L_08910604:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(864));
    ctx.gpr[31] = (0x08910614u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 565u, 0x08A9F948u>(ctx, &aot_mem) && ctx.pc == 0x08910614u) goto L_08910614;
    return;
L_08910614:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08910634;
      }
      goto L_0891061C;
    }
L_0891061C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(76)));
    ctx.gpr[7] = (16320u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1032)));
    ctx.gpr[31] = (0x08910634u);
    ctx.gpr[6] = (ctx.gpr[6] >> 22u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 98u, 0x08978C50u>(ctx, &aot_mem) && ctx.pc == 0x08910634u) goto L_08910634;
    return;
L_08910634:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08910640:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4199)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08910654;
      }
      goto L_0891064C;
    }
L_0891064C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891065C;
      }
      goto L_08910654;
    }
L_08910654:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1032)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1028), ctx.gpr[5]);
    goto L_0891065C;
L_0891065C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08910664:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4199)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08910678;
      }
      goto L_08910670;
    }
L_08910670:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08910678;
      }
      goto L_08910678;
    }
L_08910678:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08910680:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4199)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08910694;
      }
      goto L_0891068C;
    }
L_0891068C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08910694;
      }
      goto L_08910694;
    }
L_08910694:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891069C:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4199)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089106BC;
      }
      goto L_089106A8;
    }
L_089106A8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1032)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089106D8;
      }
      goto L_089106B4;
    }
L_089106B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089106C4;
      }
      goto L_089106BC;
    }
L_089106BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089106E4;
      }
      goto L_089106C4;
    }
L_089106C4:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089106D8;
      }
      goto L_089106CC;
    }
L_089106CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1028)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089106E0;
      }
      goto L_089106D8;
    }
L_089106D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089106E4;
      }
      goto L_089106E0;
    }
L_089106E0:
    ctx.gpr[2] = (0u | 0u);
    goto L_089106E4;
L_089106E4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089106EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (ctx.gpr[7] & 255u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4199)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08910720;
      }
      goto L_08910718;
    }
L_08910718:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08910764;
      }
      goto L_08910720;
    }
L_08910720:
    ctx.gpr[9] = (ctx.gpr[6] | 0u);
    ctx.gpr[11] = (ctx.gpr[5] | 0u);
    ctx.gpr[10] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(1028));
    ctx.gpr[8] = (ctx.gpr[16] + static_cast<std::uint32_t>(1032));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08910750u);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 219u, 0x089798CCu>(ctx, &aot_mem) && ctx.pc == 0x08910750u) goto L_08910750;
    return;
L_08910750:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1032)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08910764;
      }
      goto L_0891075C;
    }
L_0891075C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08910768;
      }
      goto L_08910764;
    }
L_08910764:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    goto L_08910768;
L_08910768:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891077C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4199)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089107B8;
      }
      goto L_08910788;
    }
L_08910788:
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (16384u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(888), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(889), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_089107BC;
      }
      goto L_089107B8;
    }
L_089107B8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1072), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089107BC;
L_089107BC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089107C4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4199)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089107E0;
      }
      goto L_089107D0;
    }
L_089107D0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(888)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[0])));
      if (branch_taken) {
          goto L_089107E4;
      }
      goto L_089107E0;
    }
L_089107E0:
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1072)));
    goto L_089107E4;
L_089107E4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089107EC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4199)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891080C;
      }
      goto L_089107F8;
    }
L_089107F8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(904))))));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08910840;
      }
      goto L_08910804;
    }
L_08910804:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0891081C;
      }
      goto L_0891080C;
    }
L_0891080C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(902))))));
    ctx.gpr[2] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
      if (branch_taken) {
          goto L_08910848;
      }
      goto L_0891081C;
    }
L_0891081C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(906))))));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(908));
      if (branch_taken) {
          goto L_08910840;
      }
      goto L_0891082C;
    }
L_0891082C:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08910844;
      }
      goto L_08910840;
    }
L_08910840:
    ctx.gpr[6] = (0u | 1u);
    goto L_08910844;
L_08910844:
    ctx.gpr[2] = (ctx.gpr[6] & 255u);
    goto L_08910848;
L_08910848:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08910850:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4199)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08910868;
      }
      goto L_0891085C;
    }
L_0891085C:
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1040));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_08910868;
L_08910868:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08910870:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4199)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08910888;
      }
      goto L_0891087C;
    }
L_0891087C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(902))))));
    ctx.gpr[5] = (ctx.gpr[5] | 64u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(902), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_08910888;
L_08910888:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08910890:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4199)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089108D4;
      }
      goto L_089108B0;
    }
L_089108B0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089108BCu);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    goto L_089105E8;
L_089108BC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x089108D4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08910218;
L_089108D4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089108E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4199)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08910934;
      }
      goto L_08910900;
    }
L_08910900:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x0891090Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08910538;
L_0891090C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08910934u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    goto L_08910218;
L_08910934:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08910944:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4199)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08910988;
      }
      goto L_0891096C;
    }
L_0891096C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(864));
    ctx.gpr[31] = (0x08910978u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 586u, 0x08A9FB14u>(ctx, &aot_mem) && ctx.pc == 0x08910978u) goto L_08910978;
    return;
L_08910978:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08910990;
      }
      goto L_08910980;
    }
L_08910980:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089109FC;
      }
      goto L_08910988;
    }
L_08910988:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089109FC;
      }
      goto L_08910990;
    }
L_08910990:
    ctx.gpr[31] = (0x08910998u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 598u, 0x08A9FC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08910998u) goto L_08910998;
    return;
L_08910998:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089109C8;
      }
      goto L_089109AC;
    }
L_089109AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089109FC;
      }
      goto L_089109BC;
    }
L_089109BC:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089109FC;
      }
      goto L_089109C8;
    }
L_089109C8:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089109FC;
      }
      goto L_089109E4;
    }
L_089109E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089109FC;
      }
      goto L_089109F4;
    }
L_089109F4:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_089109FC;
L_089109FC:
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
L_08910A14:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08910A1C;
      }
      goto L_08910A1C;
    }
L_08910A1C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08910A24:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08910AC0;
      }
      goto L_08910A44;
    }
L_08910A44:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08910A90;
      }
      goto L_08910A4C;
    }
L_08910A4C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08910A90;
      }
      goto L_08910A54;
    }
L_08910A54:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08910A70;
      }
      goto L_08910A60;
    }
L_08910A60:
    ctx.gpr[31] = (0x08910A68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 78u, 0x08B00578u>(ctx, &aot_mem) && ctx.pc == 0x08910A68u) goto L_08910A68;
    return;
L_08910A68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
      if (branch_taken) {
          goto L_08910A7C;
      }
      goto L_08910A70;
    }
L_08910A70:
    ctx.gpr[31] = (0x08910A78u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 40u, 0x08B00384u>(ctx, &aot_mem) && ctx.pc == 0x08910A78u) goto L_08910A78;
    return;
L_08910A78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    goto L_08910A7C;
L_08910A7C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08910A8C;
      }
      goto L_08910A84;
    }
L_08910A84:
    ctx.gpr[31] = (0x08910A8Cu);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(1152));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 430u, 0x08A93004u>(ctx, &aot_mem) && ctx.pc == 0x08910A8Cu) goto L_08910A8C;
    return;
L_08910A8C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1152), 0u);
    goto L_08910A90;
L_08910A90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08910AA4;
      }
      goto L_08910A9C;
    }
L_08910A9C:
    ctx.gpr[31] = (0x08910AA4u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(1152));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 430u, 0x08A93004u>(ctx, &aot_mem) && ctx.pc == 0x08910AA4u) goto L_08910AA4;
    return;
L_08910AA4:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1152), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08910AC0;
      }
      goto L_08910AAC;
    }
L_08910AAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08910AC0;
      }
      goto L_08910AB8;
    }
L_08910AB8:
    ctx.gpr[31] = (0x08910AC0u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(1152));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem) && ctx.pc == 0x08910AC0u) goto L_08910AC0;
    return;
L_08910AC0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08910AD4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1156)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08910AFC;
      }
      goto L_08910AF4;
    }
L_08910AF4:
    ctx.gpr[31] = (0x08910AFCu);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(1156));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 430u, 0x08A93004u>(ctx, &aot_mem) && ctx.pc == 0x08910AFCu) goto L_08910AFC;
    return;
L_08910AFC:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1156), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08910B18;
      }
      goto L_08910B04;
    }
L_08910B04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1156)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08910B18;
      }
      goto L_08910B10;
    }
L_08910B10:
    ctx.gpr[31] = (0x08910B18u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(1156));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem) && ctx.pc == 0x08910B18u) goto L_08910B18;
    return;
L_08910B18:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08910B2C:
    ctx.gpr[2] = (ctx.gpr[4] ^ 10u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08910B38:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08910B84;
      }
      goto L_08910B4C;
    }
L_08910B4C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 70 ? 1u : 0u);
      if (branch_taken) {
          goto L_08910B7C;
      }
      goto L_08910B5C;
    }
L_08910B5C:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-16));
      if (branch_taken) {
          goto L_08910B7C;
      }
      goto L_08910B64;
    }
L_08910B64:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-12904)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08910B7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08910BD0;
      }
      goto L_08910B84;
    }
L_08910B84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08910BD0;
      }
      goto L_08910B8C;
    }
L_08910B8C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08910B9Cu);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 169u, 0x08B00A50u>(ctx, &aot_mem) && ctx.pc == 0x08910B9Cu) goto L_08910B9C;
    return;
L_08910B9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08910BD0;
      }
      goto L_08910BA4;
    }
L_08910BA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[6] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08910BC4;
      }
      goto L_08910BB4;
    }
L_08910BB4:
    ctx.gpr[6] = (0u | 38u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08910BC4;
      }
      goto L_08910BC0;
    }
L_08910BC0:
    ctx.gpr[5] = (0u | 1u);
    goto L_08910BC4;
L_08910BC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08910BD0;
      }
      goto L_08910BCC;
    }
L_08910BCC:
    ctx.gpr[2] = (0u | 1u);
    goto L_08910BD0;
L_08910BD0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08910BDC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08910BE4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[31]);
    ctx.gpr[31] = (0x08910C00u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 621u, 0x0889EB08u>(ctx, &aot_mem) && ctx.pc == 0x08910C00u) goto L_08910C00;
    return;
L_08910C00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(704)));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08910C14u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 251u, 0x08969194u>(ctx, &aot_mem) && ctx.pc == 0x08910C14u) goto L_08910C14;
    return;
L_08910C14:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08910C20u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 250u, 0x0896918Cu>(ctx, &aot_mem) && ctx.pc == 0x08910C20u) goto L_08910C20;
    return;
L_08910C20:
    ctx.gpr[17] = (ctx.gpr[17] << 6u);
    ctx.gpr[17] = (ctx.gpr[2] + ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), 0u);
      if (branch_taken) {
          goto L_08910C48;
      }
      goto L_08910C30;
    }
L_08910C30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[17]);
        goto L_08910C4C;
    }
    goto L_08910C40;
L_08910C40:
    ctx.gpr[31] = (0x08910C48u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem) && ctx.pc == 0x08910C48u) goto L_08910C48;
    return;
L_08910C48:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    goto L_08910C4C;
L_08910C4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[31] = (0x08910C64u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 939u, 0x0885FF48u>(ctx, &aot_mem) && ctx.pc == 0x08910C64u) goto L_08910C64;
    return;
L_08910C64:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08910CB8;
      }
      goto L_08910CA4;
    }
L_08910CA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08910CB8;
      }
      goto L_08910CB0;
    }
L_08910CB0:
    ctx.gpr[31] = (0x08910CB8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem) && ctx.pc == 0x08910CB8u) goto L_08910CB8;
    return;
L_08910CB8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08910CCC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08910DA4;
      }
      goto L_08910CEC;
    }
L_08910CEC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08910D18;
      }
      goto L_08910CF8;
    }
L_08910CF8:
    ctx.gpr[31] = (0x08910D00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 78u, 0x08B00578u>(ctx, &aot_mem) && ctx.pc == 0x08910D00u) goto L_08910D00;
    return;
L_08910D00:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08910D10u);
    ctx.gpr[6] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 78u, 0x089A8ACCu>(ctx, &aot_mem) && ctx.pc == 0x08910D10u) goto L_08910D10;
    return;
L_08910D10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08910D8C;
      }
      goto L_08910D18;
    }
L_08910D18:
    ctx.gpr[31] = (0x08910D20u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 40u, 0x08B00384u>(ctx, &aot_mem) && ctx.pc == 0x08910D20u) goto L_08910D20;
    return;
L_08910D20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[31] = (0x08910D2Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x08910D2Cu) goto L_08910D2C;
    return;
L_08910D2C:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
      if (branch_taken) {
          goto L_08910D48;
      }
      goto L_08910D34;
    }
L_08910D34:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08910D44u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 78u, 0x089A8ACCu>(ctx, &aot_mem) && ctx.pc == 0x08910D44u) goto L_08910D44;
    return;
L_08910D44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    goto L_08910D48;
L_08910D48:
    ctx.gpr[31] = (0x08910D50u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x08910D50u) goto L_08910D50;
    return;
L_08910D50:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
      if (branch_taken) {
          goto L_08910D6C;
      }
      goto L_08910D58;
    }
L_08910D58:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08910D68u);
    ctx.gpr[6] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 78u, 0x089A8ACCu>(ctx, &aot_mem) && ctx.pc == 0x08910D68u) goto L_08910D68;
    return;
L_08910D68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    goto L_08910D6C;
L_08910D6C:
    ctx.gpr[31] = (0x08910D74u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x08910D74u) goto L_08910D74;
    return;
L_08910D74:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08910D8C;
      }
      goto L_08910D7C;
    }
L_08910D7C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08910D8Cu);
    ctx.gpr[6] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 78u, 0x089A8ACCu>(ctx, &aot_mem) && ctx.pc == 0x08910D8Cu) goto L_08910D8C;
    return;
L_08910D8C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08910D98u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem) && ctx.pc == 0x08910D98u) goto L_08910D98;
    return;
L_08910D98:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08910DA4u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08910A24;
L_08910DA4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08910DB8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (0u | 32u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08910EE4;
      }
      goto L_08910DEC;
    }
L_08910DEC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (0u | 19u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08910EDC;
      }
      goto L_08910DFC;
    }
L_08910DFC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (0u | 20u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08910EDC;
      }
      goto L_08910E0C;
    }
L_08910E0C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (0u | 24u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08910EDC;
      }
      goto L_08910E1C;
    }
L_08910E1C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (0u | 25u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08910EDC;
      }
      goto L_08910E2C;
    }
L_08910E2C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (0u | 26u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08910EDC;
      }
      goto L_08910E3C;
    }
L_08910E3C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (0u | 27u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08910EDC;
      }
      goto L_08910E4C;
    }
L_08910E4C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08910EDC;
      }
      goto L_08910E5C;
    }
L_08910E5C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08910EDC;
      }
      goto L_08910E6C;
    }
L_08910E6C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08910EDC;
      }
      goto L_08910E7C;
    }
L_08910E7C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08910EDC;
      }
      goto L_08910E8C;
    }
L_08910E8C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08910ED4;
      }
      goto L_08910E9C;
    }
L_08910E9C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (0u | 33u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08910ED4;
      }
      goto L_08910EAC;
    }
L_08910EAC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (0u | 35u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08910ED4;
      }
      goto L_08910EBC;
    }
L_08910EBC:
    ctx.gpr[31] = (0x08910EC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 161u, 0x08A40D58u>(ctx, &aot_mem) && ctx.pc == 0x08910EC4u) goto L_08910EC4;
    return;
L_08910EC4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08910EEC;
      }
      goto L_08910ECC;
    }
L_08910ECC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08910EF0;
      }
      goto L_08910ED4;
    }
L_08910ED4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 36u);
      if (branch_taken) {
          goto L_08910EF0;
      }
      goto L_08910EDC;
    }
L_08910EDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08910EF0;
      }
      goto L_08910EE4;
    }
L_08910EE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 31u);
      if (branch_taken) {
          goto L_08910EF0;
      }
      goto L_08910EEC;
    }
L_08910EEC:
    ctx.gpr[2] = (0u | 30u);
    goto L_08910EF0;
L_08910EF0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08910F00:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08910F3C;
      }
      goto L_08910F2C;
    }
L_08910F2C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08910F3C;
L_08910F3C:
    ctx.gpr[31] = (0x08910F44u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08910F44u) goto L_08910F44;
    return;
L_08910F44:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08910F8C;
      }
      goto L_08910F4C;
    }
L_08910F4C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08910F8C;
      }
      goto L_08910F58;
    }
L_08910F58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08910F8C;
      }
      goto L_08910F64;
    }
L_08910F64:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[6] = (0u | 103u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 104u);
      if (branch_taken) {
          goto L_08910F7C;
      }
      goto L_08910F74;
    }
L_08910F74:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08910F94;
      }
      goto L_08910F7C;
    }
L_08910F7C:
    ctx.gpr[31] = (0x08910F84u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 575u, 0x08A06474u>(ctx, &aot_mem) && ctx.pc == 0x08910F84u) goto L_08910F84;
    return;
L_08910F84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(695), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08910F8C;
L_08910F8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08911074;
      }
      goto L_08910F94;
    }
L_08910F94:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(68))))));
    ctx.gpr[18] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08910FB0;
      }
      goto L_08910FA4;
    }
L_08910FA4:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(695)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08910FC4;
      }
      goto L_08910FB0;
    }
L_08910FB0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(69))))));
    if (ctx.gpr[4] != ctx.gpr[18]) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(695)));
        goto L_08910FCC;
    }
    goto L_08910FBC;
L_08910FBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08910FD4;
      }
      goto L_08910FC4;
    }
L_08910FC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08911074;
      }
      goto L_08910FCC;
    }
L_08910FCC:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08911014;
      }
      goto L_08910FD4;
    }
L_08910FD4:
    ctx.gpr[31] = (0x08910FDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x08910FDCu) goto L_08910FDC;
    return;
L_08910FDC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20300)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20304)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08910FF0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x08910FF0u) goto L_08910FF0;
    return;
L_08910FF0:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
      if (branch_taken) {
          goto L_0891101C;
      }
      goto L_0891100C;
    }
L_0891100C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08911020;
      }
      goto L_08911014;
    }
L_08911014:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08911074;
      }
      goto L_0891101C;
    }
L_0891101C:
    ctx.gpr[5] = (0u | 0u);
    goto L_08911020;
L_08911020:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891103C;
      }
      goto L_08911028;
    }
L_08911028:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(68))))));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(695), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(695)));
      if (branch_taken) {
          goto L_0891104C;
      }
      goto L_0891103C;
    }
L_0891103C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(69))))));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(695), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(695)));
    goto L_0891104C;
L_0891104C:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08911074;
      }
      goto L_08911054;
    }
L_08911054:
    ctx.gpr[31] = (0x0891105Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x0891105Cu) goto L_0891105C;
    return;
L_0891105C:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[18]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (ctx.hi);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(695), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08910F8C;
      }
      goto L_08911074;
    }
L_08911074:
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
L_0891108C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1952)));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[8];
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
      if (branch_taken) {
          goto L_089110A4;
      }
      goto L_0891109C;
    }
L_0891109C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089110B4;
      }
      goto L_089110A4;
    }
L_089110A4:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1952), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1956), ctx.gpr[5]);
    goto L_089110B4;
L_089110B4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089110BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2060), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4199)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0891111C;
      }
      goto L_089110E0;
    }
L_089110E0:
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x089110ECu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 865u, 0x08AE31F0u>(ctx, &aot_mem) && ctx.pc == 0x089110ECu) goto L_089110EC;
    return;
L_089110EC:
    ctx.gpr[31] = (0x089110F4u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 893u, 0x08AE34B0u>(ctx, &aot_mem) && ctx.pc == 0x089110F4u) goto L_089110F4;
    return;
L_089110F4:
    ctx.fpr[12] = ctx.fpr[20] / ctx.fpr[0];
    ctx.gpr[6] = (16512u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0891111Cu);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(891), static_cast<std::uint8_t>(ctx.gpr[6]));
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 875u, 0x08AE3358u>(ctx, &aot_mem) && ctx.pc == 0x0891111Cu) goto L_0891111C;
    return;
L_0891111C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08911130:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2248)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08911138:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2248), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08911140:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x08911160u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 271u, 0x0884D5D4u>(ctx, &aot_mem) && ctx.pc == 0x08911160u) goto L_08911160;
    return;
L_08911160:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[17] = (4u << 16u);
      if (branch_taken) {
          goto L_089111FC;
      }
      goto L_0891116C;
    }
L_0891116C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
        goto L_08911184;
    }
    goto L_08911178;
L_08911178:
    ctx.gpr[31] = (0x08911180u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x08911180u) goto L_08911180;
    return;
L_08911180:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_08911184;
L_08911184:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(50))))));
    ctx.gpr[31] = (0x08911190u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(48))))));
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 633u, 0x0893E8D8u>(ctx, &aot_mem) && ctx.pc == 0x08911190u) goto L_08911190;
    return;
L_08911190:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089111F0;
      }
      goto L_08911198;
    }
L_08911198:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[4] & 16u);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
      if (branch_taken) {
          goto L_089111D8;
      }
      goto L_089111B0;
    }
L_089111B0:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089111F0;
      }
      goto L_089111C0;
    }
L_089111C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089111F0;
      }
      goto L_089111D8;
    }
L_089111D8:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089111E8;
      }
      goto L_089111E0;
    }
L_089111E0:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089111F0;
      }
      goto L_089111E8;
    }
L_089111E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089111FC;
      }
      goto L_089111F0;
    }
L_089111F0:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891116C;
      }
      goto L_089111FC;
    }
L_089111FC:
    ctx.gpr[2] = (0u < ctx.gpr[18] ? 1u : 0u);
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
L_08911218:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2116)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08911220:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08911238u);
    ctx.gpr[16] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 271u, 0x0884D5D4u>(ctx, &aot_mem) && ctx.pc == 0x08911238u) goto L_08911238;
    return;
L_08911238:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08911270;
      }
      goto L_08911244;
    }
L_08911244:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] & 16384u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08911264;
      }
      goto L_0891125C;
    }
L_0891125C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_08911270;
      }
      goto L_08911264;
    }
L_08911264:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08911244;
      }
      goto L_08911270;
    }
L_08911270:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08911284:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[6] = (0u | 17u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_089112F8;
      }
      goto L_089112A0;
    }
L_089112A0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(216));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089112B8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089112B8u) goto L_089112B8;
    return;
L_089112B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089112D0u);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089112D0u) goto L_089112D0;
    return;
L_089112D0:
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
          goto L_089112FC;
      }
      goto L_089112F8;
    }
L_089112F8:
    ctx.gpr[16] = (0u | 1u);
    goto L_089112FC;
L_089112FC:
    ctx.gpr[2] = (ctx.gpr[16] & 255u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08911310:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1780))))));
    ctx.gpr[2] = (ctx.gpr[4] & 2u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08911320:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2276)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08911348;
      }
      goto L_0891132C;
    }
L_0891132C:
    ctx.gpr[6] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08911350;
      }
      goto L_08911338;
    }
L_08911338:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8880)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8880), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08911364;
      }
      goto L_08911348;
    }
L_08911348:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08911368;
      }
      goto L_08911350;
    }
L_08911350:
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08911364;
      }
      goto L_08911358;
    }
L_08911358:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8880)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8880), ctx.gpr[6]);
    goto L_08911364;
L_08911364:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2276), ctx.gpr[5]);
    goto L_08911368;
L_08911368:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08911370:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2144)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0891139C;
      }
      goto L_08911390;
    }
L_08911390:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2144)));
    ctx.gpr[31] = (0x0891139Cu);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(2144));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 430u, 0x08A93004u>(ctx, &aot_mem) && ctx.pc == 0x0891139Cu) goto L_0891139C;
    return;
L_0891139C:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(2128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2144), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2148), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2156), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2160), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2164), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2168), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2172), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2176), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2180))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(52))))));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2180), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2180))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(52))))));
    ctx.gpr[5] = (ctx.gpr[5] & 2u);
    ctx.gpr[5] = (ctx.gpr[5] >> 1u);
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] << 1u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2180), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2180))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(52))))));
    ctx.gpr[5] = (ctx.gpr[5] & 4u);
    ctx.gpr[5] = (ctx.gpr[5] >> 2u);
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2180), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2144)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08911480;
      }
      goto L_08911468;
    }
L_08911468:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2144)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08911480;
      }
      goto L_08911474;
    }
L_08911474:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2144)));
    ctx.gpr[31] = (0x08911480u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(2144));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem) && ctx.pc == 0x08911480u) goto L_08911480;
    return;
L_08911480:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08911494:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(476)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[7] & 1u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08911518;
      }
      goto L_089114D0;
    }
L_089114D0:
    ctx.gpr[31] = (0x089114D8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 195u, 0x0886D420u>(ctx, &aot_mem) && ctx.pc == 0x089114D8u) goto L_089114D8;
    return;
L_089114D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
        goto L_089114F0;
    }
    goto L_089114E4;
L_089114E4:
    ctx.gpr[31] = (0x089114ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x089114ECu) goto L_089114EC;
    return;
L_089114EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_089114F0;
L_089114F0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (0u | 89u);
    ctx.gpr[31] = (0x08911500u);
    ctx.gpr[7] = (0u | 414u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem) && ctx.pc == 0x08911500u) goto L_08911500;
    return;
L_08911500:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0891150Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x0891150Cu) goto L_0891150C;
    return;
L_0891150C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(476)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(476), ctx.gpr[4]);
    goto L_08911518;
L_08911518:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_089115A0;
      }
      goto L_08911520;
    }
L_08911520:
    ctx.gpr[31] = (0x08911528u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x08911528u) goto L_08911528;
    return;
L_08911528:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08911728;
      }
      goto L_08911530;
    }
L_08911530:
    ctx.gpr[31] = (0x08911538u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x08911538u) goto L_08911538;
    return;
L_08911538:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (0u | 413u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08911728;
      }
      goto L_08911548;
    }
L_08911548:
    ctx.gpr[31] = (0x08911550u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x08911550u) goto L_08911550;
    return;
L_08911550:
    ctx.gpr[4] = (50298u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
        goto L_08911574;
    }
    goto L_08911568;
L_08911568:
    ctx.gpr[31] = (0x08911570u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x08911570u) goto L_08911570;
    return;
L_08911570:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_08911574;
L_08911574:
    ctx.gpr[8] = (16256u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[6] = (0u | 89u);
    ctx.gpr[31] = (0x0891158Cu);
    ctx.gpr[7] = (0u | 414u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 650u, 0x0893EA14u>(ctx, &aot_mem) && ctx.pc == 0x0891158Cu) goto L_0891158C;
    return;
L_0891158C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08911598u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x08911598u) goto L_08911598;
    return;
L_08911598:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08911728;
      }
      goto L_089115A0;
    }
L_089115A0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08911728;
      }
      goto L_089115A8;
    }
L_089115A8:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
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
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089115F0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089115F0u) goto L_089115F0;
    return;
L_089115F0:
    ctx.gpr[4] = (16256u << 16u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08911628;
      }
      goto L_089115FC;
    }
L_089115FC:
    ctx.gpr[31] = (0x08911604u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x08911604u) goto L_08911604;
    return;
L_08911604:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (0u | 414u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08911628;
      }
      goto L_08911614;
    }
L_08911614:
    ctx.gpr[31] = (0x0891161Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x0891161Cu) goto L_0891161C;
    return;
L_0891161C:
    ctx.gpr[4] = (50298u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08911628;
L_08911628:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
        goto L_08911640;
    }
    goto L_08911634;
L_08911634:
    ctx.gpr[31] = (0x0891163Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x0891163Cu) goto L_0891163C;
    return;
L_0891163C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_08911640;
L_08911640:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (0u | 89u);
    ctx.gpr[31] = (0x08911654u);
    ctx.gpr[7] = (0u | 413u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 650u, 0x0893EA14u>(ctx, &aot_mem) && ctx.pc == 0x08911654u) goto L_08911654;
    return;
L_08911654:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08911660u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x08911660u) goto L_08911660;
    return;
L_08911660:
    ctx.gpr[31] = (0x08911668u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x08911668u) goto L_08911668;
    return;
L_08911668:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089116F4;
      }
      goto L_08911670;
    }
L_08911670:
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.gpr[31] = (0x0891169Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x0891169Cu) goto L_0891169C;
    return;
L_0891169C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.gpr[31] = (0x089116B0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089116B0u) goto L_089116B0;
    return;
L_089116B0:
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x089116BCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089116BCu) goto L_089116BC;
    return;
L_089116BC:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[26];
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[26] + ctx.fpr[12];
    ctx.gpr[31] = (0x089116DCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 73u, 0x08890474u>(ctx, &aot_mem) && ctx.pc == 0x089116DCu) goto L_089116DC;
    return;
L_089116DC:
    ctx.gpr[31] = (0x089116E4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089116E4u) goto L_089116E4;
    return;
L_089116E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_089116F4;
L_089116F4:
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
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
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08911728;
      }
      goto L_0891171C;
    }
L_0891171C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08911728u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08912718;
L_08911728:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08911750:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-1040)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08911774;
      }
      goto L_0891175C;
    }
L_0891175C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[5] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089117A4;
      }
      goto L_0891176C;
    }
L_0891176C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 8u);
      if (branch_taken) {
          goto L_0891177C;
      }
      goto L_08911774;
    }
L_08911774:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089117B0;
      }
      goto L_0891177C;
    }
L_0891177C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 9u);
      if (branch_taken) {
          goto L_089117A4;
      }
      goto L_08911784;
    }
L_08911784:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 12u);
      if (branch_taken) {
          goto L_089117A4;
      }
      goto L_0891178C;
    }
L_0891178C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 13u);
      if (branch_taken) {
          goto L_089117A4;
      }
      goto L_08911794;
    }
L_08911794:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 15u);
      if (branch_taken) {
          goto L_089117A4;
      }
      goto L_0891179C;
    }
L_0891179C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089117AC;
      }
      goto L_089117A4;
    }
L_089117A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089117B0;
      }
      goto L_089117AC;
    }
L_089117AC:
    ctx.gpr[2] = (0u | 0u);
    goto L_089117B0;
L_089117B0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089117B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[31] = (0x089117F4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 271u, 0x0884D5D4u>(ctx, &aot_mem) && ctx.pc == 0x089117F4u) goto L_089117F4;
    return;
L_089117F4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (49408u << 16u);
      if (branch_taken) {
          goto L_089118F4;
      }
      goto L_08911800;
    }
L_08911800:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(48))))));
    goto L_0891180C;
L_0891180C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(50))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08911850;
      }
      goto L_08911830;
    }
L_08911830:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08911844u);
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    goto L_089119D0;
L_08911844:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(48))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0891186C;
      }
      goto L_08911850;
    }
L_08911850:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08911864u);
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    goto L_08911A90;
L_08911864:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0891186C;
L_0891186C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089118E8;
      }
      goto L_08911874;
    }
L_08911874:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08911894u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 175u, 0x089089B8u>(ctx, &aot_mem) && ctx.pc == 0x08911894u) goto L_08911894;
    return;
L_08911894:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(8), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089118C8u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 73u, 0x08890474u>(ctx, &aot_mem) && ctx.pc == 0x089118C8u) goto L_089118C8;
    return;
L_089118C8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_089118E8;
L_089118E8:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[18] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(48))))));
        goto L_0891180C;
    }
    goto L_089118F4;
L_089118F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[6] = (0u | 58u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08911910;
      }
      goto L_08911904;
    }
L_08911904:
    ctx.gpr[6] = (0u | 57u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08911918;
      }
      goto L_08911910;
    }
L_08911910:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    goto L_08911918;
L_08911918:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089119A0;
      }
      goto L_08911920;
    }
L_08911920:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089119A0;
      }
      goto L_08911938;
    }
L_08911938:
    ctx.gpr[8] = (17530u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08911954u);
    ctx.gpr[7] = (0u | 152u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem) && ctx.pc == 0x08911954u) goto L_08911954;
    return;
L_08911954:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (16243u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 13107u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x08911978u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 73u, 0x08890474u>(ctx, &aot_mem) && ctx.pc == 0x08911978u) goto L_08911978;
    return;
L_08911978:
    ctx.gpr[4] = (16253u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] | 28836u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (14545u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[4] | 46871u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_089119A0;
L_089119A0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
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
L_089119D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(43) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08911A88;
      }
      goto L_089119E4;
    }
L_089119E4:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-12688)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089119FC:
    ctx.gpr[4] = (0u | 60u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 250u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08911A88;
      }
      goto L_08911A10;
    }
L_08911A10:
    ctx.gpr[4] = (0u | 60u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 251u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08911A88;
      }
      goto L_08911A24;
    }
L_08911A24:
    ctx.gpr[4] = (0u | 60u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 252u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08911A88;
      }
      goto L_08911A38;
    }
L_08911A38:
    ctx.gpr[4] = (0u | 60u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 253u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08911A88;
      }
      goto L_08911A4C;
    }
L_08911A4C:
    ctx.gpr[4] = (0u | 60u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 256u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08911A88;
      }
      goto L_08911A60;
    }
L_08911A60:
    ctx.gpr[4] = (0u | 60u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 254u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08911A88;
      }
      goto L_08911A74;
    }
L_08911A74:
    ctx.gpr[4] = (0u | 60u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 255u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08911A88;
      }
      goto L_08911A88;
    }
L_08911A88:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08911A90:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x08911AB4u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08911AB4u) goto L_08911AB4;
    return;
L_08911AB4:
    ctx.gpr[31] = (0x08911ABCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08911ABCu) goto L_08911ABC;
    return;
L_08911ABC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08911AD0;
      }
      goto L_08911AC4;
    }
L_08911AC4:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08911AE0;
      }
      goto L_08911AD0;
    }
L_08911AD0:
    ctx.gpr[31] = (0x08911AD8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08910DB8;
L_08911AD8:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08911AE0;
L_08911AE0:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-250));
    ctx.gpr[4] = (ctx.gpr[18] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08911B64;
      }
      goto L_08911AF0;
    }
L_08911AF0:
    ctx.gpr[18] = (ctx.gpr[18] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[18]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-12512)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08911B08:
    ctx.gpr[4] = (0u | 6u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08911B64;
      }
      goto L_08911B14;
    }
L_08911B14:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08911B64;
      }
      goto L_08911B20;
    }
L_08911B20:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08911B64;
      }
      goto L_08911B2C;
    }
L_08911B2C:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08911B64;
      }
      goto L_08911B38;
    }
L_08911B38:
    ctx.gpr[4] = (0u | 7u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08911B64;
      }
      goto L_08911B44;
    }
L_08911B44:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (0u | 8u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08911B64;
      }
      goto L_08911B54;
    }
L_08911B54:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (0u | 9u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08911B64;
      }
      goto L_08911B64;
    }
L_08911B64:
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
L_08911B7C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[6] = (0u | 76u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    ctx.gpr[31] = (0x08911BA8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9256));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08911BA8u) goto L_08911BA8;
    return;
L_08911BA8:
    ctx.gpr[18] = (ctx.gpr[29] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (0u | 173u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08911BF0;
      }
      goto L_08911BBC;
    }
L_08911BBC:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08911BCCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x08911BCCu) goto L_08911BCC;
    return;
L_08911BCC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08911BE0;
      }
      goto L_08911BD8;
    }
L_08911BD8:
    ctx.gpr[31] = (0x08911BE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 620u, 0x0888FEB4u>(ctx, &aot_mem) && ctx.pc == 0x08911BE0u) goto L_08911BE0;
    return;
L_08911BE0:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08911BBC;
      }
      goto L_08911BF0;
    }
L_08911BF0:
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
L_08911C08:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08911C24u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x08911C24u) goto L_08911C24;
    return;
L_08911C24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    ctx.gpr[17] = (32768u << 16u);
      if (branch_taken) {
          goto L_08911D14;
      }
      goto L_08911C38;
    }
L_08911C38:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    ctx.gpr[6] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08911C8C;
      }
      goto L_08911C48;
    }
L_08911C48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08911C54u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 197u, 0x0886D43Cu>(ctx, &aot_mem) && ctx.pc == 0x08911C54u) goto L_08911C54;
    return;
L_08911C54:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 59u);
    ctx.gpr[31] = (0x08911C68u);
    ctx.gpr[7] = (0u | 249u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 175u, 0x089089B8u>(ctx, &aot_mem) && ctx.pc == 0x08911C68u) goto L_08911C68;
    return;
L_08911C68:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08911C84;
      }
      goto L_08911C74;
    }
L_08911C74:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    goto L_08911C84;
L_08911C84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08911D14;
      }
      goto L_08911C8C;
    }
L_08911C8C:
    ctx.gpr[31] = (0x08911C94u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x08911C94u) goto L_08911C94;
    return;
L_08911C94:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08911CB0;
      }
      goto L_08911C9C;
    }
L_08911C9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[31] = (0x08911CA8u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x08911CA8u) goto L_08911CA8;
    return;
L_08911CA8:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08911CD8;
      }
      goto L_08911CB0;
    }
L_08911CB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(468)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(468), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 59u);
    ctx.gpr[31] = (0x08911CD0u);
    ctx.gpr[7] = (0u | 242u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 175u, 0x089089B8u>(ctx, &aot_mem) && ctx.pc == 0x08911CD0u) goto L_08911CD0;
    return;
L_08911CD0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08911D04;
      }
      goto L_08911CD8;
    }
L_08911CD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(468)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(468), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 59u);
    ctx.gpr[31] = (0x08911D00u);
    ctx.gpr[7] = (0u | 235u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 175u, 0x089089B8u>(ctx, &aot_mem) && ctx.pc == 0x08911D00u) goto L_08911D00;
    return;
L_08911D00:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08911D04;
L_08911D04:
    ctx.gpr[5] = (2193u << 16u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08911D14u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-12812));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem) && ctx.pc == 0x08911D14u) goto L_08911D14;
    return;
L_08911D14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(472)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(468)));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(472), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08911D3C;
      }
      goto L_08911D2C;
    }
L_08911D2C:
    ctx.gpr[17] = (ctx.gpr[17] | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(472), ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] | 4u);
      if (branch_taken) {
          goto L_08911D4C;
      }
      goto L_08911D3C;
    }
L_08911D3C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[17] = (ctx.gpr[17] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(472), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[17] | 4u);
    goto L_08911D4C;
L_08911D4C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(472), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1744), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1748), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08911D6C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08911DA0;
      }
      goto L_08911D90;
    }
L_08911D90:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08911DBC;
      }
      goto L_08911DA0;
    }
L_08911DA0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(472)));
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] & 8u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(1396));
      if (branch_taken) {
          goto L_08911DC4;
      }
      goto L_08911DB4;
    }
L_08911DB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08911DC8;
      }
      goto L_08911DBC;
    }
L_08911DBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08911F80;
      }
      goto L_08911DC4;
    }
L_08911DC4:
    ctx.gpr[18] = (0u | 0u);
    goto L_08911DC8;
L_08911DC8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08911DE4;
      }
      goto L_08911DD0;
    }
L_08911DD0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(614))))));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08911DE4;
      }
      goto L_08911DE0;
    }
L_08911DE0:
    ctx.gpr[18] = (0u | 0u);
    goto L_08911DE4;
L_08911DE4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08911E00;
      }
      goto L_08911DEC;
    }
L_08911DEC:
    ctx.gpr[31] = (0x08911DF4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 187u, 0x08B00B68u>(ctx, &aot_mem) && ctx.pc == 0x08911DF4u) goto L_08911DF4;
    return;
L_08911DF4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08911E00;
      }
      goto L_08911DFC;
    }
L_08911DFC:
    ctx.gpr[18] = (0u | 0u);
    goto L_08911E00;
L_08911E00:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08911E60;
      }
      goto L_08911E1C;
    }
L_08911E1C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (0u | 24u);
    if (ctx.gpr[5] == ctx.gpr[6]) {
    ctx.gpr[17] = (0u | 1u);
        goto L_08911E60;
    }
    goto L_08911E2C;
L_08911E2C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (0u | 25u);
    if (ctx.gpr[5] == ctx.gpr[6]) {
    ctx.gpr[17] = (0u | 1u);
        goto L_08911E60;
    }
    goto L_08911E3C;
L_08911E3C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (0u | 26u);
    if (ctx.gpr[5] == ctx.gpr[6]) {
    ctx.gpr[17] = (0u | 1u);
        goto L_08911E60;
    }
    goto L_08911E4C;
L_08911E4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 27u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[17] & 255u);
      if (branch_taken) {
          goto L_08911E64;
      }
      goto L_08911E5C;
    }
L_08911E5C:
    ctx.gpr[17] = (0u | 1u);
    goto L_08911E60;
L_08911E60:
    ctx.gpr[4] = (ctx.gpr[17] & 255u);
    goto L_08911E64;
L_08911E64:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08911E70;
      }
      goto L_08911E6C;
    }
L_08911E6C:
    ctx.gpr[18] = (0u | 0u);
    goto L_08911E70;
L_08911E70:
    ctx.gpr[31] = (0x08911E78u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 31u, 0x0891826Cu>(ctx, &aot_mem) && ctx.pc == 0x08911E78u) goto L_08911E78;
    return;
L_08911E78:
    ctx.gpr[31] = (0x08911E80u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089101A4;
L_08911E80:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08911E8C;
      }
      goto L_08911E88;
    }
L_08911E88:
    ctx.gpr[18] = (0u | 0u);
    goto L_08911E8C;
L_08911E8C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08911F68;
      }
      goto L_08911E94;
    }
L_08911E94:
    ctx.gpr[31] = (0x08911E9Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089101A4;
L_08911E9C:
    ctx.gpr[31] = (0x08911EA4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089101A4;
L_08911EA4:
    ctx.gpr[31] = (0x08911EACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089101A4;
L_08911EAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(468)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08911EC0;
      }
      goto L_08911EC0;
    }
L_08911EC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(472)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08911ED8;
      }
      goto L_08911ED0;
    }
L_08911ED0:
    ctx.gpr[31] = (0x08911ED8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08911C08;
L_08911ED8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08911F08;
      }
      goto L_08911EEC;
    }
L_08911EEC:
    ctx.gpr[31] = (0x08911EF4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089101A4;
L_08911EF4:
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08911F00u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08911F98;
L_08911F00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08911F48;
      }
      goto L_08911F08;
    }
L_08911F08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08911F34;
      }
      goto L_08911F18;
    }
L_08911F18:
    ctx.gpr[31] = (0x08911F20u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089101A4;
L_08911F20:
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08911F2Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0891227C;
L_08911F2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08911F48;
      }
      goto L_08911F34;
    }
L_08911F34:
    ctx.gpr[31] = (0x08911F3Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089101A4;
L_08911F3C:
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08911F48u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 20u, 0x08930380u>(ctx, &aot_mem) && ctx.pc == 0x08911F48u) goto L_08911F48;
    return;
L_08911F48:
    ctx.gpr[31] = (0x08911F50u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08911F50u) goto L_08911F50;
    return;
L_08911F50:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08911F80;
      }
      goto L_08911F58;
    }
L_08911F58:
    ctx.gpr[31] = (0x08911F60u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08912560;
L_08911F60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08911F80;
      }
      goto L_08911F68;
    }
L_08911F68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(472)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08911F80;
      }
      goto L_08911F78;
    }
L_08911F78:
    ctx.gpr[31] = (0x08911F80u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0891241C;
L_08911F80:
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
L_08911F98:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[31] = (0x08911FECu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 934u, 0x0885FE8Cu>(ctx, &aot_mem) && ctx.pc == 0x08911FECu) goto L_08911FEC;
    return;
L_08911FEC:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08912018u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 178u, 0x08904B64u>(ctx, &aot_mem) && ctx.pc == 0x08912018u) goto L_08912018;
    return;
L_08912018:
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 0u);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (0u | 1u);
        goto L_08912088;
    }
    goto L_08912088;
L_08912088:
    ctx.gpr[6] = (16128u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] & 255u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (0u | 0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (0u | 1u);
        goto L_089120A8;
    }
    goto L_089120A8;
L_089120A8:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08912130;
      }
      goto L_089120B4;
    }
L_089120B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089120C4u);
    ctx.gpr[6] = (0u | 203u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x089120C4u) goto L_089120C4;
    return;
L_089120C4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
        goto L_089120F0;
    }
    goto L_089120D0;
L_089120D0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08912128;
      }
      goto L_089120D8;
    }
L_089120D8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08912128;
      }
      goto L_089120EC;
    }
L_089120EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    goto L_089120F0;
L_089120F0:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(376));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0891210Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891210Cu) goto L_0891210C;
    return;
L_0891210C:
    ctx.gpr[8] = (16640u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08912128u);
    ctx.gpr[7] = (0u | 203u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem) && ctx.pc == 0x08912128u) goto L_08912128;
    return;
L_08912128:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08912228;
      }
      goto L_08912130;
    }
L_08912130:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089121B4;
      }
      goto L_08912138;
    }
L_08912138:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08912148u);
    ctx.gpr[6] = (0u | 202u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x08912148u) goto L_08912148;
    return;
L_08912148:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
        goto L_08912174;
    }
    goto L_08912154;
L_08912154:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089121AC;
      }
      goto L_0891215C;
    }
L_0891215C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089121AC;
      }
      goto L_08912170;
    }
L_08912170:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    goto L_08912174;
L_08912174:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(376));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08912190u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08912190u) goto L_08912190;
    return;
L_08912190:
    ctx.gpr[8] = (16640u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089121ACu);
    ctx.gpr[7] = (0u | 202u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem) && ctx.pc == 0x089121ACu) goto L_089121AC;
    return;
L_089121AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08912228;
      }
      goto L_089121B4;
    }
L_089121B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089121C4u);
    ctx.gpr[6] = (0u | 201u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x089121C4u) goto L_089121C4;
    return;
L_089121C4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
        goto L_089121F0;
    }
    goto L_089121D0;
L_089121D0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08912228;
      }
      goto L_089121D8;
    }
L_089121D8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08912228;
      }
      goto L_089121EC;
    }
L_089121EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    goto L_089121F0;
L_089121F0:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(376));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0891220Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891220Cu) goto L_0891220C;
    return;
L_0891220C:
    ctx.gpr[8] = (16640u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08912228u);
    ctx.gpr[7] = (0u | 201u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem) && ctx.pc == 0x08912228u) goto L_08912228;
    return;
L_08912228:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (ctx.gpr[4] | 256u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08912258;
      }
      goto L_08912244;
    }
L_08912244:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08912258;
      }
      goto L_08912250;
    }
L_08912250:
    ctx.gpr[31] = (0x08912258u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem) && ctx.pc == 0x08912258u) goto L_08912258;
    return;
L_08912258:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891227C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[31] = (0x089122D4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 934u, 0x0885FE8Cu>(ctx, &aot_mem) && ctx.pc == 0x089122D4u) goto L_089122D4;
    return;
L_089122D4:
    ctx.fpr[24] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08912300u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 178u, 0x08904B64u>(ctx, &aot_mem) && ctx.pc == 0x08912300u) goto L_08912300;
    return;
L_08912300:
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[24]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (0u | 1u);
        goto L_08912370;
    }
    goto L_08912370;
L_08912370:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(80)));
    ctx.gpr[16] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x0891238Cu);
    ctx.gpr[6] = (0u | 249u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x0891238Cu) goto L_0891238C;
    return;
L_0891238C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
        goto L_089123D4;
    }
    goto L_08912398;
L_08912398:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
        goto L_089123D4;
    }
    goto L_089123A8;
L_089123A8:
    if (ctx.gpr[16] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
        goto L_089123D4;
    }
    goto L_089123B0;
L_089123B0:
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[22];
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x089123D0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 73u, 0x08890474u>(ctx, &aot_mem) && ctx.pc == 0x089123D0u) goto L_089123D0;
    return;
L_089123D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    goto L_089123D4;
L_089123D4:
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089123F4;
      }
      goto L_089123E0;
    }
L_089123E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089123F4;
      }
      goto L_089123EC;
    }
L_089123EC:
    ctx.gpr[31] = (0x089123F4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem) && ctx.pc == 0x089123F4u) goto L_089123F4;
    return;
L_089123F4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891241C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 9u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08912528;
      }
      goto L_08912444;
    }
L_08912444:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
      if (branch_taken) {
          goto L_0891250C;
      }
      goto L_08912454;
    }
L_08912454:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08912464u);
    ctx.gpr[6] = (0u | 203u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x08912464u) goto L_08912464;
    return;
L_08912464:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08912478u);
    ctx.gpr[6] = (0u | 201u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x08912478u) goto L_08912478;
    return;
L_08912478:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0891248Cu);
    ctx.gpr[6] = (0u | 202u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x0891248Cu) goto L_0891248C;
    return;
L_0891248C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089124A0;
      }
      goto L_08912494;
    }
L_08912494:
    ctx.gpr[5] = (50298u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089124A0;
L_089124A0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089124B4;
      }
      goto L_089124A8;
    }
L_089124A8:
    ctx.gpr[5] = (50298u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089124B4;
L_089124B4:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
        goto L_089124CC;
    }
    goto L_089124BC;
L_089124BC:
    ctx.gpr[5] = (50298u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    goto L_089124CC;
L_089124CC:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(376));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089124E8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089124E8u) goto L_089124E8;
    return;
L_089124E8:
    ctx.gpr[8] = (16256u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08912504u);
    ctx.gpr[7] = (0u | 204u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem) && ctx.pc == 0x08912504u) goto L_08912504;
    return;
L_08912504:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(472)));
      if (branch_taken) {
          goto L_0891252C;
      }
      goto L_0891250C;
    }
L_0891250C:
    ctx.gpr[8] = (16512u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08912528u);
    ctx.gpr[7] = (0u | 99u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem) && ctx.pc == 0x08912528u) goto L_08912528;
    return;
L_08912528:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(472)));
    goto L_0891252C;
L_0891252C:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(472), ctx.gpr[4]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-257));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
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
L_08912560:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x0891258Cu);
    ctx.gpr[6] = (0u | 235u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x0891258Cu) goto L_0891258C;
    return;
L_0891258C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089125A8;
      }
      goto L_08912598;
    }
L_08912598:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089125CC;
      }
      goto L_089125A8;
    }
L_089125A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089125B8u);
    ctx.gpr[6] = (0u | 242u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x089125B8u) goto L_089125B8;
    return;
L_089125B8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
        goto L_089125D4;
    }
    goto L_089125C4;
L_089125C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089125E0;
      }
      goto L_089125CC;
    }
L_089125CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089126F8;
      }
      goto L_089125D4;
    }
L_089125D4:
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08912620;
      }
      goto L_089125E0;
    }
L_089125E0:
    ctx.gpr[31] = (0x089125E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08912E78;
L_089125E8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[31] = (0x0891260Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem) && ctx.pc == 0x0891260Cu) goto L_0891260C;
    return;
L_0891260C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08912628;
      }
      goto L_08912618;
    }
L_08912618:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089126F8;
      }
      goto L_08912620;
    }
L_08912620:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089126F8;
      }
      goto L_08912628;
    }
L_08912628:
    ctx.gpr[31] = (0x08912630u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089101A4;
L_08912630:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089126F8;
      }
      goto L_08912638;
    }
L_08912638:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[31] = (0x0891264Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 621u, 0x0889EB08u>(ctx, &aot_mem) && ctx.pc == 0x0891264Cu) goto L_0891264C;
    return;
L_0891264C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(724)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08912660u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 251u, 0x08969194u>(ctx, &aot_mem) && ctx.pc == 0x08912660u) goto L_08912660;
    return;
L_08912660:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0891266Cu);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 250u, 0x0896918Cu>(ctx, &aot_mem) && ctx.pc == 0x0891266Cu) goto L_0891266C;
    return;
L_0891266C:
    ctx.gpr[17] = (ctx.gpr[17] << 6u);
    ctx.gpr[17] = (ctx.gpr[2] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(240));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[20] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[31] = (0x0891268Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089101A4;
L_0891268C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0891269Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891269Cu) goto L_0891269C;
    return;
L_0891269C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089126DC;
      }
      goto L_089126A4;
    }
L_089126A4:
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089126B8u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 239u, 0x088619ACu>(ctx, &aot_mem) && ctx.pc == 0x089126B8u) goto L_089126B8;
    return;
L_089126B8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[31] = (0x089126DCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 206u, 0x08A45338u>(ctx, &aot_mem) && ctx.pc == 0x089126DCu) goto L_089126DC;
    return;
L_089126DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(240));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089126F8u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089126F8u) goto L_089126F8;
    return;
L_089126F8:
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
L_08912718:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x0891273Cu);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    goto L_08912E78;
L_0891273C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[31] = (0x08912760u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem) && ctx.pc == 0x08912760u) goto L_08912760;
    return;
L_08912760:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08912820;
      }
      goto L_0891276C;
    }
L_0891276C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[31] = (0x08912780u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 621u, 0x0889EB08u>(ctx, &aot_mem) && ctx.pc == 0x08912780u) goto L_08912780;
    return;
L_08912780:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(724)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08912794u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 251u, 0x08969194u>(ctx, &aot_mem) && ctx.pc == 0x08912794u) goto L_08912794;
    return;
L_08912794:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089127A0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 250u, 0x0896918Cu>(ctx, &aot_mem) && ctx.pc == 0x089127A0u) goto L_089127A0;
    return;
L_089127A0:
    ctx.gpr[16] = (ctx.gpr[16] << 6u);
    ctx.gpr[16] = (ctx.gpr[2] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(240));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089127C4u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089127C4u) goto L_089127C4;
    return;
L_089127C4:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08912804;
      }
      goto L_089127CC;
    }
L_089127CC:
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089127E0u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 239u, 0x088619ACu>(ctx, &aot_mem) && ctx.pc == 0x089127E0u) goto L_089127E0;
    return;
L_089127E0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[31] = (0x08912804u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 206u, 0x08A45338u>(ctx, &aot_mem) && ctx.pc == 0x08912804u) goto L_08912804;
    return;
L_08912804:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(240));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08912820u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08912820u) goto L_08912820;
    return;
L_08912820:
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
L_0891283C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08912860;
      }
      goto L_08912850;
    }
L_08912850:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(614))))));
    ctx.gpr[6] = (ctx.gpr[6] & 1u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08912878;
      }
      goto L_08912860;
    }
L_08912860:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(472)));
    ctx.gpr[6] = (ctx.gpr[6] & 8u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08912880;
      }
      goto L_08912870;
    }
L_08912870:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089128A0;
      }
      goto L_08912878;
    }
L_08912878:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089128A0;
      }
      goto L_08912880;
    }
L_08912880:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08912870;
      }
      goto L_08912888;
    }
L_08912888:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08912894u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 169u, 0x08B00A50u>(ctx, &aot_mem) && ctx.pc == 0x08912894u) goto L_08912894;
    return;
L_08912894:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08912870;
      }
      goto L_0891289C;
    }
L_0891289C:
    ctx.gpr[2] = (0u | 1u);
    goto L_089128A0;
L_089128A0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089128AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[6] = (0u | 58u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089128E0;
      }
      goto L_089128D4;
    }
L_089128D4:
    ctx.gpr[6] = (0u | 57u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_089128E8;
      }
      goto L_089128E0;
    }
L_089128E0:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    goto L_089128E8;
L_089128E8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08912920;
      }
      goto L_089128F0;
    }
L_089128F0:
    ctx.gpr[31] = (0x089128F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08910B38;
L_089128F8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08912920;
      }
      goto L_08912900;
    }
L_08912900:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-20211)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08912920;
      }
      goto L_0891291C;
    }
L_0891291C:
    ctx.gpr[17] = (0u | 1u);
    goto L_08912920;
L_08912920:
    ctx.gpr[2] = (ctx.gpr[17] & 255u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08912938:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[6] = (0u | 58u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0891296C;
      }
      goto L_08912960;
    }
L_08912960:
    ctx.gpr[6] = (0u | 57u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08912974;
      }
      goto L_0891296C;
    }
L_0891296C:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    goto L_08912974;
L_08912974:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089129D8;
      }
      goto L_0891297C;
    }
L_0891297C:
    ctx.gpr[31] = (0x08912984u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08910B38;
L_08912984:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089129D8;
      }
      goto L_0891298C;
    }
L_0891298C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2276)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_089129AC;
      }
      goto L_0891299C;
    }
L_0891299C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-20210)));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[17] = (0u | 1u);
        goto L_089129D8;
    }
    goto L_089129A8;
L_089129A8:
    ctx.gpr[5] = (0u | 2u);
    goto L_089129AC;
L_089129AC:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089129D8;
      }
      goto L_089129B4;
    }
L_089129B4:
    ctx.gpr[31] = (0x089129BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x089129BCu) goto L_089129BC;
    return;
L_089129BC:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[17] = (0u | 1u);
        goto L_089129D8;
    }
    goto L_089129C4;
L_089129C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089129D8;
      }
      goto L_089129D4;
    }
L_089129D4:
    ctx.gpr[17] = (0u | 1u);
    goto L_089129D8;
L_089129D8:
    ctx.gpr[2] = (ctx.gpr[17] & 255u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089129F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[6] = (0u | 58u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08912A24;
      }
      goto L_08912A18;
    }
L_08912A18:
    ctx.gpr[6] = (0u | 57u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08912A2C;
      }
      goto L_08912A24;
    }
L_08912A24:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    goto L_08912A2C;
L_08912A2C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08912A58;
      }
      goto L_08912A34;
    }
L_08912A34:
    ctx.gpr[31] = (0x08912A3Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08910B38;
L_08912A3C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08912A58;
      }
      goto L_08912A44;
    }
L_08912A44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08912A58;
      }
      goto L_08912A54;
    }
L_08912A54:
    ctx.gpr[17] = (0u | 1u);
    goto L_08912A58;
L_08912A58:
    ctx.gpr[2] = (ctx.gpr[17] & 255u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08912A70:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(236)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] & 256u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08912ADC;
      }
      goto L_08912A9C;
    }
L_08912A9C:
    ctx.gpr[4] = (15107u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2092)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2092), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08912AD4;
    }
    goto L_08912AD4;
L_08912AD4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2092), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08912BCC;
      }
      goto L_08912ADC;
    }
L_08912ADC:
    ctx.gpr[31] = (0x08912AE4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08912AE4u) goto L_08912AE4;
    return;
L_08912AE4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08912B08;
      }
      goto L_08912AEC;
    }
L_08912AEC:
    ctx.gpr[31] = (0x08912AF4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 661u, 0x089474C4u>(ctx, &aot_mem) && ctx.pc == 0x08912AF4u) goto L_08912AF4;
    return;
L_08912AF4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08912B08;
      }
      goto L_08912B00;
    }
L_08912B00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08912BCC;
      }
      goto L_08912B08;
    }
L_08912B08:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 2u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15267u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7760)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (14417u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 46871u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[5] = (0u | 6u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
        goto L_08912B6C;
    }
    goto L_08912B5C;
L_08912B5C:
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    goto L_08912B6C;
L_08912B6C:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2092)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2092), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
        goto L_08912B8C;
    }
    goto L_08912B8C;
L_08912B8C:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2092), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08912BCC;
      }
      goto L_08912B9C;
    }
L_08912B9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(464)));
    ctx.gpr[5] = (256u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08912BC4;
      }
      goto L_08912BB0;
    }
L_08912BB0:
    ctx.gpr[4] = (14979u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2092), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08912BCC;
      }
      goto L_08912BC4;
    }
L_08912BC4:
    ctx.gpr[31] = (0x08912BCCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 468u, 0x08909C28u>(ctx, &aot_mem) && ctx.pc == 0x08912BCCu) goto L_08912BCC;
    return;
L_08912BCC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08912BE0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2228)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (0u | 43u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08912C14;
      }
      goto L_08912C08;
    }
L_08912C08:
    ctx.gpr[6] = (0u | 44u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08912C1C;
      }
      goto L_08912C14;
    }
L_08912C14:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_08912C1C;
L_08912C1C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (0u | 45u);
      if (branch_taken) {
          goto L_08912C3C;
      }
      goto L_08912C24;
    }
L_08912C24:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08912C3C;
      }
      goto L_08912C2C;
    }
L_08912C2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(456)));
    ctx.gpr[4] = (ctx.gpr[4] & 8192u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(236)));
        goto L_08912C44;
    }
    goto L_08912C3C;
L_08912C3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08912CD8;
      }
      goto L_08912C44;
    }
L_08912C44:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(236), ctx.gpr[4]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(472)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1793));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(472), ctx.gpr[4]);
    ctx.gpr[31] = (0x08912C78u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 36u, 0x08A08730u>(ctx, &aot_mem) && ctx.pc == 0x08912C78u) goto L_08912C78;
    return;
L_08912C78:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08912C84u);
    ctx.gpr[5] = (0u | 44u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem) && ctx.pc == 0x08912C84u) goto L_08912C84;
    return;
L_08912C84:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08912C94u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 789u, 0x0890F6ECu>(ctx, &aot_mem) && ctx.pc == 0x08912C94u) goto L_08912C94;
    return;
L_08912C94:
    ctx.gpr[8] = (17530u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 60u);
    ctx.gpr[31] = (0x08912CB0u);
    ctx.gpr[7] = (0u | 257u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem) && ctx.pc == 0x08912CB0u) goto L_08912CB0;
    return;
L_08912CB0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (2192u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08912CC8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22564));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem) && ctx.pc == 0x08912CC8u) goto L_08912CC8;
    return;
L_08912CC8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20384)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2256)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08912CD8;
L_08912CD8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08912CEC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[6] = (0u | 17u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08912DA8;
      }
      goto L_08912D1C;
    }
L_08912D1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08912D34u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08912D34u) goto L_08912D34;
    return;
L_08912D34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08912D4Cu);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08912D4Cu) goto L_08912D4C;
    return;
L_08912D4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    ctx.gpr[6] = (ctx.gpr[2] << 6u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08912D64u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 348u, 0x0881E25Cu>(ctx, &aot_mem) && ctx.pc == 0x08912D64u) goto L_08912D64;
    return;
L_08912D64:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08912DA0;
      }
      goto L_08912D84;
    }
L_08912D84:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1914)));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (16390u << 16u);
      if (branch_taken) {
          goto L_08912DB0;
      }
      goto L_08912D98;
    }
L_08912D98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08912E54;
      }
      goto L_08912DA0;
    }
L_08912DA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08912E54;
      }
      goto L_08912DA8;
    }
L_08912DA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08912E54;
      }
      goto L_08912DB0;
    }
L_08912DB0:
    ctx.gpr[4] = (ctx.gpr[4] | 2706u);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
    goto L_08912DC4;
L_08912DC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1784)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20376)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08912E40;
      }
      goto L_08912E00;
    }
L_08912E00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1784)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08912E10u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 627u, 0x089AB048u>(ctx, &aot_mem) && ctx.pc == 0x08912E10u) goto L_08912E10;
    return;
L_08912E10:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08912E40;
      }
      goto L_08912E18;
    }
L_08912E18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1784)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08912E2Cu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 36u, 0x088E43E0u>(ctx, &aot_mem) && ctx.pc == 0x08912E2Cu) goto L_08912E2C;
    return;
L_08912E2C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08912E40;
      }
      goto L_08912E34;
    }
L_08912E34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1784)));
    ctx.gpr[31] = (0x08912E40u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 108u, 0x089387ACu>(ctx, &aot_mem) && ctx.pc == 0x08912E40u) goto L_08912E40;
    return;
L_08912E40:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1914)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08912DC4;
      }
      goto L_08912E54;
    }
L_08912E54:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08912E78:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1748)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08912F74;
      }
      goto L_08912E9C;
    }
L_08912E9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08912F04;
      }
      goto L_08912EA8;
    }
L_08912EA8:
    ctx.gpr[31] = (0x08912EB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x08912EB0u) goto L_08912EB0;
    return;
L_08912EB0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20300)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20304)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08912EC4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x08912EC4u) goto L_08912EC4;
    return;
L_08912EC4:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08912EE8;
      }
      goto L_08912EE0;
    }
L_08912EE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08912EEC;
      }
      goto L_08912EE8;
    }
L_08912EE8:
    ctx.gpr[5] = (0u | 0u);
    goto L_08912EEC;
L_08912EEC:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08912EFC;
      }
      goto L_08912EF4;
    }
L_08912EF4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1744), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08912F6C;
      }
      goto L_08912EFC;
    }
L_08912EFC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1748), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08912F6C;
      }
      goto L_08912F04;
    }
L_08912F04:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08912F6C;
      }
      goto L_08912F14;
    }
L_08912F14:
    ctx.gpr[31] = (0x08912F1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x08912F1Cu) goto L_08912F1C;
    return;
L_08912F1C:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20284)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20288)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08912F38u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x08912F38u) goto L_08912F38;
    return;
L_08912F38:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[18] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08912F68u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 613u, 0x0890A5BCu>(ctx, &aot_mem) && ctx.pc == 0x08912F68u) goto L_08912F68;
    return;
L_08912F68:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1744), 0u);
    goto L_08912F6C;
L_08912F6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08912F98;
      }
      goto L_08912F74;
    }
L_08912F74:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08912F94;
      }
      goto L_08912F84;
    }
L_08912F84:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08912F90u);
    ctx.gpr[5] = (0u | 500u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 598u, 0x0890A484u>(ctx, &aot_mem) && ctx.pc == 0x08912F90u) goto L_08912F90;
    return;
L_08912F90:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1748), 0u);
    goto L_08912F94;
L_08912F94:
    ctx.gpr[2] = (0u | 1u);
    goto L_08912F98;
L_08912F98:
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
L_08912FB0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08912FE0u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08912FE0u) goto L_08912FE0;
    return;
L_08912FE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08913098;
      }
      goto L_08912FEC;
    }
L_08912FEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08913004u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08913004u) goto L_08913004;
    return;
L_08913004:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08913098;
      }
      goto L_08913024;
    }
L_08913024:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0891303Cu);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891303Cu) goto L_0891303C;
    return;
L_0891303C:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 58u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08913060;
      }
      goto L_08913050;
    }
L_08913050:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 57u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08913064;
      }
      goto L_08913060;
    }
L_08913060:
    ctx.gpr[17] = (0u | 1u);
    goto L_08913064;
L_08913064:
    ctx.gpr[31] = (0x0891306Cu);
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x0891306Cu) goto L_0891306C;
    return;
L_0891306C:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08913084;
      }
      goto L_08913074;
    }
L_08913074:
    ctx.gpr[31] = (0x0891307Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x0891307Cu) goto L_0891307C;
    return;
L_0891307C:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08913098;
      }
      goto L_08913084;
    }
L_08913084:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08913098;
      }
      goto L_0891308C;
    }
L_0891308C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08913098u);
    ctx.gpr[5] = (0u | 137u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem) && ctx.pc == 0x08913098u) goto L_08913098;
    return;
L_08913098:
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
L_089130B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[6] = (0u | 17u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089130F4;
      }
      goto L_089130D0;
    }
L_089130D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089130E8u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089130E8u) goto L_089130E8;
    return;
L_089130E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08913244;
      }
      goto L_089130F4;
    }
L_089130F4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08913104u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 227u, 0x08AD120Cu>(ctx, &aot_mem) && ctx.pc == 0x08913104u) goto L_08913104;
    return;
L_08913104:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08913220;
      }
      goto L_08913110;
    }
L_08913110:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08913220;
      }
      goto L_08913120;
    }
L_08913120:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08913220;
      }
      goto L_08913130;
    }
L_08913130:
    ctx.gpr[31] = (0x08913138u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08910B38;
L_08913138:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08913220;
      }
      goto L_08913140;
    }
L_08913140:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089131B8;
      }
      goto L_0891314C;
    }
L_0891314C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08913164u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08913164u) goto L_08913164;
    return;
L_08913164:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 1024u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08913198;
      }
      goto L_0891317C;
    }
L_0891317C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2000)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2004)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2008)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_089131B0;
      }
      goto L_08913198;
    }
L_08913198:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1984));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08913260;
      }
      goto L_089131B0;
    }
L_089131B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891323C;
      }
      goto L_089131B8;
    }
L_089131B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089131D0u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089131D0u) goto L_089131D0;
    return;
L_089131D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 1024u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08913204;
      }
      goto L_089131E8;
    }
L_089131E8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2000)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2004)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2008)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_0891323C;
      }
      goto L_08913204;
    }
L_08913204:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1984)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1988)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1992)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_0891323C;
      }
      goto L_08913220;
    }
L_08913220:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1984));
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
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(2000));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_0891323C;
L_0891323C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08913260;
      }
      goto L_08913244;
    }
L_08913244:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1984));
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
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(2000));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_08913260;
L_08913260:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08913274:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[6] = (0u | 11u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089132B8;
      }
      goto L_089132A0;
    }
L_089132A0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[4] = (0u | 10u);
    if (ctx.gpr[5] == ctx.gpr[4]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2276)));
        goto L_089132C0;
    }
    goto L_089132B0;
L_089132B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089132CC;
      }
      goto L_089132B8;
    }
L_089132B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08913478;
      }
      goto L_089132C0;
    }
L_089132C0:
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089132F8;
      }
      goto L_089132CC;
    }
L_089132CC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2276)));
    ctx.gpr[6] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089132E8;
      }
      goto L_089132DC;
    }
L_089132DC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1360)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089133A4;
      }
      goto L_089132E8;
    }
L_089132E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(476)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891339C;
      }
      goto L_089132F8;
    }
L_089132F8:
    ctx.gpr[31] = (0x08913300u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089107EC;
L_08913300:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08913394;
      }
      goto L_08913308;
    }
L_08913308:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08913318u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08910074;
L_08913318:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
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
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1939))))));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891338C;
      }
      goto L_0891336C;
    }
L_0891336C:
    ctx.gpr[31] = (0x08913374u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 886u, 0x0890FF5Cu>(ctx, &aot_mem) && ctx.pc == 0x08913374u) goto L_08913374;
    return;
L_08913374:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[2] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089133AC;
      }
      goto L_08913384;
    }
L_08913384:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08913478;
      }
      goto L_0891338C;
    }
L_0891338C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08913478;
      }
      goto L_08913394;
    }
L_08913394:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08913478;
      }
      goto L_0891339C;
    }
L_0891339C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08913478;
      }
      goto L_089133A4;
    }
L_089133A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08913478;
      }
      goto L_089133AC;
    }
L_089133AC:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089133D0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_08910074;
L_089133D0:
    ctx.gpr[9] = (ctx.gpr[16] + static_cast<std::uint32_t>(908));
    ctx.gpr[10] = (ctx.gpr[16] + static_cast<std::uint32_t>(904));
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2276)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 2u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[2] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    ctx.gpr[11] = (0u | 8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[19]);
    ctx.gpr[31] = (0x0891341Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 607u, 0x08976C80u>(ctx, &aot_mem) && ctx.pc == 0x0891341Cu) goto L_0891341C;
    return;
L_0891341C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(906), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(904))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08913440;
      }
      goto L_0891342C;
    }
L_0891342C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[31] = (0x08913438u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 885u, 0x0890FF54u>(ctx, &aot_mem) && ctx.pc == 0x08913438u) goto L_08913438;
    return;
L_08913438:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08913478;
      }
      goto L_08913440;
    }
L_08913440:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_0891345C;
      }
      goto L_08913450;
    }
L_08913450:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_0891345C;
L_0891345C:
    ctx.gpr[4] = (17914u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08913478u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 885u, 0x0890FF54u>(ctx, &aot_mem) && ctx.pc == 0x08913478u) goto L_08913478;
    return;
L_08913478:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08913498:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089134B4;
      }
      goto L_089134A4;
    }
L_089134A4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089134BC;
      }
      goto L_089134AC;
    }
L_089134AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 7u);
      if (branch_taken) {
          goto L_089134C0;
      }
      goto L_089134B4;
    }
L_089134B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089134C0;
      }
      goto L_089134BC;
    }
L_089134BC:
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
    goto L_089134C0;
L_089134C0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089134C8:
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(204))))));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] & 1u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089134D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08913508;
      }
      goto L_089134EC;
    }
L_089134EC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x089134FCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x089134FCu) goto L_089134FC;
    return;
L_089134FC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08913508;
L_08913508:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891351C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08913524:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08913560u);
    ctx.gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 206u, 0x0886D4BCu>(ctx, &aot_mem) && ctx.pc == 0x08913560u) goto L_08913560;
    return;
L_08913560:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08913594;
      }
      goto L_0891356C;
    }
L_0891356C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08913578u);
    ctx.gpr[5] = (0u | 250u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 206u, 0x0886D4BCu>(ctx, &aot_mem) && ctx.pc == 0x08913578u) goto L_08913578;
    return;
L_08913578:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08913594;
      }
      goto L_08913584;
    }
L_08913584:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08913590u);
    ctx.gpr[5] = (0u | 44u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 206u, 0x0886D4BCu>(ctx, &aot_mem) && ctx.pc == 0x08913590u) goto L_08913590;
    return;
L_08913590:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08913594;
L_08913594:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089135B4;
      }
      goto L_0891359C;
    }
L_0891359C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891364C;
      }
      goto L_089135B4;
    }
L_089135B4:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089135C8;
      }
      goto L_089135BC;
    }
L_089135BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_089135C8;
L_089135C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089135F8;
      }
      goto L_089135D8;
    }
L_089135D8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089135F0u);
    ctx.gpr[7] = (0u | 44u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem) && ctx.pc == 0x089135F0u) goto L_089135F0;
    return;
L_089135F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0891364C;
      }
      goto L_089135F8;
    }
L_089135F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(236)));
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08913630;
      }
      goto L_08913610;
    }
L_08913610:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 60u);
    ctx.gpr[31] = (0x08913628u);
    ctx.gpr[7] = (0u | 250u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem) && ctx.pc == 0x08913628u) goto L_08913628;
    return;
L_08913628:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0891364C;
      }
      goto L_08913630;
    }
L_08913630:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08913648u);
    ctx.gpr[7] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem) && ctx.pc == 0x08913648u) goto L_08913648;
    return;
L_08913648:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    goto L_0891364C;
L_0891364C:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
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
L_08913670:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[22]);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1984));
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(2000));
    ctx.gpr[8] = (ctx.gpr[4] + static_cast<std::uint32_t>(2096));
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (17096u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[7]);
    ctx.gpr[17] = (65535u << 16u);
    ctx.gpr[4] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[30]);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[23] = (0u + static_cast<std::uint32_t>(-2));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[30] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-8193));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[31]);
    ctx.gpr[31] = (0x089136FCu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 258u, 0x08A696F8u>(ctx, &aot_mem) && ctx.pc == 0x089136FCu) goto L_089136FC;
    return;
L_089136FC:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(23096));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(448), 0u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(576), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(584)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(584), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(792), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(796), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[20] = (ctx.gpr[22] + static_cast<std::uint32_t>(800));
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(816));
    ctx.gpr[31] = (0x08913734u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 607u, 0x089F38DCu>(ctx, &aot_mem) && ctx.pc == 0x08913734u) goto L_08913734;
    return;
L_08913734:
    ctx.gpr[31] = (0x0891373Cu);
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(864));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 557u, 0x08A9F784u>(ctx, &aot_mem) && ctx.pc == 0x0891373Cu) goto L_0891373C;
    return;
L_0891373C:
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(944));
    ctx.gpr[7] = (2192u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(23992));
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[31] = (0x08913754u);
    ctx.gpr[6] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 158u, 0x08B60C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08913754u) goto L_08913754;
    return;
L_08913754:
    ctx.gpr[21] = (ctx.gpr[22] + static_cast<std::uint32_t>(1040));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(1232), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1240)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(1240), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(1256), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(1272), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[23] = (ctx.gpr[22] + static_cast<std::uint32_t>(1312));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(1360), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(1396));
    ctx.gpr[7] = (2192u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(24488));
    ctx.gpr[5] = (0u | 10u);
    ctx.gpr[31] = (0x08913798u);
    ctx.gpr[6] = (0u | 28u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 158u, 0x08B60C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08913798u) goto L_08913798;
    return;
L_08913798:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(1780))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[30]);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(1780), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(1931), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(1939), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(1960), 0u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(1964), 0u);
    ctx.gpr[4] = (0u | 239u);
    aot_mem.aot_store16(ctx.gpr[22] + static_cast<std::uint32_t>(1968), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[22] + static_cast<std::uint32_t>(1970), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(1972), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x089137D4u);
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(2016));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 482u, 0x08AD9C0Cu>(ctx, &aot_mem) && ctx.pc == 0x089137D4u) goto L_089137D4;
    return;
L_089137D4:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(2080), 0u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(2084), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(2196), 0u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(2208), 0u);
    ctx.gpr[16] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(2228), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(2236), 0u);
    ctx.gpr[31] = (0x089137F8u);
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(2268));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 831u, 0x08887A7Cu>(ctx, &aot_mem) && ctx.pc == 0x089137F8u) goto L_089137F8;
    return;
L_089137F8:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(2280), ctx.gpr[19]);
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(2284), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(2144), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-15));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 6u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] | 8192u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(640), 0u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(2276), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(676), 0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0891385Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 840u, 0x0890FC94u>(ctx, &aot_mem) && ctx.pc == 0x0891385Cu) goto L_0891385C;
    return;
L_0891385C:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(1156), 0u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(672), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(1152), 0u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(780), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(1340), 0u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(1344), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(680), 0u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(1380), 0u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(2072), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(2064), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(2068), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(1352), 0u);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(1384), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(1728), 0u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(1732), 0u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(1744), 0u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(1388), 0u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(1736), 0u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(1740), 0u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(1748), 0u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(1752), 0u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(1756), 0u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(1760), 0u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(1764), 0u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(1768), 0u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(1940), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(1944), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(2256), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (16752u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(2264), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (0u | 10u);
    aot_mem.aot_store16(ctx.gpr[22] + static_cast<std::uint32_t>(2274), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(1300), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08913938u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    goto L_08910218;
L_08913938:
    aot_mem.aot_store16(ctx.gpr[22] + static_cast<std::uint32_t>(1932), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(1332), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(2060), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store16(ctx.gpr[22] + static_cast<std::uint32_t>(1150), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(1104), 0u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(1116), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
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
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    goto L_0891397C;
L_0891397C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(908), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0891397C;
      }
      goto L_08913990;
    }
L_08913990:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(1028), 0u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(940), 0u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(1136), 0u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(1024), 0u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(1128), 0u);
    aot_mem.aot_store16(ctx.gpr[22] + static_cast<std::uint32_t>(904), static_cast<std::uint16_t>(0u));
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[22] + static_cast<std::uint32_t>(906), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[22] + static_cast<std::uint32_t>(1140), static_cast<std::uint16_t>(ctx.gpr[16]));
    aot_mem.aot_store16(ctx.gpr[22] + static_cast<std::uint32_t>(1142), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[22] + static_cast<std::uint32_t>(1144), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[22] + static_cast<std::uint32_t>(1146), static_cast<std::uint16_t>(0u));
    ctx.gpr[31] = (0x089139C8u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 887u, 0x0890FF64u>(ctx, &aot_mem) && ctx.pc == 0x089139C8u) goto L_089139C8;
    return;
L_089139C8:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x089139D4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 885u, 0x0890FF54u>(ctx, &aot_mem) && ctx.pc == 0x089139D4u) goto L_089139D4;
    return;
L_089139D4:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(1248), 0u);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(1936), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store16(ctx.gpr[22] + static_cast<std::uint32_t>(1924), static_cast<std::uint16_t>(ctx.gpr[16]));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(1356), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x08913A0Cu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    goto L_089102D4;
L_08913A0C:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(1368), 0u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(1372), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(2112), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(2092), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(2240), 0u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(2116), 0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08913A48u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 261u, 0x08908E78u>(ctx, &aot_mem) && ctx.pc == 0x08913A48u) goto L_08913A48;
    return;
L_08913A48:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08913A54u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x08913A54u) goto L_08913A54;
    return;
L_08913A54:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08913A60u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 983u, 0x0890BE58u>(ctx, &aot_mem) && ctx.pc == 0x08913A60u) goto L_08913A60;
    return;
L_08913A60:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08913A6Cu);
    ctx.gpr[5] = (0u | 0u);
    goto L_08911138;
L_08913A6C:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(1712), 0u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(2076), 0u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(1716), 0u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(1720), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(1328), 0u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(1392), 0u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(1364), 0u);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(1928), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(1930), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(1900), 0u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(1904), 0u);
    ctx.gpr[31] = (0x08913AA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x08913AA0u) goto L_08913AA0;
    return;
L_08913AA0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20172)));
    ctx.gpr[31] = (0x08913AB4u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20176)));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x08913AB4u) goto L_08913AB4;
    return;
L_08913AB4:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20164)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20168)));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(1908), ctx.gpr[4]);
    ctx.gpr[4] = (17036u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(1772), 0u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(1776), 0u);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(1926), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(476)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-193));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(476), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(456)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(456)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(456), ctx.gpr[5]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(456)));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(456), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(456)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(456), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(456)));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-33));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(456), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(456)));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-65));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(456), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(456)));
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(456), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(456)));
    ctx.gpr[11] = (0u + static_cast<std::uint32_t>(-257));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(456), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(472)));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(472), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(472)));
    ctx.gpr[2] = (32768u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(472), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(476)));
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(476), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(456)));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(456), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(456)));
    ctx.gpr[12] = (0u + static_cast<std::uint32_t>(-1025));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(456), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(456)));
    ctx.gpr[13] = (0u + static_cast<std::uint32_t>(-2049));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[13]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(456), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(456)));
    ctx.gpr[14] = (0u + static_cast<std::uint32_t>(-4097));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[14]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(456), ctx.gpr[6]);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-8193));
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(456)));
    ctx.gpr[15] = (ctx.gpr[15] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(456), ctx.gpr[15]);
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(456)));
    ctx.gpr[24] = (0u + static_cast<std::uint32_t>(-16385));
    ctx.gpr[15] = (ctx.gpr[15] & ctx.gpr[24]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(456), ctx.gpr[15]);
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(456)));
    ctx.gpr[25] = (65535u << 16u);
    ctx.gpr[25] = (ctx.gpr[25] + static_cast<std::uint32_t>(32767));
    ctx.gpr[15] = (ctx.gpr[15] & ctx.gpr[25]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(456), ctx.gpr[15]);
    ctx.gpr[15] = (65535u << 16u);
    ctx.gpr[15] = (ctx.gpr[15] + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(456)));
    ctx.gpr[31] = (ctx.gpr[31] & ctx.gpr[15]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(456), ctx.gpr[31]);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(468)));
    ctx.gpr[16] = (51200u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (ctx.gpr[31] & ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(468), ctx.gpr[31]);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(456)));
    ctx.gpr[16] = (65534u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (ctx.gpr[31] & ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(456), ctx.gpr[31]);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(456)));
    ctx.gpr[17] = (4u << 16u);
    ctx.gpr[31] = (ctx.gpr[31] | ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(456), ctx.gpr[31]);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(456)));
    ctx.gpr[17] = (8u << 16u);
    ctx.gpr[31] = (ctx.gpr[31] | ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(456), ctx.gpr[31]);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(456)));
    ctx.gpr[17] = (65520u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (ctx.gpr[31] & ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(456), ctx.gpr[31]);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(456)));
    ctx.gpr[18] = (65504u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (ctx.gpr[31] & ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(456), ctx.gpr[31]);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(456)));
    ctx.gpr[19] = (65472u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (ctx.gpr[31] & ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(456), ctx.gpr[31]);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(456)));
    ctx.gpr[20] = (65408u << 16u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (ctx.gpr[31] & ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(456), ctx.gpr[31]);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(456)));
    ctx.gpr[21] = (65280u << 16u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (ctx.gpr[31] & ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(456), ctx.gpr[31]);
    ctx.gpr[31] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(304))))));
    ctx.gpr[31] = (ctx.gpr[31] & ctx.gpr[30]);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(304), static_cast<std::uint8_t>(ctx.gpr[31]));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(456)));
    ctx.gpr[9] = (64512u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (ctx.gpr[31] & ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(456), ctx.gpr[31]);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(456)));
    ctx.gpr[8] = (63488u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (ctx.gpr[31] & ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(456), ctx.gpr[31]);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(456)));
    ctx.gpr[7] = (61440u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (ctx.gpr[31] & ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(456), ctx.gpr[31]);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (57344u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (ctx.gpr[31] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(456), ctx.gpr[31]);
    ctx.gpr[31] = (49152u << 16u);
    ctx.gpr[31] = (ctx.gpr[31] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(456)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[13]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[14]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[24]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(472)));
    ctx.gpr[13] = (0u + static_cast<std::uint32_t>(-12289));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[13]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(472), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[25]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[15]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(460)));
    ctx.gpr[13] = (65532u << 16u);
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[13]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[4] = (512u << 16u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[21] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(464)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(464), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(464)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(464), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(464)));
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(464), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(464)));
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(464), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(464)));
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(464), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(464)));
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-33));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(464), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(464)));
    ctx.gpr[31] = (0u + static_cast<std::uint32_t>(-65));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(464), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(464)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(464), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(472)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(472), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(464)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(464), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(464)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(464), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(464)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(464), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(464)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[14]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(464), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(456)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(460)));
    ctx.gpr[14] = (0u + static_cast<std::uint32_t>(-29));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[14]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(472)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[25]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(472), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(472)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(472), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(472)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(472), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(476)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(476), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(476)));
    ctx.gpr[4] = (ctx.gpr[4] | 16u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(476), ctx.gpr[4]);
    ctx.pc = 0x08914000u; return;
}

void recomp_unit_0067(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0067_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_67(Runtime &runtime) {
    runtime.register_generated_unit(67u, 0x08910000u, 16384u, &recomp_unit_0067, &recomp_unit_0067_entry);
    runtime.register_function(0x08910000u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910004u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910020u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910034u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891004Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910054u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891005Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910064u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910068u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910074u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910090u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089100A0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089100A8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089100B4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089100C0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089100DCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089100E8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910124u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910140u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910150u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910164u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891017Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910184u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891018Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910194u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910198u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089101A4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089101ACu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089101CCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089101E8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089101F8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910200u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891020Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910218u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910244u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910250u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910268u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891027Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910294u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089102A4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089102B0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089102B8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089102C0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089102D4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089102F8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910310u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910324u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891032Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910338u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891034Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891036Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910374u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891037Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910388u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910394u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891039Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089103A8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089103B0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089103B8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089103CCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089103ECu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089103F4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910400u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910408u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910410u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891041Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910424u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891042Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910440u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910460u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910468u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910474u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891047Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910484u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910498u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089104B8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089104C0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089104C8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089104D4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089104DCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089104F0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089104FCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910504u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910508u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910510u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891051Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910530u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910538u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910554u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910560u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891059Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089105B4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089105D8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089105E8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910604u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910614u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891061Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910634u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910640u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891064Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910654u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891065Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910664u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910670u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910678u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910680u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891068Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910694u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891069Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089106A8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089106B4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089106BCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089106C4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089106CCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089106D8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089106E0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089106E4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089106ECu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910718u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910720u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910750u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891075Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910764u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910768u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891077Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910788u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089107B8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089107BCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089107C4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089107D0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089107E0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089107E4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089107ECu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089107F8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910804u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891080Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891081Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891082Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910840u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910844u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910848u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910850u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891085Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910868u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910870u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891087Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910888u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910890u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089108B0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089108BCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089108D4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089108E8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910900u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891090Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910934u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910944u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891096Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910978u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910980u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910988u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910990u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910998u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089109ACu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089109BCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089109C8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089109E4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089109F4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089109FCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910A14u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910A1Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910A24u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910A44u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910A4Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910A54u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910A60u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910A68u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910A70u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910A78u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910A7Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910A84u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910A8Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910A90u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910A9Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910AA4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910AACu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910AB8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910AC0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910AD4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910AF4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910AFCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910B04u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910B10u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910B18u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910B2Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910B38u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910B4Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910B5Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910B64u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910B7Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910B84u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910B8Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910B9Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910BA4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910BB4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910BC0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910BC4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910BCCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910BD0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910BDCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910BE4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910C00u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910C14u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910C20u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910C30u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910C40u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910C48u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910C4Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910C64u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910CA4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910CB0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910CB8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910CCCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910CECu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910CF8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910D00u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910D10u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910D18u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910D20u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910D2Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910D34u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910D44u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910D48u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910D50u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910D58u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910D68u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910D6Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910D74u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910D7Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910D8Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910D98u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910DA4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910DB8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910DECu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910DFCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910E0Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910E1Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910E2Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910E3Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910E4Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910E5Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910E6Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910E7Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910E8Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910E9Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910EACu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910EBCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910EC4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910ECCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910ED4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910EDCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910EE4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910EECu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910EF0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910F00u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910F2Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910F3Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910F44u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910F4Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910F58u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910F64u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910F74u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910F7Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910F84u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910F8Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910F94u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910FA4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910FB0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910FBCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910FC4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910FCCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910FD4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910FDCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08910FF0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891100Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911014u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891101Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911020u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911028u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891103Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891104Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911054u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891105Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911074u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891108Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891109Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089110A4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089110B4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089110BCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089110E0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089110ECu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089110F4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891111Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911130u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911138u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911140u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911160u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891116Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911178u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911180u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911184u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911190u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911198u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089111B0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089111C0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089111D8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089111E0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089111E8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089111F0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089111FCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911218u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911220u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911238u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911244u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891125Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911264u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911270u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911284u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089112A0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089112B8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089112D0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089112F8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089112FCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911310u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911320u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891132Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911338u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911348u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911350u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911358u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911364u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911368u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911370u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911390u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891139Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911468u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911474u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911480u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911494u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089114D0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089114D8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089114E4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089114ECu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089114F0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911500u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891150Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911518u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911520u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911528u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911530u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911538u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911548u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911550u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911568u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911570u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911574u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891158Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911598u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089115A0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089115A8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089115F0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089115FCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911604u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911614u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891161Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911628u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911634u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891163Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911640u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911654u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911660u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911668u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911670u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891169Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089116B0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089116BCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089116DCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089116E4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089116F4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891171Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911728u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911750u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891175Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891176Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911774u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891177Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911784u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891178Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911794u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891179Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089117A4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089117ACu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089117B0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089117B8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089117F4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911800u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891180Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911830u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911844u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911850u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911864u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891186Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911874u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911894u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089118C8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089118E8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089118F4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911904u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911910u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911918u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911920u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911938u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911954u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911978u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089119A0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089119D0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089119E4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089119FCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911A10u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911A24u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911A38u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911A4Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911A60u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911A74u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911A88u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911A90u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911AB4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911ABCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911AC4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911AD0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911AD8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911AE0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911AF0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911B08u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911B14u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911B20u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911B2Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911B38u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911B44u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911B54u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911B64u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911B7Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911BA8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911BBCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911BCCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911BD8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911BE0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911BF0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911C08u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911C24u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911C38u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911C48u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911C54u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911C68u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911C74u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911C84u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911C8Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911C94u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911C9Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911CA8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911CB0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911CD0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911CD8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911D00u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911D04u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911D14u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911D2Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911D3Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911D4Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911D6Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911D90u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911DA0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911DB4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911DBCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911DC4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911DC8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911DD0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911DE0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911DE4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911DECu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911DF4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911DFCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911E00u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911E1Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911E2Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911E3Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911E4Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911E5Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911E60u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911E64u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911E6Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911E70u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911E78u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911E80u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911E88u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911E8Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911E94u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911E9Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911EA4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911EACu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911EC0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911ED0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911ED8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911EECu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911EF4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911F00u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911F08u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911F18u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911F20u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911F2Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911F34u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911F3Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911F48u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911F50u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911F58u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911F60u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911F68u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911F78u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911F80u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911F98u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08911FECu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912018u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912088u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089120A8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089120B4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089120C4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089120D0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089120D8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089120ECu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089120F0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891210Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912128u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912130u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912138u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912148u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912154u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891215Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912170u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912174u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912190u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089121ACu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089121B4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089121C4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089121D0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089121D8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089121ECu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089121F0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891220Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912228u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912244u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912250u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912258u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891227Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089122D4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912300u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912370u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891238Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912398u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089123A8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089123B0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089123D0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089123D4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089123E0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089123ECu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089123F4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891241Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912444u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912454u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912464u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912478u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891248Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912494u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089124A0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089124A8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089124B4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089124BCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089124CCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089124E8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912504u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891250Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912528u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891252Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912560u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891258Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912598u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089125A8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089125B8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089125C4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089125CCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089125D4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089125E0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089125E8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891260Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912618u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912620u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912628u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912630u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912638u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891264Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912660u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891266Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891268Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891269Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089126A4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089126B8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089126DCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089126F8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912718u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891273Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912760u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891276Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912780u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912794u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089127A0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089127C4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089127CCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089127E0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912804u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912820u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891283Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912850u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912860u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912870u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912878u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912880u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912888u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912894u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891289Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089128A0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089128ACu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089128D4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089128E0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089128E8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089128F0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089128F8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912900u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891291Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912920u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912938u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912960u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891296Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912974u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891297Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912984u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891298Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891299Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089129A8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089129ACu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089129B4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089129BCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089129C4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089129D4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089129D8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089129F0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912A18u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912A24u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912A2Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912A34u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912A3Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912A44u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912A54u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912A58u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912A70u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912A9Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912AD4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912ADCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912AE4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912AECu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912AF4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912B00u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912B08u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912B5Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912B6Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912B8Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912B9Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912BB0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912BC4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912BCCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912BE0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912C08u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912C14u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912C1Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912C24u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912C2Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912C3Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912C44u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912C78u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912C84u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912C94u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912CB0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912CC8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912CD8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912CECu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912D1Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912D34u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912D4Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912D64u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912D84u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912D98u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912DA0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912DA8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912DB0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912DC4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912E00u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912E10u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912E18u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912E2Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912E34u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912E40u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912E54u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912E78u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912E9Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912EA8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912EB0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912EC4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912EE0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912EE8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912EECu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912EF4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912EFCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912F04u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912F14u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912F1Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912F38u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912F68u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912F6Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912F74u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912F84u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912F90u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912F94u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912F98u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912FB0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912FE0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08912FECu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913004u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913024u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891303Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913050u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913060u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913064u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891306Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913074u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891307Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913084u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891308Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913098u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089130B0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089130D0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089130E8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089130F4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913104u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913110u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913120u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913130u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913138u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913140u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891314Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913164u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891317Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913198u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089131B0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089131B8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089131D0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089131E8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913204u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913220u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891323Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913244u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913260u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913274u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089132A0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089132B0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089132B8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089132C0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089132CCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089132DCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089132E8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089132F8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913300u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913308u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913318u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891336Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913374u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913384u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891338Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913394u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891339Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089133A4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089133ACu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089133D0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891341Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891342Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913438u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913440u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913450u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891345Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913478u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913498u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089134A4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089134ACu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089134B4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089134BCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089134C0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089134C8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089134D4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089134ECu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089134FCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913508u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891351Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913524u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913560u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891356Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913578u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913584u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913590u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913594u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891359Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089135B4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089135BCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089135C8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089135D8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089135F0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089135F8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913610u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913628u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913630u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913648u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891364Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913670u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089136FCu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913734u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891373Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913754u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913798u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089137D4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089137F8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891385Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913938u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x0891397Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913990u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089139C8u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x089139D4u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913A0Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913A48u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913A54u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913A60u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913A6Cu, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913AA0u, &recomp_unit_0067, "recomp_unit_0067");
    runtime.register_function(0x08913AB4u, &recomp_unit_0067, "recomp_unit_0067");
}
} // namespace psprecomp
