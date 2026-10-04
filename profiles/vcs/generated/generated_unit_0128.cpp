#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0128[4094] = {
    1, 0, 2, 0, 0, 0, 3, 4, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 7, 0, 0,
    0, 0, 8, 0, 9, 0, 0, 0, 10, 0, 11, 12, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 15, 0, 16, 0, 17, 18, 0, 0, 19, 0, 20, 0, 0, 0, 21, 0, 22, 0, 0, 23, 0, 24, 0, 25, 0, 26, 0,
    27, 0, 0, 0, 28, 0, 0, 29, 0, 0, 30, 0, 0, 31, 0, 32, 0, 0, 0, 33, 34, 0, 0, 35, 0, 0, 36, 0, 37, 0, 0, 0,
    0, 0, 0, 38, 39, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 43, 0, 44, 45, 0, 0,
    46, 0, 47, 0, 0, 0, 48, 0, 49, 0, 50, 0, 0, 51, 52, 0, 0, 53, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 55, 0, 56, 0, 57, 58, 0, 0, 59, 0, 60, 0, 0, 0, 61, 0, 62, 0, 0, 0, 0, 0, 0, 63, 0, 64, 0, 65, 0, 66,
    0, 67, 0, 0, 0, 68, 0, 0, 69, 0, 0, 70, 0, 0, 71, 0, 72, 0, 0, 0, 73, 74, 0, 0, 75, 0, 0, 76, 0, 77, 0, 0,
    0, 0, 0, 0, 78, 79, 0, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 83, 0, 84, 0, 0,
    85, 0, 86, 0, 0, 0, 87, 0, 88, 0, 89, 0, 0, 0, 0, 0, 0, 90, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 93, 0, 94, 0, 95, 0, 0, 96, 0, 97, 0, 0, 0, 98, 0, 99, 0, 100, 0, 0, 101, 0, 0, 102, 0, 0, 0, 0, 0,
    0, 103, 0, 0, 0, 0, 104, 105, 0, 106, 0, 107, 0, 108, 0, 109, 0, 110, 111, 0, 112, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118,
    0, 119, 0, 120, 0, 121, 0, 122, 0, 123, 0, 0, 0, 124, 125, 0, 126, 0, 0, 0, 127, 128, 0, 129, 0, 0, 0, 130, 0, 0, 0, 131,
    0, 0, 0, 132, 133, 0, 134, 0, 0, 0, 135, 0, 0, 0, 136, 137, 0, 138, 0, 0, 0, 139, 0, 0, 0, 140, 141, 0, 142, 0, 0, 0,
    143, 0, 0, 0, 144, 145, 0, 146, 0, 147, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 0, 150, 0, 151, 0, 0, 0, 152, 0, 0, 153, 0,
    0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0,
    0, 0, 0, 161, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 163, 0, 0, 164, 0, 165, 0, 0, 0, 166, 0, 167, 0, 0, 0, 168, 0, 169, 0, 170, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 176,
    177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 179, 0, 180, 0, 181, 0, 182, 0, 183, 0, 0, 184, 185, 0, 186, 0, 0,
    187, 188, 0, 189, 0, 0, 190, 0, 191, 0, 192, 193, 0, 194, 0, 0, 195, 0, 196, 197, 0, 198, 0, 0, 199, 0, 200, 201, 0, 202, 0, 0,
    203, 0, 204, 205, 0, 206, 0, 0, 207, 0, 0, 208, 0, 209, 0, 0, 0, 210, 0, 0, 211, 0, 0, 0, 212, 0, 213, 0, 0, 0, 214, 0,
    0, 215, 0, 0, 0, 216, 0, 0, 0, 217, 0, 218, 0, 0, 0, 0, 219, 0, 220, 0, 0, 0, 221, 0, 222, 0, 0, 0, 0, 223, 0, 0,
    0, 224, 0, 0, 0, 0, 0, 0, 225, 0, 226, 0, 227, 228, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0,
    0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0,
    236, 0, 0, 0, 0, 237, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 241, 0, 242, 0, 0, 0, 243, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    245, 0, 0, 0, 246, 0, 247, 0, 248, 0, 249, 0, 250, 0, 251, 0, 252, 0, 0, 253, 254, 0, 255, 0, 0, 256, 257, 0, 258, 0, 0, 259,
    0, 260, 0, 261, 262, 0, 263, 0, 0, 264, 0, 265, 266, 0, 267, 0, 0, 268, 0, 269, 270, 0, 271, 0, 0, 272, 0, 273, 274, 0, 275, 0,
    0, 276, 0, 0, 277, 0, 278, 0, 0, 0, 279, 0, 0, 280, 0, 0, 0, 281, 0, 282, 0, 0, 0, 283, 0, 0, 284, 0, 0, 0, 285, 0,
    0, 0, 286, 0, 287, 0, 0, 0, 0, 288, 0, 289, 0, 0, 0, 290, 0, 291, 0, 0, 0, 0, 292, 0, 0, 0, 293, 0, 0, 0, 0, 0,
    0, 294, 0, 295, 0, 296, 297, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 300, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0,
    0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 306, 307, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 309, 0, 310, 0, 0, 0, 0, 0, 0, 311, 0, 0, 312, 0, 313, 0, 314, 0, 315, 0, 0, 0, 0, 316, 0, 317, 0, 318, 0, 319, 0,
    0, 0, 320, 0, 321, 0, 0, 0, 0, 322, 0, 323, 0, 0, 0, 324, 0, 0, 325, 0, 326, 0, 327, 0, 328, 0, 329, 0, 0, 330, 0, 0,
    331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 333, 0, 0, 0, 334, 0, 0, 335, 0, 0, 336, 0, 337, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 339, 0, 0, 340, 0, 341, 0, 0, 0, 0, 342, 0, 0, 0, 343, 0, 0, 344, 0, 345,
    0, 0, 346, 0, 347, 0, 0, 0, 0, 348, 0, 349, 0, 350, 0, 0, 0, 351, 0, 0, 0, 352, 0, 353, 0, 0, 0, 0, 354, 0, 355, 0,
    0, 356, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 359, 0, 0, 0, 360, 0, 0, 361, 0, 0, 362, 0,
    363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 365, 0, 0, 366, 0, 367, 0, 0, 0, 0, 368, 0, 0, 0, 369, 0,
    0, 370, 0, 371, 0, 0, 372, 0, 373, 0, 0, 0, 0, 374, 0, 375, 0, 376, 0, 0, 0, 377, 0, 0, 0, 378, 0, 379, 0, 0, 0, 0,
    380, 0, 381, 0, 0, 382, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 385, 0, 0, 0, 386, 0, 0, 387,
    0, 0, 388, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 391, 0, 0, 392, 0, 393, 0, 0, 0, 0, 394, 0,
    0, 0, 395, 0, 0, 396, 0, 397, 0, 0, 398, 0, 399, 0, 0, 0, 0, 400, 0, 401, 0, 402, 0, 0, 0, 403, 0, 0, 0, 404, 0, 405,
    0, 0, 0, 0, 406, 0, 407, 0, 0, 408, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 411, 0, 0, 0,
    412, 0, 0, 413, 0, 0, 414, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 417, 0, 0, 418, 0, 419, 0, 0,
    0, 0, 420, 0, 0, 0, 421, 0, 0, 422, 0, 423, 0, 0, 424, 0, 425, 0, 0, 0, 0, 426, 0, 427, 0, 428, 0, 0, 0, 429, 0, 0,
    0, 430, 0, 431, 0, 0, 0, 0, 432, 0, 433, 0, 0, 434, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0,
    437, 0, 0, 0, 438, 0, 0, 439, 0, 0, 440, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 443, 0, 0, 444,
    0, 445, 0, 0, 0, 0, 446, 0, 0, 0, 447, 0, 0, 448, 0, 449, 0, 0, 450, 0, 451, 0, 0, 0, 0, 452, 0, 453, 0, 454, 0, 0,
    0, 455, 0, 0, 0, 456, 0, 457, 0, 0, 0, 0, 458, 0, 459, 0, 0, 460, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    462, 0, 0, 0, 463, 0, 0, 0, 464, 0, 0, 465, 0, 0, 466, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0,
    469, 0, 0, 470, 0, 471, 0, 0, 0, 0, 472, 0, 0, 0, 473, 0, 0, 474, 0, 475, 0, 0, 476, 0, 477, 0, 0, 0, 0, 478, 0, 479,
    0, 480, 0, 0, 0, 481, 0, 0, 0, 482, 0, 483, 0, 0, 0, 0, 484, 0, 485, 0, 486, 0, 0, 487, 488, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 0, 490, 0, 0, 491, 0, 0, 0, 0, 492, 0, 0, 493, 0, 0, 0, 0, 494, 0, 0, 495, 0,
    0, 0, 0, 496, 0, 0, 497, 0, 0, 0, 0, 498, 0, 0, 499, 0, 0, 0, 0, 500, 0, 0, 501, 0, 0, 0, 0, 0, 502, 0, 0, 503,
    0, 0, 0, 0, 0, 504, 0, 0, 505, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 506, 0, 507, 0, 0, 0, 0,
    0, 0, 508, 0, 0, 0, 509, 0, 0, 0, 0, 0, 0, 0, 510, 0, 0, 0, 0, 511, 0, 0, 512, 0, 0, 0, 0, 0, 0, 513, 514, 0,
    0, 0, 515, 0, 0, 516, 0, 517, 518, 0, 519, 0, 0, 0, 520, 0, 0, 0, 0, 0, 0, 521, 522, 0, 0, 0, 523, 0, 0, 524, 0, 525,
    526, 0, 527, 0, 0, 0, 528, 0, 0, 0, 0, 0, 529, 530, 0, 0, 0, 531, 0, 0, 532, 0, 0, 0, 0, 0, 533, 534, 0, 0, 0, 535,
    0, 0, 536, 0, 0, 0, 0, 537, 0, 0, 538, 0, 0, 0, 0, 0, 0, 0, 0, 0, 539, 0, 0, 540, 0, 0, 0, 541, 0, 0, 0, 0,
    0, 542, 0, 0, 0, 0, 543, 0, 0, 544, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 545, 0, 0, 546, 0, 0, 0, 547, 0, 0, 0,
    0, 0, 0, 548, 0, 0, 0, 0, 0, 549, 0, 0, 0, 0, 550, 0, 0, 551, 0, 0, 0, 0, 0, 0, 552, 0, 0, 553, 0, 0, 0, 0,
    0, 0, 0, 554, 0, 0, 555, 0, 0, 0, 0, 556, 0, 0, 557, 0, 0, 0, 0, 0, 558, 0, 0, 559, 0, 0, 0, 0, 0, 0, 0, 560,
    0, 0, 561, 0, 0, 0, 0, 562, 0, 0, 563, 0, 0, 0, 0, 564, 0, 0, 565, 0, 0, 0, 0, 0, 566, 0, 0, 567, 0, 0, 0, 0,
    0, 568, 0, 0, 569, 0, 0, 0, 0, 570, 0, 0, 571, 0, 0, 0, 0, 572, 0, 0, 573, 0, 0, 0, 0, 574, 0, 0, 575, 0, 0, 0,
    0, 576, 0, 0, 577, 0, 0, 0, 0, 0, 578, 0, 0, 579, 0, 0, 0, 0, 0, 580, 0, 0, 0, 581, 0, 0, 582, 0, 0, 0, 0, 0,
    0, 0, 583, 0, 0, 0, 0, 0, 0, 584, 0, 0, 585, 0, 0, 0, 0, 586, 0, 0, 587, 0, 588, 589, 0, 0, 590, 0, 0, 0, 0, 591,
    0, 0, 592, 0, 593, 594, 0, 0, 595, 0, 0, 0, 0, 0, 596, 0, 0, 0, 597, 0, 0, 598, 0, 0, 0, 0, 0, 599, 0, 0, 0, 600,
    0, 601, 602, 0, 0, 603, 0, 0, 0, 0, 0, 0, 0, 604, 0, 0, 0, 0, 0, 0, 605, 0, 0, 606, 0, 0, 0, 0, 0, 607, 0, 0,
    0, 608, 0, 609, 610, 0, 0, 611, 0, 0, 0, 0, 0, 612, 0, 0, 0, 613, 0, 0, 614, 0, 0, 0, 0, 615, 0, 0, 0, 616, 0, 0,
    617, 0, 0, 0, 0, 0, 618, 0, 0, 0, 619, 0, 620, 621, 0, 0, 622, 0, 0, 0, 0, 0, 623, 0, 0, 0, 624, 0, 0, 625, 0, 0,
    0, 0, 626, 0, 0, 627, 0, 0, 0, 0, 628, 0, 0, 629, 0, 0, 0, 0, 0, 630, 0, 0, 631, 0, 0, 0, 0, 0, 632, 0, 0, 633,
    0, 0, 0, 0, 0, 634, 0, 0, 635, 0, 0, 0, 0, 636, 0, 0, 0, 0, 637, 0, 0, 638, 0, 0, 0, 0, 639, 0, 0, 640, 0, 0,
    0, 0, 641, 0, 0, 642, 0, 0, 0, 0, 643, 0, 0, 644, 0, 0, 0, 0, 645, 0, 0, 646, 0, 0, 0, 0, 647, 0, 0, 648, 0, 0,
    0, 0, 649, 0, 0, 650, 0, 0, 0, 651, 0, 652, 0, 0, 0, 0, 0, 653, 0, 0, 654, 0, 0, 655, 0, 0, 656, 657, 0, 0, 0, 0,
    658, 0, 0, 0, 0, 0, 0, 0, 659, 0, 0, 660, 0, 0, 0, 661, 0, 662, 663, 0, 0, 0, 664, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 665, 0, 0, 666, 0, 667, 0, 668, 0, 0, 0, 0, 0, 669, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 670, 0, 671, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 672, 0, 673, 0, 0, 0, 0, 674, 0, 0,
    0, 0, 675, 0, 676, 677, 0, 0, 0, 0, 0, 0, 0, 0, 678, 0, 0, 0, 0, 0, 679, 0, 0, 0, 0, 0, 0, 0, 680, 0, 681, 0,
    0, 0, 682, 0, 683, 684, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 685, 0, 0, 0, 0, 0, 0, 686, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 687, 0, 0, 0, 0, 0, 0, 0, 0, 688, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 689, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 690, 0, 0, 0, 0, 0, 0, 691, 0, 0, 692, 0, 693, 0, 694, 0, 695, 0, 696, 0, 697, 0, 698, 0, 699,
    0, 700, 0, 701, 0, 0, 0, 702, 0, 703, 0, 0, 0, 0, 704, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 705,
    0, 0, 0, 0, 706, 0, 707, 0, 0, 0, 0, 708, 0, 0, 0, 0, 709, 0, 710, 0, 0, 0, 0, 711, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 712, 0, 713, 0, 714, 0, 715, 0, 716, 0, 717, 0, 0, 0, 0, 718, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 719, 0, 720, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 721, 0, 0, 0, 722, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 723, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 724, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 725, 0, 0, 726, 0, 0, 0, 0, 727, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 728, 0, 729, 730, 0, 731, 0, 0, 0, 732, 0, 733, 0, 734, 0, 0, 735, 0, 0, 0, 0, 736, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 737, 0, 0, 738, 0, 0, 0, 0, 0, 0, 0, 0, 0, 739, 0, 0, 0, 0, 0, 0, 740, 0,
    0, 0, 0, 0, 0, 0, 741, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 742, 0, 743, 0, 0, 0, 0, 0, 0, 0, 744, 0, 0, 0, 745,
    0, 0, 0, 746, 0, 0, 747, 0, 0, 0, 748, 0, 0, 0, 0, 749, 0, 0, 0, 750, 0, 0, 0, 751, 0, 0, 0, 0, 0, 752, 0, 753,
    0, 0, 0, 754, 0, 0, 0, 755, 0, 0, 0, 756, 0, 757, 0, 758, 0, 759, 0, 0, 760, 0, 0, 761, 0, 762, 0, 763, 0, 764, 0, 765,
    0, 766, 0, 0, 767, 0, 768, 0, 0, 769, 0, 0, 0, 0, 0, 0, 770, 0, 0, 0, 0, 0, 771, 0, 0, 0, 0, 0, 772, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 773, 0, 0, 0, 0, 0, 0, 774, 0, 0, 0, 775, 0, 0, 776, 0, 0, 0, 0, 0, 0, 777, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 778, 0, 779, 0, 0, 0, 0, 0, 780, 0, 0, 0, 0, 0, 781, 0, 782, 0, 783, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 784, 0, 0, 0, 785, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 786, 0,
    0, 787, 0, 0, 0, 0, 0, 0, 0, 788, 0, 0, 789, 0, 790, 0, 0, 0, 791, 0, 792, 0, 0, 793, 0, 0, 794, 0, 795, 0, 0, 0,
    0, 796, 0, 797, 0, 798, 0, 799, 0, 800, 0, 801, 0, 802, 0, 0, 0, 0, 803, 0, 804, 0, 805, 0, 806, 0, 807, 0, 0, 0, 0, 0,
    0, 808, 0, 0, 0, 0, 0, 809, 0, 0, 0, 0, 0, 0, 810, 0, 811, 0, 812, 0, 813, 0, 814, 0, 0, 0, 0, 815, 0, 816, 0, 0,
    817, 0, 0, 0, 0, 0, 0, 0, 0, 0, 818, 0, 819, 0, 0, 0, 820, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 821, 0, 0, 0, 822, 0, 0, 823, 824, 0, 0, 0, 0, 0, 0, 825, 0, 0, 826, 0, 0, 0, 827, 0,
    828, 0, 829, 0, 0, 830, 0, 0, 0, 0, 0, 831, 0, 0, 0, 0, 0, 0, 832, 0, 0, 833, 0, 0, 834, 0, 0, 0, 0, 0, 0, 835,
    0, 0, 836, 0, 837, 0, 0, 0, 0, 838, 839, 0, 0, 0, 0, 0, 0, 0, 840, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 841, 0,
    0, 0, 0, 0, 842, 0, 843, 0, 844, 0, 845, 0, 0, 0, 0, 0, 0, 0, 0, 846, 0, 847, 0, 848, 0, 0, 0, 0, 0, 0, 849, 0,
    850, 0, 851, 0, 0, 0, 0, 0, 852, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 853, 0, 854, 0, 0, 0, 0, 0, 0, 855,
    0, 856, 0, 857, 0, 0, 0, 0, 0, 0, 858, 0, 859, 860, 0, 0, 0, 861, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    862, 0, 0, 0, 863, 0, 0, 864, 0, 0, 0, 0, 0, 0, 0, 0, 865, 0, 866, 0, 0, 0, 0, 0, 0, 0, 0, 867, 868, 0, 0, 869,
    0, 0, 870, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 871, 872, 0, 0, 873, 0, 874, 0, 875, 0, 0, 0, 0, 0, 0, 0, 0, 876,
    0, 0, 0, 877, 0, 0, 0, 878, 0, 0, 0, 879, 0, 880, 0, 0, 881, 0, 0, 882, 0, 0, 0, 0, 883, 0, 0, 0, 0, 0, 884, 0,
    0, 0, 0, 0, 0, 885, 0, 0, 886, 0, 0, 887, 0, 0, 0, 0, 0, 0, 0, 888, 0, 0, 0, 889, 0, 0, 0, 0, 890, 0, 891, 0,
    0, 0, 892, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 893, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 894, 0, 0, 0, 895, 0, 0, 896, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 897, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 898, 0, 0, 0, 0, 0, 899, 900, 0, 901, 0, 0, 902, 0, 903, 0, 0, 904, 0, 0, 905, 0, 0, 906, 907, 908, 0, 909,
};
void recomp_unit_0128_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A04004u;
        entry_id = (entry_delta < 16376u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0128[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A04004;
    case 2u: goto L_08A0400C;
    case 3u: goto L_08A0401C;
    case 4u: goto L_08A04020;
    case 5u: goto L_08A04028;
    case 6u: goto L_08A04074;
    case 7u: goto L_08A04078;
    case 8u: goto L_08A0408C;
    case 9u: goto L_08A04094;
    case 10u: goto L_08A040A4;
    case 11u: goto L_08A040AC;
    case 12u: goto L_08A040B0;
    case 13u: goto L_08A040D0;
    case 14u: goto L_08A040EC;
    case 15u: goto L_08A04118;
    case 16u: goto L_08A04120;
    case 17u: goto L_08A04128;
    case 18u: goto L_08A0412C;
    case 19u: goto L_08A04138;
    case 20u: goto L_08A04140;
    case 21u: goto L_08A04150;
    case 22u: goto L_08A04158;
    case 23u: goto L_08A04164;
    case 24u: goto L_08A0416C;
    case 25u: goto L_08A04174;
    case 26u: goto L_08A0417C;
    case 27u: goto L_08A04184;
    case 28u: goto L_08A04194;
    case 29u: goto L_08A041A0;
    case 30u: goto L_08A041AC;
    case 31u: goto L_08A041B8;
    case 32u: goto L_08A041C0;
    case 33u: goto L_08A041D0;
    case 34u: goto L_08A041D4;
    case 35u: goto L_08A041E0;
    case 36u: goto L_08A041EC;
    case 37u: goto L_08A041F4;
    case 38u: goto L_08A04210;
    case 39u: goto L_08A04214;
    case 40u: goto L_08A04228;
    case 41u: goto L_08A04238;
    case 42u: goto L_08A04264;
    case 43u: goto L_08A0426C;
    case 44u: goto L_08A04274;
    case 45u: goto L_08A04278;
    case 46u: goto L_08A04284;
    case 47u: goto L_08A0428C;
    case 48u: goto L_08A0429C;
    case 49u: goto L_08A042A4;
    case 50u: goto L_08A042AC;
    case 51u: goto L_08A042B8;
    case 52u: goto L_08A042BC;
    case 53u: goto L_08A042C8;
    case 54u: goto L_08A042E0;
    case 55u: goto L_08A0430C;
    case 56u: goto L_08A04314;
    case 57u: goto L_08A0431C;
    case 58u: goto L_08A04320;
    case 59u: goto L_08A0432C;
    case 60u: goto L_08A04334;
    case 61u: goto L_08A04344;
    case 62u: goto L_08A0434C;
    case 63u: goto L_08A04368;
    case 64u: goto L_08A04370;
    case 65u: goto L_08A04378;
    case 66u: goto L_08A04380;
    case 67u: goto L_08A04388;
    case 68u: goto L_08A04398;
    case 69u: goto L_08A043A4;
    case 70u: goto L_08A043B0;
    case 71u: goto L_08A043BC;
    case 72u: goto L_08A043C4;
    case 73u: goto L_08A043D4;
    case 74u: goto L_08A043D8;
    case 75u: goto L_08A043E4;
    case 76u: goto L_08A043F0;
    case 77u: goto L_08A043F8;
    case 78u: goto L_08A04414;
    case 79u: goto L_08A04418;
    case 80u: goto L_08A0442C;
    case 81u: goto L_08A0443C;
    case 82u: goto L_08A04468;
    case 83u: goto L_08A04470;
    case 84u: goto L_08A04478;
    case 85u: goto L_08A04484;
    case 86u: goto L_08A0448C;
    case 87u: goto L_08A0449C;
    case 88u: goto L_08A044A4;
    case 89u: goto L_08A044AC;
    case 90u: goto L_08A044C8;
    case 91u: goto L_08A044D4;
    case 92u: goto L_08A044E4;
    case 93u: goto L_08A04510;
    case 94u: goto L_08A04518;
    case 95u: goto L_08A04520;
    case 96u: goto L_08A0452C;
    case 97u: goto L_08A04534;
    case 98u: goto L_08A04544;
    case 99u: goto L_08A0454C;
    case 100u: goto L_08A04554;
    case 101u: goto L_08A04560;
    case 102u: goto L_08A0456C;
    case 103u: goto L_08A04588;
    case 104u: goto L_08A0459C;
    case 105u: goto L_08A045A0;
    case 106u: goto L_08A045A8;
    case 107u: goto L_08A045B0;
    case 108u: goto L_08A045B8;
    case 109u: goto L_08A045C0;
    case 110u: goto L_08A045C8;
    case 111u: goto L_08A045CC;
    case 112u: goto L_08A045D4;
    case 113u: goto L_08A045DC;
    case 114u: goto L_08A045F0;
    case 115u: goto L_08A04898;
    case 116u: goto L_08A048C4;
    case 117u: goto L_08A048D0;
    case 118u: goto L_08A04900;
    case 119u: goto L_08A04908;
    case 120u: goto L_08A04910;
    case 121u: goto L_08A04918;
    case 122u: goto L_08A04920;
    case 123u: goto L_08A04928;
    case 124u: goto L_08A04938;
    case 125u: goto L_08A0493C;
    case 126u: goto L_08A04944;
    case 127u: goto L_08A04954;
    case 128u: goto L_08A04958;
    case 129u: goto L_08A04960;
    case 130u: goto L_08A04970;
    case 131u: goto L_08A04980;
    case 132u: goto L_08A04990;
    case 133u: goto L_08A04994;
    case 134u: goto L_08A0499C;
    case 135u: goto L_08A049AC;
    case 136u: goto L_08A049BC;
    case 137u: goto L_08A049C0;
    case 138u: goto L_08A049C8;
    case 139u: goto L_08A049D8;
    case 140u: goto L_08A049E8;
    case 141u: goto L_08A049EC;
    case 142u: goto L_08A049F4;
    case 143u: goto L_08A04A04;
    case 144u: goto L_08A04A14;
    case 145u: goto L_08A04A18;
    case 146u: goto L_08A04A20;
    case 147u: goto L_08A04A28;
    case 148u: goto L_08A04A34;
    case 149u: goto L_08A04A48;
    case 150u: goto L_08A04A58;
    case 151u: goto L_08A04A60;
    case 152u: goto L_08A04A70;
    case 153u: goto L_08A04A7C;
    case 154u: goto L_08A04A90;
    case 155u: goto L_08A04AA0;
    case 156u: goto L_08A04AB0;
    case 157u: goto L_08A04AC0;
    case 158u: goto L_08A04AD0;
    case 159u: goto L_08A04AE4;
    case 160u: goto L_08A04AF4;
    case 161u: goto L_08A04B10;
    case 162u: goto L_08A04B28;
    case 163u: goto L_08A04B88;
    case 164u: goto L_08A04B94;
    case 165u: goto L_08A04B9C;
    case 166u: goto L_08A04BAC;
    case 167u: goto L_08A04BB4;
    case 168u: goto L_08A04BC4;
    case 169u: goto L_08A04BCC;
    case 170u: goto L_08A04BD4;
    case 171u: goto L_08A04BE0;
    case 172u: goto L_08A04C18;
    case 173u: goto L_08A04C38;
    case 174u: goto L_08A04C4C;
    case 175u: goto L_08A04C68;
    case 176u: goto L_08A04C80;
    case 177u: goto L_08A04C84;
    case 178u: goto L_08A04CB0;
    case 179u: goto L_08A04CC0;
    case 180u: goto L_08A04CC8;
    case 181u: goto L_08A04CD0;
    case 182u: goto L_08A04CD8;
    case 183u: goto L_08A04CE0;
    case 184u: goto L_08A04CEC;
    case 185u: goto L_08A04CF0;
    case 186u: goto L_08A04CF8;
    case 187u: goto L_08A04D04;
    case 188u: goto L_08A04D08;
    case 189u: goto L_08A04D10;
    case 190u: goto L_08A04D1C;
    case 191u: goto L_08A04D24;
    case 192u: goto L_08A04D2C;
    case 193u: goto L_08A04D30;
    case 194u: goto L_08A04D38;
    case 195u: goto L_08A04D44;
    case 196u: goto L_08A04D4C;
    case 197u: goto L_08A04D50;
    case 198u: goto L_08A04D58;
    case 199u: goto L_08A04D64;
    case 200u: goto L_08A04D6C;
    case 201u: goto L_08A04D70;
    case 202u: goto L_08A04D78;
    case 203u: goto L_08A04D84;
    case 204u: goto L_08A04D8C;
    case 205u: goto L_08A04D90;
    case 206u: goto L_08A04D98;
    case 207u: goto L_08A04DA4;
    case 208u: goto L_08A04DB0;
    case 209u: goto L_08A04DB8;
    case 210u: goto L_08A04DC8;
    case 211u: goto L_08A04DD4;
    case 212u: goto L_08A04DE4;
    case 213u: goto L_08A04DEC;
    case 214u: goto L_08A04DFC;
    case 215u: goto L_08A04E08;
    case 216u: goto L_08A04E18;
    case 217u: goto L_08A04E28;
    case 218u: goto L_08A04E30;
    case 219u: goto L_08A04E44;
    case 220u: goto L_08A04E4C;
    case 221u: goto L_08A04E5C;
    case 222u: goto L_08A04E64;
    case 223u: goto L_08A04E78;
    case 224u: goto L_08A04E88;
    case 225u: goto L_08A04EA4;
    case 226u: goto L_08A04EAC;
    case 227u: goto L_08A04EB4;
    case 228u: goto L_08A04EB8;
    case 229u: goto L_08A04EBC;
    case 230u: goto L_08A04EE8;
    case 231u: goto L_08A04EF8;
    case 232u: goto L_08A04F10;
    case 233u: goto L_08A04F34;
    case 234u: goto L_08A04F54;
    case 235u: goto L_08A04F68;
    case 236u: goto L_08A04F84;
    case 237u: goto L_08A04F98;
    case 238u: goto L_08A04F9C;
    case 239u: goto L_08A04FCC;
    case 240u: goto L_08A05028;
    case 241u: goto L_08A05034;
    case 242u: goto L_08A0503C;
    case 243u: goto L_08A0504C;
    case 244u: goto L_08A05054;
    case 245u: goto L_08A05084;
    case 246u: goto L_08A05094;
    case 247u: goto L_08A0509C;
    case 248u: goto L_08A050A4;
    case 249u: goto L_08A050AC;
    case 250u: goto L_08A050B4;
    case 251u: goto L_08A050BC;
    case 252u: goto L_08A050C4;
    case 253u: goto L_08A050D0;
    case 254u: goto L_08A050D4;
    case 255u: goto L_08A050DC;
    case 256u: goto L_08A050E8;
    case 257u: goto L_08A050EC;
    case 258u: goto L_08A050F4;
    case 259u: goto L_08A05100;
    case 260u: goto L_08A05108;
    case 261u: goto L_08A05110;
    case 262u: goto L_08A05114;
    case 263u: goto L_08A0511C;
    case 264u: goto L_08A05128;
    case 265u: goto L_08A05130;
    case 266u: goto L_08A05134;
    case 267u: goto L_08A0513C;
    case 268u: goto L_08A05148;
    case 269u: goto L_08A05150;
    case 270u: goto L_08A05154;
    case 271u: goto L_08A0515C;
    case 272u: goto L_08A05168;
    case 273u: goto L_08A05170;
    case 274u: goto L_08A05174;
    case 275u: goto L_08A0517C;
    case 276u: goto L_08A05188;
    case 277u: goto L_08A05194;
    case 278u: goto L_08A0519C;
    case 279u: goto L_08A051AC;
    case 280u: goto L_08A051B8;
    case 281u: goto L_08A051C8;
    case 282u: goto L_08A051D0;
    case 283u: goto L_08A051E0;
    case 284u: goto L_08A051EC;
    case 285u: goto L_08A051FC;
    case 286u: goto L_08A0520C;
    case 287u: goto L_08A05214;
    case 288u: goto L_08A05228;
    case 289u: goto L_08A05230;
    case 290u: goto L_08A05240;
    case 291u: goto L_08A05248;
    case 292u: goto L_08A0525C;
    case 293u: goto L_08A0526C;
    case 294u: goto L_08A05288;
    case 295u: goto L_08A05290;
    case 296u: goto L_08A05298;
    case 297u: goto L_08A0529C;
    case 298u: goto L_08A052A0;
    case 299u: goto L_08A052CC;
    case 300u: goto L_08A052D8;
    case 301u: goto L_08A052EC;
    case 302u: goto L_08A05310;
    case 303u: goto L_08A05330;
    case 304u: goto L_08A05344;
    case 305u: goto L_08A05360;
    case 306u: goto L_08A05370;
    case 307u: goto L_08A05374;
    case 308u: goto L_08A053A0;
    case 309u: goto L_08A05408;
    case 310u: goto L_08A05410;
    case 311u: goto L_08A0542C;
    case 312u: goto L_08A05438;
    case 313u: goto L_08A05440;
    case 314u: goto L_08A05448;
    case 315u: goto L_08A05450;
    case 316u: goto L_08A05464;
    case 317u: goto L_08A0546C;
    case 318u: goto L_08A05474;
    case 319u: goto L_08A0547C;
    case 320u: goto L_08A0548C;
    case 321u: goto L_08A05494;
    case 322u: goto L_08A054A8;
    case 323u: goto L_08A054B0;
    case 324u: goto L_08A054C0;
    case 325u: goto L_08A054CC;
    case 326u: goto L_08A054D4;
    case 327u: goto L_08A054DC;
    case 328u: goto L_08A054E4;
    case 329u: goto L_08A054EC;
    case 330u: goto L_08A054F8;
    case 331u: goto L_08A05504;
    case 332u: goto L_08A05534;
    case 333u: goto L_08A05544;
    case 334u: goto L_08A05554;
    case 335u: goto L_08A05560;
    case 336u: goto L_08A0556C;
    case 337u: goto L_08A05574;
    case 338u: goto L_08A055A4;
    case 339u: goto L_08A055B4;
    case 340u: goto L_08A055C0;
    case 341u: goto L_08A055C8;
    case 342u: goto L_08A055DC;
    case 343u: goto L_08A055EC;
    case 344u: goto L_08A055F8;
    case 345u: goto L_08A05600;
    case 346u: goto L_08A0560C;
    case 347u: goto L_08A05614;
    case 348u: goto L_08A05628;
    case 349u: goto L_08A05630;
    case 350u: goto L_08A05638;
    case 351u: goto L_08A05648;
    case 352u: goto L_08A05658;
    case 353u: goto L_08A05660;
    case 354u: goto L_08A05674;
    case 355u: goto L_08A0567C;
    case 356u: goto L_08A05688;
    case 357u: goto L_08A05694;
    case 358u: goto L_08A056C4;
    case 359u: goto L_08A056D4;
    case 360u: goto L_08A056E4;
    case 361u: goto L_08A056F0;
    case 362u: goto L_08A056FC;
    case 363u: goto L_08A05704;
    case 364u: goto L_08A05734;
    case 365u: goto L_08A05744;
    case 366u: goto L_08A05750;
    case 367u: goto L_08A05758;
    case 368u: goto L_08A0576C;
    case 369u: goto L_08A0577C;
    case 370u: goto L_08A05788;
    case 371u: goto L_08A05790;
    case 372u: goto L_08A0579C;
    case 373u: goto L_08A057A4;
    case 374u: goto L_08A057B8;
    case 375u: goto L_08A057C0;
    case 376u: goto L_08A057C8;
    case 377u: goto L_08A057D8;
    case 378u: goto L_08A057E8;
    case 379u: goto L_08A057F0;
    case 380u: goto L_08A05804;
    case 381u: goto L_08A0580C;
    case 382u: goto L_08A05818;
    case 383u: goto L_08A05824;
    case 384u: goto L_08A05854;
    case 385u: goto L_08A05864;
    case 386u: goto L_08A05874;
    case 387u: goto L_08A05880;
    case 388u: goto L_08A0588C;
    case 389u: goto L_08A05894;
    case 390u: goto L_08A058C4;
    case 391u: goto L_08A058D4;
    case 392u: goto L_08A058E0;
    case 393u: goto L_08A058E8;
    case 394u: goto L_08A058FC;
    case 395u: goto L_08A0590C;
    case 396u: goto L_08A05918;
    case 397u: goto L_08A05920;
    case 398u: goto L_08A0592C;
    case 399u: goto L_08A05934;
    case 400u: goto L_08A05948;
    case 401u: goto L_08A05950;
    case 402u: goto L_08A05958;
    case 403u: goto L_08A05968;
    case 404u: goto L_08A05978;
    case 405u: goto L_08A05980;
    case 406u: goto L_08A05994;
    case 407u: goto L_08A0599C;
    case 408u: goto L_08A059A8;
    case 409u: goto L_08A059B4;
    case 410u: goto L_08A059E4;
    case 411u: goto L_08A059F4;
    case 412u: goto L_08A05A04;
    case 413u: goto L_08A05A10;
    case 414u: goto L_08A05A1C;
    case 415u: goto L_08A05A24;
    case 416u: goto L_08A05A54;
    case 417u: goto L_08A05A64;
    case 418u: goto L_08A05A70;
    case 419u: goto L_08A05A78;
    case 420u: goto L_08A05A8C;
    case 421u: goto L_08A05A9C;
    case 422u: goto L_08A05AA8;
    case 423u: goto L_08A05AB0;
    case 424u: goto L_08A05ABC;
    case 425u: goto L_08A05AC4;
    case 426u: goto L_08A05AD8;
    case 427u: goto L_08A05AE0;
    case 428u: goto L_08A05AE8;
    case 429u: goto L_08A05AF8;
    case 430u: goto L_08A05B08;
    case 431u: goto L_08A05B10;
    case 432u: goto L_08A05B24;
    case 433u: goto L_08A05B2C;
    case 434u: goto L_08A05B38;
    case 435u: goto L_08A05B44;
    case 436u: goto L_08A05B74;
    case 437u: goto L_08A05B84;
    case 438u: goto L_08A05B94;
    case 439u: goto L_08A05BA0;
    case 440u: goto L_08A05BAC;
    case 441u: goto L_08A05BB4;
    case 442u: goto L_08A05BE4;
    case 443u: goto L_08A05BF4;
    case 444u: goto L_08A05C00;
    case 445u: goto L_08A05C08;
    case 446u: goto L_08A05C1C;
    case 447u: goto L_08A05C2C;
    case 448u: goto L_08A05C38;
    case 449u: goto L_08A05C40;
    case 450u: goto L_08A05C4C;
    case 451u: goto L_08A05C54;
    case 452u: goto L_08A05C68;
    case 453u: goto L_08A05C70;
    case 454u: goto L_08A05C78;
    case 455u: goto L_08A05C88;
    case 456u: goto L_08A05C98;
    case 457u: goto L_08A05CA0;
    case 458u: goto L_08A05CB4;
    case 459u: goto L_08A05CBC;
    case 460u: goto L_08A05CC8;
    case 461u: goto L_08A05CD4;
    case 462u: goto L_08A05D04;
    case 463u: goto L_08A05D14;
    case 464u: goto L_08A05D24;
    case 465u: goto L_08A05D30;
    case 466u: goto L_08A05D3C;
    case 467u: goto L_08A05D44;
    case 468u: goto L_08A05D74;
    case 469u: goto L_08A05D84;
    case 470u: goto L_08A05D90;
    case 471u: goto L_08A05D98;
    case 472u: goto L_08A05DAC;
    case 473u: goto L_08A05DBC;
    case 474u: goto L_08A05DC8;
    case 475u: goto L_08A05DD0;
    case 476u: goto L_08A05DDC;
    case 477u: goto L_08A05DE4;
    case 478u: goto L_08A05DF8;
    case 479u: goto L_08A05E00;
    case 480u: goto L_08A05E08;
    case 481u: goto L_08A05E18;
    case 482u: goto L_08A05E28;
    case 483u: goto L_08A05E30;
    case 484u: goto L_08A05E44;
    case 485u: goto L_08A05E4C;
    case 486u: goto L_08A05E54;
    case 487u: goto L_08A05E60;
    case 488u: goto L_08A05E64;
    case 489u: goto L_08A05E94;
    case 490u: goto L_08A05EB0;
    case 491u: goto L_08A05EBC;
    case 492u: goto L_08A05ED0;
    case 493u: goto L_08A05EDC;
    case 494u: goto L_08A05EF0;
    case 495u: goto L_08A05EFC;
    case 496u: goto L_08A05F10;
    case 497u: goto L_08A05F1C;
    case 498u: goto L_08A05F30;
    case 499u: goto L_08A05F3C;
    case 500u: goto L_08A05F50;
    case 501u: goto L_08A05F5C;
    case 502u: goto L_08A05F74;
    case 503u: goto L_08A05F80;
    case 504u: goto L_08A05F98;
    case 505u: goto L_08A05FA4;
    case 506u: goto L_08A05FE8;
    case 507u: goto L_08A05FF0;
    case 508u: goto L_08A0600C;
    case 509u: goto L_08A0601C;
    case 510u: goto L_08A0603C;
    case 511u: goto L_08A06050;
    case 512u: goto L_08A0605C;
    case 513u: goto L_08A06078;
    case 514u: goto L_08A0607C;
    case 515u: goto L_08A0608C;
    case 516u: goto L_08A06098;
    case 517u: goto L_08A060A0;
    case 518u: goto L_08A060A4;
    case 519u: goto L_08A060AC;
    case 520u: goto L_08A060BC;
    case 521u: goto L_08A060D8;
    case 522u: goto L_08A060DC;
    case 523u: goto L_08A060EC;
    case 524u: goto L_08A060F8;
    case 525u: goto L_08A06100;
    case 526u: goto L_08A06104;
    case 527u: goto L_08A0610C;
    case 528u: goto L_08A0611C;
    case 529u: goto L_08A06134;
    case 530u: goto L_08A06138;
    case 531u: goto L_08A06148;
    case 532u: goto L_08A06154;
    case 533u: goto L_08A0616C;
    case 534u: goto L_08A06170;
    case 535u: goto L_08A06180;
    case 536u: goto L_08A0618C;
    case 537u: goto L_08A061A0;
    case 538u: goto L_08A061AC;
    case 539u: goto L_08A061D4;
    case 540u: goto L_08A061E0;
    case 541u: goto L_08A061F0;
    case 542u: goto L_08A06208;
    case 543u: goto L_08A0621C;
    case 544u: goto L_08A06228;
    case 545u: goto L_08A06258;
    case 546u: goto L_08A06264;
    case 547u: goto L_08A06274;
    case 548u: goto L_08A06290;
    case 549u: goto L_08A062A8;
    case 550u: goto L_08A062BC;
    case 551u: goto L_08A062C8;
    case 552u: goto L_08A062E4;
    case 553u: goto L_08A062F0;
    case 554u: goto L_08A06310;
    case 555u: goto L_08A0631C;
    case 556u: goto L_08A06330;
    case 557u: goto L_08A0633C;
    case 558u: goto L_08A06354;
    case 559u: goto L_08A06360;
    case 560u: goto L_08A06380;
    case 561u: goto L_08A0638C;
    case 562u: goto L_08A063A0;
    case 563u: goto L_08A063AC;
    case 564u: goto L_08A063C0;
    case 565u: goto L_08A063CC;
    case 566u: goto L_08A063E4;
    case 567u: goto L_08A063F0;
    case 568u: goto L_08A06408;
    case 569u: goto L_08A06414;
    case 570u: goto L_08A06428;
    case 571u: goto L_08A06434;
    case 572u: goto L_08A06448;
    case 573u: goto L_08A06454;
    case 574u: goto L_08A06468;
    case 575u: goto L_08A06474;
    case 576u: goto L_08A06488;
    case 577u: goto L_08A06494;
    case 578u: goto L_08A064AC;
    case 579u: goto L_08A064B8;
    case 580u: goto L_08A064D0;
    case 581u: goto L_08A064E0;
    case 582u: goto L_08A064EC;
    case 583u: goto L_08A0650C;
    case 584u: goto L_08A06528;
    case 585u: goto L_08A06534;
    case 586u: goto L_08A06548;
    case 587u: goto L_08A06554;
    case 588u: goto L_08A0655C;
    case 589u: goto L_08A06560;
    case 590u: goto L_08A0656C;
    case 591u: goto L_08A06580;
    case 592u: goto L_08A0658C;
    case 593u: goto L_08A06594;
    case 594u: goto L_08A06598;
    case 595u: goto L_08A065A4;
    case 596u: goto L_08A065BC;
    case 597u: goto L_08A065CC;
    case 598u: goto L_08A065D8;
    case 599u: goto L_08A065F0;
    case 600u: goto L_08A06600;
    case 601u: goto L_08A06608;
    case 602u: goto L_08A0660C;
    case 603u: goto L_08A06618;
    case 604u: goto L_08A06638;
    case 605u: goto L_08A06654;
    case 606u: goto L_08A06660;
    case 607u: goto L_08A06678;
    case 608u: goto L_08A06688;
    case 609u: goto L_08A06690;
    case 610u: goto L_08A06694;
    case 611u: goto L_08A066A0;
    case 612u: goto L_08A066B8;
    case 613u: goto L_08A066C8;
    case 614u: goto L_08A066D4;
    case 615u: goto L_08A066E8;
    case 616u: goto L_08A066F8;
    case 617u: goto L_08A06704;
    case 618u: goto L_08A0671C;
    case 619u: goto L_08A0672C;
    case 620u: goto L_08A06734;
    case 621u: goto L_08A06738;
    case 622u: goto L_08A06744;
    case 623u: goto L_08A0675C;
    case 624u: goto L_08A0676C;
    case 625u: goto L_08A06778;
    case 626u: goto L_08A0678C;
    case 627u: goto L_08A06798;
    case 628u: goto L_08A067AC;
    case 629u: goto L_08A067B8;
    case 630u: goto L_08A067D0;
    case 631u: goto L_08A067DC;
    case 632u: goto L_08A067F4;
    case 633u: goto L_08A06800;
    case 634u: goto L_08A06818;
    case 635u: goto L_08A06824;
    case 636u: goto L_08A06838;
    case 637u: goto L_08A0684C;
    case 638u: goto L_08A06858;
    case 639u: goto L_08A0686C;
    case 640u: goto L_08A06878;
    case 641u: goto L_08A0688C;
    case 642u: goto L_08A06898;
    case 643u: goto L_08A068AC;
    case 644u: goto L_08A068B8;
    case 645u: goto L_08A068CC;
    case 646u: goto L_08A068D8;
    case 647u: goto L_08A068EC;
    case 648u: goto L_08A068F8;
    case 649u: goto L_08A0690C;
    case 650u: goto L_08A06918;
    case 651u: goto L_08A06928;
    case 652u: goto L_08A06930;
    case 653u: goto L_08A06948;
    case 654u: goto L_08A06954;
    case 655u: goto L_08A06960;
    case 656u: goto L_08A0696C;
    case 657u: goto L_08A06970;
    case 658u: goto L_08A06984;
    case 659u: goto L_08A069A4;
    case 660u: goto L_08A069B0;
    case 661u: goto L_08A069C0;
    case 662u: goto L_08A069C8;
    case 663u: goto L_08A069CC;
    case 664u: goto L_08A069DC;
    case 665u: goto L_08A06A48;
    case 666u: goto L_08A06A54;
    case 667u: goto L_08A06A5C;
    case 668u: goto L_08A06A64;
    case 669u: goto L_08A06A7C;
    case 670u: goto L_08A06AA8;
    case 671u: goto L_08A06AB0;
    case 672u: goto L_08A06ADC;
    case 673u: goto L_08A06AE4;
    case 674u: goto L_08A06AF8;
    case 675u: goto L_08A06B0C;
    case 676u: goto L_08A06B14;
    case 677u: goto L_08A06B18;
    case 678u: goto L_08A06B3C;
    case 679u: goto L_08A06B54;
    case 680u: goto L_08A06B74;
    case 681u: goto L_08A06B7C;
    case 682u: goto L_08A06B8C;
    case 683u: goto L_08A06B94;
    case 684u: goto L_08A06B98;
    case 685u: goto L_08A06BC4;
    case 686u: goto L_08A06BE0;
    case 687u: goto L_08A06C10;
    case 688u: goto L_08A06C34;
    case 689u: goto L_08A06C70;
    case 690u: goto L_08A06CA0;
    case 691u: goto L_08A06CBC;
    case 692u: goto L_08A06CC8;
    case 693u: goto L_08A06CD0;
    case 694u: goto L_08A06CD8;
    case 695u: goto L_08A06CE0;
    case 696u: goto L_08A06CE8;
    case 697u: goto L_08A06CF0;
    case 698u: goto L_08A06CF8;
    case 699u: goto L_08A06D00;
    case 700u: goto L_08A06D08;
    case 701u: goto L_08A06D10;
    case 702u: goto L_08A06D20;
    case 703u: goto L_08A06D28;
    case 704u: goto L_08A06D3C;
    case 705u: goto L_08A06D80;
    case 706u: goto L_08A06D94;
    case 707u: goto L_08A06D9C;
    case 708u: goto L_08A06DB0;
    case 709u: goto L_08A06DC4;
    case 710u: goto L_08A06DCC;
    case 711u: goto L_08A06DE0;
    case 712u: goto L_08A06E08;
    case 713u: goto L_08A06E10;
    case 714u: goto L_08A06E18;
    case 715u: goto L_08A06E20;
    case 716u: goto L_08A06E28;
    case 717u: goto L_08A06E30;
    case 718u: goto L_08A06E44;
    case 719u: goto L_08A06E88;
    case 720u: goto L_08A06E90;
    case 721u: goto L_08A06ECC;
    case 722u: goto L_08A06EDC;
    case 723u: goto L_08A06FE0;
    case 724u: goto L_08A0700C;
    case 725u: goto L_08A07048;
    case 726u: goto L_08A07054;
    case 727u: goto L_08A07068;
    case 728u: goto L_08A0709C;
    case 729u: goto L_08A070A4;
    case 730u: goto L_08A070A8;
    case 731u: goto L_08A070B0;
    case 732u: goto L_08A070C0;
    case 733u: goto L_08A070C8;
    case 734u: goto L_08A070D0;
    case 735u: goto L_08A070DC;
    case 736u: goto L_08A070F0;
    case 737u: goto L_08A0712C;
    case 738u: goto L_08A07138;
    case 739u: goto L_08A07160;
    case 740u: goto L_08A0717C;
    case 741u: goto L_08A0719C;
    case 742u: goto L_08A071C8;
    case 743u: goto L_08A071D0;
    case 744u: goto L_08A071F0;
    case 745u: goto L_08A07200;
    case 746u: goto L_08A07210;
    case 747u: goto L_08A0721C;
    case 748u: goto L_08A0722C;
    case 749u: goto L_08A07240;
    case 750u: goto L_08A07250;
    case 751u: goto L_08A07260;
    case 752u: goto L_08A07278;
    case 753u: goto L_08A07280;
    case 754u: goto L_08A07290;
    case 755u: goto L_08A072A0;
    case 756u: goto L_08A072B0;
    case 757u: goto L_08A072B8;
    case 758u: goto L_08A072C0;
    case 759u: goto L_08A072C8;
    case 760u: goto L_08A072D4;
    case 761u: goto L_08A072E0;
    case 762u: goto L_08A072E8;
    case 763u: goto L_08A072F0;
    case 764u: goto L_08A072F8;
    case 765u: goto L_08A07300;
    case 766u: goto L_08A07308;
    case 767u: goto L_08A07314;
    case 768u: goto L_08A0731C;
    case 769u: goto L_08A07328;
    case 770u: goto L_08A07344;
    case 771u: goto L_08A0735C;
    case 772u: goto L_08A07374;
    case 773u: goto L_08A073A0;
    case 774u: goto L_08A073BC;
    case 775u: goto L_08A073CC;
    case 776u: goto L_08A073D8;
    case 777u: goto L_08A073F4;
    case 778u: goto L_08A07428;
    case 779u: goto L_08A07430;
    case 780u: goto L_08A07448;
    case 781u: goto L_08A07460;
    case 782u: goto L_08A07468;
    case 783u: goto L_08A07470;
    case 784u: goto L_08A074AC;
    case 785u: goto L_08A074BC;
    case 786u: goto L_08A074FC;
    case 787u: goto L_08A07508;
    case 788u: goto L_08A07528;
    case 789u: goto L_08A07534;
    case 790u: goto L_08A0753C;
    case 791u: goto L_08A0754C;
    case 792u: goto L_08A07554;
    case 793u: goto L_08A07560;
    case 794u: goto L_08A0756C;
    case 795u: goto L_08A07574;
    case 796u: goto L_08A07588;
    case 797u: goto L_08A07590;
    case 798u: goto L_08A07598;
    case 799u: goto L_08A075A0;
    case 800u: goto L_08A075A8;
    case 801u: goto L_08A075B0;
    case 802u: goto L_08A075B8;
    case 803u: goto L_08A075CC;
    case 804u: goto L_08A075D4;
    case 805u: goto L_08A075DC;
    case 806u: goto L_08A075E4;
    case 807u: goto L_08A075EC;
    case 808u: goto L_08A07608;
    case 809u: goto L_08A07620;
    case 810u: goto L_08A0763C;
    case 811u: goto L_08A07644;
    case 812u: goto L_08A0764C;
    case 813u: goto L_08A07654;
    case 814u: goto L_08A0765C;
    case 815u: goto L_08A07670;
    case 816u: goto L_08A07678;
    case 817u: goto L_08A07684;
    case 818u: goto L_08A076AC;
    case 819u: goto L_08A076B4;
    case 820u: goto L_08A076C4;
    case 821u: goto L_08A07724;
    case 822u: goto L_08A07734;
    case 823u: goto L_08A07740;
    case 824u: goto L_08A07744;
    case 825u: goto L_08A07760;
    case 826u: goto L_08A0776C;
    case 827u: goto L_08A0777C;
    case 828u: goto L_08A07784;
    case 829u: goto L_08A0778C;
    case 830u: goto L_08A07798;
    case 831u: goto L_08A077B0;
    case 832u: goto L_08A077CC;
    case 833u: goto L_08A077D8;
    case 834u: goto L_08A077E4;
    case 835u: goto L_08A07800;
    case 836u: goto L_08A0780C;
    case 837u: goto L_08A07814;
    case 838u: goto L_08A07828;
    case 839u: goto L_08A0782C;
    case 840u: goto L_08A0784C;
    case 841u: goto L_08A0787C;
    case 842u: goto L_08A07894;
    case 843u: goto L_08A0789C;
    case 844u: goto L_08A078A4;
    case 845u: goto L_08A078AC;
    case 846u: goto L_08A078D0;
    case 847u: goto L_08A078D8;
    case 848u: goto L_08A078E0;
    case 849u: goto L_08A078FC;
    case 850u: goto L_08A07904;
    case 851u: goto L_08A0790C;
    case 852u: goto L_08A07924;
    case 853u: goto L_08A0795C;
    case 854u: goto L_08A07964;
    case 855u: goto L_08A07980;
    case 856u: goto L_08A07988;
    case 857u: goto L_08A07990;
    case 858u: goto L_08A079AC;
    case 859u: goto L_08A079B4;
    case 860u: goto L_08A079B8;
    case 861u: goto L_08A079C8;
    case 862u: goto L_08A07A04;
    case 863u: goto L_08A07A14;
    case 864u: goto L_08A07A20;
    case 865u: goto L_08A07A44;
    case 866u: goto L_08A07A4C;
    case 867u: goto L_08A07A70;
    case 868u: goto L_08A07A74;
    case 869u: goto L_08A07A80;
    case 870u: goto L_08A07A8C;
    case 871u: goto L_08A07ABC;
    case 872u: goto L_08A07AC0;
    case 873u: goto L_08A07ACC;
    case 874u: goto L_08A07AD4;
    case 875u: goto L_08A07ADC;
    case 876u: goto L_08A07B00;
    case 877u: goto L_08A07B10;
    case 878u: goto L_08A07B20;
    case 879u: goto L_08A07B30;
    case 880u: goto L_08A07B38;
    case 881u: goto L_08A07B44;
    case 882u: goto L_08A07B50;
    case 883u: goto L_08A07B64;
    case 884u: goto L_08A07B7C;
    case 885u: goto L_08A07B98;
    case 886u: goto L_08A07BA4;
    case 887u: goto L_08A07BB0;
    case 888u: goto L_08A07BD0;
    case 889u: goto L_08A07BE0;
    case 890u: goto L_08A07BF4;
    case 891u: goto L_08A07BFC;
    case 892u: goto L_08A07C0C;
    case 893u: goto L_08A07C48;
    case 894u: goto L_08A07C98;
    case 895u: goto L_08A07CA8;
    case 896u: goto L_08A07CB4;
    case 897u: goto L_08A07E20;
    case 898u: goto L_08A07F8C;
    case 899u: goto L_08A07FA4;
    case 900u: goto L_08A07FA8;
    case 901u: goto L_08A07FB0;
    case 902u: goto L_08A07FBC;
    case 903u: goto L_08A07FC4;
    case 904u: goto L_08A07FD0;
    case 905u: goto L_08A07FDC;
    case 906u: goto L_08A07FE8;
    case 907u: goto L_08A07FEC;
    case 908u: goto L_08A07FF0;
    case 909u: goto L_08A07FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A04004:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A04020;
      }
      goto L_08A0400C;
    }
L_08A0400C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 1054u, 0x08A03FF4u>(ctx, &aot_mem); return;
      }
      goto L_08A0401C;
    }
L_08A0401C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A04020;
L_08A04020:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A04028:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[7] >> 30u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[6] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 2u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A040A4;
      }
      goto L_08A04074;
    }
L_08A04074:
    ctx.gpr[18] = (0u | 0u);
    goto L_08A04078;
L_08A04078:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[31] = (0x08A0408Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 538u, 0x08A021F4u>(ctx, &aot_mem) && ctx.pc == 0x08A0408Cu) goto L_08A0408C;
    return;
L_08A0408C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A040AC;
      }
      goto L_08A04094;
    }
L_08A04094:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A04078;
      }
      goto L_08A040A4;
    }
L_08A040A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A040B0;
      }
      goto L_08A040AC;
    }
L_08A040AC:
    ctx.gpr[2] = (0u | 1u);
    goto L_08A040B0;
L_08A040B0:
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
L_08A040D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (ctx.gpr[7] & 255u);
      if (branch_taken) {
          goto L_08A04120;
      }
      goto L_08A040EC;
    }
L_08A040EC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[8]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
    ctx.gpr[8] = (ctx.gpr[8] >> 30u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A04128;
      }
      goto L_08A04118;
    }
L_08A04118:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A04150;
      }
      goto L_08A04120;
    }
L_08A04120:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A04214;
      }
      goto L_08A04128;
    }
L_08A04128:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08A0412C;
L_08A0412C:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A04140;
      }
      goto L_08A04138;
    }
L_08A04138:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[10] | 0u);
      if (branch_taken) {
          goto L_08A04150;
      }
      goto L_08A04140;
    }
L_08A04140:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A0412C;
      }
      goto L_08A04150;
    }
L_08A04150:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0417C;
      }
      goto L_08A04158;
    }
L_08A04158:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A04164u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A04898;
L_08A04164:
    ctx.gpr[31] = (0x08A0416Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 426u, 0x08A01A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0416Cu) goto L_08A0416C;
    return;
L_08A0416C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A04184;
      }
      goto L_08A04174;
    }
L_08A04174:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A04210;
      }
      goto L_08A0417C;
    }
L_08A0417C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A04214;
      }
      goto L_08A04184;
    }
L_08A04184:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A041EC;
      }
      goto L_08A04194;
    }
L_08A04194:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A041E0;
      }
      goto L_08A041A0;
    }
L_08A041A0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A041D4;
      }
      goto L_08A041AC;
    }
L_08A041AC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A041C0;
      }
      goto L_08A041B8;
    }
L_08A041B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A041D4;
      }
      goto L_08A041C0;
    }
L_08A041C0:
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[5] - ctx.gpr[7]);
    ctx.gpr[31] = (0x08A041D0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x08A041D0u) goto L_08A041D0;
    return;
L_08A041D0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08A041D4;
L_08A041D4:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A041EC;
      }
      goto L_08A041E0;
    }
L_08A041E0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A04194;
      }
      goto L_08A041EC;
    }
L_08A041EC:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A04210;
      }
      goto L_08A041F4;
    }
L_08A041F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A04210u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A04210u) goto L_08A04210;
    return;
L_08A04210:
    ctx.gpr[2] = (0u | 1u);
    goto L_08A04214;
L_08A04214:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A04228:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0426C;
      }
      goto L_08A04238;
    }
L_08A04238:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[8]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
    ctx.gpr[8] = (ctx.gpr[8] >> 30u);
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 2u));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[9] = (0u | 0u);
      if (branch_taken) {
          goto L_08A04274;
      }
      goto L_08A04264;
    }
L_08A04264:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0429C;
      }
      goto L_08A0426C;
    }
L_08A0426C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A042BC;
      }
      goto L_08A04274;
    }
L_08A04274:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08A04278;
L_08A04278:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A0428C;
      }
      goto L_08A04284;
    }
L_08A04284:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (ctx.gpr[10] | 0u);
      if (branch_taken) {
          goto L_08A0429C;
      }
      goto L_08A0428C;
    }
L_08A0428C:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A04278;
      }
      goto L_08A0429C;
    }
L_08A0429C:
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A042AC;
      }
      goto L_08A042A4;
    }
L_08A042A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A042BC;
      }
      goto L_08A042AC;
    }
L_08A042AC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A042B8u);
    ctx.gpr[4] = (ctx.gpr[9] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 493u, 0x08A01F28u>(ctx, &aot_mem) && ctx.pc == 0x08A042B8u) goto L_08A042B8;
    return;
L_08A042B8:
    ctx.gpr[2] = (0u | 1u);
    goto L_08A042BC;
L_08A042BC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A042C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A04314;
      }
      goto L_08A042E0;
    }
L_08A042E0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[7] >> 30u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A0431C;
      }
      goto L_08A0430C;
    }
L_08A0430C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A04344;
      }
      goto L_08A04314;
    }
L_08A04314:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A04418;
      }
      goto L_08A0431C;
    }
L_08A0431C:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08A04320;
L_08A04320:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A04334;
      }
      goto L_08A0432C;
    }
L_08A0432C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_08A04344;
      }
      goto L_08A04334;
    }
L_08A04334:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A04320;
      }
      goto L_08A04344;
    }
L_08A04344:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A04380;
      }
      goto L_08A0434C;
    }
L_08A0434C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A04368u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A04368u) goto L_08A04368;
    return;
L_08A04368:
    ctx.gpr[31] = (0x08A04370u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 426u, 0x08A01A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A04370u) goto L_08A04370;
    return;
L_08A04370:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A04388;
      }
      goto L_08A04378;
    }
L_08A04378:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A04414;
      }
      goto L_08A04380;
    }
L_08A04380:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A04418;
      }
      goto L_08A04388;
    }
L_08A04388:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A043F0;
      }
      goto L_08A04398;
    }
L_08A04398:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A043E4;
      }
      goto L_08A043A4;
    }
L_08A043A4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A043D8;
      }
      goto L_08A043B0;
    }
L_08A043B0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A043C4;
      }
      goto L_08A043BC;
    }
L_08A043BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A043D8;
      }
      goto L_08A043C4;
    }
L_08A043C4:
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[5] - ctx.gpr[7]);
    ctx.gpr[31] = (0x08A043D4u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x08A043D4u) goto L_08A043D4;
    return;
L_08A043D4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08A043D8;
L_08A043D8:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A043F0;
      }
      goto L_08A043E4;
    }
L_08A043E4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A04398;
      }
      goto L_08A043F0;
    }
L_08A043F0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A04414;
      }
      goto L_08A043F8;
    }
L_08A043F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A04414u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A04414u) goto L_08A04414;
    return;
L_08A04414:
    ctx.gpr[2] = (0u | 1u);
    goto L_08A04418;
L_08A04418:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0442C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A04470;
      }
      goto L_08A0443C;
    }
L_08A0443C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[7] - ctx.gpr[9]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[7] >> 30u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_08A04478;
      }
      goto L_08A04468;
    }
L_08A04468:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0449C;
      }
      goto L_08A04470;
    }
L_08A04470:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A044C8;
      }
      goto L_08A04478;
    }
L_08A04478:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A0448C;
      }
      goto L_08A04484;
    }
L_08A04484:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[10] | 0u);
      if (branch_taken) {
          goto L_08A0449C;
      }
      goto L_08A0448C;
    }
L_08A0448C:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A04478;
      }
      goto L_08A0449C;
    }
L_08A0449C:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A044AC;
      }
      goto L_08A044A4;
    }
L_08A044A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A044C8;
      }
      goto L_08A044AC;
    }
L_08A044AC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(40));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A044C8u);
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A044C8u) goto L_08A044C8;
    return;
L_08A044C8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A044D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A04518;
      }
      goto L_08A044E4;
    }
L_08A044E4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[7] - ctx.gpr[9]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[7] >> 30u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_08A04520;
      }
      goto L_08A04510;
    }
L_08A04510:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A04544;
      }
      goto L_08A04518;
    }
L_08A04518:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A04560;
      }
      goto L_08A04520;
    }
L_08A04520:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A04534;
      }
      goto L_08A0452C;
    }
L_08A0452C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[10] | 0u);
      if (branch_taken) {
          goto L_08A04544;
      }
      goto L_08A04534;
    }
L_08A04534:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A04520;
      }
      goto L_08A04544;
    }
L_08A04544:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A04554;
      }
      goto L_08A0454C;
    }
L_08A0454C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A04560;
      }
      goto L_08A04554;
    }
L_08A04554:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A04560u);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 420u, 0x08A019D0u>(ctx, &aot_mem) && ctx.pc == 0x08A04560u) goto L_08A04560;
    return;
L_08A04560:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0456C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A045DC;
      }
      goto L_08A04588;
    }
L_08A04588:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A045A8;
      }
      goto L_08A0459C;
    }
L_08A0459C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    goto L_08A045A0;
L_08A045A0:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A045A0;
      }
      goto L_08A045A8;
    }
L_08A045A8:
    if (ctx.gpr[17] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_08A045CC;
    }
    goto L_08A045B0;
L_08A045B0:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_08A045CC;
    }
    goto L_08A045B8;
L_08A045B8:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_08A045CC;
    }
    goto L_08A045C0;
L_08A045C0:
    ctx.gpr[31] = (0x08A045C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08A045C8u) goto L_08A045C8;
    return;
L_08A045C8:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_08A045CC;
L_08A045CC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A045DC;
      }
      goto L_08A045D4;
    }
L_08A045D4:
    ctx.gpr[31] = (0x08A045DCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08A045DCu) goto L_08A045DC;
    return;
L_08A045DC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A045F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(80));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[7] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[8] = (49024u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[10]);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(24));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[10]);
    ctx.gpr[7] = (0u | 5u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(208));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (48896u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[8] = (ctx.gpr[5] + static_cast<std::uint32_t>(36));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), ctx.gpr[11]);
    ctx.gpr[8] = (ctx.gpr[5] + static_cast<std::uint32_t>(24));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), ctx.gpr[11]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[8] = (49152u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[8] = (ctx.gpr[5] + static_cast<std::uint32_t>(36));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), ctx.gpr[11]);
    ctx.gpr[8] = (ctx.gpr[5] + static_cast<std::uint32_t>(24));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), ctx.gpr[11]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(144));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(36));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[10]);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(24));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[10]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A04898:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[6] & 255u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[6];
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A04AF4;
      }
      goto L_08A048C4;
    }
L_08A048C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A04AE4;
      }
      goto L_08A048D0;
    }
L_08A048D0:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1340), 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(464)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1344), ctx.gpr[5]);
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(464), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    ctx.gpr[7] = (ctx.gpr[5] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08A04A18;
      }
      goto L_08A04900;
    }
L_08A04900:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A04944;
      }
      goto L_08A04908;
    }
L_08A04908:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08A04960;
      }
      goto L_08A04910;
    }
L_08A04910:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A0499C;
      }
      goto L_08A04918;
    }
L_08A04918:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08A049C8;
      }
      goto L_08A04920;
    }
L_08A04920:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08A049F4;
      }
      goto L_08A04928;
    }
L_08A04928:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[7] = (0u | 39u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A0493C;
      }
      goto L_08A04938;
    }
L_08A04938:
    ctx.gpr[6] = (0u | 1u);
    goto L_08A0493C;
L_08A0493C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A04A18;
      }
      goto L_08A04944;
    }
L_08A04944:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[7] = (0u | 40u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A04958;
      }
      goto L_08A04954;
    }
L_08A04954:
    ctx.gpr[6] = (0u | 1u);
    goto L_08A04958;
L_08A04958:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A04A18;
      }
      goto L_08A04960;
    }
L_08A04960:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[7] = (0u | 43u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A04990;
      }
      goto L_08A04970;
    }
L_08A04970:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[7] = (0u | 52u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A04990;
      }
      goto L_08A04980;
    }
L_08A04980:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[7] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A04994;
      }
      goto L_08A04990;
    }
L_08A04990:
    ctx.gpr[6] = (0u | 1u);
    goto L_08A04994;
L_08A04994:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A04A18;
      }
      goto L_08A0499C;
    }
L_08A0499C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[7] = (0u | 44u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A049BC;
      }
      goto L_08A049AC;
    }
L_08A049AC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[7] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A049C0;
      }
      goto L_08A049BC;
    }
L_08A049BC:
    ctx.gpr[6] = (0u | 1u);
    goto L_08A049C0;
L_08A049C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A04A18;
      }
      goto L_08A049C8;
    }
L_08A049C8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[7] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A049E8;
      }
      goto L_08A049D8;
    }
L_08A049D8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[7] = (0u | 48u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A049EC;
      }
      goto L_08A049E8;
    }
L_08A049E8:
    ctx.gpr[6] = (0u | 1u);
    goto L_08A049EC;
L_08A049EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A04A18;
      }
      goto L_08A049F4;
    }
L_08A049F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[7] = (0u | 53u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A04A14;
      }
      goto L_08A04A04;
    }
L_08A04A04:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[7] = (0u | 54u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A04A18;
      }
      goto L_08A04A14;
    }
L_08A04A14:
    ctx.gpr[6] = (0u | 1u);
    goto L_08A04A18;
L_08A04A18:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A04AA0;
      }
      goto L_08A04A20;
    }
L_08A04A20:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A04A60;
      }
      goto L_08A04A28;
    }
L_08A04A28:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A04A34u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 442u, 0x08ACD4BCu>(ctx, &aot_mem) && ctx.pc == 0x08A04A34u) goto L_08A04A34;
    return;
L_08A04A34:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[31] = (0x08A04A48u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 570u, 0x08A8EFB4u>(ctx, &aot_mem) && ctx.pc == 0x08A04A48u) goto L_08A04A48;
    return;
L_08A04A48:
    ctx.gpr[5] = (ctx.gpr[2] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[31] = (0x08A04A58u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 631u, 0x0890A728u>(ctx, &aot_mem) && ctx.pc == 0x08A04A58u) goto L_08A04A58;
    return;
L_08A04A58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A04AA0;
      }
      goto L_08A04A60;
    }
L_08A04A60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A04A7C;
      }
      goto L_08A04A70;
    }
L_08A04A70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A04AA0;
      }
      goto L_08A04A7C;
    }
L_08A04A7C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[31] = (0x08A04A90u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 570u, 0x08A8EFB4u>(ctx, &aot_mem) && ctx.pc == 0x08A04A90u) goto L_08A04A90;
    return;
L_08A04A90:
    ctx.gpr[5] = (ctx.gpr[2] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[31] = (0x08A04AA0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 631u, 0x0890A728u>(ctx, &aot_mem) && ctx.pc == 0x08A04AA0u) goto L_08A04AA0;
    return;
L_08A04AA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A04AD0;
      }
      goto L_08A04AB0;
    }
L_08A04AB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A04AD0;
      }
      goto L_08A04AC0;
    }
L_08A04AC0:
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[31] = (0x08A04AD0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x08A04AD0u) goto L_08A04AD0;
    return;
L_08A04AD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A04B10;
      }
      goto L_08A04AE4;
    }
L_08A04AE4:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A048C4;
      }
      goto L_08A04AF4;
    }
L_08A04AF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A04B10u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A04B10u) goto L_08A04B10;
    return;
L_08A04B10:
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
L_08A04B28:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 2u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A04BAC;
      }
      goto L_08A04B88;
    }
L_08A04B88:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A04B9C;
      }
      goto L_08A04B94;
    }
L_08A04B94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A04BAC;
      }
      goto L_08A04B9C;
    }
L_08A04B9C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A04B88;
      }
      goto L_08A04BAC;
    }
L_08A04BAC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A04BCC;
      }
      goto L_08A04BB4;
    }
L_08A04BB4:
    ctx.gpr[20] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[23] = (0u | 1u);
      if (branch_taken) {
          goto L_08A04BD4;
      }
      goto L_08A04BC4;
    }
L_08A04BC4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1340), 0u);
      if (branch_taken) {
          goto L_08A04C84;
      }
      goto L_08A04BCC;
    }
L_08A04BCC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A04F9C;
      }
      goto L_08A04BD4;
    }
L_08A04BD4:
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[21] = (ctx.gpr[20] << 2u);
    goto L_08A04BE0;
L_08A04BE0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A04C18u);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A04C18u) goto L_08A04C18;
    return;
L_08A04C18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(56));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A04C38u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A04C38u) goto L_08A04C38;
    return;
L_08A04C38:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A04C4Cu);
    ctx.gpr[7] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 443u, 0x08A01BE0u>(ctx, &aot_mem) && ctx.pc == 0x08A04C4Cu) goto L_08A04C4C;
    return;
L_08A04C4C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08A04C68u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 590u, 0x0890E824u>(ctx, &aot_mem) && ctx.pc == 0x08A04C68u) goto L_08A04C68;
    return;
L_08A04C68:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
      if (branch_taken) {
          goto L_08A04BE0;
      }
      goto L_08A04C80;
    }
L_08A04C80:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1340), 0u);
    goto L_08A04C84;
L_08A04C84:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(464)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1344), ctx.gpr[4]);
    ctx.gpr[4] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(464), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A04D90;
      }
      goto L_08A04CB0;
    }
L_08A04CB0:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2196)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A04CF8;
      }
      goto L_08A04CC0;
    }
L_08A04CC0:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08A04D10;
      }
      goto L_08A04CC8;
    }
L_08A04CC8:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A04D38;
      }
      goto L_08A04CD0;
    }
L_08A04CD0:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08A04D58;
      }
      goto L_08A04CD8;
    }
L_08A04CD8:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08A04D78;
      }
      goto L_08A04CE0;
    }
L_08A04CE0:
    ctx.gpr[6] = (0u | 39u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A04CF0;
      }
      goto L_08A04CEC;
    }
L_08A04CEC:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A04CF0;
L_08A04CF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A04D90;
      }
      goto L_08A04CF8;
    }
L_08A04CF8:
    ctx.gpr[6] = (0u | 40u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A04D08;
      }
      goto L_08A04D04;
    }
L_08A04D04:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A04D08;
L_08A04D08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A04D90;
      }
      goto L_08A04D10;
    }
L_08A04D10:
    ctx.gpr[6] = (0u | 43u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 52u);
      if (branch_taken) {
          goto L_08A04D2C;
      }
      goto L_08A04D1C;
    }
L_08A04D1C:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_08A04D2C;
      }
      goto L_08A04D24;
    }
L_08A04D24:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A04D30;
      }
      goto L_08A04D2C;
    }
L_08A04D2C:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A04D30;
L_08A04D30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A04D90;
      }
      goto L_08A04D38;
    }
L_08A04D38:
    ctx.gpr[6] = (0u | 44u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_08A04D4C;
      }
      goto L_08A04D44;
    }
L_08A04D44:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A04D50;
      }
      goto L_08A04D4C;
    }
L_08A04D4C:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A04D50;
L_08A04D50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A04D90;
      }
      goto L_08A04D58;
    }
L_08A04D58:
    ctx.gpr[6] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 48u);
      if (branch_taken) {
          goto L_08A04D6C;
      }
      goto L_08A04D64;
    }
L_08A04D64:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A04D70;
      }
      goto L_08A04D6C;
    }
L_08A04D6C:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A04D70;
L_08A04D70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A04D90;
      }
      goto L_08A04D78;
    }
L_08A04D78:
    ctx.gpr[6] = (0u | 53u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 54u);
      if (branch_taken) {
          goto L_08A04D8C;
      }
      goto L_08A04D84;
    }
L_08A04D84:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A04D90;
      }
      goto L_08A04D8C;
    }
L_08A04D8C:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A04D90;
L_08A04D90:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A04E4C;
      }
      goto L_08A04D98;
    }
L_08A04D98:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A04DA4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 442u, 0x08ACD4BCu>(ctx, &aot_mem) && ctx.pc == 0x08A04DA4u) goto L_08A04DA4;
    return;
L_08A04DA4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
      if (branch_taken) {
          goto L_08A04DD4;
      }
      goto L_08A04DB0;
    }
L_08A04DB0:
    ctx.gpr[31] = (0x08A04DB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 570u, 0x08A8EFB4u>(ctx, &aot_mem) && ctx.pc == 0x08A04DB8u) goto L_08A04DB8;
    return;
L_08A04DB8:
    ctx.gpr[5] = (ctx.gpr[2] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[31] = (0x08A04DC8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 631u, 0x0890A728u>(ctx, &aot_mem) && ctx.pc == 0x08A04DC8u) goto L_08A04DC8;
    return;
L_08A04DC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08A04E30;
      }
      goto L_08A04DD4;
    }
L_08A04DD4:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_08A04E08;
      }
      goto L_08A04DE4;
    }
L_08A04DE4:
    ctx.gpr[31] = (0x08A04DECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 570u, 0x08A8EFB4u>(ctx, &aot_mem) && ctx.pc == 0x08A04DECu) goto L_08A04DEC;
    return;
L_08A04DEC:
    ctx.gpr[5] = (ctx.gpr[2] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[31] = (0x08A04DFCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 631u, 0x0890A728u>(ctx, &aot_mem) && ctx.pc == 0x08A04DFCu) goto L_08A04DFC;
    return;
L_08A04DFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08A04E30;
      }
      goto L_08A04E08;
    }
L_08A04E08:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x08A04E18u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 570u, 0x08A8EFB4u>(ctx, &aot_mem) && ctx.pc == 0x08A04E18u) goto L_08A04E18;
    return;
L_08A04E18:
    ctx.gpr[5] = (ctx.gpr[2] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[31] = (0x08A04E28u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 631u, 0x0890A728u>(ctx, &aot_mem) && ctx.pc == 0x08A04E28u) goto L_08A04E28;
    return;
L_08A04E28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    goto L_08A04E30;
L_08A04E30:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A04E44u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A04E44u) goto L_08A04E44;
    return;
L_08A04E44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A04E88;
      }
      goto L_08A04E4C;
    }
L_08A04E4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A04E64;
      }
      goto L_08A04E5C;
    }
L_08A04E5C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A04E88;
      }
      goto L_08A04E64;
    }
L_08A04E64:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[31] = (0x08A04E78u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 570u, 0x08A8EFB4u>(ctx, &aot_mem) && ctx.pc == 0x08A04E78u) goto L_08A04E78;
    return;
L_08A04E78:
    ctx.gpr[5] = (ctx.gpr[2] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[31] = (0x08A04E88u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 631u, 0x0890A728u>(ctx, &aot_mem) && ctx.pc == 0x08A04E88u) goto L_08A04E88;
    return;
L_08A04E88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    if (ctx.gpr[5] == ctx.gpr[18]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_08A04EBC;
    }
    goto L_08A04EA4;
L_08A04EA4:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[5];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A04EB8;
      }
      goto L_08A04EAC;
    }
L_08A04EAC:
    ctx.gpr[31] = (0x08A04EB4u);
    ctx.gpr[6] = (ctx.gpr[18] - ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x08A04EB4u) goto L_08A04EB4;
    return;
L_08A04EB4:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    goto L_08A04EB8;
L_08A04EB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_08A04EBC;
L_08A04EBC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(-4));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 2u));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08A04F98;
      }
      goto L_08A04EE8;
    }
L_08A04EE8:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[19] = (0u | 0u);
    goto L_08A04EF8;
L_08A04EF8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.gpr[31] = (0x08A04F10u);
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 427u, 0x08A01A6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A04F10u) goto L_08A04F10;
    return;
L_08A04F10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A04F34u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A04F34u) goto L_08A04F34;
    return;
L_08A04F34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(56));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A04F54u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A04F54u) goto L_08A04F54;
    return;
L_08A04F54:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A04F68u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 443u, 0x08A01BE0u>(ctx, &aot_mem) && ctx.pc == 0x08A04F68u) goto L_08A04F68;
    return;
L_08A04F68:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A04F84u);
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 590u, 0x0890E824u>(ctx, &aot_mem) && ctx.pc == 0x08A04F84u) goto L_08A04F84;
    return;
L_08A04F84:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
      if (branch_taken) {
          goto L_08A04EF8;
      }
      goto L_08A04F98;
    }
L_08A04F98:
    ctx.gpr[2] = (ctx.gpr[23] | 0u);
    goto L_08A04F9C;
L_08A04F9C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A04FCC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 2u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A0504C;
      }
      goto L_08A05028;
    }
L_08A05028:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A0503C;
      }
      goto L_08A05034;
    }
L_08A05034:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A0504C;
      }
      goto L_08A0503C;
    }
L_08A0503C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A05028;
      }
      goto L_08A0504C;
    }
L_08A0504C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A050BC;
      }
      goto L_08A05054;
    }
L_08A05054:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1340), 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(464)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1344), ctx.gpr[4]);
    ctx.gpr[4] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(464), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A05174;
      }
      goto L_08A05084;
    }
L_08A05084:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2196)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A050DC;
      }
      goto L_08A05094;
    }
L_08A05094:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A050C4;
      }
      goto L_08A0509C;
    }
L_08A0509C:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08A050F4;
      }
      goto L_08A050A4;
    }
L_08A050A4:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A0511C;
      }
      goto L_08A050AC;
    }
L_08A050AC:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08A0513C;
      }
      goto L_08A050B4;
    }
L_08A050B4:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08A0515C;
      }
      goto L_08A050BC;
    }
L_08A050BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A05374;
      }
      goto L_08A050C4;
    }
L_08A050C4:
    ctx.gpr[6] = (0u | 39u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A050D4;
      }
      goto L_08A050D0;
    }
L_08A050D0:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A050D4;
L_08A050D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A05174;
      }
      goto L_08A050DC;
    }
L_08A050DC:
    ctx.gpr[6] = (0u | 40u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A050EC;
      }
      goto L_08A050E8;
    }
L_08A050E8:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A050EC;
L_08A050EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A05174;
      }
      goto L_08A050F4;
    }
L_08A050F4:
    ctx.gpr[6] = (0u | 43u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 52u);
      if (branch_taken) {
          goto L_08A05110;
      }
      goto L_08A05100;
    }
L_08A05100:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_08A05110;
      }
      goto L_08A05108;
    }
L_08A05108:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A05114;
      }
      goto L_08A05110;
    }
L_08A05110:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A05114;
L_08A05114:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A05174;
      }
      goto L_08A0511C;
    }
L_08A0511C:
    ctx.gpr[6] = (0u | 44u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_08A05130;
      }
      goto L_08A05128;
    }
L_08A05128:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A05134;
      }
      goto L_08A05130;
    }
L_08A05130:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A05134;
L_08A05134:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A05174;
      }
      goto L_08A0513C;
    }
L_08A0513C:
    ctx.gpr[6] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 48u);
      if (branch_taken) {
          goto L_08A05150;
      }
      goto L_08A05148;
    }
L_08A05148:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A05154;
      }
      goto L_08A05150;
    }
L_08A05150:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A05154;
L_08A05154:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A05174;
      }
      goto L_08A0515C;
    }
L_08A0515C:
    ctx.gpr[6] = (0u | 53u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 54u);
      if (branch_taken) {
          goto L_08A05170;
      }
      goto L_08A05168;
    }
L_08A05168:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A05174;
      }
      goto L_08A05170;
    }
L_08A05170:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A05174;
L_08A05174:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A05230;
      }
      goto L_08A0517C;
    }
L_08A0517C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A05188u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 442u, 0x08ACD4BCu>(ctx, &aot_mem) && ctx.pc == 0x08A05188u) goto L_08A05188;
    return;
L_08A05188:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
      if (branch_taken) {
          goto L_08A051B8;
      }
      goto L_08A05194;
    }
L_08A05194:
    ctx.gpr[31] = (0x08A0519Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 570u, 0x08A8EFB4u>(ctx, &aot_mem) && ctx.pc == 0x08A0519Cu) goto L_08A0519C;
    return;
L_08A0519C:
    ctx.gpr[5] = (ctx.gpr[2] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[31] = (0x08A051ACu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 631u, 0x0890A728u>(ctx, &aot_mem) && ctx.pc == 0x08A051ACu) goto L_08A051AC;
    return;
L_08A051AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08A05214;
      }
      goto L_08A051B8;
    }
L_08A051B8:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_08A051EC;
      }
      goto L_08A051C8;
    }
L_08A051C8:
    ctx.gpr[31] = (0x08A051D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 570u, 0x08A8EFB4u>(ctx, &aot_mem) && ctx.pc == 0x08A051D0u) goto L_08A051D0;
    return;
L_08A051D0:
    ctx.gpr[5] = (ctx.gpr[2] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[31] = (0x08A051E0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 631u, 0x0890A728u>(ctx, &aot_mem) && ctx.pc == 0x08A051E0u) goto L_08A051E0;
    return;
L_08A051E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08A05214;
      }
      goto L_08A051EC;
    }
L_08A051EC:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x08A051FCu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 570u, 0x08A8EFB4u>(ctx, &aot_mem) && ctx.pc == 0x08A051FCu) goto L_08A051FC;
    return;
L_08A051FC:
    ctx.gpr[5] = (ctx.gpr[2] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[31] = (0x08A0520Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 631u, 0x0890A728u>(ctx, &aot_mem) && ctx.pc == 0x08A0520Cu) goto L_08A0520C;
    return;
L_08A0520C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    goto L_08A05214;
L_08A05214:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A05228u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A05228u) goto L_08A05228;
    return;
L_08A05228:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0526C;
      }
      goto L_08A05230;
    }
L_08A05230:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A05248;
      }
      goto L_08A05240;
    }
L_08A05240:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0526C;
      }
      goto L_08A05248;
    }
L_08A05248:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[31] = (0x08A0525Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 570u, 0x08A8EFB4u>(ctx, &aot_mem) && ctx.pc == 0x08A0525Cu) goto L_08A0525C;
    return;
L_08A0525C:
    ctx.gpr[5] = (ctx.gpr[2] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[31] = (0x08A0526Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 631u, 0x0890A728u>(ctx, &aot_mem) && ctx.pc == 0x08A0526Cu) goto L_08A0526C;
    return;
L_08A0526C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    if (ctx.gpr[5] == ctx.gpr[18]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_08A052A0;
    }
    goto L_08A05288;
L_08A05288:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[5];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A0529C;
      }
      goto L_08A05290;
    }
L_08A05290:
    ctx.gpr[31] = (0x08A05298u);
    ctx.gpr[6] = (ctx.gpr[18] - ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x08A05298u) goto L_08A05298;
    return;
L_08A05298:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    goto L_08A0529C;
L_08A0529C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_08A052A0;
L_08A052A0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(-4));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 2u));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08A05370;
      }
      goto L_08A052CC;
    }
L_08A052CC:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[19] = (0u | 0u);
    goto L_08A052D8;
L_08A052D8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.gpr[31] = (0x08A052ECu);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 427u, 0x08A01A6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A052ECu) goto L_08A052EC;
    return;
L_08A052EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A05310u);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A05310u) goto L_08A05310;
    return;
L_08A05310:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(56));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A05330u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A05330u) goto L_08A05330;
    return;
L_08A05330:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A05344u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 443u, 0x08A01BE0u>(ctx, &aot_mem) && ctx.pc == 0x08A05344u) goto L_08A05344;
    return;
L_08A05344:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08A05360u);
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 590u, 0x0890E824u>(ctx, &aot_mem) && ctx.pc == 0x08A05360u) goto L_08A05360;
    return;
L_08A05360:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A052D8;
      }
      goto L_08A05370;
    }
L_08A05370:
    ctx.gpr[2] = (0u | 1u);
    goto L_08A05374;
L_08A05374:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A053A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-208));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[9]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 2u));
    ctx.gpr[9] = (ctx.gpr[9] >> 30u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[8] + ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 2u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[23]);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    ctx.gpr[21] = (ctx.gpr[5] | 0u);
    ctx.gpr[22] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[30] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A0548C;
      }
      goto L_08A05408;
    }
L_08A05408:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (0u | 0u);
    goto L_08A05410;
L_08A05410:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A0542Cu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 914u, 0x08A036C4u>(ctx, &aot_mem) && ctx.pc == 0x08A0542Cu) goto L_08A0542C;
    return;
L_08A0542C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_08A0547C;
      }
      goto L_08A05438;
    }
L_08A05438:
    ctx.gpr[31] = (0x08A05440u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 456u, 0x08A93144u>(ctx, &aot_mem) && ctx.pc == 0x08A05440u) goto L_08A05440;
    return;
L_08A05440:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0547C;
      }
      goto L_08A05448;
    }
L_08A05448:
    ctx.gpr[31] = (0x08A05450u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 427u, 0x08A01A6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A05450u) goto L_08A05450;
    return;
L_08A05450:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A05464u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 918u, 0x08A03794u>(ctx, &aot_mem) && ctx.pc == 0x08A05464u) goto L_08A05464;
    return;
L_08A05464:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A05474;
      }
      goto L_08A0546C;
    }
L_08A0546C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A0548C;
      }
      goto L_08A05474;
    }
L_08A05474:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A05E64;
      }
      goto L_08A0547C;
    }
L_08A0547C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A05410;
      }
      goto L_08A0548C;
    }
L_08A0548C:
    { const bool branch_taken = ctx.gpr[23] != 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
      if (branch_taken) {
          goto L_08A05E4C;
      }
      goto L_08A05494;
    }
L_08A05494:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A054A8u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 918u, 0x08A03794u>(ctx, &aot_mem) && ctx.pc == 0x08A054A8u) goto L_08A054A8;
    return;
L_08A054A8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A05E4C;
      }
      goto L_08A054B0;
    }
L_08A054B0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A05E4C;
      }
      goto L_08A054C0;
    }
L_08A054C0:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A0567C;
      }
      goto L_08A054CC;
    }
L_08A054CC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08A0580C;
      }
      goto L_08A054D4;
    }
L_08A054D4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A0599C;
      }
      goto L_08A054DC;
    }
L_08A054DC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08A05B2C;
      }
      goto L_08A054E4;
    }
L_08A054E4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08A05CBC;
      }
      goto L_08A054EC;
    }
L_08A054EC:
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[31] = (0x08A054F8u);
    ctx.gpr[4] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08A054F8u) goto L_08A054F8;
    return;
L_08A054F8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A05544;
      }
      goto L_08A05504;
    }
L_08A05504:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9192)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9188)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9184)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9180)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9176)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9172)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9168)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9164)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A05534u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 400u, 0x08A01838u>(ctx, &aot_mem) && ctx.pc == 0x08A05534u) goto L_08A05534;
    return;
L_08A05534:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28368));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    ctx.gpr[23] = (ctx.gpr[16] | 0u);
    goto L_08A05544;
L_08A05544:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08A05574;
      }
      goto L_08A05554;
    }
L_08A05554:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A0556C;
      }
      goto L_08A05560;
    }
L_08A05560:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[23]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    goto L_08A0556C;
L_08A0556C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A05674;
      }
      goto L_08A05574;
    }
L_08A05574:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[16] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[16] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08A055B4;
      }
      goto L_08A055A4;
    }
L_08A055A4:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A055C0;
      }
      goto L_08A055B4;
    }
L_08A055B4:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[5]);
    goto L_08A055C0;
L_08A055C0:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A05600;
      }
      goto L_08A055C8;
    }
L_08A055C8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[5]);
    ctx.gpr[31] = (0x08A055DCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem) && ctx.pc == 0x08A055DCu) goto L_08A055DC;
    return;
L_08A055DC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
      if (branch_taken) {
          goto L_08A05600;
      }
      goto L_08A055EC;
    }
L_08A055EC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A055F8u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem) && ctx.pc == 0x08A055F8u) goto L_08A055F8;
    return;
L_08A055F8:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    goto L_08A05600;
L_08A05600:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A05614;
      }
      goto L_08A0560C;
    }
L_08A0560C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08A05630;
      }
      goto L_08A05614;
    }
L_08A05614:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A05628u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x08A05628u) goto L_08A05628;
    return;
L_08A05628:
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_08A05630;
L_08A05630:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A05648;
      }
      goto L_08A05638;
    }
L_08A05638:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A05638;
      }
      goto L_08A05648;
    }
L_08A05648:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A05660;
      }
      goto L_08A05658;
    }
L_08A05658:
    ctx.gpr[31] = (0x08A05660u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08A05660u) goto L_08A05660;
    return;
L_08A05660:
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(4), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_08A05674;
L_08A05674:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A05E4C;
      }
      goto L_08A0567C;
    }
L_08A0567C:
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[31] = (0x08A05688u);
    ctx.gpr[4] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08A05688u) goto L_08A05688;
    return;
L_08A05688:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A056D4;
      }
      goto L_08A05694;
    }
L_08A05694:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9160)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9156)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9152)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9148)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9144)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9140)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9136)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9132)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A056C4u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 400u, 0x08A01838u>(ctx, &aot_mem) && ctx.pc == 0x08A056C4u) goto L_08A056C4;
    return;
L_08A056C4:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28440));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    ctx.gpr[23] = (ctx.gpr[16] | 0u);
    goto L_08A056D4;
L_08A056D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08A05704;
      }
      goto L_08A056E4;
    }
L_08A056E4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A056FC;
      }
      goto L_08A056F0;
    }
L_08A056F0:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[23]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    goto L_08A056FC;
L_08A056FC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A05804;
      }
      goto L_08A05704;
    }
L_08A05704:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[16] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[16] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08A05744;
      }
      goto L_08A05734;
    }
L_08A05734:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A05750;
      }
      goto L_08A05744;
    }
L_08A05744:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[5]);
    goto L_08A05750;
L_08A05750:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A05790;
      }
      goto L_08A05758;
    }
L_08A05758:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[5]);
    ctx.gpr[31] = (0x08A0576Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem) && ctx.pc == 0x08A0576Cu) goto L_08A0576C;
    return;
L_08A0576C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
      if (branch_taken) {
          goto L_08A05790;
      }
      goto L_08A0577C;
    }
L_08A0577C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A05788u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem) && ctx.pc == 0x08A05788u) goto L_08A05788;
    return;
L_08A05788:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    goto L_08A05790;
L_08A05790:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A057A4;
      }
      goto L_08A0579C;
    }
L_08A0579C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_08A057C0;
      }
      goto L_08A057A4;
    }
L_08A057A4:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A057B8u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x08A057B8u) goto L_08A057B8;
    return;
L_08A057B8:
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    goto L_08A057C0;
L_08A057C0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A057D8;
      }
      goto L_08A057C8;
    }
L_08A057C8:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A057C8;
      }
      goto L_08A057D8;
    }
L_08A057D8:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A057F0;
      }
      goto L_08A057E8;
    }
L_08A057E8:
    ctx.gpr[31] = (0x08A057F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08A057F0u) goto L_08A057F0;
    return;
L_08A057F0:
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(4), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_08A05804;
L_08A05804:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A05E4C;
      }
      goto L_08A0580C;
    }
L_08A0580C:
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[31] = (0x08A05818u);
    ctx.gpr[4] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08A05818u) goto L_08A05818;
    return;
L_08A05818:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A05864;
      }
      goto L_08A05824;
    }
L_08A05824:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9128)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9124)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9120)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9116)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9112)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9108)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9104)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9100)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A05854u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 400u, 0x08A01838u>(ctx, &aot_mem) && ctx.pc == 0x08A05854u) goto L_08A05854;
    return;
L_08A05854:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28512));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    ctx.gpr[23] = (ctx.gpr[16] | 0u);
    goto L_08A05864;
L_08A05864:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08A05894;
      }
      goto L_08A05874;
    }
L_08A05874:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A0588C;
      }
      goto L_08A05880;
    }
L_08A05880:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[23]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    goto L_08A0588C;
L_08A0588C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A05994;
      }
      goto L_08A05894;
    }
L_08A05894:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[16] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[16] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08A058D4;
      }
      goto L_08A058C4;
    }
L_08A058C4:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A058E0;
      }
      goto L_08A058D4;
    }
L_08A058D4:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[5]);
    goto L_08A058E0;
L_08A058E0:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A05920;
      }
      goto L_08A058E8;
    }
L_08A058E8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[5]);
    ctx.gpr[31] = (0x08A058FCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem) && ctx.pc == 0x08A058FCu) goto L_08A058FC;
    return;
L_08A058FC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
      if (branch_taken) {
          goto L_08A05920;
      }
      goto L_08A0590C;
    }
L_08A0590C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A05918u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem) && ctx.pc == 0x08A05918u) goto L_08A05918;
    return;
L_08A05918:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    goto L_08A05920;
L_08A05920:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A05934;
      }
      goto L_08A0592C;
    }
L_08A0592C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
      if (branch_taken) {
          goto L_08A05950;
      }
      goto L_08A05934;
    }
L_08A05934:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A05948u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x08A05948u) goto L_08A05948;
    return;
L_08A05948:
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    goto L_08A05950;
L_08A05950:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A05968;
      }
      goto L_08A05958;
    }
L_08A05958:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A05958;
      }
      goto L_08A05968;
    }
L_08A05968:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A05980;
      }
      goto L_08A05978;
    }
L_08A05978:
    ctx.gpr[31] = (0x08A05980u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08A05980u) goto L_08A05980;
    return;
L_08A05980:
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(4), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_08A05994;
L_08A05994:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A05E4C;
      }
      goto L_08A0599C;
    }
L_08A0599C:
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[31] = (0x08A059A8u);
    ctx.gpr[4] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08A059A8u) goto L_08A059A8;
    return;
L_08A059A8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A059F4;
      }
      goto L_08A059B4;
    }
L_08A059B4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9096)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9092)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9088)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9084)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9080)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9076)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9072)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9068)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A059E4u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 400u, 0x08A01838u>(ctx, &aot_mem) && ctx.pc == 0x08A059E4u) goto L_08A059E4;
    return;
L_08A059E4:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28584));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    ctx.gpr[23] = (ctx.gpr[16] | 0u);
    goto L_08A059F4;
L_08A059F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08A05A24;
      }
      goto L_08A05A04;
    }
L_08A05A04:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A05A1C;
      }
      goto L_08A05A10;
    }
L_08A05A10:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[23]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    goto L_08A05A1C;
L_08A05A1C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A05B24;
      }
      goto L_08A05A24;
    }
L_08A05A24:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(69), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[16] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[16] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08A05A64;
      }
      goto L_08A05A54;
    }
L_08A05A54:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A05A70;
      }
      goto L_08A05A64;
    }
L_08A05A64:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[5]);
    goto L_08A05A70;
L_08A05A70:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A05AB0;
      }
      goto L_08A05A78;
    }
L_08A05A78:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[5]);
    ctx.gpr[31] = (0x08A05A8Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem) && ctx.pc == 0x08A05A8Cu) goto L_08A05A8C;
    return;
L_08A05A8C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
      if (branch_taken) {
          goto L_08A05AB0;
      }
      goto L_08A05A9C;
    }
L_08A05A9C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A05AA8u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem) && ctx.pc == 0x08A05AA8u) goto L_08A05AA8;
    return;
L_08A05AA8:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    goto L_08A05AB0;
L_08A05AB0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A05AC4;
      }
      goto L_08A05ABC;
    }
L_08A05ABC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
      if (branch_taken) {
          goto L_08A05AE0;
      }
      goto L_08A05AC4;
    }
L_08A05AC4:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A05AD8u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x08A05AD8u) goto L_08A05AD8;
    return;
L_08A05AD8:
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    goto L_08A05AE0;
L_08A05AE0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A05AF8;
      }
      goto L_08A05AE8;
    }
L_08A05AE8:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A05AE8;
      }
      goto L_08A05AF8;
    }
L_08A05AF8:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A05B10;
      }
      goto L_08A05B08;
    }
L_08A05B08:
    ctx.gpr[31] = (0x08A05B10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08A05B10u) goto L_08A05B10;
    return;
L_08A05B10:
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(4), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_08A05B24;
L_08A05B24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A05E4C;
      }
      goto L_08A05B2C;
    }
L_08A05B2C:
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[31] = (0x08A05B38u);
    ctx.gpr[4] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08A05B38u) goto L_08A05B38;
    return;
L_08A05B38:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A05B84;
      }
      goto L_08A05B44;
    }
L_08A05B44:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9060)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9056)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9052)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9048)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9044)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9040)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9036)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9032)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A05B74u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 400u, 0x08A01838u>(ctx, &aot_mem) && ctx.pc == 0x08A05B74u) goto L_08A05B74;
    return;
L_08A05B74:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28656));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    ctx.gpr[23] = (ctx.gpr[16] | 0u);
    goto L_08A05B84;
L_08A05B84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08A05BB4;
      }
      goto L_08A05B94;
    }
L_08A05B94:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A05BAC;
      }
      goto L_08A05BA0;
    }
L_08A05BA0:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[23]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    goto L_08A05BAC;
L_08A05BAC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A05CB4;
      }
      goto L_08A05BB4;
    }
L_08A05BB4:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(81), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[16] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[16] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08A05BF4;
      }
      goto L_08A05BE4;
    }
L_08A05BE4:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A05C00;
      }
      goto L_08A05BF4;
    }
L_08A05BF4:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[5]);
    goto L_08A05C00;
L_08A05C00:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A05C40;
      }
      goto L_08A05C08;
    }
L_08A05C08:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[5]);
    ctx.gpr[31] = (0x08A05C1Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem) && ctx.pc == 0x08A05C1Cu) goto L_08A05C1C;
    return;
L_08A05C1C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
      if (branch_taken) {
          goto L_08A05C40;
      }
      goto L_08A05C2C;
    }
L_08A05C2C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A05C38u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem) && ctx.pc == 0x08A05C38u) goto L_08A05C38;
    return;
L_08A05C38:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    goto L_08A05C40;
L_08A05C40:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A05C54;
      }
      goto L_08A05C4C;
    }
L_08A05C4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
      if (branch_taken) {
          goto L_08A05C70;
      }
      goto L_08A05C54;
    }
L_08A05C54:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A05C68u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x08A05C68u) goto L_08A05C68;
    return;
L_08A05C68:
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    goto L_08A05C70;
L_08A05C70:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A05C88;
      }
      goto L_08A05C78;
    }
L_08A05C78:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A05C78;
      }
      goto L_08A05C88;
    }
L_08A05C88:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A05CA0;
      }
      goto L_08A05C98;
    }
L_08A05C98:
    ctx.gpr[31] = (0x08A05CA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08A05CA0u) goto L_08A05CA0;
    return;
L_08A05CA0:
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(4), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_08A05CB4;
L_08A05CB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A05E4C;
      }
      goto L_08A05CBC;
    }
L_08A05CBC:
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[31] = (0x08A05CC8u);
    ctx.gpr[4] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08A05CC8u) goto L_08A05CC8;
    return;
L_08A05CC8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A05D14;
      }
      goto L_08A05CD4;
    }
L_08A05CD4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9028)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9024)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9020)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9016)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9012)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9008)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9004)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9000)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A05D04u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 400u, 0x08A01838u>(ctx, &aot_mem) && ctx.pc == 0x08A05D04u) goto L_08A05D04;
    return;
L_08A05D04:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28728));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    ctx.gpr[23] = (ctx.gpr[16] | 0u);
    goto L_08A05D14;
L_08A05D14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08A05D44;
      }
      goto L_08A05D24;
    }
L_08A05D24:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A05D3C;
      }
      goto L_08A05D30;
    }
L_08A05D30:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[23]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    goto L_08A05D3C;
L_08A05D3C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A05E44;
      }
      goto L_08A05D44;
    }
L_08A05D44:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(93), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A05D84;
      }
      goto L_08A05D74;
    }
L_08A05D74:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[5] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_08A05D90;
      }
      goto L_08A05D84;
    }
L_08A05D84:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (ctx.gpr[5] + ctx.gpr[16]);
    goto L_08A05D90;
L_08A05D90:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A05DD0;
      }
      goto L_08A05D98;
    }
L_08A05D98:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[5]);
    ctx.gpr[31] = (0x08A05DACu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem) && ctx.pc == 0x08A05DACu) goto L_08A05DAC;
    return;
L_08A05DAC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
      if (branch_taken) {
          goto L_08A05DD0;
      }
      goto L_08A05DBC;
    }
L_08A05DBC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A05DC8u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem) && ctx.pc == 0x08A05DC8u) goto L_08A05DC8;
    return;
L_08A05DC8:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    goto L_08A05DD0;
L_08A05DD0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A05DE4;
      }
      goto L_08A05DDC;
    }
L_08A05DDC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
      if (branch_taken) {
          goto L_08A05E00;
      }
      goto L_08A05DE4;
    }
L_08A05DE4:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A05DF8u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x08A05DF8u) goto L_08A05DF8;
    return;
L_08A05DF8:
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    goto L_08A05E00;
L_08A05E00:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A05E18;
      }
      goto L_08A05E08;
    }
L_08A05E08:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A05E08;
      }
      goto L_08A05E18;
    }
L_08A05E18:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A05E30;
      }
      goto L_08A05E28;
    }
L_08A05E28:
    ctx.gpr[31] = (0x08A05E30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08A05E30u) goto L_08A05E30;
    return;
L_08A05E30:
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(4), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_08A05E44;
L_08A05E44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A05E4C;
      }
      goto L_08A05E4C;
    }
L_08A05E4C:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A05E60;
      }
      goto L_08A05E54;
    }
L_08A05E54:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A05E60u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 451u, 0x08A01C80u>(ctx, &aot_mem) && ctx.pc == 0x08A05E60u) goto L_08A05E60;
    return;
L_08A05E60:
    ctx.gpr[2] = (ctx.gpr[23] | 0u);
    goto L_08A05E64;
L_08A05E64:
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
L_08A05E94:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9728), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9732), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9736), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A05EB0u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-8944));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08A05EB0u) goto L_08A05EB0;
    return;
L_08A05EB0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A05EBC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2237u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A05ED0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 473u, 0x089B6DA4u>(ctx, &aot_mem) && ctx.pc == 0x08A05ED0u) goto L_08A05ED0;
    return;
L_08A05ED0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A05EDC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2237u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A05EF0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 481u, 0x089B6E14u>(ctx, &aot_mem) && ctx.pc == 0x08A05EF0u) goto L_08A05EF0;
    return;
L_08A05EF0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A05EFC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2237u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A05F10u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 494u, 0x089B6EECu>(ctx, &aot_mem) && ctx.pc == 0x08A05F10u) goto L_08A05F10;
    return;
L_08A05F10:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A05F1C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2237u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A05F30u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 508u, 0x089B6FC8u>(ctx, &aot_mem) && ctx.pc == 0x08A05F30u) goto L_08A05F30;
    return;
L_08A05F30:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A05F3C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2237u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A05F50u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 522u, 0x089B7090u>(ctx, &aot_mem) && ctx.pc == 0x08A05F50u) goto L_08A05F50;
    return;
L_08A05F50:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A05F5C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A05F74u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 568u, 0x089B7348u>(ctx, &aot_mem) && ctx.pc == 0x08A05F74u) goto L_08A05F74;
    return;
L_08A05F74:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A05F80:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A05F98u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 40u, 0x089B83C0u>(ctx, &aot_mem) && ctx.pc == 0x08A05F98u) goto L_08A05F98;
    return;
L_08A05F98:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A05FA4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    ctx.gpr[18] = (2237u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[19] = (ctx.gpr[6] & 65535u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-28320));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] & 255u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A05FE8u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 556u, 0x089B72CCu>(ctx, &aot_mem) && ctx.pc == 0x08A05FE8u) goto L_08A05FE8;
    return;
L_08A05FE8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0601C;
      }
      goto L_08A05FF0;
    }
L_08A05FF0:
    ctx.gpr[7] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A0600Cu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 40u, 0x089B83C0u>(ctx, &aot_mem) && ctx.pc == 0x08A0600Cu) goto L_08A0600C;
    return;
L_08A0600C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A0601Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 550u, 0x089B7284u>(ctx, &aot_mem) && ctx.pc == 0x08A0601Cu) goto L_08A0601C;
    return;
L_08A0601C:
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
L_08A0603C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2237u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A06050u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 600u, 0x089B74ECu>(ctx, &aot_mem) && ctx.pc == 0x08A06050u) goto L_08A06050;
    return;
L_08A06050:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0605C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 128 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0607C;
      }
      goto L_08A06078;
    }
L_08A06078:
    ctx.gpr[16] = (0u | 127u);
    goto L_08A0607C;
L_08A0607C:
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A0608Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 610u, 0x089B758Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0608Cu) goto L_08A0608C;
    return;
L_08A0608C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
        goto L_08A060A4;
    }
    goto L_08A06098;
L_08A06098:
    ctx.gpr[31] = (0x08A060A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x08A060A0u) goto L_08A060A0;
    return;
L_08A060A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_08A060A4;
L_08A060A4:
    ctx.gpr[31] = (0x08A060ACu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 711u, 0x089C70C0u>(ctx, &aot_mem) && ctx.pc == 0x08A060ACu) goto L_08A060AC;
    return;
L_08A060AC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A060BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 128 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A060DC;
      }
      goto L_08A060D8;
    }
L_08A060D8:
    ctx.gpr[16] = (0u | 127u);
    goto L_08A060DC;
L_08A060DC:
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A060ECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 612u, 0x089B75ACu>(ctx, &aot_mem) && ctx.pc == 0x08A060ECu) goto L_08A060EC;
    return;
L_08A060EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
        goto L_08A06104;
    }
    goto L_08A060F8;
L_08A060F8:
    ctx.gpr[31] = (0x08A06100u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x08A06100u) goto L_08A06100;
    return;
L_08A06100:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_08A06104;
L_08A06104:
    ctx.gpr[31] = (0x08A0610Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 709u, 0x089C70B0u>(ctx, &aot_mem) && ctx.pc == 0x08A0610Cu) goto L_08A0610C;
    return;
L_08A0610C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0611C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 128 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A06138;
      }
      goto L_08A06134;
    }
L_08A06134:
    ctx.gpr[4] = (0u | 127u);
    goto L_08A06138;
L_08A06138:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[31] = (0x08A06148u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 614u, 0x089B75CCu>(ctx, &aot_mem) && ctx.pc == 0x08A06148u) goto L_08A06148;
    return;
L_08A06148:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A06154:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 128 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A06170;
      }
      goto L_08A0616C;
    }
L_08A0616C:
    ctx.gpr[4] = (0u | 127u);
    goto L_08A06170;
L_08A06170:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[31] = (0x08A06180u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 616u, 0x089B75ECu>(ctx, &aot_mem) && ctx.pc == 0x08A06180u) goto L_08A06180;
    return;
L_08A06180:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0618C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2237u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A061A0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 528u, 0x08985EF8u>(ctx, &aot_mem) && ctx.pc == 0x08A061A0u) goto L_08A061A0;
    return;
L_08A061A0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A061AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2237u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28320));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A061D4u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 508u, 0x089B6FC8u>(ctx, &aot_mem) && ctx.pc == 0x08A061D4u) goto L_08A061D4;
    return;
L_08A061D4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A061F0;
      }
      goto L_08A061E0;
    }
L_08A061E0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A061F0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 568u, 0x089B7348u>(ctx, &aot_mem) && ctx.pc == 0x08A061F0u) goto L_08A061F0;
    return;
L_08A061F0:
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
L_08A06208:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2237u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A0621Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 522u, 0x089B7090u>(ctx, &aot_mem) && ctx.pc == 0x08A0621Cu) goto L_08A0621C;
    return;
L_08A0621C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A06228:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (2237u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-28320));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A06258u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 508u, 0x089B6FC8u>(ctx, &aot_mem) && ctx.pc == 0x08A06258u) goto L_08A06258;
    return;
L_08A06258:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A06290;
      }
      goto L_08A06264;
    }
L_08A06264:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A06274u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 568u, 0x089B7348u>(ctx, &aot_mem) && ctx.pc == 0x08A06274u) goto L_08A06274;
    return;
L_08A06274:
    ctx.gpr[7] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A06290u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 40u, 0x089B83C0u>(ctx, &aot_mem) && ctx.pc == 0x08A06290u) goto L_08A06290;
    return;
L_08A06290:
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
L_08A062A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2237u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A062BCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 560u, 0x08986108u>(ctx, &aot_mem) && ctx.pc == 0x08A062BCu) goto L_08A062BC;
    return;
L_08A062BC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A062C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A062E4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 413u, 0x08A0E6B4u>(ctx, &aot_mem) && ctx.pc == 0x08A062E4u) goto L_08A062E4;
    return;
L_08A062E4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A062F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08A0631C;
      }
      goto L_08A06310;
    }
L_08A06310:
    ctx.gpr[6] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08A0631C;
L_08A0631C:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24256)));
    ctx.gpr[31] = (0x08A06330u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 40u, 0x089B83C0u>(ctx, &aot_mem) && ctx.pc == 0x08A06330u) goto L_08A06330;
    return;
L_08A06330:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0633C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A06354u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1008));
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 8u, 0x08888060u>(ctx, &aot_mem) && ctx.pc == 0x08A06354u) goto L_08A06354;
    return;
L_08A06354:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A06360:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A06380u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1008));
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 54u, 0x0888828Cu>(ctx, &aot_mem) && ctx.pc == 0x08A06380u) goto L_08A06380;
    return;
L_08A06380:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0638C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2237u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A063A0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1008));
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 85u, 0x088883E0u>(ctx, &aot_mem) && ctx.pc == 0x08A063A0u) goto L_08A063A0;
    return;
L_08A063A0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A063AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2237u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A063C0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 574u, 0x089B738Cu>(ctx, &aot_mem) && ctx.pc == 0x08A063C0u) goto L_08A063C0;
    return;
L_08A063C0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A063CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A063E4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1008));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 894u, 0x08887E98u>(ctx, &aot_mem) && ctx.pc == 0x08A063E4u) goto L_08A063E4;
    return;
L_08A063E4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A063F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A06408u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1008));
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 13u, 0x08888090u>(ctx, &aot_mem) && ctx.pc == 0x08A06408u) goto L_08A06408;
    return;
L_08A06408:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A06414:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2237u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A06428u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1008));
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 35u, 0x08888198u>(ctx, &aot_mem) && ctx.pc == 0x08A06428u) goto L_08A06428;
    return;
L_08A06428:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A06434:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2237u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A06448u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1008));
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 42u, 0x08888208u>(ctx, &aot_mem) && ctx.pc == 0x08A06448u) goto L_08A06448;
    return;
L_08A06448:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A06454:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2237u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A06468u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1008));
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 90u, 0x08888418u>(ctx, &aot_mem) && ctx.pc == 0x08A06468u) goto L_08A06468;
    return;
L_08A06468:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A06474:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2237u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A06488u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1008));
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 92u, 0x08888438u>(ctx, &aot_mem) && ctx.pc == 0x08A06488u) goto L_08A06488;
    return;
L_08A06488:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A06494:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A064ACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1008));
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 189u, 0x088888D8u>(ctx, &aot_mem) && ctx.pc == 0x08A064ACu) goto L_08A064AC;
    return;
L_08A064AC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A064B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32480)));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A064E0;
      }
      goto L_08A064D0;
    }
L_08A064D0:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[31] = (0x08A064E0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 352u, 0x088C9CF8u>(ctx, &aot_mem) && ctx.pc == 0x08A064E0u) goto L_08A064E0;
    return;
L_08A064E0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A064EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[5] & 255u);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32480)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A06528;
      }
      goto L_08A0650C;
    }
L_08A0650C:
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[31] = (0x08A06528u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 368u, 0x088C9E80u>(ctx, &aot_mem) && ctx.pc == 0x08A06528u) goto L_08A06528;
    return;
L_08A06528:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A06534:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32480)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0655C;
      }
      goto L_08A06548;
    }
L_08A06548:
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[31] = (0x08A06554u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 453u, 0x088CA4A4u>(ctx, &aot_mem) && ctx.pc == 0x08A06554u) goto L_08A06554;
    return;
L_08A06554:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A06560;
      }
      goto L_08A0655C;
    }
L_08A0655C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A06560;
L_08A06560:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0656C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32480)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A06594;
      }
      goto L_08A06580;
    }
L_08A06580:
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[31] = (0x08A0658Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 462u, 0x088CA540u>(ctx, &aot_mem) && ctx.pc == 0x08A0658Cu) goto L_08A0658C;
    return;
L_08A0658C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A06598;
      }
      goto L_08A06594;
    }
L_08A06594:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A06598;
L_08A06598:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A065A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32480)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A065CC;
      }
      goto L_08A065BC;
    }
L_08A065BC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[31] = (0x08A065CCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 467u, 0x088CA578u>(ctx, &aot_mem) && ctx.pc == 0x08A065CCu) goto L_08A065CC;
    return;
L_08A065CC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A065D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32480)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A06608;
      }
      goto L_08A065F0;
    }
L_08A065F0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[31] = (0x08A06600u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 362u, 0x088C9E24u>(ctx, &aot_mem) && ctx.pc == 0x08A06600u) goto L_08A06600;
    return;
L_08A06600:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0660C;
      }
      goto L_08A06608;
    }
L_08A06608:
    ctx.gpr[2] = (0u | 1u);
    goto L_08A0660C;
L_08A0660C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A06618:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32480)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
      if (branch_taken) {
          goto L_08A06654;
      }
      goto L_08A06638;
    }
L_08A06638:
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
    ctx.gpr[31] = (0x08A06654u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 370u, 0x088C9ED4u>(ctx, &aot_mem) && ctx.pc == 0x08A06654u) goto L_08A06654;
    return;
L_08A06654:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A06660:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32480)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A06690;
      }
      goto L_08A06678;
    }
L_08A06678:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[31] = (0x08A06688u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 374u, 0x088C9F10u>(ctx, &aot_mem) && ctx.pc == 0x08A06688u) goto L_08A06688;
    return;
L_08A06688:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A06694;
      }
      goto L_08A06690;
    }
L_08A06690:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A06694;
L_08A06694:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A066A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (ctx.gpr[6] & 255u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32480)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08A066C8;
      }
      goto L_08A066B8;
    }
L_08A066B8:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[31] = (0x08A066C8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 385u, 0x088C9FE0u>(ctx, &aot_mem) && ctx.pc == 0x08A066C8u) goto L_08A066C8;
    return;
L_08A066C8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A066D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32480)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A066F8;
      }
      goto L_08A066E8;
    }
L_08A066E8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[31] = (0x08A066F8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 403u, 0x088CA18Cu>(ctx, &aot_mem) && ctx.pc == 0x08A066F8u) goto L_08A066F8;
    return;
L_08A066F8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A06704:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32480)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A06734;
      }
      goto L_08A0671C;
    }
L_08A0671C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[31] = (0x08A0672Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 415u, 0x088CA270u>(ctx, &aot_mem) && ctx.pc == 0x08A0672Cu) goto L_08A0672C;
    return;
L_08A0672C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A06738;
      }
      goto L_08A06734;
    }
L_08A06734:
    ctx.gpr[2] = (0u | 1u);
    goto L_08A06738;
L_08A06738:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A06744:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32480)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0676C;
      }
      goto L_08A0675C;
    }
L_08A0675C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[31] = (0x08A0676Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 435u, 0x088CA378u>(ctx, &aot_mem) && ctx.pc == 0x08A0676Cu) goto L_08A0676C;
    return;
L_08A0676C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A06778:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2237u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A0678Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1008));
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 119u, 0x088885B4u>(ctx, &aot_mem) && ctx.pc == 0x08A0678Cu) goto L_08A0678C;
    return;
L_08A0678C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A06798:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2237u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A067ACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1008));
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 145u, 0x088886CCu>(ctx, &aot_mem) && ctx.pc == 0x08A067ACu) goto L_08A067AC;
    return;
L_08A067AC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A067B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A067D0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1008));
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 112u, 0x0888853Cu>(ctx, &aot_mem) && ctx.pc == 0x08A067D0u) goto L_08A067D0;
    return;
L_08A067D0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A067DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A067F4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 187u, 0x088C9170u>(ctx, &aot_mem) && ctx.pc == 0x08A067F4u) goto L_08A067F4;
    return;
L_08A067F4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A06800:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A06818u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 183u, 0x088C9140u>(ctx, &aot_mem) && ctx.pc == 0x08A06818u) goto L_08A06818;
    return;
L_08A06818:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A06824:
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28320));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(21528), static_cast<std::uint8_t>(ctx.gpr[4]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A06838:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2237u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A0684Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 190u, 0x088C9184u>(ctx, &aot_mem) && ctx.pc == 0x08A0684Cu) goto L_08A0684C;
    return;
L_08A0684C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A06858:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2237u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A0686Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 191u, 0x088C918Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0686Cu) goto L_08A0686C;
    return;
L_08A0686C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A06878:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2237u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A0688Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 192u, 0x088C919Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0688Cu) goto L_08A0688C;
    return;
L_08A0688C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A06898:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2237u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A068ACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 199u, 0x088C9200u>(ctx, &aot_mem) && ctx.pc == 0x08A068ACu) goto L_08A068AC;
    return;
L_08A068AC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A068B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2237u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A068CCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 201u, 0x088C922Cu>(ctx, &aot_mem) && ctx.pc == 0x08A068CCu) goto L_08A068CC;
    return;
L_08A068CC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A068D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2237u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A068ECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 203u, 0x088C924Cu>(ctx, &aot_mem) && ctx.pc == 0x08A068ECu) goto L_08A068EC;
    return;
L_08A068EC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A068F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2237u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A0690Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1008));
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 118u, 0x0888859Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0690Cu) goto L_08A0690C;
    return;
L_08A0690C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A06918:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    if (ctx.gpr[6] == 0u) {
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
        goto L_08A06928;
    }
    goto L_08A06928;
L_08A06928:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A06930:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8888)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A06970;
      }
      goto L_08A06948;
    }
L_08A06948:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08A06954u);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08A06954u) goto L_08A06954;
    return;
L_08A06954:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0696C;
      }
      goto L_08A06960;
    }
L_08A06960:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08A0696C;
L_08A0696C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-8888), ctx.gpr[16]);
    goto L_08A06970;
L_08A06970:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8888)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A06984:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2236)));
    ctx.gpr[16] = (32768u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A069B0;
      }
      goto L_08A069A4;
    }
L_08A069A4:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-8872), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A069B0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2236)));
    ctx.pc = 0x08B73414u;
    return;
L_08A069B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2236)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A069C8;
      }
      goto L_08A069C0;
    }
L_08A069C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A069CC;
      }
      goto L_08A069C8;
    }
L_08A069C8:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A069CC;
L_08A069CC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A069DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29232));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(300)));
    ctx.gpr[21] = (2236u << 16u);
    ctx.gpr[23] = (9u << 16u);
    ctx.gpr[30] = (9u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    ctx.gpr[22] = (0u | 3u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(29576));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-32768));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-32768));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[20] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A06A5C;
      }
      goto L_08A06A48;
    }
L_08A06A48:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(301)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A06A5C;
      }
      goto L_08A06A54;
    }
L_08A06A54:
    ctx.gpr[31] = (0x08A06A5Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 323u, 0x089B9ABCu>(ctx, &aot_mem) && ctx.pc == 0x08A06A5Cu) goto L_08A06A5C;
    return;
L_08A06A5C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-8716), 0u);
    ctx.gpr[4] = (0u | 0u);
    goto L_08A06A64;
L_08A06A64:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A06A64;
      }
      goto L_08A06A7C;
    }
L_08A06A7C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-8748), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[18] ^ 480u);
    ctx.gpr[5] = (ctx.gpr[19] ^ 272u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740), ctx.gpr[19]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-8736), ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[31] = (0x08A06AA8u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-8720), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.pc = 0x08B7326Cu;
    return;
L_08A06AA8:
    ctx.gpr[31] = (0x08A06AB0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-8760), ctx.gpr[2]);
    ctx.pc = 0x08B7324Cu;
    return;
L_08A06AB0:
    ctx.gpr[4] = (2208u << 16u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-8756), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(31588));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (2208u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(31664));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[31] = (0x08A06ADCu);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.pc = 0x08B73254u;
    return;
L_08A06ADC:
    ctx.gpr[31] = (0x08A06AE4u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-8768), ctx.gpr[2]);
    goto L_08A06CA0;
L_08A06AE4:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-8780), 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-8720)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8748)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
      if (branch_taken) {
          goto L_08A06B7C;
      }
      goto L_08A06AF8;
    }
L_08A06AF8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8736)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.lo);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[22];
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A06B14;
      }
      goto L_08A06B0C;
    }
L_08A06B0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
      if (branch_taken) {
          goto L_08A06B18;
      }
      goto L_08A06B14;
    }
L_08A06B14:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    goto L_08A06B18;
L_08A06B18:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-8788), ctx.gpr[23]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[30]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-8772), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-8776), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x08A06B3Cu);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-8844), ctx.gpr[4]);
    goto L_08A07C0C;
L_08A06B3C:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-8844), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 480u);
    ctx.gpr[31] = (0x08A06B54u);
    ctx.gpr[6] = (0u | 272u);
    ctx.pc = 0x08B731FCu;
    return;
L_08A06B54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8760)));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-8844), ctx.gpr[22]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8776)));
    ctx.gpr[5] = (0u | 512u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x08A06B74u);
    ctx.gpr[7] = (0u | 1u);
    ctx.pc = 0x08B73204u;
    return;
L_08A06B74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A06BE0;
      }
      goto L_08A06B7C;
    }
L_08A06B7C:
    ctx.gpr[5] = (0u | 512u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-8736), ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[22];
    ctx.gpr[5] = (ctx.gpr[4] << 9u);
      if (branch_taken) {
          goto L_08A06B94;
      }
      goto L_08A06B8C;
    }
L_08A06B8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
      if (branch_taken) {
          goto L_08A06B98;
      }
      goto L_08A06B94;
    }
L_08A06B94:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[5]);
    goto L_08A06B98;
L_08A06B98:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-8784), ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[30]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-8788), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-8772), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-8776), ctx.gpr[30]);
    ctx.gpr[31] = (0x08A06BC4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = 0x08B731FCu;
    return;
L_08A06BC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8760)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8776)));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8736)));
    ctx.gpr[31] = (0x08A06BE0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8748)));
    ctx.pc = 0x08B73204u;
    return;
L_08A06BE0:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-8812), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-8724), 0u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-8855), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-8854), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-8856), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-8852), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-8848), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-8844), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A06C10u);
    // nop
    goto L_08A07200;
L_08A06C10:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-8808), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-8804), 0u);
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-8844), ctx.gpr[4]);
    ctx.gpr[5] = (2208u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(31176));
    ctx.gpr[4] = (0u | 15u);
    ctx.gpr[31] = (0x08A06C34u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 264u, 0x08B65250u>(ctx, &aot_mem) && ctx.pc == 0x08A06C34u) goto L_08A06C34;
    return;
L_08A06C34:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-8800), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (17392u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.gpr[4] = (17288u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[15];
    ctx.gpr[31] = (0x08A06C70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 38u, 0x08AF43A0u>(ctx, &aot_mem) && ctx.pc == 0x08A06C70u) goto L_08A06C70;
    return;
L_08A06C70:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A06CA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8760)));
    ctx.gpr[5] = (4u << 16u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-8796), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16384));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-8792), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A06CBC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8724)));
    goto L_08A06CC8;
L_08A06CC8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A06CE0;
      }
      goto L_08A06CD0;
    }
L_08A06CD0:
    ctx.gpr[31] = (0x08A06CD8u);
    ctx.gpr[4] = (0u | 1u);
    ctx.pc = 0x08B73264u;
    return;
L_08A06CD8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A06D08;
      }
      goto L_08A06CE0;
    }
L_08A06CE0:
    ctx.gpr[31] = (0x08A06CE8u);
    // nop
    ctx.pc = 0x08B73224u;
    return;
L_08A06CE8:
    ctx.gpr[31] = (0x08A06CF0u);
    ctx.gpr[4] = (0u | 1u);
    ctx.pc = 0x08B73264u;
    return;
L_08A06CF0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A06D00;
      }
      goto L_08A06CF8;
    }
L_08A06CF8:
    ctx.gpr[31] = (0x08A06D00u);
    ctx.gpr[4] = (0u | 500u);
    ctx.pc = 0x08B7340Cu;
    return;
L_08A06D00:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8724)));
      if (branch_taken) {
          goto L_08A06CC8;
      }
      goto L_08A06D08;
    }
L_08A06D08:
    ctx.gpr[31] = (0x08A06D10u);
    // nop
    ctx.pc = 0x08B73224u;
    return;
L_08A06D10:
    ctx.gpr[4] = (0u | 15u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A06D20u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 264u, 0x08B65250u>(ctx, &aot_mem) && ctx.pc == 0x08A06D20u) goto L_08A06D20;
    return;
L_08A06D20:
    ctx.gpr[31] = (0x08A06D28u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8768)));
    ctx.pc = 0x08B73244u;
    return;
L_08A06D28:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-8768), ctx.gpr[4]);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A06D3C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8800)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8848)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-8800), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(29552));
      if (branch_taken) {
          goto L_08A06ECC;
      }
      goto L_08A06D80;
    }
L_08A06D80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8800)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-8720)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-8848), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A06D9C;
      }
      goto L_08A06D94;
    }
L_08A06D94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8848)));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-8780), ctx.gpr[4]);
    goto L_08A06D9C;
L_08A06D9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8848)));
    ctx.gpr[4] = (ctx.gpr[28] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8855)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (13702u << 16u);
      if (branch_taken) {
          goto L_08A06E88;
      }
      goto L_08A06DB0;
    }
L_08A06DB0:
    ctx.gpr[4] = (ctx.gpr[4] | 14269u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(8));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(12));
    goto L_08A06DC4;
L_08A06DC4:
    ctx.gpr[31] = (0x08A06DCCu);
    // nop
    ctx.pc = 0x08B73514u;
    return;
L_08A06DCC:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08A06DE0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.pc = 0x08B7343Cu;
    return;
L_08A06DE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (0u | 1u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x08A06E08u);
    ctx.fpr[20] = ctx.fpr[12] + ctx.fpr[20];
    ctx.pc = 0x08B73264u;
    return;
L_08A06E08:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A06E20;
      }
      goto L_08A06E10;
    }
L_08A06E10:
    ctx.gpr[31] = (0x08A06E18u);
    ctx.gpr[4] = (0u | 500u);
    ctx.pc = 0x08B7340Cu;
    return;
L_08A06E18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A06E28;
      }
      goto L_08A06E20;
    }
L_08A06E20:
    ctx.gpr[31] = (0x08A06E28u);
    // nop
    ctx.pc = 0x08B73224u;
    return;
L_08A06E28:
    ctx.gpr[31] = (0x08A06E30u);
    // nop
    ctx.pc = 0x08B73514u;
    return;
L_08A06E30:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A06E44u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.pc = 0x08B7343Cu;
    return;
L_08A06E44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8732)));
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-8732), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8848)));
    ctx.gpr[4] = (ctx.gpr[28] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8855)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A06DC4;
      }
      goto L_08A06E88;
    }
L_08A06E88:
    ctx.gpr[31] = (0x08A06E90u);
    // nop
    goto L_08A076C4;
L_08A06E90:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8848)));
    ctx.gpr[6] = (ctx.gpr[28] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(-8855), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[28] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8796)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[5] = (4u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16384));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A06EDC;
      }
      goto L_08A06ECC;
    }
L_08A06ECC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    goto L_08A06EDC;
L_08A06EDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8772)));
    ctx.gpr[5] = (256u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8736)));
    ctx.gpr[7] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[8] = (40448u << 16u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[7] = (ctx.gpr[7] | ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[8] = (40704u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[8] = (255u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[6] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8780)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8748)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[28] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-8788)));
    ctx.gpr[10] = (53760u << 16u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8736)));
    ctx.gpr[7] = (ctx.gpr[7] | ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[7] = (39936u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[5] = (40192u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] >> 8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[9] | ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[5] = (52224u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A06FE0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8848)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A0709C;
      }
      goto L_08A0700C;
    }
L_08A0700C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8848)));
    ctx.gpr[5] = (3840u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[5] = (3072u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08A07048u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    ctx.pc = 0x08B733ECu;
    return;
L_08A07048:
    rt.memory().memory_barrier();
    ctx.gpr[31] = (0x08A07054u);
    // nop
    ctx.pc = 0x08B73514u;
    return;
L_08A07054:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(8));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08A07068u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.pc = 0x08B7343Cu;
    return;
L_08A07068:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (13702u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[4] | 14269u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[13];
      if (branch_taken) {
          goto L_08A070A4;
      }
      goto L_08A0709C;
    }
L_08A0709C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A071D0;
      }
      goto L_08A070A4;
    }
L_08A070A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8852)));
    goto L_08A070A8;
L_08A070A8:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A070C0;
      }
      goto L_08A070B0;
    }
L_08A070B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8804)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A070D0;
      }
      goto L_08A070C0;
    }
L_08A070C0:
    ctx.gpr[31] = (0x08A070C8u);
    // nop
    ctx.pc = 0x08B73224u;
    return;
L_08A070C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8852)));
      if (branch_taken) {
          goto L_08A070A8;
      }
      goto L_08A070D0;
    }
L_08A070D0:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-8804), 0u);
    ctx.gpr[31] = (0x08A070DCu);
    // nop
    ctx.pc = 0x08B73514u;
    return;
L_08A070DC:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08A070F0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.pc = 0x08B7343Cu;
    return;
L_08A070F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[24];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8732)));
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-8732), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-8856)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A07138;
      }
      goto L_08A0712C;
    }
L_08A0712C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8848)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-8852), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A07160;
      }
      goto L_08A07138;
    }
L_08A07138:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-8856), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-8844), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(29552));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8768)));
    ctx.gpr[7] = (ctx.gpr[28] + static_cast<std::uint32_t>(-8840));
    ctx.gpr[31] = (0x08A07160u);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = 0x08B7325Cu;
    return;
L_08A07160:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8728)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8732)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
        goto L_08A0717C;
    }
    goto L_08A0717C;
L_08A0717C:
    ctx.gpr[4] = (18804u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 9216u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A0719Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = 0x08B7340Cu;
    return;
L_08A0719C:
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8732)));
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8868)));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-8848), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-8732), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[14];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[31] = (0x08A071C8u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-8868), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A076C4;
L_08A071C8:
    ctx.gpr[31] = (0x08A071D0u);
    // nop
    goto L_08A07260;
L_08A071D0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A071F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8848)));
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A07200:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A07210u);
    // nop
    ctx.pc = 0x08B7320Cu;
    return;
L_08A07210:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0721C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A0722Cu);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B735B4u;
    return;
L_08A0722C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-8708), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A07240:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A07250u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B7359Cu;
    return;
L_08A07250:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-8708), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A07260:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A07278u);
    ctx.gpr[17] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0205_entry, 205u, 733u, 0x08B3AAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A07278u) goto L_08A07278;
    return;
L_08A07278:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[16] = (2236u << 16u);
      if (branch_taken) {
          goto L_08A07344;
      }
      goto L_08A07280;
    }
L_08A07280:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(29232));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(301)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A07344;
      }
      goto L_08A07290;
    }
L_08A07290:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-8707), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 0u);
    goto L_08A072A0;
L_08A072A0:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x08A072B0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.pc = 0x08B73204u;
    return;
L_08A072B0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A072C8;
      }
      goto L_08A072B8;
    }
L_08A072B8:
    ctx.gpr[31] = (0x08A072C0u);
    ctx.gpr[4] = (0u | 50u);
    ctx.pc = 0x08B7340Cu;
    return;
L_08A072C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A072A0;
      }
      goto L_08A072C8;
    }
L_08A072C8:
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[31] = (0x08A072D4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 868u, 0x08ADB934u>(ctx, &aot_mem) && ctx.pc == 0x08A072D4u) goto L_08A072D4;
    return;
L_08A072D4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A072E0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 336u, 0x089B9BA0u>(ctx, &aot_mem) && ctx.pc == 0x08A072E0u) goto L_08A072E0;
    return;
L_08A072E0:
    ctx.gpr[31] = (0x08A072E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0205_entry, 205u, 733u, 0x08B3AAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A072E8u) goto L_08A072E8;
    return;
L_08A072E8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A07308;
      }
      goto L_08A072F0;
    }
L_08A072F0:
    ctx.gpr[31] = (0x08A072F8u);
    ctx.gpr[4] = (0u | 1000u);
    ctx.pc = 0x08B7340Cu;
    return;
L_08A072F8:
    ctx.gpr[31] = (0x08A07300u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8872)));
    goto L_08A06984;
L_08A07300:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A072E0;
      }
      goto L_08A07308;
    }
L_08A07308:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A07314u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 323u, 0x089B9ABCu>(ctx, &aot_mem) && ctx.pc == 0x08A07314u) goto L_08A07314;
    return;
L_08A07314:
    ctx.gpr[31] = (0x08A0731Cu);
    // nop
    goto L_08A06CA0;
L_08A0731C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-8720)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A07344;
      }
      goto L_08A07328;
    }
L_08A07328:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8760)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8776)));
    ctx.gpr[5] = (0u | 512u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x08A07344u);
    ctx.gpr[7] = (0u | 1u);
    ctx.pc = 0x08B73204u;
    return;
L_08A07344:
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
L_08A0735C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A07374u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25856));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 501u, 0x08ABE57Cu>(ctx, &aot_mem) && ctx.pc == 0x08A07374u) goto L_08A07374;
    return;
L_08A07374:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (61453u << 16u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20958));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A073A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A073CC;
      }
      goto L_08A073BC;
    }
L_08A073BC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[31] = (0x08A073CCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25856));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem) && ctx.pc == 0x08A073CCu) goto L_08A073CC;
    return;
L_08A073CC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A073D8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8848)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A07428;
      }
      goto L_08A073F4;
    }
L_08A073F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8848)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[28] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-8864)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8848)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[28] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-8864), ctx.gpr[4]);
    goto L_08A07428;
L_08A07428:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A07430:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A074AC;
      }
      goto L_08A07448;
    }
L_08A07448:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8848)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A074AC;
      }
      goto L_08A07460;
    }
L_08A07460:
    ctx.gpr[31] = (0x08A07468u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 458u, 0x088DF74Cu>(ctx, &aot_mem) && ctx.pc == 0x08A07468u) goto L_08A07468;
    return;
L_08A07468:
    ctx.gpr[31] = (0x08A07470u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 474u, 0x088DF844u>(ctx, &aot_mem) && ctx.pc == 0x08A07470u) goto L_08A07470;
    return;
L_08A07470:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8848)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[28] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8704)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8848)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[28] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-8704), ctx.gpr[16]);
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x08A074ACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(31984));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 563u, 0x08ABE988u>(ctx, &aot_mem) && ctx.pc == 0x08A074ACu) goto L_08A074AC;
    return;
L_08A074AC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A074BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8848)));
    ctx.gpr[6] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[28] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-8880)));
    ctx.gpr[8] = (2279u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 6u);
    ctx.gpr[9] = (ctx.gpr[7] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(20784));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-8880), ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A074FCu);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 651u, 0x08AAF068u>(ctx, &aot_mem) && ctx.pc == 0x08A074FCu) goto L_08A074FC;
    return;
L_08A074FC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A07508:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A07528u);
    // nop
    goto L_08A071F0;
L_08A07528:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0753C;
      }
      goto L_08A07534;
    }
L_08A07534:
    ctx.gpr[31] = (0x08A0753Cu);
    // nop
    goto L_08A06FE0;
L_08A0753C:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(8));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-8856)));
    goto L_08A0754C;
L_08A0754C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0756C;
      }
      goto L_08A07554;
    }
L_08A07554:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-8855)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0756C;
      }
      goto L_08A07560;
    }
L_08A07560:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-8854)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A075D4;
      }
      goto L_08A0756C;
    }
L_08A0756C:
    ctx.gpr[31] = (0x08A07574u);
    // nop
    ctx.pc = 0x08B73514u;
    return;
L_08A07574:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08A07588u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.pc = 0x08B7343Cu;
    return;
L_08A07588:
    ctx.gpr[31] = (0x08A07590u);
    ctx.gpr[4] = (0u | 1u);
    ctx.pc = 0x08B73264u;
    return;
L_08A07590:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A075A8;
      }
      goto L_08A07598;
    }
L_08A07598:
    ctx.gpr[31] = (0x08A075A0u);
    ctx.gpr[4] = (0u | 500u);
    ctx.pc = 0x08B7340Cu;
    return;
L_08A075A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A075B0;
      }
      goto L_08A075A8;
    }
L_08A075A8:
    ctx.gpr[31] = (0x08A075B0u);
    // nop
    ctx.pc = 0x08B73224u;
    return;
L_08A075B0:
    ctx.gpr[31] = (0x08A075B8u);
    // nop
    ctx.pc = 0x08B73514u;
    return;
L_08A075B8:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A075CCu);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    ctx.pc = 0x08B7343Cu;
    return;
L_08A075CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-8856)));
      if (branch_taken) {
          goto L_08A0754C;
      }
      goto L_08A075D4;
    }
L_08A075D4:
    ctx.gpr[31] = (0x08A075DCu);
    // nop
    goto L_08A076C4;
L_08A075DC:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A075EC;
      }
      goto L_08A075E4;
    }
L_08A075E4:
    ctx.gpr[31] = (0x08A075ECu);
    // nop
    goto L_08A06D3C;
L_08A075EC:
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
L_08A07608:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-8764), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A076B4;
      }
      goto L_08A07620;
    }
L_08A07620:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-8812), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[28] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-8855), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A07644;
      }
      goto L_08A0763C;
    }
L_08A0763C:
    ctx.gpr[31] = (0x08A07644u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 413u, 0x08B65B0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A07644u) goto L_08A07644;
    return;
L_08A07644:
    ctx.gpr[31] = (0x08A0764Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 135u, 0x08954988u>(ctx, &aot_mem) && ctx.pc == 0x08A0764Cu) goto L_08A0764C;
    return;
L_08A0764C:
    ctx.gpr[31] = (0x08A07654u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0205_entry, 205u, 733u, 0x08B3AAE8u>(ctx, &aot_mem) && ctx.pc == 0x08A07654u) goto L_08A07654;
    return;
L_08A07654:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A07678;
      }
      goto L_08A0765C;
    }
L_08A0765C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8748)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A07670u);
    ctx.gpr[7] = (0u | 1u);
    ctx.pc = 0x08B73204u;
    return;
L_08A07670:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A076AC;
      }
      goto L_08A07678;
    }
L_08A07678:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-8720)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A076AC;
      }
      goto L_08A07684;
    }
L_08A07684:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8764)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8760)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[28] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8788)));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8736)));
    ctx.gpr[31] = (0x08A076ACu);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8748)));
    ctx.pc = 0x08B73204u;
    return;
L_08A076AC:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-8764), ctx.gpr[16]);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-8816), static_cast<std::uint8_t>(0u));
    goto L_08A076B4;
L_08A076B4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A076C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[4] = (2279u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20784));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[22] = (2236u << 16u);
    ctx.gpr[23] = (2236u << 16u);
    ctx.gpr[30] = (0u | 0u);
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[28] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(25856));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(31984));
    goto L_08A07724;
L_08A07724:
    ctx.gpr[4] = (ctx.gpr[28] + ctx.gpr[30]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8855)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0782C;
      }
      goto L_08A07734;
    }
L_08A07734:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-8704)));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[19];
    ctx.gpr[18] = (ctx.gpr[30] ^ 1u);
      if (branch_taken) {
          goto L_08A07798;
      }
      goto L_08A07740;
    }
L_08A07740:
    ctx.gpr[18] = (ctx.gpr[18] << 2u);
    goto L_08A07744;
L_08A07744:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[20]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0777C;
      }
      goto L_08A07760;
    }
L_08A07760:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0777C;
      }
      goto L_08A0776C;
    }
L_08A0776C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A0777Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 563u, 0x08ABE988u>(ctx, &aot_mem) && ctx.pc == 0x08A0777Cu) goto L_08A0777C;
    return;
L_08A0777C:
    ctx.gpr[31] = (0x08A07784u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 460u, 0x088DF770u>(ctx, &aot_mem) && ctx.pc == 0x08A07784u) goto L_08A07784;
    return;
L_08A07784:
    ctx.gpr[31] = (0x08A0778Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 479u, 0x088DF88Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0778Cu) goto L_08A0778C;
    return;
L_08A0778C:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08A07744;
      }
      goto L_08A07798;
    }
L_08A07798:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-8864)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(-8704), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08A077E4;
      }
      goto L_08A077B0;
    }
L_08A077B0:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A077D8;
      }
      goto L_08A077CC;
    }
L_08A077CC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A077D8u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem) && ctx.pc == 0x08A077D8u) goto L_08A077D8;
    return;
L_08A077D8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08A077B0;
      }
      goto L_08A077E4;
    }
L_08A077E4:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(-8864), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-8880)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A07828;
      }
      goto L_08A07800;
    }
L_08A07800:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[16]);
    goto L_08A0780C;
L_08A0780C:
    ctx.gpr[31] = (0x08A07814u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 670u, 0x08AAF19Cu>(ctx, &aot_mem) && ctx.pc == 0x08A07814u) goto L_08A07814;
    return;
L_08A07814:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-8880)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A0780C;
      }
      goto L_08A07828;
    }
L_08A07828:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(-8880), 0u);
    goto L_08A0782C;
L_08A0782C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[30]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A07724;
      }
      goto L_08A0784C;
    }
L_08A0784C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0787C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-8706)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A079B8;
      }
      goto L_08A07894;
    }
L_08A07894:
    ctx.gpr[31] = (0x08A0789Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 268u, 0x08935094u>(ctx, &aot_mem) && ctx.pc == 0x08A0789Cu) goto L_08A0789C;
    return;
L_08A0789C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A079B8;
      }
      goto L_08A078A4;
    }
L_08A078A4:
    ctx.gpr[31] = (0x08A078ACu);
    // nop
    goto L_08A06D3C;
L_08A078AC:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(29552));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08A078D0u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 525u, 0x088DFE80u>(ctx, &aot_mem) && ctx.pc == 0x08A078D0u) goto L_08A078D0;
    return;
L_08A078D0:
    ctx.gpr[31] = (0x08A078D8u);
    // nop
    goto L_08A06FE0;
L_08A078D8:
    ctx.gpr[31] = (0x08A078E0u);
    // nop
    goto L_08A06D3C;
L_08A078E0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08A078FCu);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 525u, 0x088DFE80u>(ctx, &aot_mem) && ctx.pc == 0x08A078FCu) goto L_08A078FC;
    return;
L_08A078FC:
    ctx.gpr[31] = (0x08A07904u);
    // nop
    goto L_08A06FE0;
L_08A07904:
    ctx.gpr[31] = (0x08A0790Cu);
    // nop
    goto L_08A06CBC;
L_08A0790C:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (0u | 512u);
    ctx.gpr[7] = (0u | 320u);
    ctx.gpr[31] = (0x08A07924u);
    ctx.gpr[8] = (0u | 512u);
    goto L_08A069DC;
L_08A07924:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17392u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    ctx.gpr[4] = (17288u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[15];
    ctx.gpr[31] = (0x08A0795Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 38u, 0x08AF43A0u>(ctx, &aot_mem) && ctx.pc == 0x08A0795Cu) goto L_08A0795C;
    return;
L_08A0795C:
    ctx.gpr[31] = (0x08A07964u);
    // nop
    goto L_08A06D3C;
L_08A07964:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08A07980u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 525u, 0x088DFE80u>(ctx, &aot_mem) && ctx.pc == 0x08A07980u) goto L_08A07980;
    return;
L_08A07980:
    ctx.gpr[31] = (0x08A07988u);
    // nop
    goto L_08A06FE0;
L_08A07988:
    ctx.gpr[31] = (0x08A07990u);
    // nop
    goto L_08A06D3C;
L_08A07990:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08A079ACu);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 525u, 0x088DFE80u>(ctx, &aot_mem) && ctx.pc == 0x08A079ACu) goto L_08A079AC;
    return;
L_08A079AC:
    ctx.gpr[31] = (0x08A079B4u);
    // nop
    goto L_08A06FE0;
L_08A079B4:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-8706), static_cast<std::uint8_t>(0u));
    goto L_08A079B8;
L_08A079B8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A079C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8808)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-8808), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8804)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-8804), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8812)));
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (2236u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(32304));
      if (branch_taken) {
          goto L_08A07A74;
      }
      goto L_08A07A04;
    }
L_08A07A04:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-8812), 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-8720)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A07A70;
      }
      goto L_08A07A14;
    }
L_08A07A14:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8716)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-8840));
      if (branch_taken) {
          goto L_08A07A4C;
      }
      goto L_08A07A20;
    }
L_08A07A20:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 7u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-8844), ctx.gpr[4]);
    ctx.gpr[4] = (2279u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(22976));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8768)));
    ctx.gpr[31] = (0x08A07A44u);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = 0x08B7325Cu;
    return;
L_08A07A44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A07A70;
      }
      goto L_08A07A4C;
    }
L_08A07A4C:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 8u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-8844), ctx.gpr[4]);
    ctx.gpr[4] = (2279u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25088));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8768)));
    ctx.gpr[31] = (0x08A07A70u);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = 0x08B7325Cu;
    return;
L_08A07A70:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-8856), static_cast<std::uint8_t>(0u));
    goto L_08A07A74;
L_08A07A74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8852)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A07AC0;
      }
      goto L_08A07A80;
    }
L_08A07A80:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-8856)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A07AC0;
      }
      goto L_08A07A8C;
    }
L_08A07A8C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-8856), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 9u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-8844), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8852)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[28] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8796)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8768)));
    ctx.gpr[7] = (ctx.gpr[28] + static_cast<std::uint32_t>(-8840));
    ctx.gpr[31] = (0x08A07ABCu);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = 0x08B7325Cu;
    return;
L_08A07ABC:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-8852), ctx.gpr[17]);
    goto L_08A07AC0;
L_08A07AC0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-8752)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A07AD4;
      }
      goto L_08A07ACC;
    }
L_08A07ACC:
    ctx.gpr[31] = (0x08A07AD4u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B73594u;
    return;
L_08A07AD4:
    ctx.gpr[31] = (0x08A07ADCu);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(2856));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 519u, 0x088BA768u>(ctx, &aot_mem) && ctx.pc == 0x08A07ADCu) goto L_08A07ADC;
    return;
L_08A07ADC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-8709)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(7)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A07B44;
      }
      goto L_08A07B00;
    }
L_08A07B00:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-8712)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A07B44;
      }
      goto L_08A07B10;
    }
L_08A07B10:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-8711)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(5)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A07B44;
      }
      goto L_08A07B20;
    }
L_08A07B20:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-8710)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(6)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A07B44;
      }
      goto L_08A07B30;
    }
L_08A07B30:
    ctx.gpr[31] = (0x08A07B38u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 74u, 0x08A1C770u>(ctx, &aot_mem) && ctx.pc == 0x08A07B38u) goto L_08A07B38;
    return;
L_08A07B38:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A07B50;
      }
      goto L_08A07B44;
    }
L_08A07B44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08A07B50u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-8712), ctx.gpr[4]);
    goto L_08A07C0C;
L_08A07B50:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A07B64:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-8820), ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A07BA4;
      }
      goto L_08A07B7C;
    }
L_08A07B7C:
    ctx.gpr[6] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(29576));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A07BA4;
      }
      goto L_08A07B98;
    }
L_08A07B98:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A07BA4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A07BA4u) goto L_08A07BA4;
    return;
L_08A07BA4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A07BB0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-8820), ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A07BFC;
      }
      goto L_08A07BD0;
    }
L_08A07BD0:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-8816), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08A07BE0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A06984;
L_08A07BE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2236)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A07BFC;
      }
      goto L_08A07BF4;
    }
L_08A07BF4:
    ctx.gpr[31] = (0x08A07BFCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A07608;
L_08A07BFC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A07C0C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8716)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 31u, 0x08A086ACu>(ctx, &aot_mem); return;
      }
      goto L_08A07C48;
    }
L_08A07C48:
    ctx.gpr[5] = (17664u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[19] = (256u << 16u);
    ctx.gpr[18] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-8716), ctx.gpr[4]);
    ctx.gpr[20] = (0u | 3u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(32304));
    ctx.gpr[8] = (16896u << 16u);
    ctx.gpr[7] = (17152u << 16u);
    ctx.gpr[6] = (17664u << 16u);
    ctx.gpr[5] = (17920u << 16u);
    ctx.gpr[22] = (51968u << 16u);
    ctx.gpr[3] = (40960u << 16u);
    ctx.gpr[2] = (43008u << 16u);
    ctx.gpr[21] = (255u << 16u);
    ctx.gpr[30] = (22016u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[23] = (22272u << 16u);
      if (branch_taken) {
          goto L_08A07CA8;
      }
      goto L_08A07C98;
    }
L_08A07C98:
    ctx.gpr[16] = (2279u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(22976));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A07CB4;
      }
      goto L_08A07CA8;
    }
L_08A07CA8:
    ctx.gpr[16] = (2279u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(25088));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08A07CB4;
L_08A07CB4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (52224u << 16u);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[9] = (17264u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[9] = (ctx.gpr[9] >> 8u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[8] = (ctx.gpr[9] | ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[8] = (49928u << 16u);
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = (ctx.gpr[8] >> 8u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[8] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[9] >> 8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[7] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[8] >> 8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (19456u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(28928));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (19712u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(30592));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (54272u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (54532u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16864));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (5376u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (5636u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(15839));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (7168u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (7680u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8748)));
    if (ctx.gpr[4] == ctx.gpr[20]) {
    ctx.gpr[17] = (ctx.gpr[20] | 0u);
        goto L_08A07E20;
    }
    goto L_08A07E20;
L_08A07E20:
    ctx.gpr[4] = (49664u << 16u);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (49920u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[17] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[22]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8760)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8788)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8736)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[5] & ctx.gpr[19]);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[7] = (ctx.gpr[7] | ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[7] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (47104u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2313));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (53760u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[22]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(3));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8776)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[19]);
    ctx.gpr[7] = (39936u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[6] >> 8u);
    ctx.gpr[6] = (40192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[21]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(512));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (59136u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (8704u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (8960u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (50688u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(263));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A07F8Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 74u, 0x08A1C770u>(ctx, &aot_mem) && ctx.pc == 0x08A07F8Cu) goto L_08A07F8C;
    return;
L_08A07F8C:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2900)));
    ctx.gpr[10] = (22528u << 16u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[11] = (21760u << 16u);
      if (branch_taken) {
          goto L_08A07FA8;
      }
      goto L_08A07FA4;
    }
L_08A07FA4:
    ctx.gpr[17] = (0u | 1u);
    goto L_08A07FA8;
L_08A07FA8:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 8u, 0x08A08128u>(ctx, &aot_mem); return;
      }
      goto L_08A07FB0;
    }
L_08A07FB0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-24162)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 8u, 0x08A08128u>(ctx, &aot_mem); return;
      }
      goto L_08A07FBC;
    }
L_08A07FBC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) > 0;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A07FE8;
      }
      goto L_08A07FC4;
    }
L_08A07FC4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2884)));
    if (static_cast<std::int32_t>(ctx.gpr[5]) >= 0) {
    ctx.gpr[4] = (0u | 1u);
        goto L_08A07FEC;
    }
    goto L_08A07FD0;
L_08A07FD0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2856)));
    if (static_cast<std::int32_t>(ctx.gpr[5]) >= 0) {
    ctx.gpr[4] = (0u | 1u);
        goto L_08A07FEC;
    }
    goto L_08A07FDC;
L_08A07FDC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2896)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A07FF0;
      }
      goto L_08A07FE8;
    }
L_08A07FE8:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A07FEC;
L_08A07FEC:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08A07FF0;
L_08A07FF0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 8u, 0x08A08128u>(ctx, &aot_mem); return;
      }
      goto L_08A07FF8;
    }
L_08A07FF8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-8709)));
    ctx.gpr[6] = (0u | 255u);
    ctx.pc = 0x08A08000u; return;
}

void recomp_unit_0128(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0128_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_128(Runtime &runtime) {
    runtime.register_generated_unit(128u, 0x08A04000u, 16384u, &recomp_unit_0128, &recomp_unit_0128_entry);
    runtime.register_function(0x08A04004u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0400Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0401Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04020u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04028u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04074u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04078u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0408Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04094u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A040A4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A040ACu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A040B0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A040D0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A040ECu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04118u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04120u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04128u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0412Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04138u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04140u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04150u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04158u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04164u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0416Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04174u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0417Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04184u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04194u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A041A0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A041ACu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A041B8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A041C0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A041D0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A041D4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A041E0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A041ECu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A041F4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04210u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04214u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04228u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04238u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04264u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0426Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04274u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04278u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04284u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0428Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0429Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A042A4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A042ACu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A042B8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A042BCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A042C8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A042E0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0430Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04314u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0431Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04320u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0432Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04334u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04344u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0434Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04368u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04370u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04378u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04380u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04388u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04398u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A043A4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A043B0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A043BCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A043C4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A043D4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A043D8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A043E4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A043F0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A043F8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04414u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04418u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0442Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0443Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04468u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04470u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04478u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04484u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0448Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0449Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A044A4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A044ACu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A044C8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A044D4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A044E4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04510u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04518u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04520u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0452Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04534u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04544u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0454Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04554u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04560u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0456Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04588u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0459Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A045A0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A045A8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A045B0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A045B8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A045C0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A045C8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A045CCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A045D4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A045DCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A045F0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04898u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A048C4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A048D0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04900u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04908u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04910u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04918u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04920u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04928u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04938u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0493Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04944u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04954u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04958u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04960u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04970u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04980u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04990u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04994u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0499Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A049ACu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A049BCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A049C0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A049C8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A049D8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A049E8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A049ECu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A049F4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04A04u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04A14u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04A18u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04A20u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04A28u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04A34u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04A48u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04A58u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04A60u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04A70u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04A7Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04A90u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04AA0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04AB0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04AC0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04AD0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04AE4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04AF4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04B10u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04B28u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04B88u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04B94u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04B9Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04BACu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04BB4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04BC4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04BCCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04BD4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04BE0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04C18u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04C38u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04C4Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04C68u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04C80u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04C84u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04CB0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04CC0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04CC8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04CD0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04CD8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04CE0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04CECu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04CF0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04CF8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04D04u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04D08u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04D10u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04D1Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04D24u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04D2Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04D30u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04D38u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04D44u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04D4Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04D50u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04D58u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04D64u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04D6Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04D70u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04D78u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04D84u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04D8Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04D90u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04D98u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04DA4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04DB0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04DB8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04DC8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04DD4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04DE4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04DECu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04DFCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04E08u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04E18u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04E28u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04E30u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04E44u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04E4Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04E5Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04E64u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04E78u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04E88u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04EA4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04EACu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04EB4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04EB8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04EBCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04EE8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04EF8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04F10u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04F34u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04F54u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04F68u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04F84u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04F98u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04F9Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A04FCCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05028u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05034u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0503Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0504Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05054u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05084u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05094u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0509Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A050A4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A050ACu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A050B4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A050BCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A050C4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A050D0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A050D4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A050DCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A050E8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A050ECu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A050F4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05100u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05108u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05110u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05114u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0511Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05128u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05130u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05134u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0513Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05148u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05150u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05154u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0515Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05168u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05170u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05174u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0517Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05188u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05194u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0519Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A051ACu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A051B8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A051C8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A051D0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A051E0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A051ECu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A051FCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0520Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05214u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05228u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05230u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05240u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05248u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0525Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0526Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05288u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05290u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05298u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0529Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A052A0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A052CCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A052D8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A052ECu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05310u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05330u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05344u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05360u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05370u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05374u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A053A0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05408u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05410u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0542Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05438u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05440u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05448u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05450u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05464u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0546Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05474u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0547Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0548Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05494u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A054A8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A054B0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A054C0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A054CCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A054D4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A054DCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A054E4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A054ECu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A054F8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05504u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05534u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05544u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05554u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05560u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0556Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05574u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A055A4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A055B4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A055C0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A055C8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A055DCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A055ECu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A055F8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05600u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0560Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05614u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05628u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05630u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05638u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05648u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05658u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05660u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05674u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0567Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05688u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05694u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A056C4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A056D4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A056E4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A056F0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A056FCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05704u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05734u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05744u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05750u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05758u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0576Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0577Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05788u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05790u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0579Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A057A4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A057B8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A057C0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A057C8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A057D8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A057E8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A057F0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05804u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0580Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05818u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05824u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05854u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05864u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05874u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05880u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0588Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05894u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A058C4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A058D4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A058E0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A058E8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A058FCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0590Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05918u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05920u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0592Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05934u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05948u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05950u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05958u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05968u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05978u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05980u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05994u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0599Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A059A8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A059B4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A059E4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A059F4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05A04u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05A10u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05A1Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05A24u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05A54u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05A64u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05A70u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05A78u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05A8Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05A9Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05AA8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05AB0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05ABCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05AC4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05AD8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05AE0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05AE8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05AF8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05B08u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05B10u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05B24u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05B2Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05B38u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05B44u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05B74u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05B84u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05B94u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05BA0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05BACu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05BB4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05BE4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05BF4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05C00u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05C08u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05C1Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05C2Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05C38u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05C40u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05C4Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05C54u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05C68u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05C70u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05C78u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05C88u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05C98u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05CA0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05CB4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05CBCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05CC8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05CD4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05D04u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05D14u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05D24u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05D30u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05D3Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05D44u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05D74u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05D84u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05D90u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05D98u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05DACu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05DBCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05DC8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05DD0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05DDCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05DE4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05DF8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05E00u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05E08u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05E18u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05E28u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05E30u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05E44u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05E4Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05E54u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05E60u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05E64u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05E94u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05EB0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05EBCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05ED0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05EDCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05EF0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05EFCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05F10u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05F1Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05F30u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05F3Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05F50u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05F5Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05F74u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05F80u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05F98u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05FA4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05FE8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A05FF0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0600Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0601Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0603Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06050u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0605Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06078u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0607Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0608Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06098u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A060A0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A060A4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A060ACu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A060BCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A060D8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A060DCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A060ECu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A060F8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06100u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06104u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0610Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0611Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06134u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06138u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06148u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06154u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0616Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06170u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06180u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0618Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A061A0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A061ACu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A061D4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A061E0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A061F0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06208u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0621Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06228u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06258u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06264u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06274u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06290u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A062A8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A062BCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A062C8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A062E4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A062F0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06310u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0631Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06330u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0633Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06354u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06360u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06380u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0638Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A063A0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A063ACu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A063C0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A063CCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A063E4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A063F0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06408u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06414u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06428u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06434u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06448u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06454u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06468u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06474u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06488u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06494u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A064ACu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A064B8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A064D0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A064E0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A064ECu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0650Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06528u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06534u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06548u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06554u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0655Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06560u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0656Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06580u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0658Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06594u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06598u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A065A4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A065BCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A065CCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A065D8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A065F0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06600u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06608u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0660Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06618u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06638u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06654u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06660u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06678u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06688u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06690u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06694u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A066A0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A066B8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A066C8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A066D4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A066E8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A066F8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06704u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0671Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0672Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06734u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06738u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06744u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0675Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0676Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06778u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0678Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06798u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A067ACu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A067B8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A067D0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A067DCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A067F4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06800u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06818u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06824u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06838u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0684Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06858u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0686Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06878u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0688Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06898u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A068ACu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A068B8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A068CCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A068D8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A068ECu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A068F8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0690Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06918u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06928u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06930u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06948u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06954u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06960u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0696Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06970u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06984u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A069A4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A069B0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A069C0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A069C8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A069CCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A069DCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06A48u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06A54u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06A5Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06A64u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06A7Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06AA8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06AB0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06ADCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06AE4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06AF8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06B0Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06B14u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06B18u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06B3Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06B54u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06B74u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06B7Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06B8Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06B94u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06B98u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06BC4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06BE0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06C10u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06C34u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06C70u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06CA0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06CBCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06CC8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06CD0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06CD8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06CE0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06CE8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06CF0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06CF8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06D00u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06D08u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06D10u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06D20u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06D28u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06D3Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06D80u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06D94u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06D9Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06DB0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06DC4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06DCCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06DE0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06E08u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06E10u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06E18u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06E20u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06E28u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06E30u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06E44u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06E88u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06E90u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06ECCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06EDCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A06FE0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0700Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07048u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07054u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07068u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0709Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A070A4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A070A8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A070B0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A070C0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A070C8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A070D0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A070DCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A070F0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0712Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07138u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07160u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0717Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0719Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A071C8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A071D0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A071F0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07200u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07210u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0721Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0722Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07240u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07250u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07260u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07278u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07280u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07290u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A072A0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A072B0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A072B8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A072C0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A072C8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A072D4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A072E0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A072E8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A072F0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A072F8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07300u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07308u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07314u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0731Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07328u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07344u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0735Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07374u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A073A0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A073BCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A073CCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A073D8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A073F4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07428u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07430u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07448u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07460u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07468u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07470u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A074ACu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A074BCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A074FCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07508u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07528u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07534u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0753Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0754Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07554u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07560u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0756Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07574u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07588u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07590u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07598u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A075A0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A075A8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A075B0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A075B8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A075CCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A075D4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A075DCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A075E4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A075ECu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07608u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07620u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0763Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07644u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0764Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07654u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0765Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07670u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07678u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07684u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A076ACu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A076B4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A076C4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07724u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07734u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07740u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07744u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07760u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0776Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0777Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07784u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0778Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07798u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A077B0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A077CCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A077D8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A077E4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07800u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0780Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07814u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07828u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0782Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0784Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0787Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07894u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0789Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A078A4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A078ACu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A078D0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A078D8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A078E0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A078FCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07904u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0790Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07924u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A0795Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07964u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07980u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07988u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07990u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A079ACu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A079B4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A079B8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A079C8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07A04u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07A14u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07A20u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07A44u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07A4Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07A70u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07A74u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07A80u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07A8Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07ABCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07AC0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07ACCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07AD4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07ADCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07B00u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07B10u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07B20u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07B30u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07B38u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07B44u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07B50u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07B64u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07B7Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07B98u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07BA4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07BB0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07BD0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07BE0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07BF4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07BFCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07C0Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07C48u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07C98u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07CA8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07CB4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07E20u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07F8Cu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07FA4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07FA8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07FB0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07FBCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07FC4u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07FD0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07FDCu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07FE8u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07FECu, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07FF0u, &recomp_unit_0128, "recomp_unit_0128");
    runtime.register_function(0x08A07FF8u, &recomp_unit_0128, "recomp_unit_0128");
}
} // namespace psprecomp
